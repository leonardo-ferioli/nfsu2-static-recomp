#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_640(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x63f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x63f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_63f(u8* __restrict R,Cpu& c);
u32 page_63f(Cpu& c){return body_63f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_63f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x63f000:goto L63f000;
case 0x63f002:c.instructions+=15;goto B63f002;
case 0x63f004:c.instructions+=14;goto B63f004;
case 0x63f007:c.instructions+=13;goto B63f007;
case 0x63f00a:c.instructions+=12;goto B63f00a;
case 0x63f00d:c.instructions+=11;goto B63f00d;
case 0x63f010:c.instructions+=10;goto B63f010;
case 0x63f013:c.instructions+=9;goto B63f013;
case 0x63f016:c.instructions+=8;goto B63f016;
case 0x63f019:c.instructions+=7;goto B63f019;
case 0x63f01c:c.instructions+=6;goto B63f01c;
case 0x63f01f:c.instructions+=5;goto B63f01f;
case 0x63f022:c.instructions+=4;goto B63f022;
case 0x63f023:c.instructions+=3;goto B63f023;
case 0x63f024:c.instructions+=2;goto B63f024;
case 0x63f025:c.instructions+=1;goto B63f025;
case 0x63f028:goto L63f028;
case 0x63f02a:c.instructions+=4;goto B63f02a;
case 0x63f02b:c.instructions+=3;goto B63f02b;
case 0x63f02d:c.instructions+=2;goto B63f02d;
case 0x63f02f:c.instructions+=1;goto B63f02f;
case 0x63f034:goto L63f034;
case 0x63f035:c.instructions+=1;goto B63f035;
case 0x63f03b:goto L63f03b;
case 0x63f03d:c.instructions+=23;goto B63f03d;
case 0x63f03e:c.instructions+=22;goto B63f03e;
case 0x63f040:c.instructions+=21;goto B63f040;
case 0x63f043:c.instructions+=20;goto B63f043;
case 0x63f045:c.instructions+=19;goto B63f045;
case 0x63f048:c.instructions+=18;goto B63f048;
case 0x63f04a:c.instructions+=17;goto B63f04a;
case 0x63f04d:c.instructions+=16;goto B63f04d;
case 0x63f050:c.instructions+=15;goto B63f050;
case 0x63f053:c.instructions+=14;goto B63f053;
case 0x63f056:c.instructions+=13;goto B63f056;
case 0x63f059:c.instructions+=12;goto B63f059;
case 0x63f05c:c.instructions+=11;goto B63f05c;
case 0x63f05f:c.instructions+=10;goto B63f05f;
case 0x63f062:c.instructions+=9;goto B63f062;
case 0x63f065:c.instructions+=8;goto B63f065;
case 0x63f067:c.instructions+=7;goto B63f067;
case 0x63f069:c.instructions+=6;goto B63f069;
case 0x63f06b:c.instructions+=5;goto B63f06b;
case 0x63f06d:c.instructions+=4;goto B63f06d;
case 0x63f06f:c.instructions+=3;goto B63f06f;
case 0x63f072:c.instructions+=2;goto B63f072;
case 0x63f073:c.instructions+=1;goto B63f073;
case 0x63f076:goto L63f076;
case 0x63f078:c.instructions+=4;goto B63f078;
case 0x63f079:c.instructions+=3;goto B63f079;
case 0x63f07b:c.instructions+=2;goto B63f07b;
case 0x63f07d:c.instructions+=1;goto B63f07d;
case 0x63f082:goto L63f082;
case 0x63f083:c.instructions+=1;goto B63f083;
case 0x63f089:goto L63f089;
case 0x63f08b:c.instructions+=53;goto B63f08b;
case 0x63f08c:c.instructions+=52;goto B63f08c;
case 0x63f08e:c.instructions+=51;goto B63f08e;
case 0x63f091:c.instructions+=50;goto B63f091;
case 0x63f094:c.instructions+=49;goto B63f094;
case 0x63f095:c.instructions+=48;goto B63f095;
case 0x63f098:c.instructions+=47;goto B63f098;
case 0x63f09a:c.instructions+=46;goto B63f09a;
case 0x63f09b:c.instructions+=45;goto B63f09b;
case 0x63f09d:c.instructions+=44;goto B63f09d;
case 0x63f09e:c.instructions+=43;goto B63f09e;
case 0x63f0a1:c.instructions+=42;goto B63f0a1;
case 0x63f0a4:c.instructions+=41;goto B63f0a4;
case 0x63f0a7:c.instructions+=40;goto B63f0a7;
case 0x63f0aa:c.instructions+=39;goto B63f0aa;
case 0x63f0ad:c.instructions+=38;goto B63f0ad;
case 0x63f0b0:c.instructions+=37;goto B63f0b0;
case 0x63f0b3:c.instructions+=36;goto B63f0b3;
case 0x63f0b6:c.instructions+=35;goto B63f0b6;
case 0x63f0b8:c.instructions+=34;goto B63f0b8;
case 0x63f0bb:c.instructions+=33;goto B63f0bb;
case 0x63f0bd:c.instructions+=32;goto B63f0bd;
case 0x63f0c0:c.instructions+=31;goto B63f0c0;
case 0x63f0c3:c.instructions+=30;goto B63f0c3;
case 0x63f0c6:c.instructions+=29;goto B63f0c6;
case 0x63f0c9:c.instructions+=28;goto B63f0c9;
case 0x63f0cc:c.instructions+=27;goto B63f0cc;
case 0x63f0cf:c.instructions+=26;goto B63f0cf;
case 0x63f0d1:c.instructions+=25;goto B63f0d1;
case 0x63f0d3:c.instructions+=24;goto B63f0d3;
case 0x63f0d6:c.instructions+=23;goto B63f0d6;
case 0x63f0d8:c.instructions+=22;goto B63f0d8;
case 0x63f0da:c.instructions+=21;goto B63f0da;
case 0x63f0dd:c.instructions+=20;goto B63f0dd;
case 0x63f0df:c.instructions+=19;goto B63f0df;
case 0x63f0e2:c.instructions+=18;goto B63f0e2;
case 0x63f0e4:c.instructions+=17;goto B63f0e4;
case 0x63f0e6:c.instructions+=16;goto B63f0e6;
case 0x63f0e8:c.instructions+=15;goto B63f0e8;
case 0x63f0eb:c.instructions+=14;goto B63f0eb;
case 0x63f0ed:c.instructions+=13;goto B63f0ed;
case 0x63f0ef:c.instructions+=12;goto B63f0ef;
case 0x63f0f2:c.instructions+=11;goto B63f0f2;
case 0x63f0f4:c.instructions+=10;goto B63f0f4;
case 0x63f0f7:c.instructions+=9;goto B63f0f7;
case 0x63f0f9:c.instructions+=8;goto B63f0f9;
case 0x63f0fb:c.instructions+=7;goto B63f0fb;
case 0x63f0fe:c.instructions+=6;goto B63f0fe;
case 0x63f0ff:c.instructions+=5;goto B63f0ff;
case 0x63f100:c.instructions+=4;goto B63f100;
case 0x63f102:c.instructions+=3;goto B63f102;
case 0x63f104:c.instructions+=2;goto B63f104;
case 0x63f105:c.instructions+=1;goto B63f105;
case 0x63f10a:goto L63f10a;
case 0x63f10d:c.instructions+=15;goto B63f10d;
case 0x63f10e:c.instructions+=14;goto B63f10e;
case 0x63f111:c.instructions+=13;goto B63f111;
case 0x63f112:c.instructions+=12;goto B63f112;
case 0x63f115:c.instructions+=11;goto B63f115;
case 0x63f118:c.instructions+=10;goto B63f118;
case 0x63f11b:c.instructions+=9;goto B63f11b;
case 0x63f11d:c.instructions+=8;goto B63f11d;
case 0x63f11f:c.instructions+=7;goto B63f11f;
case 0x63f121:c.instructions+=6;goto B63f121;
case 0x63f122:c.instructions+=5;goto B63f122;
case 0x63f124:c.instructions+=4;goto B63f124;
case 0x63f126:c.instructions+=3;goto B63f126;
case 0x63f129:c.instructions+=2;goto B63f129;
case 0x63f12a:c.instructions+=1;goto B63f12a;
case 0x63f12d:goto L63f12d;
case 0x63f12f:c.instructions+=4;goto B63f12f;
case 0x63f130:c.instructions+=3;goto B63f130;
case 0x63f132:c.instructions+=2;goto B63f132;
case 0x63f134:c.instructions+=1;goto B63f134;
case 0x63f139:goto L63f139;
case 0x63f13a:c.instructions+=1;goto B63f13a;
case 0x63f140:goto L63f140;
case 0x63f142:c.instructions+=66;goto B63f142;
case 0x63f143:c.instructions+=65;goto B63f143;
case 0x63f145:c.instructions+=64;goto B63f145;
case 0x63f148:c.instructions+=63;goto B63f148;
case 0x63f14b:c.instructions+=62;goto B63f14b;
case 0x63f14e:c.instructions+=61;goto B63f14e;
case 0x63f151:c.instructions+=60;goto B63f151;
case 0x63f154:c.instructions+=59;goto B63f154;
case 0x63f155:c.instructions+=58;goto B63f155;
case 0x63f158:c.instructions+=57;goto B63f158;
case 0x63f159:c.instructions+=56;goto B63f159;
case 0x63f15c:c.instructions+=55;goto B63f15c;
case 0x63f15f:c.instructions+=54;goto B63f15f;
case 0x63f161:c.instructions+=53;goto B63f161;
case 0x63f164:c.instructions+=52;goto B63f164;
case 0x63f167:c.instructions+=51;goto B63f167;
case 0x63f169:c.instructions+=50;goto B63f169;
case 0x63f16b:c.instructions+=49;goto B63f16b;
case 0x63f16d:c.instructions+=48;goto B63f16d;
case 0x63f16f:c.instructions+=47;goto B63f16f;
case 0x63f172:c.instructions+=46;goto B63f172;
case 0x63f175:c.instructions+=45;goto B63f175;
case 0x63f178:c.instructions+=44;goto B63f178;
case 0x63f17b:c.instructions+=43;goto B63f17b;
case 0x63f17d:c.instructions+=42;goto B63f17d;
case 0x63f17f:c.instructions+=41;goto B63f17f;
case 0x63f182:c.instructions+=40;goto B63f182;
case 0x63f185:c.instructions+=39;goto B63f185;
case 0x63f187:c.instructions+=38;goto B63f187;
case 0x63f18a:c.instructions+=37;goto B63f18a;
case 0x63f18d:c.instructions+=36;goto B63f18d;
case 0x63f18f:c.instructions+=35;goto B63f18f;
case 0x63f192:c.instructions+=34;goto B63f192;
case 0x63f195:c.instructions+=33;goto B63f195;
case 0x63f198:c.instructions+=32;goto B63f198;
case 0x63f19b:c.instructions+=31;goto B63f19b;
case 0x63f19d:c.instructions+=30;goto B63f19d;
case 0x63f19f:c.instructions+=29;goto B63f19f;
case 0x63f1a2:c.instructions+=28;goto B63f1a2;
case 0x63f1a5:c.instructions+=27;goto B63f1a5;
case 0x63f1a7:c.instructions+=26;goto B63f1a7;
case 0x63f1aa:c.instructions+=25;goto B63f1aa;
case 0x63f1ad:c.instructions+=24;goto B63f1ad;
case 0x63f1af:c.instructions+=23;goto B63f1af;
case 0x63f1b2:c.instructions+=22;goto B63f1b2;
case 0x63f1b5:c.instructions+=21;goto B63f1b5;
case 0x63f1b8:c.instructions+=20;goto B63f1b8;
case 0x63f1bb:c.instructions+=19;goto B63f1bb;
case 0x63f1bd:c.instructions+=18;goto B63f1bd;
case 0x63f1bf:c.instructions+=17;goto B63f1bf;
case 0x63f1c2:c.instructions+=16;goto B63f1c2;
case 0x63f1c5:c.instructions+=15;goto B63f1c5;
case 0x63f1c7:c.instructions+=14;goto B63f1c7;
case 0x63f1ca:c.instructions+=13;goto B63f1ca;
case 0x63f1cd:c.instructions+=12;goto B63f1cd;
case 0x63f1d0:c.instructions+=11;goto B63f1d0;
case 0x63f1d2:c.instructions+=10;goto B63f1d2;
case 0x63f1d4:c.instructions+=9;goto B63f1d4;
case 0x63f1d7:c.instructions+=8;goto B63f1d7;
case 0x63f1d8:c.instructions+=7;goto B63f1d8;
case 0x63f1d9:c.instructions+=6;goto B63f1d9;
case 0x63f1da:c.instructions+=5;goto B63f1da;
case 0x63f1db:c.instructions+=4;goto B63f1db;
case 0x63f1dc:c.instructions+=3;goto B63f1dc;
case 0x63f1dd:c.instructions+=2;goto B63f1dd;
case 0x63f1de:c.instructions+=1;goto B63f1de;
case 0x63f1e1:goto L63f1e1;
case 0x63f1e3:c.instructions+=4;goto B63f1e3;
case 0x63f1e4:c.instructions+=3;goto B63f1e4;
case 0x63f1e6:c.instructions+=2;goto B63f1e6;
case 0x63f1e8:c.instructions+=1;goto B63f1e8;
case 0x63f1ed:goto L63f1ed;
case 0x63f1ee:c.instructions+=1;goto B63f1ee;
case 0x63f1f4:goto L63f1f4;
case 0x63f1f6:c.instructions+=9;goto B63f1f6;
case 0x63f1f7:c.instructions+=8;goto B63f1f7;
case 0x63f1f9:c.instructions+=7;goto B63f1f9;
case 0x63f1fc:c.instructions+=6;goto B63f1fc;
case 0x63f1ff:c.instructions+=5;goto B63f1ff;
case 0x63f201:c.instructions+=4;goto B63f201;
case 0x63f202:c.instructions+=3;goto B63f202;
case 0x63f205:c.instructions+=2;goto B63f205;
case 0x63f208:c.instructions+=1;goto B63f208;
case 0x63f20e:goto L63f20e;
case 0x63f211:c.instructions+=3;goto B63f211;
case 0x63f214:c.instructions+=2;goto B63f214;
case 0x63f215:c.instructions+=1;goto B63f215;
case 0x63f216:goto L63f216;
case 0x63f219:c.instructions+=57;goto B63f219;
case 0x63f21b:c.instructions+=56;goto B63f21b;
case 0x63f21e:c.instructions+=55;goto B63f21e;
case 0x63f221:c.instructions+=54;goto B63f221;
case 0x63f224:c.instructions+=53;goto B63f224;
case 0x63f227:c.instructions+=52;goto B63f227;
case 0x63f22a:c.instructions+=51;goto B63f22a;
case 0x63f22c:c.instructions+=50;goto B63f22c;
case 0x63f22f:c.instructions+=49;goto B63f22f;
case 0x63f232:c.instructions+=48;goto B63f232;
case 0x63f234:c.instructions+=47;goto B63f234;
case 0x63f236:c.instructions+=46;goto B63f236;
case 0x63f238:c.instructions+=45;goto B63f238;
case 0x63f23a:c.instructions+=44;goto B63f23a;
case 0x63f23d:c.instructions+=43;goto B63f23d;
case 0x63f240:c.instructions+=42;goto B63f240;
case 0x63f243:c.instructions+=41;goto B63f243;
case 0x63f245:c.instructions+=40;goto B63f245;
case 0x63f248:c.instructions+=39;goto B63f248;
case 0x63f24a:c.instructions+=38;goto B63f24a;
case 0x63f24d:c.instructions+=37;goto B63f24d;
case 0x63f250:c.instructions+=36;goto B63f250;
case 0x63f252:c.instructions+=35;goto B63f252;
case 0x63f255:c.instructions+=34;goto B63f255;
case 0x63f258:c.instructions+=33;goto B63f258;
case 0x63f25a:c.instructions+=32;goto B63f25a;
case 0x63f25d:c.instructions+=31;goto B63f25d;
case 0x63f260:c.instructions+=30;goto B63f260;
case 0x63f263:c.instructions+=29;goto B63f263;
case 0x63f266:c.instructions+=28;goto B63f266;
case 0x63f269:c.instructions+=27;goto B63f269;
case 0x63f26b:c.instructions+=26;goto B63f26b;
case 0x63f26e:c.instructions+=25;goto B63f26e;
case 0x63f270:c.instructions+=24;goto B63f270;
case 0x63f272:c.instructions+=23;goto B63f272;
case 0x63f275:c.instructions+=22;goto B63f275;
case 0x63f278:c.instructions+=21;goto B63f278;
case 0x63f27a:c.instructions+=20;goto B63f27a;
case 0x63f27d:c.instructions+=19;goto B63f27d;
case 0x63f280:c.instructions+=18;goto B63f280;
case 0x63f283:c.instructions+=17;goto B63f283;
case 0x63f286:c.instructions+=16;goto B63f286;
case 0x63f288:c.instructions+=15;goto B63f288;
case 0x63f28a:c.instructions+=14;goto B63f28a;
case 0x63f28d:c.instructions+=13;goto B63f28d;
case 0x63f290:c.instructions+=12;goto B63f290;
case 0x63f292:c.instructions+=11;goto B63f292;
case 0x63f295:c.instructions+=10;goto B63f295;
case 0x63f298:c.instructions+=9;goto B63f298;
case 0x63f299:c.instructions+=8;goto B63f299;
case 0x63f29c:c.instructions+=7;goto B63f29c;
case 0x63f29e:c.instructions+=6;goto B63f29e;
case 0x63f2a1:c.instructions+=5;goto B63f2a1;
case 0x63f2a2:c.instructions+=4;goto B63f2a2;
case 0x63f2a3:c.instructions+=3;goto B63f2a3;
case 0x63f2a4:c.instructions+=2;goto B63f2a4;
case 0x63f2a5:c.instructions+=1;goto B63f2a5;
case 0x63f2ab:goto L63f2ab;
case 0x63f2ac:c.instructions+=1;goto B63f2ac;
case 0x63f2ad:goto L63f2ad;
case 0x63f2b0:c.instructions+=3;goto B63f2b0;
case 0x63f2b1:c.instructions+=2;goto B63f2b1;
case 0x63f2b2:c.instructions+=1;goto B63f2b2;
case 0x63f2b5:goto L63f2b5;
case 0x63f2b7:c.instructions+=11;goto B63f2b7;
case 0x63f2b8:c.instructions+=10;goto B63f2b8;
case 0x63f2ba:c.instructions+=9;goto B63f2ba;
case 0x63f2bd:c.instructions+=8;goto B63f2bd;
case 0x63f2be:c.instructions+=7;goto B63f2be;
case 0x63f2bf:c.instructions+=6;goto B63f2bf;
case 0x63f2c0:c.instructions+=5;goto B63f2c0;
case 0x63f2c3:c.instructions+=4;goto B63f2c3;
case 0x63f2c5:c.instructions+=3;goto B63f2c5;
case 0x63f2cb:c.instructions+=2;goto B63f2cb;
case 0x63f2cd:c.instructions+=1;goto B63f2cd;
case 0x63f2d2:goto L63f2d2;
case 0x63f2d5:c.instructions+=11;goto B63f2d5;
case 0x63f2d8:c.instructions+=10;goto B63f2d8;
case 0x63f2dd:c.instructions+=9;goto B63f2dd;
case 0x63f2df:c.instructions+=8;goto B63f2df;
case 0x63f2e5:c.instructions+=7;goto B63f2e5;
case 0x63f2e8:c.instructions+=6;goto B63f2e8;
case 0x63f2ea:c.instructions+=5;goto B63f2ea;
case 0x63f2ed:c.instructions+=4;goto B63f2ed;
case 0x63f2f0:c.instructions+=3;goto B63f2f0;
case 0x63f2f6:c.instructions+=2;goto B63f2f6;
case 0x63f2f8:c.instructions+=1;goto B63f2f8;
case 0x63f2fd:goto L63f2fd;
case 0x63f300:c.instructions+=13;goto B63f300;
case 0x63f303:c.instructions+=12;goto B63f303;
case 0x63f305:c.instructions+=11;goto B63f305;
case 0x63f307:c.instructions+=10;goto B63f307;
case 0x63f30d:c.instructions+=9;goto B63f30d;
case 0x63f310:c.instructions+=8;goto B63f310;
case 0x63f312:c.instructions+=7;goto B63f312;
case 0x63f315:c.instructions+=6;goto B63f315;
case 0x63f317:c.instructions+=5;goto B63f317;
case 0x63f31a:c.instructions+=4;goto B63f31a;
case 0x63f31d:c.instructions+=3;goto B63f31d;
case 0x63f323:c.instructions+=2;goto B63f323;
case 0x63f325:c.instructions+=1;goto B63f325;
case 0x63f32a:goto L63f32a;
case 0x63f32d:c.instructions+=174;goto B63f32d;
case 0x63f334:c.instructions+=173;goto B63f334;
case 0x63f337:c.instructions+=172;goto B63f337;
case 0x63f33a:c.instructions+=171;goto B63f33a;
case 0x63f33c:c.instructions+=170;goto B63f33c;
case 0x63f33f:c.instructions+=169;goto B63f33f;
case 0x63f342:c.instructions+=168;goto B63f342;
case 0x63f344:c.instructions+=167;goto B63f344;
case 0x63f346:c.instructions+=166;goto B63f346;
case 0x63f349:c.instructions+=165;goto B63f349;
case 0x63f34b:c.instructions+=164;goto B63f34b;
case 0x63f34e:c.instructions+=163;goto B63f34e;
case 0x63f34f:c.instructions+=162;goto B63f34f;
case 0x63f351:c.instructions+=161;goto B63f351;
case 0x63f353:c.instructions+=160;goto B63f353;
case 0x63f359:c.instructions+=159;goto B63f359;
case 0x63f360:c.instructions+=158;goto B63f360;
case 0x63f363:c.instructions+=157;goto B63f363;
case 0x63f365:c.instructions+=156;goto B63f365;
case 0x63f367:c.instructions+=155;goto B63f367;
case 0x63f36e:c.instructions+=154;goto B63f36e;
case 0x63f371:c.instructions+=153;goto B63f371;
case 0x63f373:c.instructions+=152;goto B63f373;
case 0x63f37a:c.instructions+=151;goto B63f37a;
case 0x63f37c:c.instructions+=150;goto B63f37c;
case 0x63f37e:c.instructions+=149;goto B63f37e;
case 0x63f381:c.instructions+=148;goto B63f381;
case 0x63f384:c.instructions+=147;goto B63f384;
case 0x63f386:c.instructions+=146;goto B63f386;
case 0x63f38c:c.instructions+=145;goto B63f38c;
case 0x63f393:c.instructions+=144;goto B63f393;
case 0x63f395:c.instructions+=143;goto B63f395;
case 0x63f39c:c.instructions+=142;goto B63f39c;
case 0x63f39e:c.instructions+=141;goto B63f39e;
case 0x63f3a1:c.instructions+=140;goto B63f3a1;
case 0x63f3a3:c.instructions+=139;goto B63f3a3;
case 0x63f3a6:c.instructions+=138;goto B63f3a6;
case 0x63f3a8:c.instructions+=137;goto B63f3a8;
case 0x63f3aa:c.instructions+=136;goto B63f3aa;
case 0x63f3b0:c.instructions+=135;goto B63f3b0;
case 0x63f3b2:c.instructions+=134;goto B63f3b2;
case 0x63f3b4:c.instructions+=133;goto B63f3b4;
case 0x63f3b7:c.instructions+=132;goto B63f3b7;
case 0x63f3b9:c.instructions+=131;goto B63f3b9;
case 0x63f3bc:c.instructions+=130;goto B63f3bc;
case 0x63f3c3:c.instructions+=129;goto B63f3c3;
case 0x63f3c6:c.instructions+=128;goto B63f3c6;
case 0x63f3c8:c.instructions+=127;goto B63f3c8;
case 0x63f3cb:c.instructions+=126;goto B63f3cb;
case 0x63f3cd:c.instructions+=125;goto B63f3cd;
case 0x63f3cf:c.instructions+=124;goto B63f3cf;
case 0x63f3d1:c.instructions+=123;goto B63f3d1;
case 0x63f3d4:c.instructions+=122;goto B63f3d4;
case 0x63f3d6:c.instructions+=121;goto B63f3d6;
case 0x63f3d9:c.instructions+=120;goto B63f3d9;
case 0x63f3db:c.instructions+=119;goto B63f3db;
case 0x63f3e2:c.instructions+=118;goto B63f3e2;
case 0x63f3e4:c.instructions+=117;goto B63f3e4;
case 0x63f3e7:c.instructions+=116;goto B63f3e7;
case 0x63f3e9:c.instructions+=115;goto B63f3e9;
case 0x63f3ec:c.instructions+=114;goto B63f3ec;
case 0x63f3ee:c.instructions+=113;goto B63f3ee;
case 0x63f3f0:c.instructions+=112;goto B63f3f0;
case 0x63f3f2:c.instructions+=111;goto B63f3f2;
case 0x63f3f5:c.instructions+=110;goto B63f3f5;
case 0x63f3f8:c.instructions+=109;goto B63f3f8;
case 0x63f3ff:c.instructions+=108;goto B63f3ff;
case 0x63f401:c.instructions+=107;goto B63f401;
case 0x63f403:c.instructions+=106;goto B63f403;
case 0x63f406:c.instructions+=105;goto B63f406;
case 0x63f40d:c.instructions+=104;goto B63f40d;
case 0x63f40f:c.instructions+=103;goto B63f40f;
case 0x63f411:c.instructions+=102;goto B63f411;
case 0x63f414:c.instructions+=101;goto B63f414;
case 0x63f416:c.instructions+=100;goto B63f416;
case 0x63f418:c.instructions+=99;goto B63f418;
case 0x63f41a:c.instructions+=98;goto B63f41a;
case 0x63f41d:c.instructions+=97;goto B63f41d;
case 0x63f420:c.instructions+=96;goto B63f420;
case 0x63f423:c.instructions+=95;goto B63f423;
case 0x63f425:c.instructions+=94;goto B63f425;
case 0x63f427:c.instructions+=93;goto B63f427;
case 0x63f429:c.instructions+=92;goto B63f429;
case 0x63f42b:c.instructions+=91;goto B63f42b;
case 0x63f42d:c.instructions+=90;goto B63f42d;
case 0x63f430:c.instructions+=89;goto B63f430;
case 0x63f433:c.instructions+=88;goto B63f433;
case 0x63f436:c.instructions+=87;goto B63f436;
case 0x63f438:c.instructions+=86;goto B63f438;
case 0x63f43a:c.instructions+=85;goto B63f43a;
case 0x63f43c:c.instructions+=84;goto B63f43c;
case 0x63f43f:c.instructions+=83;goto B63f43f;
case 0x63f446:c.instructions+=82;goto B63f446;
case 0x63f448:c.instructions+=81;goto B63f448;
case 0x63f44a:c.instructions+=80;goto B63f44a;
case 0x63f44d:c.instructions+=79;goto B63f44d;
case 0x63f44f:c.instructions+=78;goto B63f44f;
case 0x63f451:c.instructions+=77;goto B63f451;
case 0x63f454:c.instructions+=76;goto B63f454;
case 0x63f456:c.instructions+=75;goto B63f456;
case 0x63f459:c.instructions+=74;goto B63f459;
case 0x63f45b:c.instructions+=73;goto B63f45b;
case 0x63f45d:c.instructions+=72;goto B63f45d;
case 0x63f45f:c.instructions+=71;goto B63f45f;
case 0x63f462:c.instructions+=70;goto B63f462;
case 0x63f465:c.instructions+=69;goto B63f465;
case 0x63f467:c.instructions+=68;goto B63f467;
case 0x63f46a:c.instructions+=67;goto B63f46a;
case 0x63f46c:c.instructions+=66;goto B63f46c;
case 0x63f46e:c.instructions+=65;goto B63f46e;
case 0x63f470:c.instructions+=64;goto B63f470;
case 0x63f472:c.instructions+=63;goto B63f472;
case 0x63f475:c.instructions+=62;goto B63f475;
case 0x63f478:c.instructions+=61;goto B63f478;
case 0x63f47a:c.instructions+=60;goto B63f47a;
case 0x63f47d:c.instructions+=59;goto B63f47d;
case 0x63f484:c.instructions+=58;goto B63f484;
case 0x63f487:c.instructions+=57;goto B63f487;
case 0x63f489:c.instructions+=56;goto B63f489;
case 0x63f48c:c.instructions+=55;goto B63f48c;
case 0x63f48e:c.instructions+=54;goto B63f48e;
case 0x63f490:c.instructions+=53;goto B63f490;
case 0x63f492:c.instructions+=52;goto B63f492;
case 0x63f495:c.instructions+=51;goto B63f495;
case 0x63f498:c.instructions+=50;goto B63f498;
case 0x63f49f:c.instructions+=49;goto B63f49f;
case 0x63f4a1:c.instructions+=48;goto B63f4a1;
case 0x63f4a3:c.instructions+=47;goto B63f4a3;
case 0x63f4a6:c.instructions+=46;goto B63f4a6;
case 0x63f4ad:c.instructions+=45;goto B63f4ad;
case 0x63f4af:c.instructions+=44;goto B63f4af;
case 0x63f4b0:c.instructions+=43;goto B63f4b0;
case 0x63f4b1:c.instructions+=42;goto B63f4b1;
case 0x63f4b4:c.instructions+=41;goto B63f4b4;
case 0x63f4b6:c.instructions+=40;goto B63f4b6;
case 0x63f4b9:c.instructions+=39;goto B63f4b9;
case 0x63f4bb:c.instructions+=38;goto B63f4bb;
case 0x63f4bd:c.instructions+=37;goto B63f4bd;
case 0x63f4bf:c.instructions+=36;goto B63f4bf;
case 0x63f4c2:c.instructions+=35;goto B63f4c2;
case 0x63f4c5:c.instructions+=34;goto B63f4c5;
case 0x63f4c8:c.instructions+=33;goto B63f4c8;
case 0x63f4cb:c.instructions+=32;goto B63f4cb;
case 0x63f4cd:c.instructions+=31;goto B63f4cd;
case 0x63f4cf:c.instructions+=30;goto B63f4cf;
case 0x63f4d1:c.instructions+=29;goto B63f4d1;
case 0x63f4d3:c.instructions+=28;goto B63f4d3;
case 0x63f4d5:c.instructions+=27;goto B63f4d5;
case 0x63f4d8:c.instructions+=26;goto B63f4d8;
case 0x63f4db:c.instructions+=25;goto B63f4db;
case 0x63f4de:c.instructions+=24;goto B63f4de;
case 0x63f4e1:c.instructions+=23;goto B63f4e1;
case 0x63f4e3:c.instructions+=22;goto B63f4e3;
case 0x63f4e6:c.instructions+=21;goto B63f4e6;
case 0x63f4e8:c.instructions+=20;goto B63f4e8;
case 0x63f4ea:c.instructions+=19;goto B63f4ea;
case 0x63f4ec:c.instructions+=18;goto B63f4ec;
case 0x63f4ef:c.instructions+=17;goto B63f4ef;
case 0x63f4f1:c.instructions+=16;goto B63f4f1;
case 0x63f4f4:c.instructions+=15;goto B63f4f4;
case 0x63f4f7:c.instructions+=14;goto B63f4f7;
case 0x63f4fa:c.instructions+=13;goto B63f4fa;
case 0x63f4fd:c.instructions+=12;goto B63f4fd;
case 0x63f500:c.instructions+=11;goto B63f500;
case 0x63f502:c.instructions+=10;goto B63f502;
case 0x63f508:c.instructions+=9;goto B63f508;
case 0x63f50b:c.instructions+=8;goto B63f50b;
case 0x63f50e:c.instructions+=7;goto B63f50e;
case 0x63f510:c.instructions+=6;goto B63f510;
case 0x63f513:c.instructions+=5;goto B63f513;
case 0x63f519:c.instructions+=4;goto B63f519;
case 0x63f51b:c.instructions+=3;goto B63f51b;
case 0x63f51c:c.instructions+=2;goto B63f51c;
case 0x63f51d:c.instructions+=1;goto B63f51d;
case 0x63f520:goto L63f520;
case 0x63f522:c.instructions+=4;goto B63f522;
case 0x63f523:c.instructions+=3;goto B63f523;
case 0x63f525:c.instructions+=2;goto B63f525;
case 0x63f527:c.instructions+=1;goto B63f527;
case 0x63f52c:goto L63f52c;
case 0x63f52d:c.instructions+=1;goto B63f52d;
case 0x63f533:goto L63f533;
case 0x63f535:c.instructions+=4;goto B63f535;
case 0x63f536:c.instructions+=3;goto B63f536;
case 0x63f538:c.instructions+=2;goto B63f538;
case 0x63f53a:c.instructions+=1;goto B63f53a;
case 0x63f53f:goto L63f53f;
case 0x63f540:c.instructions+=1;goto B63f540;
case 0x63f546:goto L63f546;
case 0x63f548:c.instructions+=22;goto B63f548;
case 0x63f549:c.instructions+=21;goto B63f549;
case 0x63f54b:c.instructions+=20;goto B63f54b;
case 0x63f54c:c.instructions+=19;goto B63f54c;
case 0x63f54d:c.instructions+=18;goto B63f54d;
case 0x63f550:c.instructions+=17;goto B63f550;
case 0x63f553:c.instructions+=16;goto B63f553;
case 0x63f554:c.instructions+=15;goto B63f554;
case 0x63f556:c.instructions+=14;goto B63f556;
case 0x63f557:c.instructions+=13;goto B63f557;
case 0x63f559:c.instructions+=12;goto B63f559;
case 0x63f55b:c.instructions+=11;goto B63f55b;
case 0x63f55d:c.instructions+=10;goto B63f55d;
case 0x63f55f:c.instructions+=9;goto B63f55f;
case 0x63f561:c.instructions+=8;goto B63f561;
case 0x63f564:c.instructions+=7;goto B63f564;
case 0x63f566:c.instructions+=6;goto B63f566;
case 0x63f568:c.instructions+=5;goto B63f568;
case 0x63f56a:c.instructions+=4;goto B63f56a;
case 0x63f56e:c.instructions+=3;goto B63f56e;
case 0x63f571:c.instructions+=2;goto B63f571;
case 0x63f574:c.instructions+=1;goto B63f574;
case 0x63f579:goto L63f579;
case 0x63f57b:c.instructions+=1;goto B63f57b;
case 0x63f57d:goto L63f57d;
case 0x63f580:c.instructions+=2;goto B63f580;
case 0x63f582:c.instructions+=1;goto B63f582;
case 0x63f584:goto L63f584;
case 0x63f586:c.instructions+=2;goto B63f586;
case 0x63f588:c.instructions+=1;goto B63f588;
case 0x63f58b:goto L63f58b;
case 0x63f58e:c.instructions+=1;goto B63f58e;
case 0x63f590:goto L63f590;
case 0x63f593:c.instructions+=5;goto B63f593;
case 0x63f599:c.instructions+=4;goto B63f599;
case 0x63f59b:c.instructions+=3;goto B63f59b;
case 0x63f59e:c.instructions+=2;goto B63f59e;
case 0x63f5a1:c.instructions+=1;goto B63f5a1;
case 0x63f5a3:goto L63f5a3;
case 0x63f5a6:c.instructions+=11;goto B63f5a6;
case 0x63f5a8:c.instructions+=10;goto B63f5a8;
case 0x63f5ae:c.instructions+=9;goto B63f5ae;
case 0x63f5b0:c.instructions+=8;goto B63f5b0;
case 0x63f5b2:c.instructions+=7;goto B63f5b2;
case 0x63f5b5:c.instructions+=6;goto B63f5b5;
case 0x63f5b8:c.instructions+=5;goto B63f5b8;
case 0x63f5bb:c.instructions+=4;goto B63f5bb;
case 0x63f5bd:c.instructions+=3;goto B63f5bd;
case 0x63f5c0:c.instructions+=2;goto B63f5c0;
case 0x63f5c3:c.instructions+=1;goto B63f5c3;
case 0x63f5c5:goto L63f5c5;
case 0x63f5c7:c.instructions+=3;goto B63f5c7;
case 0x63f5c9:c.instructions+=2;goto B63f5c9;
case 0x63f5cb:c.instructions+=1;goto B63f5cb;
case 0x63f5ce:goto L63f5ce;
case 0x63f5cf:c.instructions+=1;goto B63f5cf;
case 0x63f5d2:goto L63f5d2;
case 0x63f5d4:c.instructions+=46;goto B63f5d4;
case 0x63f5d5:c.instructions+=45;goto B63f5d5;
case 0x63f5d7:c.instructions+=44;goto B63f5d7;
case 0x63f5da:c.instructions+=43;goto B63f5da;
case 0x63f5dd:c.instructions+=42;goto B63f5dd;
case 0x63f5e0:c.instructions+=41;goto B63f5e0;
case 0x63f5e3:c.instructions+=40;goto B63f5e3;
case 0x63f5e6:c.instructions+=39;goto B63f5e6;
case 0x63f5e7:c.instructions+=38;goto B63f5e7;
case 0x63f5e9:c.instructions+=37;goto B63f5e9;
case 0x63f5ea:c.instructions+=36;goto B63f5ea;
case 0x63f5ec:c.instructions+=35;goto B63f5ec;
case 0x63f5ef:c.instructions+=34;goto B63f5ef;
case 0x63f5f1:c.instructions+=33;goto B63f5f1;
case 0x63f5f4:c.instructions+=32;goto B63f5f4;
case 0x63f5f7:c.instructions+=31;goto B63f5f7;
case 0x63f5fa:c.instructions+=30;goto B63f5fa;
case 0x63f5fc:c.instructions+=29;goto B63f5fc;
case 0x63f5ff:c.instructions+=28;goto B63f5ff;
case 0x63f602:c.instructions+=27;goto B63f602;
case 0x63f604:c.instructions+=26;goto B63f604;
case 0x63f607:c.instructions+=25;goto B63f607;
case 0x63f60a:c.instructions+=24;goto B63f60a;
case 0x63f60d:c.instructions+=23;goto B63f60d;
case 0x63f60f:c.instructions+=22;goto B63f60f;
case 0x63f612:c.instructions+=21;goto B63f612;
case 0x63f615:c.instructions+=20;goto B63f615;
case 0x63f617:c.instructions+=19;goto B63f617;
case 0x63f61a:c.instructions+=18;goto B63f61a;
case 0x63f61d:c.instructions+=17;goto B63f61d;
case 0x63f620:c.instructions+=16;goto B63f620;
case 0x63f622:c.instructions+=15;goto B63f622;
case 0x63f625:c.instructions+=14;goto B63f625;
case 0x63f628:c.instructions+=13;goto B63f628;
case 0x63f62a:c.instructions+=12;goto B63f62a;
case 0x63f62d:c.instructions+=11;goto B63f62d;
case 0x63f630:c.instructions+=10;goto B63f630;
case 0x63f632:c.instructions+=9;goto B63f632;
case 0x63f635:c.instructions+=8;goto B63f635;
case 0x63f636:c.instructions+=7;goto B63f636;
case 0x63f637:c.instructions+=6;goto B63f637;
case 0x63f638:c.instructions+=5;goto B63f638;
case 0x63f639:c.instructions+=4;goto B63f639;
case 0x63f63a:c.instructions+=3;goto B63f63a;
case 0x63f63b:c.instructions+=2;goto B63f63b;
case 0x63f63c:c.instructions+=1;goto B63f63c;
case 0x63f63f:goto L63f63f;
case 0x63f641:c.instructions+=9;goto B63f641;
case 0x63f642:c.instructions+=8;goto B63f642;
case 0x63f644:c.instructions+=7;goto B63f644;
case 0x63f647:c.instructions+=6;goto B63f647;
case 0x63f64a:c.instructions+=5;goto B63f64a;
case 0x63f64c:c.instructions+=4;goto B63f64c;
case 0x63f64d:c.instructions+=3;goto B63f64d;
case 0x63f650:c.instructions+=2;goto B63f650;
case 0x63f653:c.instructions+=1;goto B63f653;
case 0x63f655:goto L63f655;
case 0x63f658:c.instructions+=3;goto B63f658;
case 0x63f65b:c.instructions+=2;goto B63f65b;
case 0x63f65c:c.instructions+=1;goto B63f65c;
case 0x63f65d:goto L63f65d;
case 0x63f660:c.instructions+=37;goto B63f660;
case 0x63f662:c.instructions+=36;goto B63f662;
case 0x63f665:c.instructions+=35;goto B63f665;
case 0x63f668:c.instructions+=34;goto B63f668;
case 0x63f66a:c.instructions+=33;goto B63f66a;
case 0x63f66d:c.instructions+=32;goto B63f66d;
case 0x63f66f:c.instructions+=31;goto B63f66f;
case 0x63f671:c.instructions+=30;goto B63f671;
case 0x63f674:c.instructions+=29;goto B63f674;
case 0x63f677:c.instructions+=28;goto B63f677;
case 0x63f67a:c.instructions+=27;goto B63f67a;
case 0x63f67c:c.instructions+=26;goto B63f67c;
case 0x63f67f:c.instructions+=25;goto B63f67f;
case 0x63f682:c.instructions+=24;goto B63f682;
case 0x63f684:c.instructions+=23;goto B63f684;
case 0x63f687:c.instructions+=22;goto B63f687;
case 0x63f68a:c.instructions+=21;goto B63f68a;
case 0x63f68d:c.instructions+=20;goto B63f68d;
case 0x63f68f:c.instructions+=19;goto B63f68f;
case 0x63f692:c.instructions+=18;goto B63f692;
case 0x63f695:c.instructions+=17;goto B63f695;
case 0x63f697:c.instructions+=16;goto B63f697;
case 0x63f69a:c.instructions+=15;goto B63f69a;
case 0x63f69d:c.instructions+=14;goto B63f69d;
case 0x63f69f:c.instructions+=13;goto B63f69f;
case 0x63f6a2:c.instructions+=12;goto B63f6a2;
case 0x63f6a5:c.instructions+=11;goto B63f6a5;
case 0x63f6a8:c.instructions+=10;goto B63f6a8;
case 0x63f6a9:c.instructions+=9;goto B63f6a9;
case 0x63f6ac:c.instructions+=8;goto B63f6ac;
case 0x63f6ae:c.instructions+=7;goto B63f6ae;
case 0x63f6b1:c.instructions+=6;goto B63f6b1;
case 0x63f6b4:c.instructions+=5;goto B63f6b4;
case 0x63f6b5:c.instructions+=4;goto B63f6b5;
case 0x63f6b6:c.instructions+=3;goto B63f6b6;
case 0x63f6b7:c.instructions+=2;goto B63f6b7;
case 0x63f6b8:c.instructions+=1;goto B63f6b8;
case 0x63f6ba:goto L63f6ba;
case 0x63f6bb:c.instructions+=1;goto B63f6bb;
case 0x63f6bc:goto L63f6bc;
case 0x63f6bf:c.instructions+=3;goto B63f6bf;
case 0x63f6c0:c.instructions+=2;goto B63f6c0;
case 0x63f6c1:c.instructions+=1;goto B63f6c1;
case 0x63f6c4:goto L63f6c4;
case 0x63f6c6:c.instructions+=39;goto B63f6c6;
case 0x63f6c7:c.instructions+=38;goto B63f6c7;
case 0x63f6c9:c.instructions+=37;goto B63f6c9;
case 0x63f6ca:c.instructions+=36;goto B63f6ca;
case 0x63f6cd:c.instructions+=35;goto B63f6cd;
case 0x63f6d0:c.instructions+=34;goto B63f6d0;
case 0x63f6d3:c.instructions+=33;goto B63f6d3;
case 0x63f6d5:c.instructions+=32;goto B63f6d5;
case 0x63f6d7:c.instructions+=31;goto B63f6d7;
case 0x63f6d9:c.instructions+=30;goto B63f6d9;
case 0x63f6dc:c.instructions+=29;goto B63f6dc;
case 0x63f6de:c.instructions+=28;goto B63f6de;
case 0x63f6e1:c.instructions+=27;goto B63f6e1;
case 0x63f6e3:c.instructions+=26;goto B63f6e3;
case 0x63f6e6:c.instructions+=25;goto B63f6e6;
case 0x63f6e9:c.instructions+=24;goto B63f6e9;
case 0x63f6ec:c.instructions+=23;goto B63f6ec;
case 0x63f6ef:c.instructions+=22;goto B63f6ef;
case 0x63f6f2:c.instructions+=21;goto B63f6f2;
case 0x63f6f5:c.instructions+=20;goto B63f6f5;
case 0x63f6f7:c.instructions+=19;goto B63f6f7;
case 0x63f6f9:c.instructions+=18;goto B63f6f9;
case 0x63f6fb:c.instructions+=17;goto B63f6fb;
case 0x63f6fd:c.instructions+=16;goto B63f6fd;
case 0x63f700:c.instructions+=15;goto B63f700;
case 0x63f702:c.instructions+=14;goto B63f702;
case 0x63f705:c.instructions+=13;goto B63f705;
case 0x63f707:c.instructions+=12;goto B63f707;
case 0x63f70a:c.instructions+=11;goto B63f70a;
case 0x63f70c:c.instructions+=10;goto B63f70c;
case 0x63f70e:c.instructions+=9;goto B63f70e;
case 0x63f711:c.instructions+=8;goto B63f711;
case 0x63f714:c.instructions+=7;goto B63f714;
case 0x63f716:c.instructions+=6;goto B63f716;
case 0x63f717:c.instructions+=5;goto B63f717;
case 0x63f718:c.instructions+=4;goto B63f718;
case 0x63f71c:c.instructions+=3;goto B63f71c;
case 0x63f71f:c.instructions+=2;goto B63f71f;
case 0x63f722:c.instructions+=1;goto B63f722;
case 0x63f727:goto L63f727;
case 0x63f729:c.instructions+=2;goto B63f729;
case 0x63f72c:c.instructions+=1;goto B63f72c;
case 0x63f72e:goto L63f72e;
case 0x63f730:c.instructions+=6;goto B63f730;
case 0x63f733:c.instructions+=5;goto B63f733;
case 0x63f735:c.instructions+=4;goto B63f735;
case 0x63f737:c.instructions+=3;goto B63f737;
case 0x63f739:c.instructions+=2;goto B63f739;
case 0x63f73c:c.instructions+=1;goto B63f73c;
case 0x63f73f:goto L63f73f;
case 0x63f740:c.instructions+=1;goto B63f740;
case 0x63f743:goto L63f743;
case 0x63f745:c.instructions+=11;goto B63f745;
case 0x63f746:c.instructions+=10;goto B63f746;
case 0x63f748:c.instructions+=9;goto B63f748;
case 0x63f74b:c.instructions+=8;goto B63f74b;
case 0x63f74c:c.instructions+=7;goto B63f74c;
case 0x63f74d:c.instructions+=6;goto B63f74d;
case 0x63f750:c.instructions+=5;goto B63f750;
case 0x63f751:c.instructions+=4;goto B63f751;
case 0x63f754:c.instructions+=3;goto B63f754;
case 0x63f756:c.instructions+=2;goto B63f756;
case 0x63f758:c.instructions+=1;goto B63f758;
case 0x63f75a:goto L63f75a;
case 0x63f75d:c.instructions+=1;goto B63f75d;
case 0x63f760:goto L63f760;
case 0x63f763:c.instructions+=31;goto B63f763;
case 0x63f764:c.instructions+=30;goto B63f764;
case 0x63f767:c.instructions+=29;goto B63f767;
case 0x63f768:c.instructions+=28;goto B63f768;
case 0x63f76a:c.instructions+=27;goto B63f76a;
case 0x63f76c:c.instructions+=26;goto B63f76c;
case 0x63f76e:c.instructions+=25;goto B63f76e;
case 0x63f771:c.instructions+=24;goto B63f771;
case 0x63f774:c.instructions+=23;goto B63f774;
case 0x63f777:c.instructions+=22;goto B63f777;
case 0x63f77a:c.instructions+=21;goto B63f77a;
case 0x63f77c:c.instructions+=20;goto B63f77c;
case 0x63f77f:c.instructions+=19;goto B63f77f;
case 0x63f782:c.instructions+=18;goto B63f782;
case 0x63f784:c.instructions+=17;goto B63f784;
case 0x63f787:c.instructions+=16;goto B63f787;
case 0x63f78a:c.instructions+=15;goto B63f78a;
case 0x63f78d:c.instructions+=14;goto B63f78d;
case 0x63f78f:c.instructions+=13;goto B63f78f;
case 0x63f792:c.instructions+=12;goto B63f792;
case 0x63f795:c.instructions+=11;goto B63f795;
case 0x63f797:c.instructions+=10;goto B63f797;
case 0x63f79a:c.instructions+=9;goto B63f79a;
case 0x63f79c:c.instructions+=8;goto B63f79c;
case 0x63f79f:c.instructions+=7;goto B63f79f;
case 0x63f7a2:c.instructions+=6;goto B63f7a2;
case 0x63f7a5:c.instructions+=5;goto B63f7a5;
case 0x63f7a7:c.instructions+=4;goto B63f7a7;
case 0x63f7ab:c.instructions+=3;goto B63f7ab;
case 0x63f7ae:c.instructions+=2;goto B63f7ae;
case 0x63f7b1:c.instructions+=1;goto B63f7b1;
case 0x63f7b6:goto L63f7b6;
case 0x63f7b8:c.instructions+=1;goto B63f7b8;
case 0x63f7ba:goto L63f7ba;
case 0x63f7bc:c.instructions+=6;goto B63f7bc;
case 0x63f7bf:c.instructions+=5;goto B63f7bf;
case 0x63f7c1:c.instructions+=4;goto B63f7c1;
case 0x63f7c3:c.instructions+=3;goto B63f7c3;
case 0x63f7c5:c.instructions+=2;goto B63f7c5;
case 0x63f7c8:c.instructions+=1;goto B63f7c8;
case 0x63f7cb:goto L63f7cb;
case 0x63f7ce:c.instructions+=3;goto B63f7ce;
case 0x63f7d1:c.instructions+=2;goto B63f7d1;
case 0x63f7d2:c.instructions+=1;goto B63f7d2;
case 0x63f7d4:goto L63f7d4;
case 0x63f7d5:c.instructions+=5;goto B63f7d5;
case 0x63f7d6:c.instructions+=4;goto B63f7d6;
case 0x63f7d8:c.instructions+=3;goto B63f7d8;
case 0x63f7d9:c.instructions+=2;goto B63f7d9;
case 0x63f7da:c.instructions+=1;goto B63f7da;
case 0x63f7dd:goto L63f7dd;
case 0x63f7df:c.instructions+=28;goto B63f7df;
case 0x63f7e0:c.instructions+=27;goto B63f7e0;
case 0x63f7e2:c.instructions+=26;goto B63f7e2;
case 0x63f7e5:c.instructions+=25;goto B63f7e5;
case 0x63f7e6:c.instructions+=24;goto B63f7e6;
case 0x63f7e9:c.instructions+=23;goto B63f7e9;
case 0x63f7ec:c.instructions+=22;goto B63f7ec;
case 0x63f7ed:c.instructions+=21;goto B63f7ed;
case 0x63f7f0:c.instructions+=20;goto B63f7f0;
case 0x63f7f1:c.instructions+=19;goto B63f7f1;
case 0x63f7f3:c.instructions+=18;goto B63f7f3;
case 0x63f7f4:c.instructions+=17;goto B63f7f4;
case 0x63f7f6:c.instructions+=16;goto B63f7f6;
case 0x63f7f8:c.instructions+=15;goto B63f7f8;
case 0x63f7fa:c.instructions+=14;goto B63f7fa;
case 0x63f7fc:c.instructions+=13;goto B63f7fc;
case 0x63f7fe:c.instructions+=12;goto B63f7fe;
case 0x63f800:c.instructions+=11;goto B63f800;
case 0x63f802:c.instructions+=10;goto B63f802;
case 0x63f804:c.instructions+=9;goto B63f804;
case 0x63f807:c.instructions+=8;goto B63f807;
case 0x63f809:c.instructions+=7;goto B63f809;
case 0x63f80b:c.instructions+=6;goto B63f80b;
case 0x63f80d:c.instructions+=5;goto B63f80d;
case 0x63f80f:c.instructions+=4;goto B63f80f;
case 0x63f813:c.instructions+=3;goto B63f813;
case 0x63f816:c.instructions+=2;goto B63f816;
case 0x63f819:c.instructions+=1;goto B63f819;
case 0x63f81e:goto L63f81e;
case 0x63f820:c.instructions+=1;goto B63f820;
case 0x63f822:goto L63f822;
case 0x63f825:c.instructions+=2;goto B63f825;
case 0x63f827:c.instructions+=1;goto B63f827;
case 0x63f829:goto L63f829;
case 0x63f82b:c.instructions+=4;goto B63f82b;
case 0x63f82c:c.instructions+=3;goto B63f82c;
case 0x63f82d:c.instructions+=2;goto B63f82d;
case 0x63f82e:c.instructions+=1;goto B63f82e;
case 0x63f830:goto L63f830;
case 0x63f833:c.instructions+=5;goto B63f833;
case 0x63f839:c.instructions+=4;goto B63f839;
case 0x63f83b:c.instructions+=3;goto B63f83b;
case 0x63f83e:c.instructions+=2;goto B63f83e;
case 0x63f841:c.instructions+=1;goto B63f841;
case 0x63f843:goto L63f843;
case 0x63f846:c.instructions+=12;goto B63f846;
case 0x63f848:c.instructions+=11;goto B63f848;
case 0x63f84e:c.instructions+=10;goto B63f84e;
case 0x63f850:c.instructions+=9;goto B63f850;
case 0x63f852:c.instructions+=8;goto B63f852;
case 0x63f855:c.instructions+=7;goto B63f855;
case 0x63f857:c.instructions+=6;goto B63f857;
case 0x63f85a:c.instructions+=5;goto B63f85a;
case 0x63f85d:c.instructions+=4;goto B63f85d;
case 0x63f860:c.instructions+=3;goto B63f860;
case 0x63f863:c.instructions+=2;goto B63f863;
case 0x63f866:c.instructions+=1;goto B63f866;
case 0x63f868:goto L63f868;
case 0x63f86a:c.instructions+=5;goto B63f86a;
case 0x63f86c:c.instructions+=4;goto B63f86c;
case 0x63f86e:c.instructions+=3;goto B63f86e;
case 0x63f871:c.instructions+=2;goto B63f871;
case 0x63f873:c.instructions+=1;goto B63f873;
case 0x63f876:goto L63f876;
case 0x63f877:c.instructions+=3;goto B63f877;
case 0x63f878:c.instructions+=2;goto B63f878;
case 0x63f879:c.instructions+=1;goto B63f879;
case 0x63f87c:goto L63f87c;
case 0x63f87e:c.instructions+=60;goto B63f87e;
case 0x63f87f:c.instructions+=59;goto B63f87f;
case 0x63f881:c.instructions+=58;goto B63f881;
case 0x63f882:c.instructions+=57;goto B63f882;
case 0x63f885:c.instructions+=56;goto B63f885;
case 0x63f888:c.instructions+=55;goto B63f888;
case 0x63f88b:c.instructions+=54;goto B63f88b;
case 0x63f88d:c.instructions+=53;goto B63f88d;
case 0x63f88f:c.instructions+=52;goto B63f88f;
case 0x63f891:c.instructions+=51;goto B63f891;
case 0x63f894:c.instructions+=50;goto B63f894;
case 0x63f896:c.instructions+=49;goto B63f896;
case 0x63f899:c.instructions+=48;goto B63f899;
case 0x63f89b:c.instructions+=47;goto B63f89b;
case 0x63f89e:c.instructions+=46;goto B63f89e;
case 0x63f8a0:c.instructions+=45;goto B63f8a0;
case 0x63f8a3:c.instructions+=44;goto B63f8a3;
case 0x63f8a6:c.instructions+=43;goto B63f8a6;
case 0x63f8a9:c.instructions+=42;goto B63f8a9;
case 0x63f8ac:c.instructions+=41;goto B63f8ac;
case 0x63f8af:c.instructions+=40;goto B63f8af;
case 0x63f8b2:c.instructions+=39;goto B63f8b2;
case 0x63f8b5:c.instructions+=38;goto B63f8b5;
case 0x63f8b8:c.instructions+=37;goto B63f8b8;
case 0x63f8ba:c.instructions+=36;goto B63f8ba;
case 0x63f8bc:c.instructions+=35;goto B63f8bc;
case 0x63f8be:c.instructions+=34;goto B63f8be;
case 0x63f8c0:c.instructions+=33;goto B63f8c0;
case 0x63f8c2:c.instructions+=32;goto B63f8c2;
case 0x63f8c5:c.instructions+=31;goto B63f8c5;
case 0x63f8c8:c.instructions+=30;goto B63f8c8;
case 0x63f8cb:c.instructions+=29;goto B63f8cb;
case 0x63f8ce:c.instructions+=28;goto B63f8ce;
case 0x63f8d1:c.instructions+=27;goto B63f8d1;
case 0x63f8d4:c.instructions+=26;goto B63f8d4;
case 0x63f8d7:c.instructions+=25;goto B63f8d7;
case 0x63f8da:c.instructions+=24;goto B63f8da;
case 0x63f8dc:c.instructions+=23;goto B63f8dc;
case 0x63f8de:c.instructions+=22;goto B63f8de;
case 0x63f8e0:c.instructions+=21;goto B63f8e0;
case 0x63f8e2:c.instructions+=20;goto B63f8e2;
case 0x63f8e4:c.instructions+=19;goto B63f8e4;
case 0x63f8e7:c.instructions+=18;goto B63f8e7;
case 0x63f8e9:c.instructions+=17;goto B63f8e9;
case 0x63f8ec:c.instructions+=16;goto B63f8ec;
case 0x63f8ee:c.instructions+=15;goto B63f8ee;
case 0x63f8f1:c.instructions+=14;goto B63f8f1;
case 0x63f8f3:c.instructions+=13;goto B63f8f3;
case 0x63f8f6:c.instructions+=12;goto B63f8f6;
case 0x63f8f8:c.instructions+=11;goto B63f8f8;
case 0x63f8fa:c.instructions+=10;goto B63f8fa;
case 0x63f8fd:c.instructions+=9;goto B63f8fd;
case 0x63f900:c.instructions+=8;goto B63f900;
case 0x63f903:c.instructions+=7;goto B63f903;
case 0x63f905:c.instructions+=6;goto B63f905;
case 0x63f906:c.instructions+=5;goto B63f906;
case 0x63f907:c.instructions+=4;goto B63f907;
case 0x63f90b:c.instructions+=3;goto B63f90b;
case 0x63f90e:c.instructions+=2;goto B63f90e;
case 0x63f911:c.instructions+=1;goto B63f911;
case 0x63f916:goto L63f916;
case 0x63f918:c.instructions+=2;goto B63f918;
case 0x63f91b:c.instructions+=1;goto B63f91b;
case 0x63f91d:goto L63f91d;
case 0x63f91f:c.instructions+=9;goto B63f91f;
case 0x63f922:c.instructions+=8;goto B63f922;
case 0x63f924:c.instructions+=7;goto B63f924;
case 0x63f926:c.instructions+=6;goto B63f926;
case 0x63f928:c.instructions+=5;goto B63f928;
case 0x63f92a:c.instructions+=4;goto B63f92a;
case 0x63f92d:c.instructions+=3;goto B63f92d;
case 0x63f930:c.instructions+=2;goto B63f930;
case 0x63f933:c.instructions+=1;goto B63f933;
case 0x63f936:goto L63f936;
case 0x63f937:c.instructions+=1;goto B63f937;
case 0x63f93a:goto L63f93a;
case 0x63f93c:c.instructions+=28;goto B63f93c;
case 0x63f93d:c.instructions+=27;goto B63f93d;
case 0x63f93f:c.instructions+=26;goto B63f93f;
case 0x63f940:c.instructions+=25;goto B63f940;
case 0x63f943:c.instructions+=24;goto B63f943;
case 0x63f946:c.instructions+=23;goto B63f946;
case 0x63f947:c.instructions+=22;goto B63f947;
case 0x63f949:c.instructions+=21;goto B63f949;
case 0x63f94c:c.instructions+=20;goto B63f94c;
case 0x63f94e:c.instructions+=19;goto B63f94e;
case 0x63f94f:c.instructions+=18;goto B63f94f;
case 0x63f950:c.instructions+=17;goto B63f950;
case 0x63f953:c.instructions+=16;goto B63f953;
case 0x63f955:c.instructions+=15;goto B63f955;
case 0x63f958:c.instructions+=14;goto B63f958;
case 0x63f95a:c.instructions+=13;goto B63f95a;
case 0x63f95d:c.instructions+=12;goto B63f95d;
case 0x63f95f:c.instructions+=11;goto B63f95f;
case 0x63f962:c.instructions+=10;goto B63f962;
case 0x63f965:c.instructions+=9;goto B63f965;
case 0x63f967:c.instructions+=8;goto B63f967;
case 0x63f969:c.instructions+=7;goto B63f969;
case 0x63f96c:c.instructions+=6;goto B63f96c;
case 0x63f96e:c.instructions+=5;goto B63f96e;
case 0x63f970:c.instructions+=4;goto B63f970;
case 0x63f973:c.instructions+=3;goto B63f973;
case 0x63f975:c.instructions+=2;goto B63f975;
case 0x63f978:c.instructions+=1;goto B63f978;
case 0x63f97e:goto L63f97e;
case 0x63f985:goto L63f985;
case 0x63f987:c.instructions+=32;goto B63f987;
case 0x63f98a:c.instructions+=31;goto B63f98a;
case 0x63f98c:c.instructions+=30;goto B63f98c;
case 0x63f98f:c.instructions+=29;goto B63f98f;
case 0x63f991:c.instructions+=28;goto B63f991;
case 0x63f994:c.instructions+=27;goto B63f994;
case 0x63f996:c.instructions+=26;goto B63f996;
case 0x63f999:c.instructions+=25;goto B63f999;
case 0x63f99b:c.instructions+=24;goto B63f99b;
case 0x63f99e:c.instructions+=23;goto B63f99e;
case 0x63f9a0:c.instructions+=22;goto B63f9a0;
case 0x63f9a3:c.instructions+=21;goto B63f9a3;
case 0x63f9a5:c.instructions+=20;goto B63f9a5;
case 0x63f9a8:c.instructions+=19;goto B63f9a8;
case 0x63f9aa:c.instructions+=18;goto B63f9aa;
case 0x63f9ad:c.instructions+=17;goto B63f9ad;
case 0x63f9af:c.instructions+=16;goto B63f9af;
case 0x63f9b2:c.instructions+=15;goto B63f9b2;
case 0x63f9b4:c.instructions+=14;goto B63f9b4;
case 0x63f9b7:c.instructions+=13;goto B63f9b7;
case 0x63f9b9:c.instructions+=12;goto B63f9b9;
case 0x63f9bc:c.instructions+=11;goto B63f9bc;
case 0x63f9be:c.instructions+=10;goto B63f9be;
case 0x63f9c1:c.instructions+=9;goto B63f9c1;
case 0x63f9c3:c.instructions+=8;goto B63f9c3;
case 0x63f9c6:c.instructions+=7;goto B63f9c6;
case 0x63f9c8:c.instructions+=6;goto B63f9c8;
case 0x63f9cb:c.instructions+=5;goto B63f9cb;
case 0x63f9cd:c.instructions+=4;goto B63f9cd;
case 0x63f9d0:c.instructions+=3;goto B63f9d0;
case 0x63f9d2:c.instructions+=2;goto B63f9d2;
case 0x63f9d5:c.instructions+=1;goto B63f9d5;
case 0x63f9d7:goto L63f9d7;
case 0x63f9d9:c.instructions+=1;goto B63f9d9;
case 0x63f9db:goto L63f9db;
case 0x63f9de:c.instructions+=1;goto B63f9de;
case 0x63f9e0:goto L63f9e0;
case 0x63f9e1:c.instructions+=2;goto B63f9e1;
case 0x63f9e4:c.instructions+=1;goto B63f9e4;
case 0x63f9e6:goto L63f9e6;
case 0x63f9e8:c.instructions+=1;goto B63f9e8;
case 0x63f9ea:goto L63f9ea;
case 0x63f9eb:c.instructions+=1;goto B63f9eb;
case 0x63f9ed:goto L63f9ed;
case 0x63f9f0:goto L63f9f0;
case 0x63f9f1:c.instructions+=1;goto B63f9f1;
case 0x63f9f3:goto L63f9f3;
case 0x63f9f6:c.instructions+=4;goto B63f9f6;
case 0x63f9f9:c.instructions+=3;goto B63f9f9;
case 0x63f9fa:c.instructions+=2;goto B63f9fa;
case 0x63f9fb:c.instructions+=1;goto B63f9fb;
case 0x63fa00:goto L63fa00;
case 0x63fa03:c.instructions+=2;goto B63fa03;
case 0x63fa06:c.instructions+=1;goto B63fa06;
case 0x63fa07:goto L63fa07;
case 0x63fa0a:c.instructions+=2;goto B63fa0a;
case 0x63fa0b:c.instructions+=1;goto B63fa0b;
case 0x63fa10:goto L63fa10;
case 0x63fa11:c.instructions+=4;goto B63fa11;
case 0x63fa14:c.instructions+=3;goto B63fa14;
case 0x63fa17:c.instructions+=2;goto B63fa17;
case 0x63fa18:c.instructions+=1;goto B63fa18;
case 0x63fa1d:goto L63fa1d;
case 0x63fa20:c.instructions+=2;goto B63fa20;
case 0x63fa22:c.instructions+=1;goto B63fa22;
case 0x63fa24:goto L63fa24;
case 0x63fa26:c.instructions+=5;goto B63fa26;
case 0x63fa29:c.instructions+=4;goto B63fa29;
case 0x63fa2b:c.instructions+=3;goto B63fa2b;
case 0x63fa31:c.instructions+=2;goto B63fa31;
case 0x63fa34:c.instructions+=1;goto B63fa34;
case 0x63fa36:goto L63fa36;
case 0x63fa3c:goto L63fa3c;
case 0x63fa3e:c.instructions+=5;goto B63fa3e;
case 0x63fa40:c.instructions+=4;goto B63fa40;
case 0x63fa42:c.instructions+=3;goto B63fa42;
case 0x63fa48:c.instructions+=2;goto B63fa48;
case 0x63fa4a:c.instructions+=1;goto B63fa4a;
case 0x63fa4c:goto L63fa4c;
case 0x63fa52:goto L63fa52;
case 0x63fa54:c.instructions+=7;goto B63fa54;
case 0x63fa56:c.instructions+=6;goto B63fa56;
case 0x63fa59:c.instructions+=5;goto B63fa59;
case 0x63fa5b:c.instructions+=4;goto B63fa5b;
case 0x63fa5d:c.instructions+=3;goto B63fa5d;
case 0x63fa60:c.instructions+=2;goto B63fa60;
case 0x63fa63:c.instructions+=1;goto B63fa63;
case 0x63fa65:goto L63fa65;
case 0x63fa6b:goto L63fa6b;
case 0x63fa6e:c.instructions+=5;goto B63fa6e;
case 0x63fa70:c.instructions+=4;goto B63fa70;
case 0x63fa72:c.instructions+=3;goto B63fa72;
case 0x63fa78:c.instructions+=2;goto B63fa78;
case 0x63fa7b:c.instructions+=1;goto B63fa7b;
case 0x63fa7d:goto L63fa7d;
case 0x63fa83:goto L63fa83;
case 0x63fa85:c.instructions+=6;goto B63fa85;
case 0x63fa88:c.instructions+=5;goto B63fa88;
case 0x63fa8b:c.instructions+=4;goto B63fa8b;
case 0x63fa8e:c.instructions+=3;goto B63fa8e;
case 0x63fa91:c.instructions+=2;goto B63fa91;
case 0x63fa94:c.instructions+=1;goto B63fa94;
case 0x63fa97:goto L63fa97;
case 0x63fa98:c.instructions+=7;goto B63fa98;
case 0x63fa9a:c.instructions+=6;goto B63fa9a;
case 0x63fa9b:c.instructions+=5;goto B63fa9b;
case 0x63fa9d:c.instructions+=4;goto B63fa9d;
case 0x63fa9e:c.instructions+=3;goto B63fa9e;
case 0x63faa0:c.instructions+=2;goto B63faa0;
case 0x63faa1:c.instructions+=1;goto B63faa1;
case 0x63fac4:goto L63fac4;
case 0x63fac6:c.instructions+=28;goto B63fac6;
case 0x63fac7:c.instructions+=27;goto B63fac7;
case 0x63fac9:c.instructions+=26;goto B63fac9;
case 0x63faca:c.instructions+=25;goto B63faca;
case 0x63facd:c.instructions+=24;goto B63facd;
case 0x63fad0:c.instructions+=23;goto B63fad0;
case 0x63fad1:c.instructions+=22;goto B63fad1;
case 0x63fad3:c.instructions+=21;goto B63fad3;
case 0x63fad9:c.instructions+=20;goto B63fad9;
case 0x63fadb:c.instructions+=19;goto B63fadb;
case 0x63fadc:c.instructions+=18;goto B63fadc;
case 0x63fadd:c.instructions+=17;goto B63fadd;
case 0x63fae0:c.instructions+=16;goto B63fae0;
case 0x63fae2:c.instructions+=15;goto B63fae2;
case 0x63fae5:c.instructions+=14;goto B63fae5;
case 0x63fae7:c.instructions+=13;goto B63fae7;
case 0x63faea:c.instructions+=12;goto B63faea;
case 0x63faec:c.instructions+=11;goto B63faec;
case 0x63faef:c.instructions+=10;goto B63faef;
case 0x63faf2:c.instructions+=9;goto B63faf2;
case 0x63faf4:c.instructions+=8;goto B63faf4;
case 0x63faf6:c.instructions+=7;goto B63faf6;
case 0x63faf9:c.instructions+=6;goto B63faf9;
case 0x63fafb:c.instructions+=5;goto B63fafb;
case 0x63fafd:c.instructions+=4;goto B63fafd;
case 0x63fb00:c.instructions+=3;goto B63fb00;
case 0x63fb02:c.instructions+=2;goto B63fb02;
case 0x63fb05:c.instructions+=1;goto B63fb05;
case 0x63fb0b:goto L63fb0b;
case 0x63fb12:goto L63fb12;
case 0x63fb14:c.instructions+=32;goto B63fb14;
case 0x63fb17:c.instructions+=31;goto B63fb17;
case 0x63fb19:c.instructions+=30;goto B63fb19;
case 0x63fb1c:c.instructions+=29;goto B63fb1c;
case 0x63fb1e:c.instructions+=28;goto B63fb1e;
case 0x63fb21:c.instructions+=27;goto B63fb21;
case 0x63fb23:c.instructions+=26;goto B63fb23;
case 0x63fb26:c.instructions+=25;goto B63fb26;
case 0x63fb28:c.instructions+=24;goto B63fb28;
case 0x63fb2b:c.instructions+=23;goto B63fb2b;
case 0x63fb2d:c.instructions+=22;goto B63fb2d;
case 0x63fb30:c.instructions+=21;goto B63fb30;
case 0x63fb32:c.instructions+=20;goto B63fb32;
case 0x63fb35:c.instructions+=19;goto B63fb35;
case 0x63fb37:c.instructions+=18;goto B63fb37;
case 0x63fb3a:c.instructions+=17;goto B63fb3a;
case 0x63fb3c:c.instructions+=16;goto B63fb3c;
case 0x63fb3f:c.instructions+=15;goto B63fb3f;
case 0x63fb41:c.instructions+=14;goto B63fb41;
case 0x63fb44:c.instructions+=13;goto B63fb44;
case 0x63fb46:c.instructions+=12;goto B63fb46;
case 0x63fb49:c.instructions+=11;goto B63fb49;
case 0x63fb4b:c.instructions+=10;goto B63fb4b;
case 0x63fb4e:c.instructions+=9;goto B63fb4e;
case 0x63fb50:c.instructions+=8;goto B63fb50;
case 0x63fb53:c.instructions+=7;goto B63fb53;
case 0x63fb55:c.instructions+=6;goto B63fb55;
case 0x63fb58:c.instructions+=5;goto B63fb58;
case 0x63fb5a:c.instructions+=4;goto B63fb5a;
case 0x63fb5d:c.instructions+=3;goto B63fb5d;
case 0x63fb5f:c.instructions+=2;goto B63fb5f;
case 0x63fb62:c.instructions+=1;goto B63fb62;
case 0x63fb64:goto L63fb64;
case 0x63fb66:c.instructions+=1;goto B63fb66;
case 0x63fb68:goto L63fb68;
case 0x63fb6b:c.instructions+=1;goto B63fb6b;
case 0x63fb6d:goto L63fb6d;
case 0x63fb6e:c.instructions+=2;goto B63fb6e;
case 0x63fb71:c.instructions+=1;goto B63fb71;
case 0x63fb73:goto L63fb73;
case 0x63fb75:c.instructions+=1;goto B63fb75;
case 0x63fb77:goto L63fb77;
case 0x63fb78:c.instructions+=1;goto B63fb78;
case 0x63fb7a:goto L63fb7a;
case 0x63fb7d:goto L63fb7d;
case 0x63fb7e:c.instructions+=1;goto B63fb7e;
case 0x63fb80:goto L63fb80;
case 0x63fb83:c.instructions+=4;goto B63fb83;
case 0x63fb86:c.instructions+=3;goto B63fb86;
case 0x63fb87:c.instructions+=2;goto B63fb87;
case 0x63fb88:c.instructions+=1;goto B63fb88;
case 0x63fb8d:goto L63fb8d;
case 0x63fb90:c.instructions+=2;goto B63fb90;
case 0x63fb93:c.instructions+=1;goto B63fb93;
case 0x63fb94:goto L63fb94;
case 0x63fb97:c.instructions+=2;goto B63fb97;
case 0x63fb98:c.instructions+=1;goto B63fb98;
case 0x63fb9d:goto L63fb9d;
case 0x63fba0:c.instructions+=2;goto B63fba0;
case 0x63fba2:c.instructions+=1;goto B63fba2;
case 0x63fba8:goto L63fba8;
case 0x63fbab:c.instructions+=3;goto B63fbab;
case 0x63fbae:c.instructions+=2;goto B63fbae;
case 0x63fbb0:c.instructions+=1;goto B63fbb0;
case 0x63fbb2:goto L63fbb2;
case 0x63fbb8:goto L63fbb8;
case 0x63fbbe:c.instructions+=13;goto B63fbbe;
case 0x63fbc1:c.instructions+=12;goto B63fbc1;
case 0x63fbc3:c.instructions+=11;goto B63fbc3;
case 0x63fbc9:c.instructions+=10;goto B63fbc9;
case 0x63fbcb:c.instructions+=9;goto B63fbcb;
case 0x63fbd1:c.instructions+=8;goto B63fbd1;
case 0x63fbd3:c.instructions+=7;goto B63fbd3;
case 0x63fbd9:c.instructions+=6;goto B63fbd9;
case 0x63fbdb:c.instructions+=5;goto B63fbdb;
case 0x63fbe1:c.instructions+=4;goto B63fbe1;
case 0x63fbe3:c.instructions+=3;goto B63fbe3;
case 0x63fbe6:c.instructions+=2;goto B63fbe6;
case 0x63fbe9:c.instructions+=1;goto B63fbe9;
case 0x63fbeb:goto L63fbeb;
case 0x63fbf1:goto L63fbf1;
case 0x63fbf7:c.instructions+=19;goto B63fbf7;
case 0x63fbf9:c.instructions+=18;goto B63fbf9;
case 0x63fbfb:c.instructions+=17;goto B63fbfb;
case 0x63fbfd:c.instructions+=16;goto B63fbfd;
case 0x63fc00:c.instructions+=15;goto B63fc00;
case 0x63fc02:c.instructions+=14;goto B63fc02;
case 0x63fc05:c.instructions+=13;goto B63fc05;
case 0x63fc07:c.instructions+=12;goto B63fc07;
case 0x63fc0a:c.instructions+=11;goto B63fc0a;
case 0x63fc0c:c.instructions+=10;goto B63fc0c;
case 0x63fc0f:c.instructions+=9;goto B63fc0f;
case 0x63fc11:c.instructions+=8;goto B63fc11;
case 0x63fc14:c.instructions+=7;goto B63fc14;
case 0x63fc17:c.instructions+=6;goto B63fc17;
case 0x63fc1a:c.instructions+=5;goto B63fc1a;
case 0x63fc1d:c.instructions+=4;goto B63fc1d;
case 0x63fc1f:c.instructions+=3;goto B63fc1f;
case 0x63fc22:c.instructions+=2;goto B63fc22;
case 0x63fc24:c.instructions+=1;goto B63fc24;
case 0x63fc26:goto L63fc26;
case 0x63fc2c:goto L63fc2c;
case 0x63fc2f:c.instructions+=5;goto B63fc2f;
case 0x63fc31:c.instructions+=4;goto B63fc31;
case 0x63fc33:c.instructions+=3;goto B63fc33;
case 0x63fc36:c.instructions+=2;goto B63fc36;
case 0x63fc39:c.instructions+=1;goto B63fc39;
case 0x63fc3b:goto L63fc3b;
case 0x63fc41:goto L63fc41;
case 0x63fc44:c.instructions+=15;goto B63fc44;
case 0x63fc46:c.instructions+=14;goto B63fc46;
case 0x63fc4c:c.instructions+=13;goto B63fc4c;
case 0x63fc4f:c.instructions+=12;goto B63fc4f;
case 0x63fc55:c.instructions+=11;goto B63fc55;
case 0x63fc56:c.instructions+=10;goto B63fc56;
case 0x63fc58:c.instructions+=9;goto B63fc58;
case 0x63fc59:c.instructions+=8;goto B63fc59;
case 0x63fc5c:c.instructions+=7;goto B63fc5c;
case 0x63fc5d:c.instructions+=6;goto B63fc5d;
case 0x63fc60:c.instructions+=5;goto B63fc60;
case 0x63fc62:c.instructions+=4;goto B63fc62;
case 0x63fc64:c.instructions+=3;goto B63fc64;
case 0x63fc66:c.instructions+=2;goto B63fc66;
case 0x63fc69:c.instructions+=1;goto B63fc69;
case 0x63fc6e:goto L63fc6e;
case 0x63fc71:goto L63fc71;
case 0x63fc74:c.instructions+=6;goto B63fc74;
case 0x63fc75:c.instructions+=5;goto B63fc75;
case 0x63fc78:c.instructions+=4;goto B63fc78;
case 0x63fc7b:c.instructions+=3;goto B63fc7b;
case 0x63fc7e:c.instructions+=2;goto B63fc7e;
case 0x63fc81:c.instructions+=1;goto B63fc81;
case 0x63fc86:goto L63fc86;
case 0x63fc87:c.instructions+=6;goto B63fc87;
case 0x63fc88:c.instructions+=5;goto B63fc88;
case 0x63fc8a:c.instructions+=4;goto B63fc8a;
case 0x63fc8b:c.instructions+=3;goto B63fc8b;
case 0x63fc8d:c.instructions+=2;goto B63fc8d;
case 0x63fc8e:c.instructions+=1;goto B63fc8e;
case 0x63fcb1:goto L63fcb1;
case 0x63fcb3:c.instructions+=28;goto B63fcb3;
case 0x63fcb4:c.instructions+=27;goto B63fcb4;
case 0x63fcb6:c.instructions+=26;goto B63fcb6;
case 0x63fcb7:c.instructions+=25;goto B63fcb7;
case 0x63fcba:c.instructions+=24;goto B63fcba;
case 0x63fcbd:c.instructions+=23;goto B63fcbd;
case 0x63fcbe:c.instructions+=22;goto B63fcbe;
case 0x63fcc0:c.instructions+=21;goto B63fcc0;
case 0x63fcc3:c.instructions+=20;goto B63fcc3;
case 0x63fcc6:c.instructions+=19;goto B63fcc6;
case 0x63fcc8:c.instructions+=18;goto B63fcc8;
case 0x63fcc9:c.instructions+=17;goto B63fcc9;
case 0x63fccb:c.instructions+=16;goto B63fccb;
case 0x63fccc:c.instructions+=15;goto B63fccc;
case 0x63fccf:c.instructions+=14;goto B63fccf;
case 0x63fcd1:c.instructions+=13;goto B63fcd1;
case 0x63fcd4:c.instructions+=12;goto B63fcd4;
case 0x63fcd6:c.instructions+=11;goto B63fcd6;
case 0x63fcd8:c.instructions+=10;goto B63fcd8;
case 0x63fcda:c.instructions+=9;goto B63fcda;
case 0x63fcdd:c.instructions+=8;goto B63fcdd;
case 0x63fcdf:c.instructions+=7;goto B63fcdf;
case 0x63fce1:c.instructions+=6;goto B63fce1;
case 0x63fce3:c.instructions+=5;goto B63fce3;
case 0x63fce6:c.instructions+=4;goto B63fce6;
case 0x63fce9:c.instructions+=3;goto B63fce9;
case 0x63fceb:c.instructions+=2;goto B63fceb;
case 0x63fcee:c.instructions+=1;goto B63fcee;
case 0x63fcf4:goto L63fcf4;
case 0x63fcfb:goto L63fcfb;
case 0x63fcfd:c.instructions+=32;goto B63fcfd;
case 0x63fd00:c.instructions+=31;goto B63fd00;
case 0x63fd02:c.instructions+=30;goto B63fd02;
case 0x63fd05:c.instructions+=29;goto B63fd05;
case 0x63fd07:c.instructions+=28;goto B63fd07;
case 0x63fd0a:c.instructions+=27;goto B63fd0a;
case 0x63fd0c:c.instructions+=26;goto B63fd0c;
case 0x63fd0f:c.instructions+=25;goto B63fd0f;
case 0x63fd11:c.instructions+=24;goto B63fd11;
case 0x63fd14:c.instructions+=23;goto B63fd14;
case 0x63fd16:c.instructions+=22;goto B63fd16;
case 0x63fd19:c.instructions+=21;goto B63fd19;
case 0x63fd1b:c.instructions+=20;goto B63fd1b;
case 0x63fd1e:c.instructions+=19;goto B63fd1e;
case 0x63fd20:c.instructions+=18;goto B63fd20;
case 0x63fd23:c.instructions+=17;goto B63fd23;
case 0x63fd25:c.instructions+=16;goto B63fd25;
case 0x63fd28:c.instructions+=15;goto B63fd28;
case 0x63fd2a:c.instructions+=14;goto B63fd2a;
case 0x63fd2d:c.instructions+=13;goto B63fd2d;
case 0x63fd2f:c.instructions+=12;goto B63fd2f;
case 0x63fd32:c.instructions+=11;goto B63fd32;
case 0x63fd34:c.instructions+=10;goto B63fd34;
case 0x63fd37:c.instructions+=9;goto B63fd37;
case 0x63fd39:c.instructions+=8;goto B63fd39;
case 0x63fd3c:c.instructions+=7;goto B63fd3c;
case 0x63fd3e:c.instructions+=6;goto B63fd3e;
case 0x63fd41:c.instructions+=5;goto B63fd41;
case 0x63fd43:c.instructions+=4;goto B63fd43;
case 0x63fd46:c.instructions+=3;goto B63fd46;
case 0x63fd48:c.instructions+=2;goto B63fd48;
case 0x63fd4b:c.instructions+=1;goto B63fd4b;
case 0x63fd4d:goto L63fd4d;
case 0x63fd50:c.instructions+=1;goto B63fd50;
case 0x63fd52:goto L63fd52;
case 0x63fd53:c.instructions+=1;goto B63fd53;
case 0x63fd55:goto L63fd55;
case 0x63fd58:c.instructions+=2;goto B63fd58;
case 0x63fd59:c.instructions+=1;goto B63fd59;
case 0x63fd5b:goto L63fd5b;
case 0x63fd5c:c.instructions+=1;goto B63fd5c;
case 0x63fd5e:goto L63fd5e;
case 0x63fd61:c.instructions+=1;goto B63fd61;
case 0x63fd63:goto L63fd63;
case 0x63fd64:goto L63fd64;
case 0x63fd65:c.instructions+=1;goto B63fd65;
case 0x63fd67:goto L63fd67;
case 0x63fd68:c.instructions+=4;goto B63fd68;
case 0x63fd69:c.instructions+=3;goto B63fd69;
case 0x63fd6c:c.instructions+=2;goto B63fd6c;
case 0x63fd6d:c.instructions+=1;goto B63fd6d;
case 0x63fd72:goto L63fd72;
case 0x63fd75:c.instructions+=2;goto B63fd75;
case 0x63fd78:c.instructions+=1;goto B63fd78;
case 0x63fd79:goto L63fd79;
case 0x63fd7c:c.instructions+=2;goto B63fd7c;
case 0x63fd7d:c.instructions+=1;goto B63fd7d;
case 0x63fd82:goto L63fd82;
case 0x63fd85:c.instructions+=1;goto B63fd85;
case 0x63fd86:goto L63fd86;
case 0x63fd89:c.instructions+=3;goto B63fd89;
case 0x63fd8a:c.instructions+=2;goto B63fd8a;
case 0x63fd8b:c.instructions+=1;goto B63fd8b;
case 0x63fd90:goto L63fd90;
case 0x63fd93:c.instructions+=2;goto B63fd93;
case 0x63fd95:c.instructions+=1;goto B63fd95;
case 0x63fd97:goto L63fd97;
case 0x63fd99:c.instructions+=3;goto B63fd99;
case 0x63fd9b:c.instructions+=2;goto B63fd9b;
case 0x63fd9d:c.instructions+=1;goto B63fd9d;
case 0x63fd9f:goto L63fd9f;
case 0x63fda5:goto L63fda5;
case 0x63fda8:c.instructions+=5;goto B63fda8;
case 0x63fdaa:c.instructions+=4;goto B63fdaa;
case 0x63fdad:c.instructions+=3;goto B63fdad;
case 0x63fdaf:c.instructions+=2;goto B63fdaf;
case 0x63fdb2:c.instructions+=1;goto B63fdb2;
case 0x63fdb4:goto L63fdb4;
case 0x63fdba:goto L63fdba;
case 0x63fdbc:c.instructions+=8;goto B63fdbc;
case 0x63fdbf:c.instructions+=7;goto B63fdbf;
case 0x63fdc1:c.instructions+=6;goto B63fdc1;
case 0x63fdc7:c.instructions+=5;goto B63fdc7;
case 0x63fdc9:c.instructions+=4;goto B63fdc9;
case 0x63fdcc:c.instructions+=3;goto B63fdcc;
case 0x63fdce:c.instructions+=2;goto B63fdce;
case 0x63fdd1:c.instructions+=1;goto B63fdd1;
case 0x63fdd3:goto L63fdd3;
case 0x63fdd9:goto L63fdd9;
case 0x63fddc:c.instructions+=4;goto B63fddc;
case 0x63fddf:c.instructions+=3;goto B63fddf;
case 0x63fde1:c.instructions+=2;goto B63fde1;
case 0x63fde4:c.instructions+=1;goto B63fde4;
case 0x63fde6:goto L63fde6;
case 0x63fdec:goto L63fdec;
case 0x63fdee:c.instructions+=14;goto B63fdee;
case 0x63fdf0:c.instructions+=13;goto B63fdf0;
case 0x63fdf6:c.instructions+=12;goto B63fdf6;
case 0x63fdf8:c.instructions+=11;goto B63fdf8;
case 0x63fdfb:c.instructions+=10;goto B63fdfb;
case 0x63fdfe:c.instructions+=9;goto B63fdfe;
case 0x63fe01:c.instructions+=8;goto B63fe01;
case 0x63fe04:c.instructions+=7;goto B63fe04;
case 0x63fe07:c.instructions+=6;goto B63fe07;
case 0x63fe0a:c.instructions+=5;goto B63fe0a;
case 0x63fe0b:c.instructions+=4;goto B63fe0b;
case 0x63fe0d:c.instructions+=3;goto B63fe0d;
case 0x63fe0e:c.instructions+=2;goto B63fe0e;
case 0x63fe11:c.instructions+=1;goto B63fe11;
case 0x63fe13:goto L63fe13;
case 0x63fe16:c.instructions+=3;goto B63fe16;
case 0x63fe19:c.instructions+=2;goto B63fe19;
case 0x63fe1a:c.instructions+=1;goto B63fe1a;
case 0x63fe1d:goto L63fe1d;
case 0x63fe1e:c.instructions+=1;goto B63fe1e;
case 0x63fe23:goto L63fe23;
case 0x63fe24:c.instructions+=7;goto B63fe24;
case 0x63fe26:c.instructions+=6;goto B63fe26;
case 0x63fe27:c.instructions+=5;goto B63fe27;
case 0x63fe29:c.instructions+=4;goto B63fe29;
case 0x63fe2a:c.instructions+=3;goto B63fe2a;
case 0x63fe2c:c.instructions+=2;goto B63fe2c;
case 0x63fe2d:c.instructions+=1;goto B63fe2d;
case 0x63fe50:goto L63fe50;
case 0x63fe52:c.instructions+=28;goto B63fe52;
case 0x63fe53:c.instructions+=27;goto B63fe53;
case 0x63fe55:c.instructions+=26;goto B63fe55;
case 0x63fe56:c.instructions+=25;goto B63fe56;
case 0x63fe59:c.instructions+=24;goto B63fe59;
case 0x63fe5c:c.instructions+=23;goto B63fe5c;
case 0x63fe5d:c.instructions+=22;goto B63fe5d;
case 0x63fe5f:c.instructions+=21;goto B63fe5f;
case 0x63fe62:c.instructions+=20;goto B63fe62;
case 0x63fe68:c.instructions+=19;goto B63fe68;
case 0x63fe6a:c.instructions+=18;goto B63fe6a;
case 0x63fe6b:c.instructions+=17;goto B63fe6b;
case 0x63fe6d:c.instructions+=16;goto B63fe6d;
case 0x63fe6e:c.instructions+=15;goto B63fe6e;
case 0x63fe71:c.instructions+=14;goto B63fe71;
case 0x63fe73:c.instructions+=13;goto B63fe73;
case 0x63fe76:c.instructions+=12;goto B63fe76;
case 0x63fe78:c.instructions+=11;goto B63fe78;
case 0x63fe7a:c.instructions+=10;goto B63fe7a;
case 0x63fe7c:c.instructions+=9;goto B63fe7c;
case 0x63fe7f:c.instructions+=8;goto B63fe7f;
case 0x63fe81:c.instructions+=7;goto B63fe81;
case 0x63fe83:c.instructions+=6;goto B63fe83;
case 0x63fe85:c.instructions+=5;goto B63fe85;
case 0x63fe88:c.instructions+=4;goto B63fe88;
case 0x63fe8b:c.instructions+=3;goto B63fe8b;
case 0x63fe8d:c.instructions+=2;goto B63fe8d;
case 0x63fe90:c.instructions+=1;goto B63fe90;
case 0x63fe96:goto L63fe96;
case 0x63fe9d:goto L63fe9d;
case 0x63fe9f:c.instructions+=32;goto B63fe9f;
case 0x63fea2:c.instructions+=31;goto B63fea2;
case 0x63fea4:c.instructions+=30;goto B63fea4;
case 0x63fea7:c.instructions+=29;goto B63fea7;
case 0x63fea9:c.instructions+=28;goto B63fea9;
case 0x63feac:c.instructions+=27;goto B63feac;
case 0x63feae:c.instructions+=26;goto B63feae;
case 0x63feb1:c.instructions+=25;goto B63feb1;
case 0x63feb3:c.instructions+=24;goto B63feb3;
case 0x63feb6:c.instructions+=23;goto B63feb6;
case 0x63feb8:c.instructions+=22;goto B63feb8;
case 0x63febb:c.instructions+=21;goto B63febb;
case 0x63febd:c.instructions+=20;goto B63febd;
case 0x63fec0:c.instructions+=19;goto B63fec0;
case 0x63fec2:c.instructions+=18;goto B63fec2;
case 0x63fec5:c.instructions+=17;goto B63fec5;
case 0x63fec7:c.instructions+=16;goto B63fec7;
case 0x63feca:c.instructions+=15;goto B63feca;
case 0x63fecc:c.instructions+=14;goto B63fecc;
case 0x63fecf:c.instructions+=13;goto B63fecf;
case 0x63fed1:c.instructions+=12;goto B63fed1;
case 0x63fed4:c.instructions+=11;goto B63fed4;
case 0x63fed6:c.instructions+=10;goto B63fed6;
case 0x63fed9:c.instructions+=9;goto B63fed9;
case 0x63fedb:c.instructions+=8;goto B63fedb;
case 0x63fede:c.instructions+=7;goto B63fede;
case 0x63fee0:c.instructions+=6;goto B63fee0;
case 0x63fee3:c.instructions+=5;goto B63fee3;
case 0x63fee5:c.instructions+=4;goto B63fee5;
case 0x63fee8:c.instructions+=3;goto B63fee8;
case 0x63feea:c.instructions+=2;goto B63feea;
case 0x63feed:c.instructions+=1;goto B63feed;
case 0x63feef:goto L63feef;
case 0x63fef2:c.instructions+=1;goto B63fef2;
case 0x63fef4:goto L63fef4;
case 0x63fef5:c.instructions+=1;goto B63fef5;
case 0x63fef7:goto L63fef7;
case 0x63fefa:c.instructions+=2;goto B63fefa;
case 0x63fefb:c.instructions+=1;goto B63fefb;
case 0x63fefd:goto L63fefd;
case 0x63fefe:c.instructions+=1;goto B63fefe;
case 0x63ff00:goto L63ff00;
case 0x63ff03:c.instructions+=1;goto B63ff03;
case 0x63ff05:goto L63ff05;
case 0x63ff06:goto L63ff06;
case 0x63ff07:c.instructions+=1;goto B63ff07;
case 0x63ff09:goto L63ff09;
case 0x63ff0a:c.instructions+=4;goto B63ff0a;
case 0x63ff0b:c.instructions+=3;goto B63ff0b;
case 0x63ff0e:c.instructions+=2;goto B63ff0e;
case 0x63ff0f:c.instructions+=1;goto B63ff0f;
case 0x63ff14:goto L63ff14;
case 0x63ff17:c.instructions+=2;goto B63ff17;
case 0x63ff1a:c.instructions+=1;goto B63ff1a;
case 0x63ff1b:goto L63ff1b;
case 0x63ff1e:c.instructions+=2;goto B63ff1e;
case 0x63ff1f:c.instructions+=1;goto B63ff1f;
case 0x63ff24:goto L63ff24;
case 0x63ff27:c.instructions+=1;goto B63ff27;
case 0x63ff28:goto L63ff28;
case 0x63ff2b:c.instructions+=3;goto B63ff2b;
case 0x63ff2c:c.instructions+=2;goto B63ff2c;
case 0x63ff2d:c.instructions+=1;goto B63ff2d;
case 0x63ff32:goto L63ff32;
case 0x63ff35:c.instructions+=2;goto B63ff35;
case 0x63ff37:c.instructions+=1;goto B63ff37;
case 0x63ff3d:goto L63ff3d;
case 0x63ff40:c.instructions+=3;goto B63ff40;
case 0x63ff43:c.instructions+=2;goto B63ff43;
case 0x63ff45:c.instructions+=1;goto B63ff45;
case 0x63ff47:goto L63ff47;
case 0x63ff4d:goto L63ff4d;
case 0x63ff50:c.instructions+=4;goto B63ff50;
case 0x63ff52:c.instructions+=3;goto B63ff52;
case 0x63ff58:c.instructions+=2;goto B63ff58;
case 0x63ff5b:c.instructions+=1;goto B63ff5b;
case 0x63ff5d:goto L63ff5d;
case 0x63ff63:goto L63ff63;
case 0x63ff69:c.instructions+=33;goto B63ff69;
case 0x63ff6b:c.instructions+=32;goto B63ff6b;
case 0x63ff6d:c.instructions+=31;goto B63ff6d;
case 0x63ff73:c.instructions+=30;goto B63ff73;
case 0x63ff76:c.instructions+=29;goto B63ff76;
case 0x63ff79:c.instructions+=28;goto B63ff79;
case 0x63ff7b:c.instructions+=27;goto B63ff7b;
case 0x63ff7e:c.instructions+=26;goto B63ff7e;
case 0x63ff80:c.instructions+=25;goto B63ff80;
case 0x63ff86:c.instructions+=24;goto B63ff86;
case 0x63ff88:c.instructions+=23;goto B63ff88;
case 0x63ff8e:c.instructions+=22;goto B63ff8e;
case 0x63ff90:c.instructions+=21;goto B63ff90;
case 0x63ff96:c.instructions+=20;goto B63ff96;
case 0x63ff98:c.instructions+=19;goto B63ff98;
case 0x63ff9e:c.instructions+=18;goto B63ff9e;
case 0x63ffa0:c.instructions+=17;goto B63ffa0;
case 0x63ffa6:c.instructions+=16;goto B63ffa6;
case 0x63ffa8:c.instructions+=15;goto B63ffa8;
case 0x63ffaa:c.instructions+=14;goto B63ffaa;
case 0x63ffb0:c.instructions+=13;goto B63ffb0;
case 0x63ffb2:c.instructions+=12;goto B63ffb2;
case 0x63ffb8:c.instructions+=11;goto B63ffb8;
case 0x63ffba:c.instructions+=10;goto B63ffba;
case 0x63ffc0:c.instructions+=9;goto B63ffc0;
case 0x63ffc2:c.instructions+=8;goto B63ffc2;
case 0x63ffc5:c.instructions+=7;goto B63ffc5;
case 0x63ffc7:c.instructions+=6;goto B63ffc7;
case 0x63ffca:c.instructions+=5;goto B63ffca;
case 0x63ffcd:c.instructions+=4;goto B63ffcd;
case 0x63ffcf:c.instructions+=3;goto B63ffcf;
case 0x63ffd2:c.instructions+=2;goto B63ffd2;
case 0x63ffd4:c.instructions+=1;goto B63ffd4;
case 0x63ffd6:goto L63ffd6;
case 0x63ffdc:goto L63ffdc;
case 0x63ffdf:c.instructions+=7;goto B63ffdf;
case 0x63ffe1:c.instructions+=6;goto B63ffe1;
case 0x63ffe3:c.instructions+=5;goto B63ffe3;
case 0x63ffe5:c.instructions+=4;goto B63ffe5;
case 0x63ffe7:c.instructions+=3;goto B63ffe7;
case 0x63ffea:c.instructions+=2;goto B63ffea;
case 0x63ffed:c.instructions+=1;goto B63ffed;
case 0x63ffef:goto L63ffef;
case 0x63fff5:goto L63fff5;
case 0x63fff7:c.instructions+=4;goto B63fff7;
case 0x63fff9:c.instructions+=3;goto B63fff9;
case 0x63fffc:c.instructions+=2;goto B63fffc;
case 0x63fffe:c.instructions+=1;goto B63fffe;
default:missing_instruction(c.pc);}
B63f000:L63f000:{c.instructions+=16;NFSU2_TR(0x63f000);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f002:{NFSU2_TR(0x63f002);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f004:{NFSU2_TR(0x63f004);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f007:{NFSU2_TR(0x63f007);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f00a:{NFSU2_TR(0x63f00a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f00d:{NFSU2_TR(0x63f00d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f010:{NFSU2_TR(0x63f010);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f013:{NFSU2_TR(0x63f013);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f016:{NFSU2_TR(0x63f016);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f019:{NFSU2_TR(0x63f019);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f01c:{NFSU2_TR(0x63f01c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f01f:{NFSU2_TR(0x63f01f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f022:{NFSU2_TR(0x63f022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f023:{NFSU2_TR(0x63f023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f024:{NFSU2_TR(0x63f024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f025:{NFSU2_TR(0x63f025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f028:L63f028:{c.instructions+=5;NFSU2_TR(0x63f028);
__builtin_memmove((R+28),(R+28),4);
}
B63f02a:{NFSU2_TR(0x63f02a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f02b:{NFSU2_TR(0x63f02b);
__builtin_memmove((R+20),(R+16),4);
}
B63f02d:{NFSU2_TR(0x63f02d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f02f:{NFSU2_TR(0x63f02f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f034ull));
TAIL_STATIC(0x641713u,641);
}
B63f034:L63f034:{c.instructions+=2;NFSU2_TR(0x63f034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f035:{NFSU2_TR(0x63f035);
{u32 t_=u32(m4(0x803e9c));TAIL_DYNAMIC(t_);}
}
B63f03b:L63f03b:{c.instructions+=24;NFSU2_TR(0x63f03b);
__builtin_memmove((R+28),(R+28),4);
}
B63f03d:{NFSU2_TR(0x63f03d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f03e:{NFSU2_TR(0x63f03e);
__builtin_memmove((R+20),(R+16),4);
}
B63f040:{NFSU2_TR(0x63f040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f043:{NFSU2_TR(0x63f043);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f045:{NFSU2_TR(0x63f045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f048:{NFSU2_TR(0x63f048);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f04a:{NFSU2_TR(0x63f04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f04d:{NFSU2_TR(0x63f04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f050:{NFSU2_TR(0x63f050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f053:{NFSU2_TR(0x63f053);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f056:{NFSU2_TR(0x63f056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f059:{NFSU2_TR(0x63f059);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f05c:{NFSU2_TR(0x63f05c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f05f:{NFSU2_TR(0x63f05f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f062:{NFSU2_TR(0x63f062);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f065:{NFSU2_TR(0x63f065);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f067:{NFSU2_TR(0x63f067);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f069:{NFSU2_TR(0x63f069);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f06b:{NFSU2_TR(0x63f06b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f06d:{NFSU2_TR(0x63f06d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63f06f:{NFSU2_TR(0x63f06f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f072:{NFSU2_TR(0x63f072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f073:{NFSU2_TR(0x63f073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f076:L63f076:{c.instructions+=5;NFSU2_TR(0x63f076);
__builtin_memmove((R+28),(R+28),4);
}
B63f078:{NFSU2_TR(0x63f078);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f079:{NFSU2_TR(0x63f079);
__builtin_memmove((R+20),(R+16),4);
}
B63f07b:{NFSU2_TR(0x63f07b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f07d:{NFSU2_TR(0x63f07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f082ull));
TAIL_STATIC(0x641713u,641);
}
B63f082:L63f082:{c.instructions+=2;NFSU2_TR(0x63f082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f083:{NFSU2_TR(0x63f083);
{u32 t_=u32(m4(0x803ea0));TAIL_DYNAMIC(t_);}
}
B63f089:L63f089:{c.instructions+=54;NFSU2_TR(0x63f089);
__builtin_memmove((R+28),(R+28),4);
}
B63f08b:{NFSU2_TR(0x63f08b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f08c:{NFSU2_TR(0x63f08c);
__builtin_memmove((R+20),(R+16),4);
}
B63f08e:{NFSU2_TR(0x63f08e);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63f091:{NFSU2_TR(0x63f091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f094:{NFSU2_TR(0x63f094);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f095:{NFSU2_TR(0x63f095);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63f098:{NFSU2_TR(0x63f098);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f09a:{NFSU2_TR(0x63f09a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f09b:{NFSU2_TR(0x63f09b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f09d:{NFSU2_TR(0x63f09d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f09e:{NFSU2_TR(0x63f09e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0a1:{NFSU2_TR(0x63f0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63f0a4:{NFSU2_TR(0x63f0a4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f0a7:{NFSU2_TR(0x63f0a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63f0aa:{NFSU2_TR(0x63f0aa);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0ad:{NFSU2_TR(0x63f0ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f0b0:{NFSU2_TR(0x63f0b0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f0b3:{NFSU2_TR(0x63f0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f0b6:{NFSU2_TR(0x63f0b6);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0b8:{NFSU2_TR(0x63f0b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63f0bb:{NFSU2_TR(0x63f0bb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f0bd:{NFSU2_TR(0x63f0bd);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f0c0:{NFSU2_TR(0x63f0c0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0c3:{NFSU2_TR(0x63f0c3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f0c6:{NFSU2_TR(0x63f0c6);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f0c9:{NFSU2_TR(0x63f0c9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0cc:{NFSU2_TR(0x63f0cc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f0cf:{NFSU2_TR(0x63f0cf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f0d1:{NFSU2_TR(0x63f0d1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63f0d3:{NFSU2_TR(0x63f0d3);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0d6:{NFSU2_TR(0x63f0d6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63f0d8:{NFSU2_TR(0x63f0d8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63f0da:{NFSU2_TR(0x63f0da);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f0dd:{NFSU2_TR(0x63f0dd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f0df:{NFSU2_TR(0x63f0df);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f0e2:{NFSU2_TR(0x63f0e2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f0e4:{NFSU2_TR(0x63f0e4);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B63f0e6:{NFSU2_TR(0x63f0e6);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63f0e8:{NFSU2_TR(0x63f0e8);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f0eb:{NFSU2_TR(0x63f0eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f0ed:{NFSU2_TR(0x63f0ed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f0ef:{NFSU2_TR(0x63f0ef);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0f2:{NFSU2_TR(0x63f0f2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B63f0f4:{NFSU2_TR(0x63f0f4);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f0f7:{NFSU2_TR(0x63f0f7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B63f0f9:{NFSU2_TR(0x63f0f9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63f0fb:{NFSU2_TR(0x63f0fb);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f0fe:{NFSU2_TR(0x63f0fe);
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
B63f0ff:{NFSU2_TR(0x63f0ff);
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
B63f100:{NFSU2_TR(0x63f100);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f102:{NFSU2_TR(0x63f102);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f104:{NFSU2_TR(0x63f104);
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
B63f105:{NFSU2_TR(0x63f105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f10aull));
TAIL_STATIC(0x63c226u,63c);
}
B63f10a:L63f10a:{c.instructions+=16;NFSU2_TR(0x63f10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f10d:{NFSU2_TR(0x63f10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f10e:{NFSU2_TR(0x63f10e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f111:{NFSU2_TR(0x63f111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f112:{NFSU2_TR(0x63f112);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f115:{NFSU2_TR(0x63f115);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f118:{NFSU2_TR(0x63f118);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f11b:{NFSU2_TR(0x63f11b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f11d:{NFSU2_TR(0x63f11d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f11f:{NFSU2_TR(0x63f11f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f121:{NFSU2_TR(0x63f121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63f122:{NFSU2_TR(0x63f122);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f124:{NFSU2_TR(0x63f124);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63f126:{NFSU2_TR(0x63f126);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f129:{NFSU2_TR(0x63f129);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f12a:{NFSU2_TR(0x63f12a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f12d:L63f12d:{c.instructions+=5;NFSU2_TR(0x63f12d);
__builtin_memmove((R+28),(R+28),4);
}
B63f12f:{NFSU2_TR(0x63f12f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f130:{NFSU2_TR(0x63f130);
__builtin_memmove((R+20),(R+16),4);
}
B63f132:{NFSU2_TR(0x63f132);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f134:{NFSU2_TR(0x63f134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f139ull));
TAIL_STATIC(0x641713u,641);
}
B63f139:L63f139:{c.instructions+=2;NFSU2_TR(0x63f139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f13a:{NFSU2_TR(0x63f13a);
{u32 t_=u32(m4(0x803ef4));TAIL_DYNAMIC(t_);}
}
B63f140:L63f140:{c.instructions+=67;NFSU2_TR(0x63f140);
__builtin_memmove((R+28),(R+28),4);
}
B63f142:{NFSU2_TR(0x63f142);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f143:{NFSU2_TR(0x63f143);
__builtin_memmove((R+20),(R+16),4);
}
B63f145:{NFSU2_TR(0x63f145);
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
B63f148:{NFSU2_TR(0x63f148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f14b:{NFSU2_TR(0x63f14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f14e:{NFSU2_TR(0x63f14e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f151:{NFSU2_TR(0x63f151);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f154:{NFSU2_TR(0x63f154);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f155:{NFSU2_TR(0x63f155);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f158:{NFSU2_TR(0x63f158);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f159:{NFSU2_TR(0x63f159);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f15c:{NFSU2_TR(0x63f15c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f15f:{NFSU2_TR(0x63f15f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f161:{NFSU2_TR(0x63f161);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f164:{NFSU2_TR(0x63f164);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f167:{NFSU2_TR(0x63f167);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f169:{NFSU2_TR(0x63f169);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f16b:{NFSU2_TR(0x63f16b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f16d:{NFSU2_TR(0x63f16d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f16f:{NFSU2_TR(0x63f16f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f172:{NFSU2_TR(0x63f172);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f175:{NFSU2_TR(0x63f175);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f178:{NFSU2_TR(0x63f178);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f17b:{NFSU2_TR(0x63f17b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f17d:{NFSU2_TR(0x63f17d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f17f:{NFSU2_TR(0x63f17f);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f182:{NFSU2_TR(0x63f182);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f185:{NFSU2_TR(0x63f185);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f187:{NFSU2_TR(0x63f187);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f18a:{NFSU2_TR(0x63f18a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f18d:{NFSU2_TR(0x63f18d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f18f:{NFSU2_TR(0x63f18f);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f192:{NFSU2_TR(0x63f192);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f195:{NFSU2_TR(0x63f195);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f198:{NFSU2_TR(0x63f198);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f19b:{NFSU2_TR(0x63f19b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f19d:{NFSU2_TR(0x63f19d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f19f:{NFSU2_TR(0x63f19f);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f1a2:{NFSU2_TR(0x63f1a2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f1a5:{NFSU2_TR(0x63f1a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f1a7:{NFSU2_TR(0x63f1a7);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f1aa:{NFSU2_TR(0x63f1aa);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f1ad:{NFSU2_TR(0x63f1ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f1af:{NFSU2_TR(0x63f1af);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f1b2:{NFSU2_TR(0x63f1b2);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f1b5:{NFSU2_TR(0x63f1b5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f1b8:{NFSU2_TR(0x63f1b8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f1bb:{NFSU2_TR(0x63f1bb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f1bd:{NFSU2_TR(0x63f1bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f1bf:{NFSU2_TR(0x63f1bf);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f1c2:{NFSU2_TR(0x63f1c2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f1c5:{NFSU2_TR(0x63f1c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f1c7:{NFSU2_TR(0x63f1c7);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f1ca:{NFSU2_TR(0x63f1ca);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f1cd:{NFSU2_TR(0x63f1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f1d0:{NFSU2_TR(0x63f1d0);
__builtin_memmove((R+28),(R+0),4);
}
B63f1d2:{NFSU2_TR(0x63f1d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f1d4:{NFSU2_TR(0x63f1d4);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f1d7:{NFSU2_TR(0x63f1d7);
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
B63f1d8:{NFSU2_TR(0x63f1d8);
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
B63f1d9:{NFSU2_TR(0x63f1d9);
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
B63f1da:{NFSU2_TR(0x63f1da);
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
B63f1db:{NFSU2_TR(0x63f1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f1dc:{NFSU2_TR(0x63f1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f1dd:{NFSU2_TR(0x63f1dd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f1de:{NFSU2_TR(0x63f1de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f1e1:L63f1e1:{c.instructions+=5;NFSU2_TR(0x63f1e1);
__builtin_memmove((R+28),(R+28),4);
}
B63f1e3:{NFSU2_TR(0x63f1e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f1e4:{NFSU2_TR(0x63f1e4);
__builtin_memmove((R+20),(R+16),4);
}
B63f1e6:{NFSU2_TR(0x63f1e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f1e8:{NFSU2_TR(0x63f1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f1edull));
TAIL_STATIC(0x641713u,641);
}
B63f1ed:L63f1ed:{c.instructions+=2;NFSU2_TR(0x63f1ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f1ee:{NFSU2_TR(0x63f1ee);
{u32 t_=u32(m4(0x803f7c));TAIL_DYNAMIC(t_);}
}
B63f1f4:L63f1f4:{c.instructions+=10;NFSU2_TR(0x63f1f4);
__builtin_memmove((R+28),(R+28),4);
}
B63f1f6:{NFSU2_TR(0x63f1f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f1f7:{NFSU2_TR(0x63f1f7);
__builtin_memmove((R+20),(R+16),4);
}
B63f1f9:{NFSU2_TR(0x63f1f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B63f1fc:{NFSU2_TR(0x63f1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f1ff:{NFSU2_TR(0x63f1ff);
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
B63f201:{NFSU2_TR(0x63f201);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f202:{NFSU2_TR(0x63f202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63f205:{NFSU2_TR(0x63f205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f208:{NFSU2_TR(0x63f208);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63f2ad;}}
}
B63f20e:L63f20e:{c.instructions+=4;NFSU2_TR(0x63f20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f211:{NFSU2_TR(0x63f211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f214:{NFSU2_TR(0x63f214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f215:{NFSU2_TR(0x63f215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f216:L63f216:{c.instructions+=58;NFSU2_TR(0x63f216);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f219:{NFSU2_TR(0x63f219);
__builtin_memmove((R+28),(R+12),4);
}
B63f21b:{NFSU2_TR(0x63f21b);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f21e:{NFSU2_TR(0x63f21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B63f221:{NFSU2_TR(0x63f221);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f224:{NFSU2_TR(0x63f224);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f227:{NFSU2_TR(0x63f227);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f22a:{NFSU2_TR(0x63f22a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f22c:{NFSU2_TR(0x63f22c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f22f:{NFSU2_TR(0x63f22f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f232:{NFSU2_TR(0x63f232);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f234:{NFSU2_TR(0x63f234);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f236:{NFSU2_TR(0x63f236);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f238:{NFSU2_TR(0x63f238);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f23a:{NFSU2_TR(0x63f23a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f23d:{NFSU2_TR(0x63f23d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f240:{NFSU2_TR(0x63f240);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f243:{NFSU2_TR(0x63f243);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f245:{NFSU2_TR(0x63f245);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f248:{NFSU2_TR(0x63f248);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f24a:{NFSU2_TR(0x63f24a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f24d:{NFSU2_TR(0x63f24d);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f250:{NFSU2_TR(0x63f250);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f252:{NFSU2_TR(0x63f252);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f255:{NFSU2_TR(0x63f255);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f258:{NFSU2_TR(0x63f258);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f25a:{NFSU2_TR(0x63f25a);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f25d:{NFSU2_TR(0x63f25d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f260:{NFSU2_TR(0x63f260);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f263:{NFSU2_TR(0x63f263);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f266:{NFSU2_TR(0x63f266);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f269:{NFSU2_TR(0x63f269);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f26b:{NFSU2_TR(0x63f26b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f26e:{NFSU2_TR(0x63f26e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f270:{NFSU2_TR(0x63f270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f272:{NFSU2_TR(0x63f272);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f275:{NFSU2_TR(0x63f275);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f278:{NFSU2_TR(0x63f278);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f27a:{NFSU2_TR(0x63f27a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f27d:{NFSU2_TR(0x63f27d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f280:{NFSU2_TR(0x63f280);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f283:{NFSU2_TR(0x63f283);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f286:{NFSU2_TR(0x63f286);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f288:{NFSU2_TR(0x63f288);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f28a:{NFSU2_TR(0x63f28a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f28d:{NFSU2_TR(0x63f28d);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f290:{NFSU2_TR(0x63f290);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f292:{NFSU2_TR(0x63f292);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f295:{NFSU2_TR(0x63f295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B63f298:{NFSU2_TR(0x63f298);
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
B63f299:{NFSU2_TR(0x63f299);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f29c:{NFSU2_TR(0x63f29c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f29e:{NFSU2_TR(0x63f29e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f2a1:{NFSU2_TR(0x63f2a1);
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
B63f2a2:{NFSU2_TR(0x63f2a2);
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
B63f2a3:{NFSU2_TR(0x63f2a3);
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
B63f2a4:{NFSU2_TR(0x63f2a4);
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
B63f2a5:{NFSU2_TR(0x63f2a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63f216u);}goto L63f216;}}
}
B63f2ab:L63f2ab:{c.instructions+=2;NFSU2_TR(0x63f2ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f2ac:{NFSU2_TR(0x63f2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f2ad:L63f2ad:{c.instructions+=4;NFSU2_TR(0x63f2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f2b0:{NFSU2_TR(0x63f2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63f2b1:{NFSU2_TR(0x63f2b1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f2b2:{NFSU2_TR(0x63f2b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f2b5:L63f2b5:{c.instructions+=12;NFSU2_TR(0x63f2b5);
__builtin_memmove((R+28),(R+28),4);
}
B63f2b7:{NFSU2_TR(0x63f2b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f2b8:{NFSU2_TR(0x63f2b8);
__builtin_memmove((R+20),(R+16),4);
}
B63f2ba:{NFSU2_TR(0x63f2ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B63f2bd:{NFSU2_TR(0x63f2bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f2be:{NFSU2_TR(0x63f2be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f2bf:{NFSU2_TR(0x63f2bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f2c0:{NFSU2_TR(0x63f2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63f2c3:{NFSU2_TR(0x63f2c3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f2c5:{NFSU2_TR(0x63f2c5);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f2cb:{NFSU2_TR(0x63f2cb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f2cd:{NFSU2_TR(0x63f2cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f2d2ull));
TAIL_STATIC(0x75dd28u,75d);
}
B63f2d2:L63f2d2:{c.instructions+=12;NFSU2_TR(0x63f2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f2d5:{NFSU2_TR(0x63f2d5);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B63f2d8:{NFSU2_TR(0x63f2d8);
w4(R+24,u32(0xffull));
}
B63f2dd:{NFSU2_TR(0x63f2dd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B63f2df:{NFSU2_TR(0x63f2df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f2e5:{NFSU2_TR(0x63f2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f2e8:{NFSU2_TR(0x63f2e8);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63f2ea:{NFSU2_TR(0x63f2ea);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63f2ed:{NFSU2_TR(0x63f2ed);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f2f0:{NFSU2_TR(0x63f2f0);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f2f6:{NFSU2_TR(0x63f2f6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f2f8:{NFSU2_TR(0x63f2f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f2fdull));
TAIL_STATIC(0x75dd28u,75d);
}
B63f2fd:L63f2fd:{c.instructions+=14;NFSU2_TR(0x63f2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f300:{NFSU2_TR(0x63f300);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B63f303:{NFSU2_TR(0x63f303);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B63f305:{NFSU2_TR(0x63f305);
__builtin_memmove((R+12),(R+0),4);
}
B63f307:{NFSU2_TR(0x63f307);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f30d:{NFSU2_TR(0x63f30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f310:{NFSU2_TR(0x63f310);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63f312:{NFSU2_TR(0x63f312);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f315:{NFSU2_TR(0x63f315);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B63f317:{NFSU2_TR(0x63f317);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f31a:{NFSU2_TR(0x63f31a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f31d:{NFSU2_TR(0x63f31d);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f323:{NFSU2_TR(0x63f323);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f325:{NFSU2_TR(0x63f325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f32aull));
TAIL_STATIC(0x75dd28u,75d);
}
B63f32a:L63f32a:{c.instructions+=175;NFSU2_TR(0x63f32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f32d:{NFSU2_TR(0x63f32d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9460ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B63f334:{NFSU2_TR(0x63f334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f337:{NFSU2_TR(0x63f337);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63f33a:{NFSU2_TR(0x63f33a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B63f33c:{NFSU2_TR(0x63f33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f33f:{NFSU2_TR(0x63f33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f342:{NFSU2_TR(0x63f342);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63f344:{NFSU2_TR(0x63f344);
__builtin_memmove((R+4),(R+0),4);
}
B63f346:{NFSU2_TR(0x63f346);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63f349:{NFSU2_TR(0x63f349);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B63f34b:{NFSU2_TR(0x63f34b);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63f34e:{NFSU2_TR(0x63f34e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B63f34f:{NFSU2_TR(0x63f34f);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63f351:{NFSU2_TR(0x63f351);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B63f353:{NFSU2_TR(0x63f353);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f359:{NFSU2_TR(0x63f359);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9460ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B63f360:{NFSU2_TR(0x63f360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63f363:{NFSU2_TR(0x63f363);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63f365:{NFSU2_TR(0x63f365);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B63f367:{NFSU2_TR(0x63f367);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9460ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B63f36e:{NFSU2_TR(0x63f36e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f371:{NFSU2_TR(0x63f371);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B63f373:{NFSU2_TR(0x63f373);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9460ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B63f37a:{NFSU2_TR(0x63f37a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63f37c:{NFSU2_TR(0x63f37c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63f37e:{NFSU2_TR(0x63f37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f381:{NFSU2_TR(0x63f381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63f384:{NFSU2_TR(0x63f384);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B63f386:{NFSU2_TR(0x63f386);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63f38c:{NFSU2_TR(0x63f38c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9460ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B63f393:{NFSU2_TR(0x63f393);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B63f395:{NFSU2_TR(0x63f395);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9460ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B63f39c:{NFSU2_TR(0x63f39c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B63f39e:{NFSU2_TR(0x63f39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3a1:{NFSU2_TR(0x63f3a1);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B63f3a3:{NFSU2_TR(0x63f3a3);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f3a6:{NFSU2_TR(0x63f3a6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f3a8:{NFSU2_TR(0x63f3a8);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63f3aa:{NFSU2_TR(0x63f3aa);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63f3b0:{NFSU2_TR(0x63f3b0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B63f3b2:{NFSU2_TR(0x63f3b2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B63f3b4:{NFSU2_TR(0x63f3b4);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f3b7:{NFSU2_TR(0x63f3b7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f3b9:{NFSU2_TR(0x63f3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3bc:{NFSU2_TR(0x63f3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3c3:{NFSU2_TR(0x63f3c3);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f3c6:{NFSU2_TR(0x63f3c6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63f3c8:{NFSU2_TR(0x63f3c8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f3cb:{NFSU2_TR(0x63f3cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f3cd:{NFSU2_TR(0x63f3cd);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63f3cf:{NFSU2_TR(0x63f3cf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f3d1:{NFSU2_TR(0x63f3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f3d4:{NFSU2_TR(0x63f3d4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B63f3d6:{NFSU2_TR(0x63f3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3d9:{NFSU2_TR(0x63f3d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f3db:{NFSU2_TR(0x63f3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3e2:{NFSU2_TR(0x63f3e2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f3e4:{NFSU2_TR(0x63f3e4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f3e7:{NFSU2_TR(0x63f3e7);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63f3e9:{NFSU2_TR(0x63f3e9);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f3ec:{NFSU2_TR(0x63f3ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f3ee:{NFSU2_TR(0x63f3ee);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63f3f0:{NFSU2_TR(0x63f3f0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f3f2:{NFSU2_TR(0x63f3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3f5:{NFSU2_TR(0x63f3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3f8:{NFSU2_TR(0x63f3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B63f3ff:{NFSU2_TR(0x63f3ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f401:{NFSU2_TR(0x63f401);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B63f403:{NFSU2_TR(0x63f403);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f406:{NFSU2_TR(0x63f406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f40d:{NFSU2_TR(0x63f40d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63f40f:{NFSU2_TR(0x63f40f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B63f411:{NFSU2_TR(0x63f411);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f414:{NFSU2_TR(0x63f414);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63f416:{NFSU2_TR(0x63f416);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63f418:{NFSU2_TR(0x63f418);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f41a:{NFSU2_TR(0x63f41a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f41d:{NFSU2_TR(0x63f41d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f420:{NFSU2_TR(0x63f420);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f423:{NFSU2_TR(0x63f423);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f425:{NFSU2_TR(0x63f425);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B63f427:{NFSU2_TR(0x63f427);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f429:{NFSU2_TR(0x63f429);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f42b:{NFSU2_TR(0x63f42b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63f42d:{NFSU2_TR(0x63f42d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f430:{NFSU2_TR(0x63f430);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f433:{NFSU2_TR(0x63f433);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f436:{NFSU2_TR(0x63f436);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f438:{NFSU2_TR(0x63f438);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B63f43a:{NFSU2_TR(0x63f43a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f43c:{NFSU2_TR(0x63f43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f43f:{NFSU2_TR(0x63f43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f446:{NFSU2_TR(0x63f446);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f448:{NFSU2_TR(0x63f448);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63f44a:{NFSU2_TR(0x63f44a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f44d:{NFSU2_TR(0x63f44d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63f44f:{NFSU2_TR(0x63f44f);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B63f451:{NFSU2_TR(0x63f451);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f454:{NFSU2_TR(0x63f454);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63f456:{NFSU2_TR(0x63f456);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f459:{NFSU2_TR(0x63f459);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f45b:{NFSU2_TR(0x63f45b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f45d:{NFSU2_TR(0x63f45d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f45f:{NFSU2_TR(0x63f45f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f462:{NFSU2_TR(0x63f462);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f465:{NFSU2_TR(0x63f465);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f467:{NFSU2_TR(0x63f467);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f46a:{NFSU2_TR(0x63f46a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f46c:{NFSU2_TR(0x63f46c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63f46e:{NFSU2_TR(0x63f46e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f470:{NFSU2_TR(0x63f470);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f472:{NFSU2_TR(0x63f472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f475:{NFSU2_TR(0x63f475);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f478:{NFSU2_TR(0x63f478);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B63f47a:{NFSU2_TR(0x63f47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f47d:{NFSU2_TR(0x63f47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f484:{NFSU2_TR(0x63f484);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f487:{NFSU2_TR(0x63f487);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63f489:{NFSU2_TR(0x63f489);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f48c:{NFSU2_TR(0x63f48c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f48e:{NFSU2_TR(0x63f48e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63f490:{NFSU2_TR(0x63f490);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f492:{NFSU2_TR(0x63f492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f495:{NFSU2_TR(0x63f495);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f498:{NFSU2_TR(0x63f498);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63f49f:{NFSU2_TR(0x63f49f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f4a1:{NFSU2_TR(0x63f4a1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63f4a3:{NFSU2_TR(0x63f4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B63f4a6:{NFSU2_TR(0x63f4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7a9c68ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B63f4ad:{NFSU2_TR(0x63f4ad);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63f4af:{NFSU2_TR(0x63f4af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f4b0:{NFSU2_TR(0x63f4b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f4b1:{NFSU2_TR(0x63f4b1);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4b4:{NFSU2_TR(0x63f4b4);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63f4b6:{NFSU2_TR(0x63f4b6);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f4b9:{NFSU2_TR(0x63f4b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f4bb:{NFSU2_TR(0x63f4bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f4bd:{NFSU2_TR(0x63f4bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f4bf:{NFSU2_TR(0x63f4bf);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f4c2:{NFSU2_TR(0x63f4c2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4c5:{NFSU2_TR(0x63f4c5);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f4c8:{NFSU2_TR(0x63f4c8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4cb:{NFSU2_TR(0x63f4cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f4cd:{NFSU2_TR(0x63f4cd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63f4cf:{NFSU2_TR(0x63f4cf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4d1:{NFSU2_TR(0x63f4d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f4d3:{NFSU2_TR(0x63f4d3);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63f4d5:{NFSU2_TR(0x63f4d5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f4d8:{NFSU2_TR(0x63f4d8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4db:{NFSU2_TR(0x63f4db);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f4de:{NFSU2_TR(0x63f4de);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4e1:{NFSU2_TR(0x63f4e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f4e3:{NFSU2_TR(0x63f4e3);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f4e6:{NFSU2_TR(0x63f4e6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4e8:{NFSU2_TR(0x63f4e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f4ea:{NFSU2_TR(0x63f4ea);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63f4ec:{NFSU2_TR(0x63f4ec);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4ef:{NFSU2_TR(0x63f4ef);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63f4f1:{NFSU2_TR(0x63f4f1);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f4f4:{NFSU2_TR(0x63f4f4);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f4f7:{NFSU2_TR(0x63f4f7);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f4fa:{NFSU2_TR(0x63f4fa);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63f4fd:{NFSU2_TR(0x63f4fd);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f500:{NFSU2_TR(0x63f500);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63f502:{NFSU2_TR(0x63f502);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63f508:{NFSU2_TR(0x63f508);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f50b:{NFSU2_TR(0x63f50b);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f50e:{NFSU2_TR(0x63f50e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B63f510:{NFSU2_TR(0x63f510);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f513:{NFSU2_TR(0x63f513);
{u32 ea_=u32(u32(7885072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f519:{NFSU2_TR(0x63f519);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63f51b:{NFSU2_TR(0x63f51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63f51c:{NFSU2_TR(0x63f51c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f51d:{NFSU2_TR(0x63f51d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f520:L63f520:{c.instructions+=5;NFSU2_TR(0x63f520);
__builtin_memmove((R+28),(R+28),4);
}
B63f522:{NFSU2_TR(0x63f522);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f523:{NFSU2_TR(0x63f523);
__builtin_memmove((R+20),(R+16),4);
}
B63f525:{NFSU2_TR(0x63f525);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f527:{NFSU2_TR(0x63f527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f52cull));
TAIL_STATIC(0x641713u,641);
}
B63f52c:L63f52c:{c.instructions+=2;NFSU2_TR(0x63f52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f52d:{NFSU2_TR(0x63f52d);
{u32 t_=u32(m4(0x803f80));TAIL_DYNAMIC(t_);}
}
B63f533:L63f533:{c.instructions+=5;NFSU2_TR(0x63f533);
__builtin_memmove((R+28),(R+28),4);
}
B63f535:{NFSU2_TR(0x63f535);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f536:{NFSU2_TR(0x63f536);
__builtin_memmove((R+20),(R+16),4);
}
B63f538:{NFSU2_TR(0x63f538);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f53a:{NFSU2_TR(0x63f53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f53full));
TAIL_STATIC(0x641713u,641);
}
B63f53f:L63f53f:{c.instructions+=2;NFSU2_TR(0x63f53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63f540:{NFSU2_TR(0x63f540);
{u32 t_=u32(m4(0x803f84));TAIL_DYNAMIC(t_);}
}
B63f546:L63f546:{c.instructions+=23;NFSU2_TR(0x63f546);
__builtin_memmove((R+28),(R+28),4);
}
B63f548:{NFSU2_TR(0x63f548);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f549:{NFSU2_TR(0x63f549);
__builtin_memmove((R+20),(R+16),4);
}
B63f54b:{NFSU2_TR(0x63f54b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f54c:{NFSU2_TR(0x63f54c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f54d:{NFSU2_TR(0x63f54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f550:{NFSU2_TR(0x63f550);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f553:{NFSU2_TR(0x63f553);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f554:{NFSU2_TR(0x63f554);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f556:{NFSU2_TR(0x63f556);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f557:{NFSU2_TR(0x63f557);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f559:{NFSU2_TR(0x63f559);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63f55b:{NFSU2_TR(0x63f55b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63f55d:{NFSU2_TR(0x63f55d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63f55f:{NFSU2_TR(0x63f55f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f561:{NFSU2_TR(0x63f561);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f564:{NFSU2_TR(0x63f564);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f566:{NFSU2_TR(0x63f566);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f568:{NFSU2_TR(0x63f568);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f56a:{NFSU2_TR(0x63f56a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f56e:{NFSU2_TR(0x63f56e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f571:{NFSU2_TR(0x63f571);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f574:{NFSU2_TR(0x63f574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f579ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63f579:L63f579:{c.instructions+=2;NFSU2_TR(0x63f579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63f57b:{NFSU2_TR(0x63f57b);
if(r1(R+518)){{goto L63f590;}}
}
B63f57d:L63f57d:{c.instructions+=3;NFSU2_TR(0x63f57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f580:{NFSU2_TR(0x63f580);
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
B63f582:{NFSU2_TR(0x63f582);
if(r1(R+518)){{goto L63f5ce;}}
}
B63f584:L63f584:{c.instructions+=3;NFSU2_TR(0x63f584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63f586:{NFSU2_TR(0x63f586);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63f588:{NFSU2_TR(0x63f588);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f58b:L63f58b:{c.instructions+=2;NFSU2_TR(0x63f58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f58e:{NFSU2_TR(0x63f58e);
{goto L63f5ce;}
}
B63f590:L63f590:{c.instructions+=6;NFSU2_TR(0x63f590);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f593:{NFSU2_TR(0x63f593);
{u32 ea_=u32(u32(8041608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63f599:{NFSU2_TR(0x63f599);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63f59b:{NFSU2_TR(0x63f59b);
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
B63f59e:{NFSU2_TR(0x63f59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f5a1:{NFSU2_TR(0x63f5a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63f5c5;}}
}
B63f5a3:L63f5a3:{c.instructions+=12;NFSU2_TR(0x63f5a3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f5a6:{NFSU2_TR(0x63f5a6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63f5a8:{NFSU2_TR(0x63f5a8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63f5ae:{NFSU2_TR(0x63f5ae);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f5b0:{NFSU2_TR(0x63f5b0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f5b2:{NFSU2_TR(0x63f5b2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f5b5:{NFSU2_TR(0x63f5b5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f5b8:{NFSU2_TR(0x63f5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f5bb:{NFSU2_TR(0x63f5bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63f5bd:{NFSU2_TR(0x63f5bd);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f5c0:{NFSU2_TR(0x63f5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f5c3:{NFSU2_TR(0x63f5c3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63f58bu);}goto L63f58b;}
}
B63f5c5:L63f5c5:{c.instructions+=4;NFSU2_TR(0x63f5c5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f5c7:{NFSU2_TR(0x63f5c7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f5c9:{NFSU2_TR(0x63f5c9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f5cb:{NFSU2_TR(0x63f5cb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f5ce:L63f5ce:{c.instructions+=2;NFSU2_TR(0x63f5ce);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f5cf:{NFSU2_TR(0x63f5cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f5d2:L63f5d2:{c.instructions+=47;NFSU2_TR(0x63f5d2);
__builtin_memmove((R+28),(R+28),4);
}
B63f5d4:{NFSU2_TR(0x63f5d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f5d5:{NFSU2_TR(0x63f5d5);
__builtin_memmove((R+20),(R+16),4);
}
B63f5d7:{NFSU2_TR(0x63f5d7);
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
B63f5da:{NFSU2_TR(0x63f5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f5dd:{NFSU2_TR(0x63f5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f5e0:{NFSU2_TR(0x63f5e0);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f5e3:{NFSU2_TR(0x63f5e3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f5e6:{NFSU2_TR(0x63f5e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f5e7:{NFSU2_TR(0x63f5e7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f5e9:{NFSU2_TR(0x63f5e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f5ea:{NFSU2_TR(0x63f5ea);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f5ec:{NFSU2_TR(0x63f5ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f5ef:{NFSU2_TR(0x63f5ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f5f1:{NFSU2_TR(0x63f5f1);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f5f4:{NFSU2_TR(0x63f5f4);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f5f7:{NFSU2_TR(0x63f5f7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f5fa:{NFSU2_TR(0x63f5fa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f5fc:{NFSU2_TR(0x63f5fc);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f5ff:{NFSU2_TR(0x63f5ff);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f602:{NFSU2_TR(0x63f602);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f604:{NFSU2_TR(0x63f604);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f607:{NFSU2_TR(0x63f607);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f60a:{NFSU2_TR(0x63f60a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f60d:{NFSU2_TR(0x63f60d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f60f:{NFSU2_TR(0x63f60f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f612:{NFSU2_TR(0x63f612);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f615:{NFSU2_TR(0x63f615);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f617:{NFSU2_TR(0x63f617);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f61a:{NFSU2_TR(0x63f61a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f61d:{NFSU2_TR(0x63f61d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f620:{NFSU2_TR(0x63f620);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f622:{NFSU2_TR(0x63f622);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f625:{NFSU2_TR(0x63f625);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f628:{NFSU2_TR(0x63f628);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f62a:{NFSU2_TR(0x63f62a);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f62d:{NFSU2_TR(0x63f62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f630:{NFSU2_TR(0x63f630);
__builtin_memmove((R+28),(R+0),4);
}
B63f632:{NFSU2_TR(0x63f632);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f635:{NFSU2_TR(0x63f635);
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
B63f636:{NFSU2_TR(0x63f636);
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
B63f637:{NFSU2_TR(0x63f637);
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
B63f638:{NFSU2_TR(0x63f638);
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
B63f639:{NFSU2_TR(0x63f639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f63a:{NFSU2_TR(0x63f63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f63b:{NFSU2_TR(0x63f63b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f63c:{NFSU2_TR(0x63f63c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f63f:L63f63f:{c.instructions+=10;NFSU2_TR(0x63f63f);
__builtin_memmove((R+28),(R+28),4);
}
B63f641:{NFSU2_TR(0x63f641);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f642:{NFSU2_TR(0x63f642);
__builtin_memmove((R+20),(R+16),4);
}
B63f644:{NFSU2_TR(0x63f644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B63f647:{NFSU2_TR(0x63f647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f64a:{NFSU2_TR(0x63f64a);
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
B63f64c:{NFSU2_TR(0x63f64c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f64d:{NFSU2_TR(0x63f64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63f650:{NFSU2_TR(0x63f650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f653:{NFSU2_TR(0x63f653);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63f6bc;}}
}
B63f655:L63f655:{c.instructions+=4;NFSU2_TR(0x63f655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f658:{NFSU2_TR(0x63f658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f65b:{NFSU2_TR(0x63f65b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f65c:{NFSU2_TR(0x63f65c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f65d:L63f65d:{c.instructions+=38;NFSU2_TR(0x63f65d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f660:{NFSU2_TR(0x63f660);
__builtin_memmove((R+28),(R+12),4);
}
B63f662:{NFSU2_TR(0x63f662);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f665:{NFSU2_TR(0x63f665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B63f668:{NFSU2_TR(0x63f668);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f66a:{NFSU2_TR(0x63f66a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f66d:{NFSU2_TR(0x63f66d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f66f:{NFSU2_TR(0x63f66f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f671:{NFSU2_TR(0x63f671);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f674:{NFSU2_TR(0x63f674);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f677:{NFSU2_TR(0x63f677);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f67a:{NFSU2_TR(0x63f67a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f67c:{NFSU2_TR(0x63f67c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f67f:{NFSU2_TR(0x63f67f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f682:{NFSU2_TR(0x63f682);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f684:{NFSU2_TR(0x63f684);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f687:{NFSU2_TR(0x63f687);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f68a:{NFSU2_TR(0x63f68a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f68d:{NFSU2_TR(0x63f68d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f68f:{NFSU2_TR(0x63f68f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f692:{NFSU2_TR(0x63f692);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f695:{NFSU2_TR(0x63f695);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f697:{NFSU2_TR(0x63f697);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f69a:{NFSU2_TR(0x63f69a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f69d:{NFSU2_TR(0x63f69d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f69f:{NFSU2_TR(0x63f69f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6a2:{NFSU2_TR(0x63f6a2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6a5:{NFSU2_TR(0x63f6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B63f6a8:{NFSU2_TR(0x63f6a8);
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
B63f6a9:{NFSU2_TR(0x63f6a9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6ac:{NFSU2_TR(0x63f6ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f6ae:{NFSU2_TR(0x63f6ae);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f6b1:{NFSU2_TR(0x63f6b1);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f6b4:{NFSU2_TR(0x63f6b4);
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
B63f6b5:{NFSU2_TR(0x63f6b5);
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
B63f6b6:{NFSU2_TR(0x63f6b6);
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
B63f6b7:{NFSU2_TR(0x63f6b7);
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
B63f6b8:{NFSU2_TR(0x63f6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63f65du);}goto L63f65d;}}
}
B63f6ba:L63f6ba:{c.instructions+=2;NFSU2_TR(0x63f6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f6bb:{NFSU2_TR(0x63f6bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f6bc:L63f6bc:{c.instructions+=4;NFSU2_TR(0x63f6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f6bf:{NFSU2_TR(0x63f6bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63f6c0:{NFSU2_TR(0x63f6c0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f6c1:{NFSU2_TR(0x63f6c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f6c4:L63f6c4:{c.instructions+=40;NFSU2_TR(0x63f6c4);
__builtin_memmove((R+28),(R+28),4);
}
B63f6c6:{NFSU2_TR(0x63f6c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f6c7:{NFSU2_TR(0x63f6c7);
__builtin_memmove((R+20),(R+16),4);
}
B63f6c9:{NFSU2_TR(0x63f6c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f6ca:{NFSU2_TR(0x63f6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f6cd:{NFSU2_TR(0x63f6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f6d0:{NFSU2_TR(0x63f6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f6d3:{NFSU2_TR(0x63f6d3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6d5:{NFSU2_TR(0x63f6d5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6d7:{NFSU2_TR(0x63f6d7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6d9:{NFSU2_TR(0x63f6d9);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6dc:{NFSU2_TR(0x63f6dc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6de:{NFSU2_TR(0x63f6de);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6e1:{NFSU2_TR(0x63f6e1);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B63f6e3:{NFSU2_TR(0x63f6e3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6e6:{NFSU2_TR(0x63f6e6);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6e9:{NFSU2_TR(0x63f6e9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6ec:{NFSU2_TR(0x63f6ec);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6ef:{NFSU2_TR(0x63f6ef);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f6f2:{NFSU2_TR(0x63f6f2);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f6f5:{NFSU2_TR(0x63f6f5);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B63f6f7:{NFSU2_TR(0x63f6f7);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B63f6f9:{NFSU2_TR(0x63f6f9);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B63f6fb:{NFSU2_TR(0x63f6fb);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B63f6fd:{NFSU2_TR(0x63f6fd);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f700:{NFSU2_TR(0x63f700);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f702:{NFSU2_TR(0x63f702);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f705:{NFSU2_TR(0x63f705);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B63f707:{NFSU2_TR(0x63f707);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f70a:{NFSU2_TR(0x63f70a);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B63f70c:{NFSU2_TR(0x63f70c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f70e:{NFSU2_TR(0x63f70e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f711:{NFSU2_TR(0x63f711);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f714:{NFSU2_TR(0x63f714);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f716:{NFSU2_TR(0x63f716);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f717:{NFSU2_TR(0x63f717);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f718:{NFSU2_TR(0x63f718);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f71c:{NFSU2_TR(0x63f71c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f71f:{NFSU2_TR(0x63f71f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f722:{NFSU2_TR(0x63f722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f727ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63f727:L63f727:{c.instructions+=3;NFSU2_TR(0x63f727);
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
B63f729:{NFSU2_TR(0x63f729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f72c:{NFSU2_TR(0x63f72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63f73f;}}
}
B63f72e:L63f72e:{c.instructions+=7;NFSU2_TR(0x63f72e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f730:{NFSU2_TR(0x63f730);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63f733:{NFSU2_TR(0x63f733);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f735:{NFSU2_TR(0x63f735);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f737:{NFSU2_TR(0x63f737);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f739:{NFSU2_TR(0x63f739);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f73c:{NFSU2_TR(0x63f73c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f73f:L63f73f:{c.instructions+=2;NFSU2_TR(0x63f73f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f740:{NFSU2_TR(0x63f740);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f743:L63f743:{c.instructions+=12;NFSU2_TR(0x63f743);
__builtin_memmove((R+28),(R+28),4);
}
B63f745:{NFSU2_TR(0x63f745);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f746:{NFSU2_TR(0x63f746);
__builtin_memmove((R+20),(R+16),4);
}
B63f748:{NFSU2_TR(0x63f748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B63f74b:{NFSU2_TR(0x63f74b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f74c:{NFSU2_TR(0x63f74c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f74d:{NFSU2_TR(0x63f74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63f750:{NFSU2_TR(0x63f750);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f751:{NFSU2_TR(0x63f751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63f754:{NFSU2_TR(0x63f754);
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
B63f756:{NFSU2_TR(0x63f756);
__builtin_memmove((R+12),(R+24),4);
}
B63f758:{NFSU2_TR(0x63f758);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63f7d4;}}
}
B63f75a:L63f75a:{c.instructions+=2;NFSU2_TR(0x63f75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f75d:{NFSU2_TR(0x63f75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f760:L63f760:{c.instructions+=32;NFSU2_TR(0x63f760);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f763:{NFSU2_TR(0x63f763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f764:{NFSU2_TR(0x63f764);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f767:{NFSU2_TR(0x63f767);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f768:{NFSU2_TR(0x63f768);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f76a:{NFSU2_TR(0x63f76a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f76c:{NFSU2_TR(0x63f76c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f76e:{NFSU2_TR(0x63f76e);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f771:{NFSU2_TR(0x63f771);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f774:{NFSU2_TR(0x63f774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f777:{NFSU2_TR(0x63f777);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f77a:{NFSU2_TR(0x63f77a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f77c:{NFSU2_TR(0x63f77c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f77f:{NFSU2_TR(0x63f77f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f782:{NFSU2_TR(0x63f782);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f784:{NFSU2_TR(0x63f784);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f787:{NFSU2_TR(0x63f787);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f78a:{NFSU2_TR(0x63f78a);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f78d:{NFSU2_TR(0x63f78d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f78f:{NFSU2_TR(0x63f78f);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f792:{NFSU2_TR(0x63f792);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f795:{NFSU2_TR(0x63f795);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f797:{NFSU2_TR(0x63f797);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63f79a:{NFSU2_TR(0x63f79a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63f79c:{NFSU2_TR(0x63f79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f79f:{NFSU2_TR(0x63f79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63f7a2:{NFSU2_TR(0x63f7a2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f7a5:{NFSU2_TR(0x63f7a5);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f7a7:{NFSU2_TR(0x63f7a7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f7ab:{NFSU2_TR(0x63f7ab);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f7ae:{NFSU2_TR(0x63f7ae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f7b1:{NFSU2_TR(0x63f7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f7b6ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63f7b6:L63f7b6:{c.instructions+=2;NFSU2_TR(0x63f7b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63f7b8:{NFSU2_TR(0x63f7b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63f7cb;}}
}
B63f7ba:L63f7ba:{c.instructions+=7;NFSU2_TR(0x63f7ba);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f7bc:{NFSU2_TR(0x63f7bc);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63f7bf:{NFSU2_TR(0x63f7bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f7c1:{NFSU2_TR(0x63f7c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f7c3:{NFSU2_TR(0x63f7c3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f7c5:{NFSU2_TR(0x63f7c5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f7c8:{NFSU2_TR(0x63f7c8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f7cb:L63f7cb:{c.instructions+=4;NFSU2_TR(0x63f7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B63f7ce:{NFSU2_TR(0x63f7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B63f7d1:{NFSU2_TR(0x63f7d1);
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
B63f7d2:{NFSU2_TR(0x63f7d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63f760u);}goto L63f760;}}
}
B63f7d4:L63f7d4:{c.instructions+=6;NFSU2_TR(0x63f7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f7d5:{NFSU2_TR(0x63f7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f7d6:{NFSU2_TR(0x63f7d6);
__builtin_memmove((R+0),(R+12),4);
}
B63f7d8:{NFSU2_TR(0x63f7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63f7d9:{NFSU2_TR(0x63f7d9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f7da:{NFSU2_TR(0x63f7da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f7dd:L63f7dd:{c.instructions+=29;NFSU2_TR(0x63f7dd);
__builtin_memmove((R+28),(R+28),4);
}
B63f7df:{NFSU2_TR(0x63f7df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f7e0:{NFSU2_TR(0x63f7e0);
__builtin_memmove((R+20),(R+16),4);
}
B63f7e2:{NFSU2_TR(0x63f7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B63f7e5:{NFSU2_TR(0x63f7e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f7e6:{NFSU2_TR(0x63f7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63f7e9:{NFSU2_TR(0x63f7e9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f7ec:{NFSU2_TR(0x63f7ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f7ed:{NFSU2_TR(0x63f7ed);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f7f0:{NFSU2_TR(0x63f7f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f7f1:{NFSU2_TR(0x63f7f1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f7f3:{NFSU2_TR(0x63f7f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f7f4:{NFSU2_TR(0x63f7f4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f7f6:{NFSU2_TR(0x63f7f6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63f7f8:{NFSU2_TR(0x63f7f8);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63f7fa:{NFSU2_TR(0x63f7fa);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63f7fc:{NFSU2_TR(0x63f7fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f7fe:{NFSU2_TR(0x63f7fe);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63f800:{NFSU2_TR(0x63f800);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B63f802:{NFSU2_TR(0x63f802);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f804:{NFSU2_TR(0x63f804);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f807:{NFSU2_TR(0x63f807);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f809:{NFSU2_TR(0x63f809);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f80b:{NFSU2_TR(0x63f80b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63f80d:{NFSU2_TR(0x63f80d);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f80f:{NFSU2_TR(0x63f80f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f813:{NFSU2_TR(0x63f813);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f816:{NFSU2_TR(0x63f816);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f819:{NFSU2_TR(0x63f819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f81eull));
TAIL_STATIC(0x63bd36u,63b);
}
B63f81e:L63f81e:{c.instructions+=2;NFSU2_TR(0x63f81e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63f820:{NFSU2_TR(0x63f820);
if(r1(R+518)){{goto L63f830;}}
}
B63f822:L63f822:{c.instructions+=3;NFSU2_TR(0x63f822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f825:{NFSU2_TR(0x63f825);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B63f827:{NFSU2_TR(0x63f827);
if(r1(R+518)){{goto L63f876;}}
}
B63f829:L63f829:{c.instructions+=5;NFSU2_TR(0x63f829);
__builtin_memmove((R+28),(R+0),4);
}
B63f82b:{NFSU2_TR(0x63f82b);
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
B63f82c:{NFSU2_TR(0x63f82c);
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
B63f82d:{NFSU2_TR(0x63f82d);
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
B63f82e:{NFSU2_TR(0x63f82e);
{goto L63f876;}
}
B63f830:L63f830:{c.instructions+=6;NFSU2_TR(0x63f830);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f833:{NFSU2_TR(0x63f833);
{u32 ea_=u32(u32(8041608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63f839:{NFSU2_TR(0x63f839);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63f83b:{NFSU2_TR(0x63f83b);
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
B63f83e:{NFSU2_TR(0x63f83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f841:{NFSU2_TR(0x63f841);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63f868;}}
}
B63f843:L63f843:{c.instructions+=13;NFSU2_TR(0x63f843);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f846:{NFSU2_TR(0x63f846);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63f848:{NFSU2_TR(0x63f848);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63f84e:{NFSU2_TR(0x63f84e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f850:{NFSU2_TR(0x63f850);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f852:{NFSU2_TR(0x63f852);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f855:{NFSU2_TR(0x63f855);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f857:{NFSU2_TR(0x63f857);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f85a:{NFSU2_TR(0x63f85a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f85d:{NFSU2_TR(0x63f85d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f860:{NFSU2_TR(0x63f860);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f863:{NFSU2_TR(0x63f863);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f866:{NFSU2_TR(0x63f866);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63f829u);}goto L63f829;}
}
B63f868:L63f868:{c.instructions+=6;NFSU2_TR(0x63f868);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f86a:{NFSU2_TR(0x63f86a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f86c:{NFSU2_TR(0x63f86c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f86e:{NFSU2_TR(0x63f86e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f871:{NFSU2_TR(0x63f871);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f873:{NFSU2_TR(0x63f873);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f876:L63f876:{c.instructions+=4;NFSU2_TR(0x63f876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63f877:{NFSU2_TR(0x63f877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f878:{NFSU2_TR(0x63f878);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f879:{NFSU2_TR(0x63f879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f87c:L63f87c:{c.instructions+=61;NFSU2_TR(0x63f87c);
__builtin_memmove((R+28),(R+28),4);
}
B63f87e:{NFSU2_TR(0x63f87e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f87f:{NFSU2_TR(0x63f87f);
__builtin_memmove((R+20),(R+16),4);
}
B63f881:{NFSU2_TR(0x63f881);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f882:{NFSU2_TR(0x63f882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f885:{NFSU2_TR(0x63f885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63f888:{NFSU2_TR(0x63f888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f88b:{NFSU2_TR(0x63f88b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f88d:{NFSU2_TR(0x63f88d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f88f:{NFSU2_TR(0x63f88f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f891:{NFSU2_TR(0x63f891);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f894:{NFSU2_TR(0x63f894);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f896:{NFSU2_TR(0x63f896);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f899:{NFSU2_TR(0x63f899);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f89b:{NFSU2_TR(0x63f89b);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f89e:{NFSU2_TR(0x63f89e);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63f8a0:{NFSU2_TR(0x63f8a0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8a3:{NFSU2_TR(0x63f8a3);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8a6:{NFSU2_TR(0x63f8a6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8a9:{NFSU2_TR(0x63f8a9);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8ac:{NFSU2_TR(0x63f8ac);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8af:{NFSU2_TR(0x63f8af);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8b2:{NFSU2_TR(0x63f8b2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8b5:{NFSU2_TR(0x63f8b5);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8b8:{NFSU2_TR(0x63f8b8);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63f8ba:{NFSU2_TR(0x63f8ba);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8bc:{NFSU2_TR(0x63f8bc);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8be:{NFSU2_TR(0x63f8be);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8c0:{NFSU2_TR(0x63f8c0);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8c2:{NFSU2_TR(0x63f8c2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8c5:{NFSU2_TR(0x63f8c5);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8c8:{NFSU2_TR(0x63f8c8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8cb:{NFSU2_TR(0x63f8cb);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8ce:{NFSU2_TR(0x63f8ce);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8d1:{NFSU2_TR(0x63f8d1);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8d4:{NFSU2_TR(0x63f8d4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8d7:{NFSU2_TR(0x63f8d7);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f8da:{NFSU2_TR(0x63f8da);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63f8dc:{NFSU2_TR(0x63f8dc);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8de:{NFSU2_TR(0x63f8de);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8e0:{NFSU2_TR(0x63f8e0);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8e2:{NFSU2_TR(0x63f8e2);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8e4:{NFSU2_TR(0x63f8e4);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8e7:{NFSU2_TR(0x63f8e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63f8e9:{NFSU2_TR(0x63f8e9);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8ec:{NFSU2_TR(0x63f8ec);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B63f8ee:{NFSU2_TR(0x63f8ee);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8f1:{NFSU2_TR(0x63f8f1);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B63f8f3:{NFSU2_TR(0x63f8f3);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f8f6:{NFSU2_TR(0x63f8f6);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63f8f8:{NFSU2_TR(0x63f8f8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f8fa:{NFSU2_TR(0x63f8fa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f8fd:{NFSU2_TR(0x63f8fd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f900:{NFSU2_TR(0x63f900);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f903:{NFSU2_TR(0x63f903);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f905:{NFSU2_TR(0x63f905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f906:{NFSU2_TR(0x63f906);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f907:{NFSU2_TR(0x63f907);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f90b:{NFSU2_TR(0x63f90b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63f90e:{NFSU2_TR(0x63f90e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f911:{NFSU2_TR(0x63f911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63f916ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63f916:L63f916:{c.instructions+=3;NFSU2_TR(0x63f916);
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
B63f918:{NFSU2_TR(0x63f918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63f91b:{NFSU2_TR(0x63f91b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63f936;}}
}
B63f91d:L63f91d:{c.instructions+=10;NFSU2_TR(0x63f91d);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f91f:{NFSU2_TR(0x63f91f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63f922:{NFSU2_TR(0x63f922);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f924:{NFSU2_TR(0x63f924);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f926:{NFSU2_TR(0x63f926);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f928:{NFSU2_TR(0x63f928);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63f92a:{NFSU2_TR(0x63f92a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f92d:{NFSU2_TR(0x63f92d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f930:{NFSU2_TR(0x63f930);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63f933:{NFSU2_TR(0x63f933);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f936:L63f936:{c.instructions+=2;NFSU2_TR(0x63f936);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f937:{NFSU2_TR(0x63f937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63f93a:L63f93a:{c.instructions+=29;NFSU2_TR(0x63f93a);
__builtin_memmove((R+28),(R+28),4);
}
B63f93c:{NFSU2_TR(0x63f93c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f93d:{NFSU2_TR(0x63f93d);
__builtin_memmove((R+12),(R+16),4);
}
B63f93f:{NFSU2_TR(0x63f93f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f940:{NFSU2_TR(0x63f940);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63f943:{NFSU2_TR(0x63f943);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63f946:{NFSU2_TR(0x63f946);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f947:{NFSU2_TR(0x63f947);
__builtin_memmove((R+20),(R+16),4);
}
B63f949:{NFSU2_TR(0x63f949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B63f94c:{NFSU2_TR(0x63f94c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63f94e:{NFSU2_TR(0x63f94e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f94f:{NFSU2_TR(0x63f94f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f950:{NFSU2_TR(0x63f950);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63f953:{NFSU2_TR(0x63f953);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63f955:{NFSU2_TR(0x63f955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B63f958:{NFSU2_TR(0x63f958);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63f95a:{NFSU2_TR(0x63f95a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63f95d:{NFSU2_TR(0x63f95d);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63f95f:{NFSU2_TR(0x63f95f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63f962:{NFSU2_TR(0x63f962);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B63f965:{NFSU2_TR(0x63f965);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63f967:{NFSU2_TR(0x63f967);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B63f969:{NFSU2_TR(0x63f969);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63f96c:{NFSU2_TR(0x63f96c);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63f96e:{NFSU2_TR(0x63f96e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63f970:{NFSU2_TR(0x63f970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B63f973:{NFSU2_TR(0x63f973);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63f975:{NFSU2_TR(0x63f975);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B63f978:{NFSU2_TR(0x63f978);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63fa10;}}
}
B63f97e:L63f97e:{c.instructions+=1;NFSU2_TR(0x63f97e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x63faa4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B63f985:L63f985:{c.instructions+=33;NFSU2_TR(0x63f985);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f987:{NFSU2_TR(0x63f987);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f98a:{NFSU2_TR(0x63f98a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f98c:{NFSU2_TR(0x63f98c);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f98f:{NFSU2_TR(0x63f98f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f991:{NFSU2_TR(0x63f991);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f994:{NFSU2_TR(0x63f994);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f996:{NFSU2_TR(0x63f996);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f999:{NFSU2_TR(0x63f999);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f99b:{NFSU2_TR(0x63f99b);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f99e:{NFSU2_TR(0x63f99e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9a0:{NFSU2_TR(0x63f9a0);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9a3:{NFSU2_TR(0x63f9a3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9a5:{NFSU2_TR(0x63f9a5);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9a8:{NFSU2_TR(0x63f9a8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9aa:{NFSU2_TR(0x63f9aa);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9ad:{NFSU2_TR(0x63f9ad);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9af:{NFSU2_TR(0x63f9af);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9b2:{NFSU2_TR(0x63f9b2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9b4:{NFSU2_TR(0x63f9b4);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9b7:{NFSU2_TR(0x63f9b7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9b9:{NFSU2_TR(0x63f9b9);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9bc:{NFSU2_TR(0x63f9bc);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63f9be:{NFSU2_TR(0x63f9be);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9c1:{NFSU2_TR(0x63f9c1);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f9c3:{NFSU2_TR(0x63f9c3);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9c6:{NFSU2_TR(0x63f9c6);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f9c8:{NFSU2_TR(0x63f9c8);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9cb:{NFSU2_TR(0x63f9cb);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f9cd:{NFSU2_TR(0x63f9cd);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9d0:{NFSU2_TR(0x63f9d0);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63f9d2:{NFSU2_TR(0x63f9d2);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63f9d5:{NFSU2_TR(0x63f9d5);
{goto L63fa10;}
}
B63f9d7:L63f9d7:{c.instructions+=2;NFSU2_TR(0x63f9d7);
__builtin_memmove((R+24),(R+4),4);
}
B63f9d9:{NFSU2_TR(0x63f9d9);
{goto L63fa10;}
}
B63f9db:L63f9db:{c.instructions+=2;NFSU2_TR(0x63f9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63f9de:{NFSU2_TR(0x63f9de);
{goto L63fa10;}
}
B63f9e0:L63f9e0:{c.instructions+=3;NFSU2_TR(0x63f9e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f9e1:{NFSU2_TR(0x63f9e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63f9e4:{NFSU2_TR(0x63f9e4);
{goto L63fa07;}
}
B63f9e6:L63f9e6:{c.instructions+=2;NFSU2_TR(0x63f9e6);
__builtin_memmove((R+24),(R+28),4);
}
B63f9e8:{NFSU2_TR(0x63f9e8);
{goto L63fa10;}
}
B63f9ea:L63f9ea:{c.instructions+=2;NFSU2_TR(0x63f9ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f9eb:{NFSU2_TR(0x63f9eb);
{goto L63f9f0;}
}
B63f9ed:L63f9ed:{c.instructions+=1;NFSU2_TR(0x63f9ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63f9f0:L63f9f0:{c.instructions+=2;NFSU2_TR(0x63f9f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f9f1:{NFSU2_TR(0x63f9f1);
{goto L63fa07;}
}
B63f9f3:L63f9f3:{c.instructions+=5;NFSU2_TR(0x63f9f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63f9f6:{NFSU2_TR(0x63f9f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63f9f9:{NFSU2_TR(0x63f9f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f9fa:{NFSU2_TR(0x63f9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63f9fb:{NFSU2_TR(0x63f9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fa00ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fa00:L63fa00:{c.instructions+=3;NFSU2_TR(0x63fa00);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fa03:{NFSU2_TR(0x63fa03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fa06:{NFSU2_TR(0x63fa06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fa07:L63fa07:{c.instructions+=3;NFSU2_TR(0x63fa07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fa0a:{NFSU2_TR(0x63fa0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fa0b:{NFSU2_TR(0x63fa0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fa10ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fa10:L63fa10:{c.instructions+=5;NFSU2_TR(0x63fa10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fa11:{NFSU2_TR(0x63fa11);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fa14:{NFSU2_TR(0x63fa14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63fa17:{NFSU2_TR(0x63fa17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fa18:{NFSU2_TR(0x63fa18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fa1dull));
TAIL_STATIC(0x63c606u,63c);
}
B63fa1d:L63fa1d:{c.instructions+=3;NFSU2_TR(0x63fa1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63fa20:{NFSU2_TR(0x63fa20);
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
B63fa22:{NFSU2_TR(0x63fa22);
if(r1(R+518)){{goto L63fa97;}}
}
B63fa24:L63fa24:{c.instructions+=6;NFSU2_TR(0x63fa24);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63fa26:{NFSU2_TR(0x63fa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fa29:{NFSU2_TR(0x63fa29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fa2b:{NFSU2_TR(0x63fa2b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fa31:{NFSU2_TR(0x63fa31);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fa34:{NFSU2_TR(0x63fa34);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fa3c;}}
}
B63fa36:L63fa36:{c.instructions+=1;NFSU2_TR(0x63fa36);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fa3c:L63fa3c:{c.instructions+=6;NFSU2_TR(0x63fa3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63fa3e:{NFSU2_TR(0x63fa3e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B63fa40:{NFSU2_TR(0x63fa40);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fa42:{NFSU2_TR(0x63fa42);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63fa48:{NFSU2_TR(0x63fa48);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fa4a:{NFSU2_TR(0x63fa4a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fa52;}}
}
B63fa4c:L63fa4c:{c.instructions+=1;NFSU2_TR(0x63fa4c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fa52:L63fa52:{c.instructions+=8;NFSU2_TR(0x63fa52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63fa54:{NFSU2_TR(0x63fa54);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fa56:{NFSU2_TR(0x63fa56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fa59:{NFSU2_TR(0x63fa59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fa5b:{NFSU2_TR(0x63fa5b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fa5d:{NFSU2_TR(0x63fa5d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fa60:{NFSU2_TR(0x63fa60);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fa63:{NFSU2_TR(0x63fa63);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fa6b;}}
}
B63fa65:L63fa65:{c.instructions+=1;NFSU2_TR(0x63fa65);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fa6b:L63fa6b:{c.instructions+=6;NFSU2_TR(0x63fa6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fa6e:{NFSU2_TR(0x63fa6e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B63fa70:{NFSU2_TR(0x63fa70);
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
B63fa72:{NFSU2_TR(0x63fa72);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63fa78:{NFSU2_TR(0x63fa78);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fa7b:{NFSU2_TR(0x63fa7b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fa83;}}
}
B63fa7d:L63fa7d:{c.instructions+=1;NFSU2_TR(0x63fa7d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fa83:L63fa83:{c.instructions+=7;NFSU2_TR(0x63fa83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63fa85:{NFSU2_TR(0x63fa85);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fa88:{NFSU2_TR(0x63fa88);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63fa8b:{NFSU2_TR(0x63fa8b);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fa8e:{NFSU2_TR(0x63fa8e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63fa91:{NFSU2_TR(0x63fa91);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fa94:{NFSU2_TR(0x63fa94);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fa97:L63fa97:{c.instructions+=8;NFSU2_TR(0x63fa97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63fa98:{NFSU2_TR(0x63fa98);
__builtin_memmove((R+0),(R+24),4);
}
B63fa9a:{NFSU2_TR(0x63fa9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63fa9b:{NFSU2_TR(0x63fa9b);
__builtin_memmove((R+16),(R+20),4);
}
B63fa9d:{NFSU2_TR(0x63fa9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63fa9e:{NFSU2_TR(0x63fa9e);
__builtin_memmove((R+16),(R+12),4);
}
B63faa0:{NFSU2_TR(0x63faa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63faa1:{NFSU2_TR(0x63faa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63fac4:L63fac4:{c.instructions+=29;NFSU2_TR(0x63fac4);
__builtin_memmove((R+28),(R+28),4);
}
B63fac6:{NFSU2_TR(0x63fac6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fac7:{NFSU2_TR(0x63fac7);
__builtin_memmove((R+12),(R+16),4);
}
B63fac9:{NFSU2_TR(0x63fac9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63faca:{NFSU2_TR(0x63faca);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63facd:{NFSU2_TR(0x63facd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63fad0:{NFSU2_TR(0x63fad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fad1:{NFSU2_TR(0x63fad1);
__builtin_memmove((R+20),(R+16),4);
}
B63fad3:{NFSU2_TR(0x63fad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x98ull))));
}
B63fad9:{NFSU2_TR(0x63fad9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63fadb:{NFSU2_TR(0x63fadb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fadc:{NFSU2_TR(0x63fadc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fadd:{NFSU2_TR(0x63fadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63fae0:{NFSU2_TR(0x63fae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63fae2:{NFSU2_TR(0x63fae2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B63fae5:{NFSU2_TR(0x63fae5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63fae7:{NFSU2_TR(0x63fae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63faea:{NFSU2_TR(0x63faea);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63faec:{NFSU2_TR(0x63faec);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63faef:{NFSU2_TR(0x63faef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B63faf2:{NFSU2_TR(0x63faf2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63faf4:{NFSU2_TR(0x63faf4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B63faf6:{NFSU2_TR(0x63faf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63faf9:{NFSU2_TR(0x63faf9);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63fafb:{NFSU2_TR(0x63fafb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63fafd:{NFSU2_TR(0x63fafd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B63fb00:{NFSU2_TR(0x63fb00);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63fb02:{NFSU2_TR(0x63fb02);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B63fb05:{NFSU2_TR(0x63fb05);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63fb9d;}}
}
B63fb0b:L63fb0b:{c.instructions+=1;NFSU2_TR(0x63fb0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x63fc91ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B63fb12:L63fb12:{c.instructions+=33;NFSU2_TR(0x63fb12);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb14:{NFSU2_TR(0x63fb14);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb17:{NFSU2_TR(0x63fb17);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb19:{NFSU2_TR(0x63fb19);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb1c:{NFSU2_TR(0x63fb1c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb1e:{NFSU2_TR(0x63fb1e);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb21:{NFSU2_TR(0x63fb21);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb23:{NFSU2_TR(0x63fb23);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb26:{NFSU2_TR(0x63fb26);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb28:{NFSU2_TR(0x63fb28);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb2b:{NFSU2_TR(0x63fb2b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb2d:{NFSU2_TR(0x63fb2d);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb30:{NFSU2_TR(0x63fb30);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb32:{NFSU2_TR(0x63fb32);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb35:{NFSU2_TR(0x63fb35);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb37:{NFSU2_TR(0x63fb37);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb3a:{NFSU2_TR(0x63fb3a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb3c:{NFSU2_TR(0x63fb3c);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb3f:{NFSU2_TR(0x63fb3f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb41:{NFSU2_TR(0x63fb41);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb44:{NFSU2_TR(0x63fb44);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb46:{NFSU2_TR(0x63fb46);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb49:{NFSU2_TR(0x63fb49);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fb4b:{NFSU2_TR(0x63fb4b);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb4e:{NFSU2_TR(0x63fb4e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fb50:{NFSU2_TR(0x63fb50);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb53:{NFSU2_TR(0x63fb53);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fb55:{NFSU2_TR(0x63fb55);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb58:{NFSU2_TR(0x63fb58);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fb5a:{NFSU2_TR(0x63fb5a);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb5d:{NFSU2_TR(0x63fb5d);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fb5f:{NFSU2_TR(0x63fb5f);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fb62:{NFSU2_TR(0x63fb62);
{goto L63fb9d;}
}
B63fb64:L63fb64:{c.instructions+=2;NFSU2_TR(0x63fb64);
__builtin_memmove((R+24),(R+4),4);
}
B63fb66:{NFSU2_TR(0x63fb66);
{goto L63fb9d;}
}
B63fb68:L63fb68:{c.instructions+=2;NFSU2_TR(0x63fb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63fb6b:{NFSU2_TR(0x63fb6b);
{goto L63fb9d;}
}
B63fb6d:L63fb6d:{c.instructions+=3;NFSU2_TR(0x63fb6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb6e:{NFSU2_TR(0x63fb6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fb71:{NFSU2_TR(0x63fb71);
{goto L63fb94;}
}
B63fb73:L63fb73:{c.instructions+=2;NFSU2_TR(0x63fb73);
__builtin_memmove((R+24),(R+28),4);
}
B63fb75:{NFSU2_TR(0x63fb75);
{goto L63fb9d;}
}
B63fb77:L63fb77:{c.instructions+=2;NFSU2_TR(0x63fb77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb78:{NFSU2_TR(0x63fb78);
{goto L63fb7d;}
}
B63fb7a:L63fb7a:{c.instructions+=1;NFSU2_TR(0x63fb7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fb7d:L63fb7d:{c.instructions+=2;NFSU2_TR(0x63fb7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb7e:{NFSU2_TR(0x63fb7e);
{goto L63fb94;}
}
B63fb80:L63fb80:{c.instructions+=5;NFSU2_TR(0x63fb80);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fb83:{NFSU2_TR(0x63fb83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fb86:{NFSU2_TR(0x63fb86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb87:{NFSU2_TR(0x63fb87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb88:{NFSU2_TR(0x63fb88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fb8dull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fb8d:L63fb8d:{c.instructions+=3;NFSU2_TR(0x63fb8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fb90:{NFSU2_TR(0x63fb90);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fb93:{NFSU2_TR(0x63fb93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb94:L63fb94:{c.instructions+=3;NFSU2_TR(0x63fb94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fb97:{NFSU2_TR(0x63fb97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fb98:{NFSU2_TR(0x63fb98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fb9dull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fb9d:L63fb9d:{c.instructions+=3;NFSU2_TR(0x63fb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63fba0:{NFSU2_TR(0x63fba0);
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
B63fba2:{NFSU2_TR(0x63fba2);
if(r1(R+518)){{goto L63fc71;}}
}
B63fba8:L63fba8:{c.instructions+=4;NFSU2_TR(0x63fba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fbab:{NFSU2_TR(0x63fbab);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fbae:{NFSU2_TR(0x63fbae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fbb0:{NFSU2_TR(0x63fbb0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fbb8;}}
}
B63fbb2:L63fbb2:{c.instructions+=1;NFSU2_TR(0x63fbb2);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fbb8:L63fbb8:{c.instructions+=14;NFSU2_TR(0x63fbb8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63fbbe:{NFSU2_TR(0x63fbbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fbc1:{NFSU2_TR(0x63fbc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fbc3:{NFSU2_TR(0x63fbc3);
{u32 ea_=u32(r4(R+20)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63fbc9:{NFSU2_TR(0x63fbc9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fbcb:{NFSU2_TR(0x63fbcb);
{u32 ea_=u32(r4(R+20)+u32(4294967156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fbd1:{NFSU2_TR(0x63fbd1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fbd3:{NFSU2_TR(0x63fbd3);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fbd9:{NFSU2_TR(0x63fbd9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fbdb:{NFSU2_TR(0x63fbdb);
{u32 ea_=u32(r4(R+20)+u32(4294967164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fbe1:{NFSU2_TR(0x63fbe1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fbe3:{NFSU2_TR(0x63fbe3);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fbe6:{NFSU2_TR(0x63fbe6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fbe9:{NFSU2_TR(0x63fbe9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fbf1;}}
}
B63fbeb:L63fbeb:{c.instructions+=1;NFSU2_TR(0x63fbeb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fbf1:L63fbf1:{c.instructions+=20;NFSU2_TR(0x63fbf1);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63fbf7:{NFSU2_TR(0x63fbf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63fbf9:{NFSU2_TR(0x63fbf9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fbfb:{NFSU2_TR(0x63fbfb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63fbfd:{NFSU2_TR(0x63fbfd);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc00:{NFSU2_TR(0x63fc00);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fc02:{NFSU2_TR(0x63fc02);
{u32 ea_=u32(r4(R+20)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc05:{NFSU2_TR(0x63fc05);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fc07:{NFSU2_TR(0x63fc07);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc0a:{NFSU2_TR(0x63fc0a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fc0c:{NFSU2_TR(0x63fc0c);
{u32 ea_=u32(r4(R+20)+u32(4294967184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc0f:{NFSU2_TR(0x63fc0f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fc11:{NFSU2_TR(0x63fc11);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc14:{NFSU2_TR(0x63fc14);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63fc17:{NFSU2_TR(0x63fc17);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fc1a:{NFSU2_TR(0x63fc1a);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc1d:{NFSU2_TR(0x63fc1d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fc1f:{NFSU2_TR(0x63fc1f);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc22:{NFSU2_TR(0x63fc22);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fc24:{NFSU2_TR(0x63fc24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fc2c;}}
}
B63fc26:L63fc26:{c.instructions+=1;NFSU2_TR(0x63fc26);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fc2c:L63fc2c:{c.instructions+=6;NFSU2_TR(0x63fc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fc2f:{NFSU2_TR(0x63fc2f);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63fc31:{NFSU2_TR(0x63fc31);
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
B63fc33:{NFSU2_TR(0x63fc33);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc36:{NFSU2_TR(0x63fc36);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fc39:{NFSU2_TR(0x63fc39);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fc41;}}
}
B63fc3b:L63fc3b:{c.instructions+=1;NFSU2_TR(0x63fc3b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fc41:L63fc41:{c.instructions+=16;NFSU2_TR(0x63fc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63fc44:{NFSU2_TR(0x63fc44);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63fc46:{NFSU2_TR(0x63fc46);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63fc4c:{NFSU2_TR(0x63fc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63fc4f:{NFSU2_TR(0x63fc4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fc55:{NFSU2_TR(0x63fc55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fc56:{NFSU2_TR(0x63fc56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63fc58:{NFSU2_TR(0x63fc58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fc59:{NFSU2_TR(0x63fc59);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fc5c:{NFSU2_TR(0x63fc5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fc5d:{NFSU2_TR(0x63fc5d);
{u32 ea_=u32(r4(R+20)+u32(4294967204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc60:{NFSU2_TR(0x63fc60);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63fc62:{NFSU2_TR(0x63fc62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63fc64:{NFSU2_TR(0x63fc64);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fc66:{NFSU2_TR(0x63fc66);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fc69:{NFSU2_TR(0x63fc69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fc6eull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fc6e:L63fc6e:{c.instructions+=1;NFSU2_TR(0x63fc6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63fc71:L63fc71:{c.instructions+=7;NFSU2_TR(0x63fc71);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fc74:{NFSU2_TR(0x63fc74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fc75:{NFSU2_TR(0x63fc75);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fc78:{NFSU2_TR(0x63fc78);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fc7b:{NFSU2_TR(0x63fc7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fc7e:{NFSU2_TR(0x63fc7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fc81:{NFSU2_TR(0x63fc81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fc86ull));
TAIL_STATIC(0x63c61fu,63c);
}
B63fc86:L63fc86:{c.instructions+=7;NFSU2_TR(0x63fc86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63fc87:{NFSU2_TR(0x63fc87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63fc88:{NFSU2_TR(0x63fc88);
__builtin_memmove((R+16),(R+20),4);
}
B63fc8a:{NFSU2_TR(0x63fc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63fc8b:{NFSU2_TR(0x63fc8b);
__builtin_memmove((R+16),(R+12),4);
}
B63fc8d:{NFSU2_TR(0x63fc8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63fc8e:{NFSU2_TR(0x63fc8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63fcb1:L63fcb1:{c.instructions+=29;NFSU2_TR(0x63fcb1);
__builtin_memmove((R+28),(R+28),4);
}
B63fcb3:{NFSU2_TR(0x63fcb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fcb4:{NFSU2_TR(0x63fcb4);
__builtin_memmove((R+12),(R+16),4);
}
B63fcb6:{NFSU2_TR(0x63fcb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fcb7:{NFSU2_TR(0x63fcb7);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63fcba:{NFSU2_TR(0x63fcba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63fcbd:{NFSU2_TR(0x63fcbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fcbe:{NFSU2_TR(0x63fcbe);
__builtin_memmove((R+20),(R+16),4);
}
B63fcc0:{NFSU2_TR(0x63fcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fcc3:{NFSU2_TR(0x63fcc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B63fcc6:{NFSU2_TR(0x63fcc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63fcc8:{NFSU2_TR(0x63fcc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fcc9:{NFSU2_TR(0x63fcc9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63fccb:{NFSU2_TR(0x63fccb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fccc:{NFSU2_TR(0x63fccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63fccf:{NFSU2_TR(0x63fccf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63fcd1:{NFSU2_TR(0x63fcd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B63fcd4:{NFSU2_TR(0x63fcd4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63fcd6:{NFSU2_TR(0x63fcd6);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63fcd8:{NFSU2_TR(0x63fcd8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63fcda:{NFSU2_TR(0x63fcda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B63fcdd:{NFSU2_TR(0x63fcdd);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63fcdf:{NFSU2_TR(0x63fcdf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63fce1:{NFSU2_TR(0x63fce1);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63fce3:{NFSU2_TR(0x63fce3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63fce6:{NFSU2_TR(0x63fce6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B63fce9:{NFSU2_TR(0x63fce9);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63fceb:{NFSU2_TR(0x63fceb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B63fcee:{NFSU2_TR(0x63fcee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63fd90;}}
}
B63fcf4:L63fcf4:{c.instructions+=1;NFSU2_TR(0x63fcf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x63fe30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B63fcfb:L63fcfb:{c.instructions+=33;NFSU2_TR(0x63fcfb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fcfd:{NFSU2_TR(0x63fcfd);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd00:{NFSU2_TR(0x63fd00);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd02:{NFSU2_TR(0x63fd02);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd05:{NFSU2_TR(0x63fd05);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd07:{NFSU2_TR(0x63fd07);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd0a:{NFSU2_TR(0x63fd0a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd0c:{NFSU2_TR(0x63fd0c);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd0f:{NFSU2_TR(0x63fd0f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd11:{NFSU2_TR(0x63fd11);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd14:{NFSU2_TR(0x63fd14);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd16:{NFSU2_TR(0x63fd16);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd19:{NFSU2_TR(0x63fd19);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd1b:{NFSU2_TR(0x63fd1b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd1e:{NFSU2_TR(0x63fd1e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd20:{NFSU2_TR(0x63fd20);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd23:{NFSU2_TR(0x63fd23);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd25:{NFSU2_TR(0x63fd25);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd28:{NFSU2_TR(0x63fd28);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd2a:{NFSU2_TR(0x63fd2a);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd2d:{NFSU2_TR(0x63fd2d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd2f:{NFSU2_TR(0x63fd2f);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd32:{NFSU2_TR(0x63fd32);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fd34:{NFSU2_TR(0x63fd34);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd37:{NFSU2_TR(0x63fd37);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fd39:{NFSU2_TR(0x63fd39);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd3c:{NFSU2_TR(0x63fd3c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fd3e:{NFSU2_TR(0x63fd3e);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd41:{NFSU2_TR(0x63fd41);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fd43:{NFSU2_TR(0x63fd43);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd46:{NFSU2_TR(0x63fd46);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fd48:{NFSU2_TR(0x63fd48);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fd4b:{NFSU2_TR(0x63fd4b);
{goto L63fd90;}
}
B63fd4d:L63fd4d:{c.instructions+=2;NFSU2_TR(0x63fd4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fd50:{NFSU2_TR(0x63fd50);
{goto L63fd86;}
}
B63fd52:L63fd52:{c.instructions+=2;NFSU2_TR(0x63fd52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd53:{NFSU2_TR(0x63fd53);
{goto L63fd86;}
}
B63fd55:L63fd55:{c.instructions+=3;NFSU2_TR(0x63fd55);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fd58:{NFSU2_TR(0x63fd58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd59:{NFSU2_TR(0x63fd59);
{goto L63fd79;}
}
B63fd5b:L63fd5b:{c.instructions+=2;NFSU2_TR(0x63fd5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd5c:{NFSU2_TR(0x63fd5c);
{goto L63fd86;}
}
B63fd5e:L63fd5e:{c.instructions+=2;NFSU2_TR(0x63fd5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fd61:{NFSU2_TR(0x63fd61);
{goto L63fd64;}
}
B63fd63:L63fd63:{c.instructions+=1;NFSU2_TR(0x63fd63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd64:L63fd64:{c.instructions+=2;NFSU2_TR(0x63fd64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd65:{NFSU2_TR(0x63fd65);
{goto L63fd79;}
}
B63fd67:L63fd67:{c.instructions+=5;NFSU2_TR(0x63fd67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd68:{NFSU2_TR(0x63fd68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd69:{NFSU2_TR(0x63fd69);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fd6c:{NFSU2_TR(0x63fd6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd6d:{NFSU2_TR(0x63fd6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fd72ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fd72:L63fd72:{c.instructions+=3;NFSU2_TR(0x63fd72);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fd75:{NFSU2_TR(0x63fd75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fd78:{NFSU2_TR(0x63fd78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd79:L63fd79:{c.instructions+=3;NFSU2_TR(0x63fd79);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fd7c:{NFSU2_TR(0x63fd7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd7d:{NFSU2_TR(0x63fd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fd82ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63fd82:L63fd82:{c.instructions+=2;NFSU2_TR(0x63fd82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fd85:{NFSU2_TR(0x63fd85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd86:L63fd86:{c.instructions+=4;NFSU2_TR(0x63fd86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fd89:{NFSU2_TR(0x63fd89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd8a:{NFSU2_TR(0x63fd8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fd8b:{NFSU2_TR(0x63fd8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fd90ull));
TAIL_STATIC(0x63d401u,63d);
}
B63fd90:L63fd90:{c.instructions+=3;NFSU2_TR(0x63fd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63fd93:{NFSU2_TR(0x63fd93);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B63fd95:{NFSU2_TR(0x63fd95);
if(r1(R+518)){{goto L63fe13;}}
}
B63fd97:L63fd97:{c.instructions+=4;NFSU2_TR(0x63fd97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63fd99:{NFSU2_TR(0x63fd99);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fd9b:{NFSU2_TR(0x63fd9b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fd9d:{NFSU2_TR(0x63fd9d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fda5;}}
}
B63fd9f:L63fd9f:{c.instructions+=1;NFSU2_TR(0x63fd9f);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fda5:L63fda5:{c.instructions+=6;NFSU2_TR(0x63fda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fda8:{NFSU2_TR(0x63fda8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63fdaa:{NFSU2_TR(0x63fdaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63fdad:{NFSU2_TR(0x63fdad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fdaf:{NFSU2_TR(0x63fdaf);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fdb2:{NFSU2_TR(0x63fdb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fdba;}}
}
B63fdb4:L63fdb4:{c.instructions+=1;NFSU2_TR(0x63fdb4);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fdba:L63fdba:{c.instructions+=9;NFSU2_TR(0x63fdba);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B63fdbc:{NFSU2_TR(0x63fdbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63fdbf:{NFSU2_TR(0x63fdbf);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63fdc1:{NFSU2_TR(0x63fdc1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fdc7:{NFSU2_TR(0x63fdc7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fdc9:{NFSU2_TR(0x63fdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63fdcc:{NFSU2_TR(0x63fdcc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63fdce:{NFSU2_TR(0x63fdce);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fdd1:{NFSU2_TR(0x63fdd1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fdd9;}}
}
B63fdd3:L63fdd3:{c.instructions+=1;NFSU2_TR(0x63fdd3);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fdd9:L63fdd9:{c.instructions+=5;NFSU2_TR(0x63fdd9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63fddc:{NFSU2_TR(0x63fddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63fddf:{NFSU2_TR(0x63fddf);
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
B63fde1:{NFSU2_TR(0x63fde1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63fde4:{NFSU2_TR(0x63fde4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fdec;}}
}
B63fde6:L63fde6:{c.instructions+=1;NFSU2_TR(0x63fde6);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fdec:L63fdec:{c.instructions+=15;NFSU2_TR(0x63fdec);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B63fdee:{NFSU2_TR(0x63fdee);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63fdf0:{NFSU2_TR(0x63fdf0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fdf6:{NFSU2_TR(0x63fdf6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63fdf8:{NFSU2_TR(0x63fdf8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fdfb:{NFSU2_TR(0x63fdfb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63fdfe:{NFSU2_TR(0x63fdfe);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fe01:{NFSU2_TR(0x63fe01);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63fe04:{NFSU2_TR(0x63fe04);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63fe07:{NFSU2_TR(0x63fe07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fe0a:{NFSU2_TR(0x63fe0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe0b:{NFSU2_TR(0x63fe0b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B63fe0d:{NFSU2_TR(0x63fe0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe0e:{NFSU2_TR(0x63fe0e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fe11:{NFSU2_TR(0x63fe11);
{goto L63fe1d;}
}
B63fe13:L63fe13:{c.instructions+=4;NFSU2_TR(0x63fe13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63fe16:{NFSU2_TR(0x63fe16);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63fe19:{NFSU2_TR(0x63fe19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe1a:{NFSU2_TR(0x63fe1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fe1d:L63fe1d:{c.instructions+=2;NFSU2_TR(0x63fe1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe1e:{NFSU2_TR(0x63fe1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63fe23ull));
TAIL_STATIC(0x63c606u,63c);
}
B63fe23:L63fe23:{c.instructions+=8;NFSU2_TR(0x63fe23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63fe24:{NFSU2_TR(0x63fe24);
__builtin_memmove((R+0),(R+24),4);
}
B63fe26:{NFSU2_TR(0x63fe26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63fe27:{NFSU2_TR(0x63fe27);
__builtin_memmove((R+16),(R+20),4);
}
B63fe29:{NFSU2_TR(0x63fe29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63fe2a:{NFSU2_TR(0x63fe2a);
__builtin_memmove((R+16),(R+12),4);
}
B63fe2c:{NFSU2_TR(0x63fe2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63fe2d:{NFSU2_TR(0x63fe2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63fe50:L63fe50:{c.instructions+=29;NFSU2_TR(0x63fe50);
__builtin_memmove((R+28),(R+28),4);
}
B63fe52:{NFSU2_TR(0x63fe52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe53:{NFSU2_TR(0x63fe53);
__builtin_memmove((R+12),(R+16),4);
}
B63fe55:{NFSU2_TR(0x63fe55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe56:{NFSU2_TR(0x63fe56);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63fe59:{NFSU2_TR(0x63fe59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63fe5c:{NFSU2_TR(0x63fe5c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe5d:{NFSU2_TR(0x63fe5d);
__builtin_memmove((R+20),(R+16),4);
}
B63fe5f:{NFSU2_TR(0x63fe5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63fe62:{NFSU2_TR(0x63fe62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B63fe68:{NFSU2_TR(0x63fe68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63fe6a:{NFSU2_TR(0x63fe6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe6b:{NFSU2_TR(0x63fe6b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63fe6d:{NFSU2_TR(0x63fe6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fe6e:{NFSU2_TR(0x63fe6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63fe71:{NFSU2_TR(0x63fe71);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63fe73:{NFSU2_TR(0x63fe73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B63fe76:{NFSU2_TR(0x63fe76);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63fe78:{NFSU2_TR(0x63fe78);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63fe7a:{NFSU2_TR(0x63fe7a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63fe7c:{NFSU2_TR(0x63fe7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B63fe7f:{NFSU2_TR(0x63fe7f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63fe81:{NFSU2_TR(0x63fe81);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B63fe83:{NFSU2_TR(0x63fe83);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B63fe85:{NFSU2_TR(0x63fe85);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63fe88:{NFSU2_TR(0x63fe88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B63fe8b:{NFSU2_TR(0x63fe8b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B63fe8d:{NFSU2_TR(0x63fe8d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B63fe90:{NFSU2_TR(0x63fe90);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L63ff32;}}
}
B63fe96:L63fe96:{c.instructions+=1;NFSU2_TR(0x63fe96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x640049ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B63fe9d:L63fe9d:{c.instructions+=33;NFSU2_TR(0x63fe9d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fe9f:{NFSU2_TR(0x63fe9f);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fea2:{NFSU2_TR(0x63fea2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fea4:{NFSU2_TR(0x63fea4);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fea7:{NFSU2_TR(0x63fea7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fea9:{NFSU2_TR(0x63fea9);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63feac:{NFSU2_TR(0x63feac);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63feae:{NFSU2_TR(0x63feae);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63feb1:{NFSU2_TR(0x63feb1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63feb3:{NFSU2_TR(0x63feb3);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63feb6:{NFSU2_TR(0x63feb6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63feb8:{NFSU2_TR(0x63feb8);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63febb:{NFSU2_TR(0x63febb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63febd:{NFSU2_TR(0x63febd);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fec0:{NFSU2_TR(0x63fec0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fec2:{NFSU2_TR(0x63fec2);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fec5:{NFSU2_TR(0x63fec5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fec7:{NFSU2_TR(0x63fec7);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63feca:{NFSU2_TR(0x63feca);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fecc:{NFSU2_TR(0x63fecc);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fecf:{NFSU2_TR(0x63fecf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fed1:{NFSU2_TR(0x63fed1);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fed4:{NFSU2_TR(0x63fed4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63fed6:{NFSU2_TR(0x63fed6);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fed9:{NFSU2_TR(0x63fed9);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fedb:{NFSU2_TR(0x63fedb);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fede:{NFSU2_TR(0x63fede);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fee0:{NFSU2_TR(0x63fee0);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fee3:{NFSU2_TR(0x63fee3);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63fee5:{NFSU2_TR(0x63fee5);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fee8:{NFSU2_TR(0x63fee8);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63feea:{NFSU2_TR(0x63feea);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63feed:{NFSU2_TR(0x63feed);
{goto L63ff32;}
}
B63feef:L63feef:{c.instructions+=2;NFSU2_TR(0x63feef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fef2:{NFSU2_TR(0x63fef2);
{goto L63ff28;}
}
B63fef4:L63fef4:{c.instructions+=2;NFSU2_TR(0x63fef4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fef5:{NFSU2_TR(0x63fef5);
{goto L63ff28;}
}
B63fef7:L63fef7:{c.instructions+=3;NFSU2_TR(0x63fef7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63fefa:{NFSU2_TR(0x63fefa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fefb:{NFSU2_TR(0x63fefb);
{goto L63ff1b;}
}
B63fefd:L63fefd:{c.instructions+=2;NFSU2_TR(0x63fefd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63fefe:{NFSU2_TR(0x63fefe);
{goto L63ff28;}
}
B63ff00:L63ff00:{c.instructions+=2;NFSU2_TR(0x63ff00);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ff03:{NFSU2_TR(0x63ff03);
{goto L63ff06;}
}
B63ff05:L63ff05:{c.instructions+=1;NFSU2_TR(0x63ff05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff06:L63ff06:{c.instructions+=2;NFSU2_TR(0x63ff06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff07:{NFSU2_TR(0x63ff07);
{goto L63ff1b;}
}
B63ff09:L63ff09:{c.instructions+=5;NFSU2_TR(0x63ff09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff0a:{NFSU2_TR(0x63ff0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff0b:{NFSU2_TR(0x63ff0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ff0e:{NFSU2_TR(0x63ff0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff0f:{NFSU2_TR(0x63ff0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ff14ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63ff14:L63ff14:{c.instructions+=3;NFSU2_TR(0x63ff14);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ff17:{NFSU2_TR(0x63ff17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ff1a:{NFSU2_TR(0x63ff1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff1b:L63ff1b:{c.instructions+=3;NFSU2_TR(0x63ff1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ff1e:{NFSU2_TR(0x63ff1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff1f:{NFSU2_TR(0x63ff1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ff24ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63ff24:L63ff24:{c.instructions+=2;NFSU2_TR(0x63ff24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ff27:{NFSU2_TR(0x63ff27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff28:L63ff28:{c.instructions+=4;NFSU2_TR(0x63ff28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ff2b:{NFSU2_TR(0x63ff2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff2c:{NFSU2_TR(0x63ff2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ff2d:{NFSU2_TR(0x63ff2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ff32ull));
TAIL_STATIC(0x63d401u,63d);
}
B63ff32:L63ff32:{c.instructions+=3;NFSU2_TR(0x63ff32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ff35:{NFSU2_TR(0x63ff35);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B63ff37:{NFSU2_TR(0x63ff37);
if(r1(R+518)){TAIL_STATIC(0x640026u,640);}
}
B63ff3d:L63ff3d:{c.instructions+=4;NFSU2_TR(0x63ff3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ff40:{NFSU2_TR(0x63ff40);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63ff43:{NFSU2_TR(0x63ff43);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63ff45:{NFSU2_TR(0x63ff45);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63ff4d;}}
}
B63ff47:L63ff47:{c.instructions+=1;NFSU2_TR(0x63ff47);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63ff4d:L63ff4d:{c.instructions+=5;NFSU2_TR(0x63ff4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ff50:{NFSU2_TR(0x63ff50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63ff52:{NFSU2_TR(0x63ff52);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63ff58:{NFSU2_TR(0x63ff58);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63ff5b:{NFSU2_TR(0x63ff5b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63ff63;}}
}
B63ff5d:L63ff5d:{c.instructions+=1;NFSU2_TR(0x63ff5d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63ff63:L63ff63:{c.instructions+=34;NFSU2_TR(0x63ff63);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63ff69:{NFSU2_TR(0x63ff69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63ff6b:{NFSU2_TR(0x63ff6b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B63ff6d:{NFSU2_TR(0x63ff6d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ff73:{NFSU2_TR(0x63ff73);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ff76:{NFSU2_TR(0x63ff76);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63ff79:{NFSU2_TR(0x63ff79);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B63ff7b:{NFSU2_TR(0x63ff7b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63ff7e:{NFSU2_TR(0x63ff7e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ff80:{NFSU2_TR(0x63ff80);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ff86:{NFSU2_TR(0x63ff86);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ff88:{NFSU2_TR(0x63ff88);
{u32 ea_=u32(r4(R+20)+u32(4294967140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ff8e:{NFSU2_TR(0x63ff8e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ff90:{NFSU2_TR(0x63ff90);
{u32 ea_=u32(r4(R+20)+u32(4294967144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ff96:{NFSU2_TR(0x63ff96);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ff98:{NFSU2_TR(0x63ff98);
{u32 ea_=u32(r4(R+20)+u32(4294967148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ff9e:{NFSU2_TR(0x63ff9e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ffa0:{NFSU2_TR(0x63ffa0);
{u32 ea_=u32(r4(R+20)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffa6:{NFSU2_TR(0x63ffa6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ffa8:{NFSU2_TR(0x63ffa8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63ffaa:{NFSU2_TR(0x63ffaa);
{u32 ea_=u32(r4(R+20)+u32(4294967156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffb0:{NFSU2_TR(0x63ffb0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ffb2:{NFSU2_TR(0x63ffb2);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffb8:{NFSU2_TR(0x63ffb8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ffba:{NFSU2_TR(0x63ffba);
{u32 ea_=u32(r4(R+20)+u32(4294967164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffc0:{NFSU2_TR(0x63ffc0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ffc2:{NFSU2_TR(0x63ffc2);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffc5:{NFSU2_TR(0x63ffc5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ffc7:{NFSU2_TR(0x63ffc7);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffca:{NFSU2_TR(0x63ffca);
{u32 ea_=u32(r4(R+20)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffcd:{NFSU2_TR(0x63ffcd);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ffcf:{NFSU2_TR(0x63ffcf);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffd2:{NFSU2_TR(0x63ffd2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63ffd4:{NFSU2_TR(0x63ffd4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63ffdc;}}
}
B63ffd6:L63ffd6:{c.instructions+=1;NFSU2_TR(0x63ffd6);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63ffdc:L63ffdc:{c.instructions+=8;NFSU2_TR(0x63ffdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ffdf:{NFSU2_TR(0x63ffdf);
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
B63ffe1:{NFSU2_TR(0x63ffe1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63ffe3:{NFSU2_TR(0x63ffe3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63ffe5:{NFSU2_TR(0x63ffe5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63ffe7:{NFSU2_TR(0x63ffe7);
{u32 ea_=u32(r4(R+20)+u32(4294967184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ffea:{NFSU2_TR(0x63ffea);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B63ffed:{NFSU2_TR(0x63ffed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63fff5;}}
}
B63ffef:L63ffef:{c.instructions+=1;NFSU2_TR(0x63ffef);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63fff5:L63fff5:{c.instructions+=5;NFSU2_TR(0x63fff5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B63fff7:{NFSU2_TR(0x63fff7);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63fff9:{NFSU2_TR(0x63fff9);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63fffc:{NFSU2_TR(0x63fffc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63fffe:{NFSU2_TR(0x63fffe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
TAIL_STATIC(0x640000u,640);
}
XIT:NFSU2_TR_EXIT(0x63f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
