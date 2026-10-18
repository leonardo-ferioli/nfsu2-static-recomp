#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_63f(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x63e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x63e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_63e(u8* __restrict R,Cpu& c);
u32 page_63e(Cpu& c){return body_63e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_63e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x63e001:goto L63e001;
case 0x63e004:c.instructions+=10;goto B63e004;
case 0x63e007:c.instructions+=9;goto B63e007;
case 0x63e00a:c.instructions+=8;goto B63e00a;
case 0x63e00b:c.instructions+=7;goto B63e00b;
case 0x63e00d:c.instructions+=6;goto B63e00d;
case 0x63e00e:c.instructions+=5;goto B63e00e;
case 0x63e010:c.instructions+=4;goto B63e010;
case 0x63e011:c.instructions+=3;goto B63e011;
case 0x63e013:c.instructions+=2;goto B63e013;
case 0x63e014:c.instructions+=1;goto B63e014;
case 0x63e017:goto L63e017;
case 0x63e019:c.instructions+=4;goto B63e019;
case 0x63e01a:c.instructions+=3;goto B63e01a;
case 0x63e01c:c.instructions+=2;goto B63e01c;
case 0x63e01e:c.instructions+=1;goto B63e01e;
case 0x63e023:goto L63e023;
case 0x63e026:c.instructions+=11;goto B63e026;
case 0x63e029:c.instructions+=10;goto B63e029;
case 0x63e02a:c.instructions+=9;goto B63e02a;
case 0x63e02d:c.instructions+=8;goto B63e02d;
case 0x63e030:c.instructions+=7;goto B63e030;
case 0x63e033:c.instructions+=6;goto B63e033;
case 0x63e036:c.instructions+=5;goto B63e036;
case 0x63e037:c.instructions+=4;goto B63e037;
case 0x63e03a:c.instructions+=3;goto B63e03a;
case 0x63e03d:c.instructions+=2;goto B63e03d;
case 0x63e040:c.instructions+=1;goto B63e040;
case 0x63e046:goto L63e046;
case 0x63e047:c.instructions+=1;goto B63e047;
case 0x63e04a:goto L63e04a;
case 0x63e04c:c.instructions+=13;goto B63e04c;
case 0x63e04d:c.instructions+=12;goto B63e04d;
case 0x63e04f:c.instructions+=11;goto B63e04f;
case 0x63e050:c.instructions+=10;goto B63e050;
case 0x63e053:c.instructions+=9;goto B63e053;
case 0x63e056:c.instructions+=8;goto B63e056;
case 0x63e057:c.instructions+=7;goto B63e057;
case 0x63e059:c.instructions+=6;goto B63e059;
case 0x63e05c:c.instructions+=5;goto B63e05c;
case 0x63e062:c.instructions+=4;goto B63e062;
case 0x63e064:c.instructions+=3;goto B63e064;
case 0x63e065:c.instructions+=2;goto B63e065;
case 0x63e066:c.instructions+=1;goto B63e066;
case 0x63e06c:goto L63e06c;
case 0x63e06f:c.instructions+=6;goto B63e06f;
case 0x63e075:c.instructions+=5;goto B63e075;
case 0x63e077:c.instructions+=4;goto B63e077;
case 0x63e079:c.instructions+=3;goto B63e079;
case 0x63e07b:c.instructions+=2;goto B63e07b;
case 0x63e07e:c.instructions+=1;goto B63e07e;
case 0x63e084:goto L63e084;
case 0x63e087:c.instructions+=36;goto B63e087;
case 0x63e089:c.instructions+=35;goto B63e089;
case 0x63e08b:c.instructions+=34;goto B63e08b;
case 0x63e08e:c.instructions+=33;goto B63e08e;
case 0x63e091:c.instructions+=32;goto B63e091;
case 0x63e094:c.instructions+=31;goto B63e094;
case 0x63e096:c.instructions+=30;goto B63e096;
case 0x63e097:c.instructions+=29;goto B63e097;
case 0x63e09a:c.instructions+=28;goto B63e09a;
case 0x63e09d:c.instructions+=27;goto B63e09d;
case 0x63e09f:c.instructions+=26;goto B63e09f;
case 0x63e0a2:c.instructions+=25;goto B63e0a2;
case 0x63e0a5:c.instructions+=24;goto B63e0a5;
case 0x63e0a7:c.instructions+=23;goto B63e0a7;
case 0x63e0aa:c.instructions+=22;goto B63e0aa;
case 0x63e0ac:c.instructions+=21;goto B63e0ac;
case 0x63e0af:c.instructions+=20;goto B63e0af;
case 0x63e0b1:c.instructions+=19;goto B63e0b1;
case 0x63e0b4:c.instructions+=18;goto B63e0b4;
case 0x63e0b6:c.instructions+=17;goto B63e0b6;
case 0x63e0b9:c.instructions+=16;goto B63e0b9;
case 0x63e0bb:c.instructions+=15;goto B63e0bb;
case 0x63e0be:c.instructions+=14;goto B63e0be;
case 0x63e0c0:c.instructions+=13;goto B63e0c0;
case 0x63e0c3:c.instructions+=12;goto B63e0c3;
case 0x63e0c5:c.instructions+=11;goto B63e0c5;
case 0x63e0c8:c.instructions+=10;goto B63e0c8;
case 0x63e0ca:c.instructions+=9;goto B63e0ca;
case 0x63e0cd:c.instructions+=8;goto B63e0cd;
case 0x63e0cf:c.instructions+=7;goto B63e0cf;
case 0x63e0d2:c.instructions+=6;goto B63e0d2;
case 0x63e0d4:c.instructions+=5;goto B63e0d4;
case 0x63e0d7:c.instructions+=4;goto B63e0d7;
case 0x63e0da:c.instructions+=3;goto B63e0da;
case 0x63e0dd:c.instructions+=2;goto B63e0dd;
case 0x63e0de:c.instructions+=1;goto B63e0de;
case 0x63e0e3:goto L63e0e3;
case 0x63e0e6:c.instructions+=4;goto B63e0e6;
case 0x63e0e8:c.instructions+=3;goto B63e0e8;
case 0x63e0eb:c.instructions+=2;goto B63e0eb;
case 0x63e0ec:c.instructions+=1;goto B63e0ec;
case 0x63e0f2:goto L63e0f2;
case 0x63e0f8:c.instructions+=2;goto B63e0f8;
case 0x63e0f9:c.instructions+=1;goto B63e0f9;
case 0x63e0fe:goto L63e0fe;
case 0x63e100:c.instructions+=43;goto B63e100;
case 0x63e103:c.instructions+=42;goto B63e103;
case 0x63e106:c.instructions+=41;goto B63e106;
case 0x63e108:c.instructions+=40;goto B63e108;
case 0x63e10e:c.instructions+=39;goto B63e10e;
case 0x63e111:c.instructions+=38;goto B63e111;
case 0x63e112:c.instructions+=37;goto B63e112;
case 0x63e114:c.instructions+=36;goto B63e114;
case 0x63e115:c.instructions+=35;goto B63e115;
case 0x63e116:c.instructions+=34;goto B63e116;
case 0x63e119:c.instructions+=33;goto B63e119;
case 0x63e11b:c.instructions+=32;goto B63e11b;
case 0x63e11e:c.instructions+=31;goto B63e11e;
case 0x63e120:c.instructions+=30;goto B63e120;
case 0x63e123:c.instructions+=29;goto B63e123;
case 0x63e125:c.instructions+=28;goto B63e125;
case 0x63e128:c.instructions+=27;goto B63e128;
case 0x63e12a:c.instructions+=26;goto B63e12a;
case 0x63e12d:c.instructions+=25;goto B63e12d;
case 0x63e12f:c.instructions+=24;goto B63e12f;
case 0x63e132:c.instructions+=23;goto B63e132;
case 0x63e134:c.instructions+=22;goto B63e134;
case 0x63e137:c.instructions+=21;goto B63e137;
case 0x63e139:c.instructions+=20;goto B63e139;
case 0x63e13c:c.instructions+=19;goto B63e13c;
case 0x63e13e:c.instructions+=18;goto B63e13e;
case 0x63e141:c.instructions+=17;goto B63e141;
case 0x63e143:c.instructions+=16;goto B63e143;
case 0x63e146:c.instructions+=15;goto B63e146;
case 0x63e148:c.instructions+=14;goto B63e148;
case 0x63e14b:c.instructions+=13;goto B63e14b;
case 0x63e14d:c.instructions+=12;goto B63e14d;
case 0x63e150:c.instructions+=11;goto B63e150;
case 0x63e152:c.instructions+=10;goto B63e152;
case 0x63e155:c.instructions+=9;goto B63e155;
case 0x63e157:c.instructions+=8;goto B63e157;
case 0x63e159:c.instructions+=7;goto B63e159;
case 0x63e15b:c.instructions+=6;goto B63e15b;
case 0x63e15d:c.instructions+=5;goto B63e15d;
case 0x63e160:c.instructions+=4;goto B63e160;
case 0x63e163:c.instructions+=3;goto B63e163;
case 0x63e165:c.instructions+=2;goto B63e165;
case 0x63e168:c.instructions+=1;goto B63e168;
case 0x63e16d:goto L63e16d;
case 0x63e170:c.instructions+=4;goto B63e170;
case 0x63e171:c.instructions+=3;goto B63e171;
case 0x63e172:c.instructions+=2;goto B63e172;
case 0x63e173:c.instructions+=1;goto B63e173;
case 0x63e178:goto L63e178;
case 0x63e17b:c.instructions+=4;goto B63e17b;
case 0x63e17c:c.instructions+=3;goto B63e17c;
case 0x63e17d:c.instructions+=2;goto B63e17d;
case 0x63e17e:c.instructions+=1;goto B63e17e;
case 0x63e183:goto L63e183;
case 0x63e185:c.instructions+=6;goto B63e185;
case 0x63e188:c.instructions+=5;goto B63e188;
case 0x63e18b:c.instructions+=4;goto B63e18b;
case 0x63e18e:c.instructions+=3;goto B63e18e;
case 0x63e191:c.instructions+=2;goto B63e191;
case 0x63e194:c.instructions+=1;goto B63e194;
case 0x63e199:goto L63e199;
case 0x63e19c:c.instructions+=2;goto B63e19c;
case 0x63e19d:c.instructions+=1;goto B63e19d;
case 0x63e1a2:goto L63e1a2;
case 0x63e1a5:c.instructions+=4;goto B63e1a5;
case 0x63e1a6:c.instructions+=3;goto B63e1a6;
case 0x63e1a7:c.instructions+=2;goto B63e1a7;
case 0x63e1a8:c.instructions+=1;goto B63e1a8;
case 0x63e1ad:goto L63e1ad;
case 0x63e1b0:c.instructions+=4;goto B63e1b0;
case 0x63e1b1:c.instructions+=3;goto B63e1b1;
case 0x63e1b2:c.instructions+=2;goto B63e1b2;
case 0x63e1b3:c.instructions+=1;goto B63e1b3;
case 0x63e1b8:goto L63e1b8;
case 0x63e1bd:goto L63e1bd;
case 0x63e1c0:c.instructions+=3;goto B63e1c0;
case 0x63e1c2:c.instructions+=2;goto B63e1c2;
case 0x63e1c5:c.instructions+=1;goto B63e1c5;
case 0x63e1c7:goto L63e1c7;
case 0x63e1ca:c.instructions+=32;goto B63e1ca;
case 0x63e1cc:c.instructions+=31;goto B63e1cc;
case 0x63e1cf:c.instructions+=30;goto B63e1cf;
case 0x63e1d1:c.instructions+=29;goto B63e1d1;
case 0x63e1d4:c.instructions+=28;goto B63e1d4;
case 0x63e1d6:c.instructions+=27;goto B63e1d6;
case 0x63e1d9:c.instructions+=26;goto B63e1d9;
case 0x63e1db:c.instructions+=25;goto B63e1db;
case 0x63e1de:c.instructions+=24;goto B63e1de;
case 0x63e1e0:c.instructions+=23;goto B63e1e0;
case 0x63e1e3:c.instructions+=22;goto B63e1e3;
case 0x63e1e5:c.instructions+=21;goto B63e1e5;
case 0x63e1e8:c.instructions+=20;goto B63e1e8;
case 0x63e1ea:c.instructions+=19;goto B63e1ea;
case 0x63e1ed:c.instructions+=18;goto B63e1ed;
case 0x63e1ef:c.instructions+=17;goto B63e1ef;
case 0x63e1f2:c.instructions+=16;goto B63e1f2;
case 0x63e1f4:c.instructions+=15;goto B63e1f4;
case 0x63e1f6:c.instructions+=14;goto B63e1f6;
case 0x63e1f8:c.instructions+=13;goto B63e1f8;
case 0x63e1fb:c.instructions+=12;goto B63e1fb;
case 0x63e1fe:c.instructions+=11;goto B63e1fe;
case 0x63e201:c.instructions+=10;goto B63e201;
case 0x63e203:c.instructions+=9;goto B63e203;
case 0x63e205:c.instructions+=8;goto B63e205;
case 0x63e207:c.instructions+=7;goto B63e207;
case 0x63e20a:c.instructions+=6;goto B63e20a;
case 0x63e20c:c.instructions+=5;goto B63e20c;
case 0x63e20f:c.instructions+=4;goto B63e20f;
case 0x63e212:c.instructions+=3;goto B63e212;
case 0x63e215:c.instructions+=2;goto B63e215;
case 0x63e217:c.instructions+=1;goto B63e217;
case 0x63e21a:goto L63e21a;
case 0x63e21c:c.instructions+=2;goto B63e21c;
case 0x63e21f:c.instructions+=1;goto B63e21f;
case 0x63e224:goto L63e224;
case 0x63e227:c.instructions+=29;goto B63e227;
case 0x63e229:c.instructions+=28;goto B63e229;
case 0x63e22c:c.instructions+=27;goto B63e22c;
case 0x63e22e:c.instructions+=26;goto B63e22e;
case 0x63e231:c.instructions+=25;goto B63e231;
case 0x63e233:c.instructions+=24;goto B63e233;
case 0x63e236:c.instructions+=23;goto B63e236;
case 0x63e238:c.instructions+=22;goto B63e238;
case 0x63e23b:c.instructions+=21;goto B63e23b;
case 0x63e23d:c.instructions+=20;goto B63e23d;
case 0x63e240:c.instructions+=19;goto B63e240;
case 0x63e242:c.instructions+=18;goto B63e242;
case 0x63e245:c.instructions+=17;goto B63e245;
case 0x63e247:c.instructions+=16;goto B63e247;
case 0x63e24a:c.instructions+=15;goto B63e24a;
case 0x63e24c:c.instructions+=14;goto B63e24c;
case 0x63e24f:c.instructions+=13;goto B63e24f;
case 0x63e251:c.instructions+=12;goto B63e251;
case 0x63e254:c.instructions+=11;goto B63e254;
case 0x63e256:c.instructions+=10;goto B63e256;
case 0x63e259:c.instructions+=9;goto B63e259;
case 0x63e25b:c.instructions+=8;goto B63e25b;
case 0x63e25e:c.instructions+=7;goto B63e25e;
case 0x63e260:c.instructions+=6;goto B63e260;
case 0x63e262:c.instructions+=5;goto B63e262;
case 0x63e264:c.instructions+=4;goto B63e264;
case 0x63e267:c.instructions+=3;goto B63e267;
case 0x63e26a:c.instructions+=2;goto B63e26a;
case 0x63e26d:c.instructions+=1;goto B63e26d;
case 0x63e26f:goto L63e26f;
case 0x63e272:c.instructions+=32;goto B63e272;
case 0x63e274:c.instructions+=31;goto B63e274;
case 0x63e277:c.instructions+=30;goto B63e277;
case 0x63e279:c.instructions+=29;goto B63e279;
case 0x63e27c:c.instructions+=28;goto B63e27c;
case 0x63e27e:c.instructions+=27;goto B63e27e;
case 0x63e281:c.instructions+=26;goto B63e281;
case 0x63e283:c.instructions+=25;goto B63e283;
case 0x63e286:c.instructions+=24;goto B63e286;
case 0x63e288:c.instructions+=23;goto B63e288;
case 0x63e28b:c.instructions+=22;goto B63e28b;
case 0x63e28d:c.instructions+=21;goto B63e28d;
case 0x63e290:c.instructions+=20;goto B63e290;
case 0x63e292:c.instructions+=19;goto B63e292;
case 0x63e295:c.instructions+=18;goto B63e295;
case 0x63e297:c.instructions+=17;goto B63e297;
case 0x63e29a:c.instructions+=16;goto B63e29a;
case 0x63e29c:c.instructions+=15;goto B63e29c;
case 0x63e29f:c.instructions+=14;goto B63e29f;
case 0x63e2a1:c.instructions+=13;goto B63e2a1;
case 0x63e2a4:c.instructions+=12;goto B63e2a4;
case 0x63e2a6:c.instructions+=11;goto B63e2a6;
case 0x63e2a9:c.instructions+=10;goto B63e2a9;
case 0x63e2ab:c.instructions+=9;goto B63e2ab;
case 0x63e2ae:c.instructions+=8;goto B63e2ae;
case 0x63e2b0:c.instructions+=7;goto B63e2b0;
case 0x63e2b3:c.instructions+=6;goto B63e2b3;
case 0x63e2b5:c.instructions+=5;goto B63e2b5;
case 0x63e2b8:c.instructions+=4;goto B63e2b8;
case 0x63e2ba:c.instructions+=3;goto B63e2ba;
case 0x63e2bd:c.instructions+=2;goto B63e2bd;
case 0x63e2bf:c.instructions+=1;goto B63e2bf;
case 0x63e2c1:goto L63e2c1;
case 0x63e2c4:c.instructions+=5;goto B63e2c4;
case 0x63e2ca:c.instructions+=4;goto B63e2ca;
case 0x63e2cc:c.instructions+=3;goto B63e2cc;
case 0x63e2ce:c.instructions+=2;goto B63e2ce;
case 0x63e2d1:c.instructions+=1;goto B63e2d1;
case 0x63e2d3:goto L63e2d3;
case 0x63e2d6:c.instructions+=5;goto B63e2d6;
case 0x63e2d7:c.instructions+=4;goto B63e2d7;
case 0x63e2da:c.instructions+=3;goto B63e2da;
case 0x63e2dd:c.instructions+=2;goto B63e2dd;
case 0x63e2de:c.instructions+=1;goto B63e2de;
case 0x63e2e3:goto L63e2e3;
case 0x63e2e6:c.instructions+=6;goto B63e2e6;
case 0x63e2e8:c.instructions+=5;goto B63e2e8;
case 0x63e2eb:c.instructions+=4;goto B63e2eb;
case 0x63e2ec:c.instructions+=3;goto B63e2ec;
case 0x63e2ed:c.instructions+=2;goto B63e2ed;
case 0x63e2ee:c.instructions+=1;goto B63e2ee;
case 0x63e2f0:goto L63e2f0;
case 0x63e2f3:c.instructions+=6;goto B63e2f3;
case 0x63e2f5:c.instructions+=5;goto B63e2f5;
case 0x63e2f8:c.instructions+=4;goto B63e2f8;
case 0x63e2fb:c.instructions+=3;goto B63e2fb;
case 0x63e2fe:c.instructions+=2;goto B63e2fe;
case 0x63e301:c.instructions+=1;goto B63e301;
case 0x63e306:goto L63e306;
case 0x63e308:c.instructions+=6;goto B63e308;
case 0x63e30b:c.instructions+=5;goto B63e30b;
case 0x63e30e:c.instructions+=4;goto B63e30e;
case 0x63e311:c.instructions+=3;goto B63e311;
case 0x63e314:c.instructions+=2;goto B63e314;
case 0x63e317:c.instructions+=1;goto B63e317;
case 0x63e319:goto L63e319;
case 0x63e31e:goto L63e31e;
case 0x63e321:c.instructions+=2;goto B63e321;
case 0x63e323:c.instructions+=1;goto B63e323;
case 0x63e325:goto L63e325;
case 0x63e327:c.instructions+=5;goto B63e327;
case 0x63e32a:c.instructions+=4;goto B63e32a;
case 0x63e32d:c.instructions+=3;goto B63e32d;
case 0x63e330:c.instructions+=2;goto B63e330;
case 0x63e333:c.instructions+=1;goto B63e333;
case 0x63e336:goto L63e336;
case 0x63e337:c.instructions+=7;goto B63e337;
case 0x63e339:c.instructions+=6;goto B63e339;
case 0x63e33a:c.instructions+=5;goto B63e33a;
case 0x63e33c:c.instructions+=4;goto B63e33c;
case 0x63e33d:c.instructions+=3;goto B63e33d;
case 0x63e33f:c.instructions+=2;goto B63e33f;
case 0x63e340:c.instructions+=1;goto B63e340;
case 0x63e343:goto L63e343;
case 0x63e345:c.instructions+=4;goto B63e345;
case 0x63e346:c.instructions+=3;goto B63e346;
case 0x63e348:c.instructions+=2;goto B63e348;
case 0x63e34a:c.instructions+=1;goto B63e34a;
case 0x63e34f:goto L63e34f;
case 0x63e352:c.instructions+=7;goto B63e352;
case 0x63e355:c.instructions+=6;goto B63e355;
case 0x63e358:c.instructions+=5;goto B63e358;
case 0x63e35b:c.instructions+=4;goto B63e35b;
case 0x63e35c:c.instructions+=3;goto B63e35c;
case 0x63e35f:c.instructions+=2;goto B63e35f;
case 0x63e362:c.instructions+=1;goto B63e362;
case 0x63e368:goto L63e368;
case 0x63e369:c.instructions+=1;goto B63e369;
case 0x63e36c:goto L63e36c;
case 0x63e36e:c.instructions+=43;goto B63e36e;
case 0x63e36f:c.instructions+=42;goto B63e36f;
case 0x63e371:c.instructions+=41;goto B63e371;
case 0x63e372:c.instructions+=40;goto B63e372;
case 0x63e375:c.instructions+=39;goto B63e375;
case 0x63e378:c.instructions+=38;goto B63e378;
case 0x63e379:c.instructions+=37;goto B63e379;
case 0x63e37b:c.instructions+=36;goto B63e37b;
case 0x63e37e:c.instructions+=35;goto B63e37e;
case 0x63e380:c.instructions+=34;goto B63e380;
case 0x63e384:c.instructions+=33;goto B63e384;
case 0x63e385:c.instructions+=32;goto B63e385;
case 0x63e388:c.instructions+=31;goto B63e388;
case 0x63e38b:c.instructions+=30;goto B63e38b;
case 0x63e38c:c.instructions+=29;goto B63e38c;
case 0x63e38e:c.instructions+=28;goto B63e38e;
case 0x63e391:c.instructions+=27;goto B63e391;
case 0x63e393:c.instructions+=26;goto B63e393;
case 0x63e396:c.instructions+=25;goto B63e396;
case 0x63e398:c.instructions+=24;goto B63e398;
case 0x63e39b:c.instructions+=23;goto B63e39b;
case 0x63e39d:c.instructions+=22;goto B63e39d;
case 0x63e3a0:c.instructions+=21;goto B63e3a0;
case 0x63e3a2:c.instructions+=20;goto B63e3a2;
case 0x63e3a5:c.instructions+=19;goto B63e3a5;
case 0x63e3a7:c.instructions+=18;goto B63e3a7;
case 0x63e3aa:c.instructions+=17;goto B63e3aa;
case 0x63e3ac:c.instructions+=16;goto B63e3ac;
case 0x63e3af:c.instructions+=15;goto B63e3af;
case 0x63e3b1:c.instructions+=14;goto B63e3b1;
case 0x63e3b4:c.instructions+=13;goto B63e3b4;
case 0x63e3b6:c.instructions+=12;goto B63e3b6;
case 0x63e3b9:c.instructions+=11;goto B63e3b9;
case 0x63e3bb:c.instructions+=10;goto B63e3bb;
case 0x63e3be:c.instructions+=9;goto B63e3be;
case 0x63e3c0:c.instructions+=8;goto B63e3c0;
case 0x63e3c3:c.instructions+=7;goto B63e3c3;
case 0x63e3c6:c.instructions+=6;goto B63e3c6;
case 0x63e3c8:c.instructions+=5;goto B63e3c8;
case 0x63e3cb:c.instructions+=4;goto B63e3cb;
case 0x63e3ce:c.instructions+=3;goto B63e3ce;
case 0x63e3d0:c.instructions+=2;goto B63e3d0;
case 0x63e3d3:c.instructions+=1;goto B63e3d3;
case 0x63e3d5:goto L63e3d5;
case 0x63e3d8:c.instructions+=3;goto B63e3d8;
case 0x63e3db:c.instructions+=2;goto B63e3db;
case 0x63e3dc:c.instructions+=1;goto B63e3dc;
case 0x63e3e1:goto L63e3e1;
case 0x63e3e4:c.instructions+=6;goto B63e3e4;
case 0x63e3e6:c.instructions+=5;goto B63e3e6;
case 0x63e3e9:c.instructions+=4;goto B63e3e9;
case 0x63e3ea:c.instructions+=3;goto B63e3ea;
case 0x63e3eb:c.instructions+=2;goto B63e3eb;
case 0x63e3ec:c.instructions+=1;goto B63e3ec;
case 0x63e3ee:goto L63e3ee;
case 0x63e3f1:c.instructions+=9;goto B63e3f1;
case 0x63e3f3:c.instructions+=8;goto B63e3f3;
case 0x63e3f6:c.instructions+=7;goto B63e3f6;
case 0x63e3f9:c.instructions+=6;goto B63e3f9;
case 0x63e3fc:c.instructions+=5;goto B63e3fc;
case 0x63e3ff:c.instructions+=4;goto B63e3ff;
case 0x63e402:c.instructions+=3;goto B63e402;
case 0x63e405:c.instructions+=2;goto B63e405;
case 0x63e408:c.instructions+=1;goto B63e408;
case 0x63e40d:goto L63e40d;
case 0x63e40f:c.instructions+=9;goto B63e40f;
case 0x63e412:c.instructions+=8;goto B63e412;
case 0x63e415:c.instructions+=7;goto B63e415;
case 0x63e418:c.instructions+=6;goto B63e418;
case 0x63e41b:c.instructions+=5;goto B63e41b;
case 0x63e41e:c.instructions+=4;goto B63e41e;
case 0x63e421:c.instructions+=3;goto B63e421;
case 0x63e424:c.instructions+=2;goto B63e424;
case 0x63e427:c.instructions+=1;goto B63e427;
case 0x63e429:goto L63e429;
case 0x63e42e:goto L63e42e;
case 0x63e431:c.instructions+=2;goto B63e431;
case 0x63e433:c.instructions+=1;goto B63e433;
case 0x63e435:goto L63e435;
case 0x63e437:c.instructions+=8;goto B63e437;
case 0x63e43a:c.instructions+=7;goto B63e43a;
case 0x63e43d:c.instructions+=6;goto B63e43d;
case 0x63e440:c.instructions+=5;goto B63e440;
case 0x63e443:c.instructions+=4;goto B63e443;
case 0x63e446:c.instructions+=3;goto B63e446;
case 0x63e449:c.instructions+=2;goto B63e449;
case 0x63e44c:c.instructions+=1;goto B63e44c;
case 0x63e44f:goto L63e44f;
case 0x63e450:c.instructions+=7;goto B63e450;
case 0x63e452:c.instructions+=6;goto B63e452;
case 0x63e453:c.instructions+=5;goto B63e453;
case 0x63e455:c.instructions+=4;goto B63e455;
case 0x63e456:c.instructions+=3;goto B63e456;
case 0x63e458:c.instructions+=2;goto B63e458;
case 0x63e459:c.instructions+=1;goto B63e459;
case 0x63e45c:goto L63e45c;
case 0x63e45e:c.instructions+=4;goto B63e45e;
case 0x63e45f:c.instructions+=3;goto B63e45f;
case 0x63e461:c.instructions+=2;goto B63e461;
case 0x63e463:c.instructions+=1;goto B63e463;
case 0x63e468:goto L63e468;
case 0x63e46b:c.instructions+=9;goto B63e46b;
case 0x63e46e:c.instructions+=8;goto B63e46e;
case 0x63e46f:c.instructions+=7;goto B63e46f;
case 0x63e472:c.instructions+=6;goto B63e472;
case 0x63e475:c.instructions+=5;goto B63e475;
case 0x63e478:c.instructions+=4;goto B63e478;
case 0x63e479:c.instructions+=3;goto B63e479;
case 0x63e47c:c.instructions+=2;goto B63e47c;
case 0x63e47f:c.instructions+=1;goto B63e47f;
case 0x63e485:goto L63e485;
case 0x63e486:c.instructions+=1;goto B63e486;
case 0x63e489:goto L63e489;
case 0x63e48b:c.instructions+=48;goto B63e48b;
case 0x63e48c:c.instructions+=47;goto B63e48c;
case 0x63e48e:c.instructions+=46;goto B63e48e;
case 0x63e48f:c.instructions+=45;goto B63e48f;
case 0x63e492:c.instructions+=44;goto B63e492;
case 0x63e495:c.instructions+=43;goto B63e495;
case 0x63e496:c.instructions+=42;goto B63e496;
case 0x63e498:c.instructions+=41;goto B63e498;
case 0x63e49b:c.instructions+=40;goto B63e49b;
case 0x63e49d:c.instructions+=39;goto B63e49d;
case 0x63e49e:c.instructions+=38;goto B63e49e;
case 0x63e4a1:c.instructions+=37;goto B63e4a1;
case 0x63e4a4:c.instructions+=36;goto B63e4a4;
case 0x63e4a5:c.instructions+=35;goto B63e4a5;
case 0x63e4a7:c.instructions+=34;goto B63e4a7;
case 0x63e4aa:c.instructions+=33;goto B63e4aa;
case 0x63e4ac:c.instructions+=32;goto B63e4ac;
case 0x63e4af:c.instructions+=31;goto B63e4af;
case 0x63e4b1:c.instructions+=30;goto B63e4b1;
case 0x63e4b4:c.instructions+=29;goto B63e4b4;
case 0x63e4b6:c.instructions+=28;goto B63e4b6;
case 0x63e4b9:c.instructions+=27;goto B63e4b9;
case 0x63e4bb:c.instructions+=26;goto B63e4bb;
case 0x63e4be:c.instructions+=25;goto B63e4be;
case 0x63e4c0:c.instructions+=24;goto B63e4c0;
case 0x63e4c3:c.instructions+=23;goto B63e4c3;
case 0x63e4c5:c.instructions+=22;goto B63e4c5;
case 0x63e4c8:c.instructions+=21;goto B63e4c8;
case 0x63e4ca:c.instructions+=20;goto B63e4ca;
case 0x63e4cd:c.instructions+=19;goto B63e4cd;
case 0x63e4cf:c.instructions+=18;goto B63e4cf;
case 0x63e4d2:c.instructions+=17;goto B63e4d2;
case 0x63e4d4:c.instructions+=16;goto B63e4d4;
case 0x63e4d7:c.instructions+=15;goto B63e4d7;
case 0x63e4d9:c.instructions+=14;goto B63e4d9;
case 0x63e4dc:c.instructions+=13;goto B63e4dc;
case 0x63e4df:c.instructions+=12;goto B63e4df;
case 0x63e4e1:c.instructions+=11;goto B63e4e1;
case 0x63e4e4:c.instructions+=10;goto B63e4e4;
case 0x63e4e6:c.instructions+=9;goto B63e4e6;
case 0x63e4e9:c.instructions+=8;goto B63e4e9;
case 0x63e4eb:c.instructions+=7;goto B63e4eb;
case 0x63e4ee:c.instructions+=6;goto B63e4ee;
case 0x63e4f1:c.instructions+=5;goto B63e4f1;
case 0x63e4f7:c.instructions+=4;goto B63e4f7;
case 0x63e4f9:c.instructions+=3;goto B63e4f9;
case 0x63e4fb:c.instructions+=2;goto B63e4fb;
case 0x63e4fe:c.instructions+=1;goto B63e4fe;
case 0x63e500:goto L63e500;
case 0x63e503:c.instructions+=5;goto B63e503;
case 0x63e504:c.instructions+=4;goto B63e504;
case 0x63e507:c.instructions+=3;goto B63e507;
case 0x63e50a:c.instructions+=2;goto B63e50a;
case 0x63e50b:c.instructions+=1;goto B63e50b;
case 0x63e510:goto L63e510;
case 0x63e513:c.instructions+=6;goto B63e513;
case 0x63e515:c.instructions+=5;goto B63e515;
case 0x63e518:c.instructions+=4;goto B63e518;
case 0x63e519:c.instructions+=3;goto B63e519;
case 0x63e51a:c.instructions+=2;goto B63e51a;
case 0x63e51b:c.instructions+=1;goto B63e51b;
case 0x63e51d:goto L63e51d;
case 0x63e520:c.instructions+=6;goto B63e520;
case 0x63e522:c.instructions+=5;goto B63e522;
case 0x63e525:c.instructions+=4;goto B63e525;
case 0x63e528:c.instructions+=3;goto B63e528;
case 0x63e52b:c.instructions+=2;goto B63e52b;
case 0x63e52e:c.instructions+=1;goto B63e52e;
case 0x63e533:goto L63e533;
case 0x63e535:c.instructions+=6;goto B63e535;
case 0x63e538:c.instructions+=5;goto B63e538;
case 0x63e53b:c.instructions+=4;goto B63e53b;
case 0x63e53e:c.instructions+=3;goto B63e53e;
case 0x63e541:c.instructions+=2;goto B63e541;
case 0x63e544:c.instructions+=1;goto B63e544;
case 0x63e546:goto L63e546;
case 0x63e54b:goto L63e54b;
case 0x63e54e:c.instructions+=2;goto B63e54e;
case 0x63e550:c.instructions+=1;goto B63e550;
case 0x63e552:goto L63e552;
case 0x63e554:c.instructions+=5;goto B63e554;
case 0x63e557:c.instructions+=4;goto B63e557;
case 0x63e55a:c.instructions+=3;goto B63e55a;
case 0x63e55d:c.instructions+=2;goto B63e55d;
case 0x63e560:c.instructions+=1;goto B63e560;
case 0x63e563:goto L63e563;
case 0x63e564:c.instructions+=7;goto B63e564;
case 0x63e566:c.instructions+=6;goto B63e566;
case 0x63e567:c.instructions+=5;goto B63e567;
case 0x63e569:c.instructions+=4;goto B63e569;
case 0x63e56a:c.instructions+=3;goto B63e56a;
case 0x63e56c:c.instructions+=2;goto B63e56c;
case 0x63e56d:c.instructions+=1;goto B63e56d;
case 0x63e570:goto L63e570;
case 0x63e572:c.instructions+=62;goto B63e572;
case 0x63e573:c.instructions+=61;goto B63e573;
case 0x63e575:c.instructions+=60;goto B63e575;
case 0x63e576:c.instructions+=59;goto B63e576;
case 0x63e57c:c.instructions+=58;goto B63e57c;
case 0x63e57f:c.instructions+=57;goto B63e57f;
case 0x63e582:c.instructions+=56;goto B63e582;
case 0x63e585:c.instructions+=55;goto B63e585;
case 0x63e587:c.instructions+=54;goto B63e587;
case 0x63e58a:c.instructions+=53;goto B63e58a;
case 0x63e58d:c.instructions+=52;goto B63e58d;
case 0x63e58f:c.instructions+=51;goto B63e58f;
case 0x63e592:c.instructions+=50;goto B63e592;
case 0x63e598:c.instructions+=49;goto B63e598;
case 0x63e59a:c.instructions+=48;goto B63e59a;
case 0x63e59c:c.instructions+=47;goto B63e59c;
case 0x63e59e:c.instructions+=46;goto B63e59e;
case 0x63e5a0:c.instructions+=45;goto B63e5a0;
case 0x63e5a3:c.instructions+=44;goto B63e5a3;
case 0x63e5a5:c.instructions+=43;goto B63e5a5;
case 0x63e5a8:c.instructions+=42;goto B63e5a8;
case 0x63e5aa:c.instructions+=41;goto B63e5aa;
case 0x63e5ad:c.instructions+=40;goto B63e5ad;
case 0x63e5af:c.instructions+=39;goto B63e5af;
case 0x63e5b2:c.instructions+=38;goto B63e5b2;
case 0x63e5b5:c.instructions+=37;goto B63e5b5;
case 0x63e5b7:c.instructions+=36;goto B63e5b7;
case 0x63e5ba:c.instructions+=35;goto B63e5ba;
case 0x63e5bc:c.instructions+=34;goto B63e5bc;
case 0x63e5be:c.instructions+=33;goto B63e5be;
case 0x63e5c1:c.instructions+=32;goto B63e5c1;
case 0x63e5c3:c.instructions+=31;goto B63e5c3;
case 0x63e5c6:c.instructions+=30;goto B63e5c6;
case 0x63e5c8:c.instructions+=29;goto B63e5c8;
case 0x63e5cb:c.instructions+=28;goto B63e5cb;
case 0x63e5cd:c.instructions+=27;goto B63e5cd;
case 0x63e5d0:c.instructions+=26;goto B63e5d0;
case 0x63e5d3:c.instructions+=25;goto B63e5d3;
case 0x63e5d6:c.instructions+=24;goto B63e5d6;
case 0x63e5d8:c.instructions+=23;goto B63e5d8;
case 0x63e5db:c.instructions+=22;goto B63e5db;
case 0x63e5de:c.instructions+=21;goto B63e5de;
case 0x63e5e0:c.instructions+=20;goto B63e5e0;
case 0x63e5e3:c.instructions+=19;goto B63e5e3;
case 0x63e5e6:c.instructions+=18;goto B63e5e6;
case 0x63e5e9:c.instructions+=17;goto B63e5e9;
case 0x63e5eb:c.instructions+=16;goto B63e5eb;
case 0x63e5ed:c.instructions+=15;goto B63e5ed;
case 0x63e5f0:c.instructions+=14;goto B63e5f0;
case 0x63e5f2:c.instructions+=13;goto B63e5f2;
case 0x63e5f4:c.instructions+=12;goto B63e5f4;
case 0x63e5f7:c.instructions+=11;goto B63e5f7;
case 0x63e5fa:c.instructions+=10;goto B63e5fa;
case 0x63e5fd:c.instructions+=9;goto B63e5fd;
case 0x63e5ff:c.instructions+=8;goto B63e5ff;
case 0x63e602:c.instructions+=7;goto B63e602;
case 0x63e605:c.instructions+=6;goto B63e605;
case 0x63e608:c.instructions+=5;goto B63e608;
case 0x63e60b:c.instructions+=4;goto B63e60b;
case 0x63e60d:c.instructions+=3;goto B63e60d;
case 0x63e610:c.instructions+=2;goto B63e610;
case 0x63e611:c.instructions+=1;goto B63e611;
case 0x63e614:goto L63e614;
case 0x63e616:c.instructions+=4;goto B63e616;
case 0x63e617:c.instructions+=3;goto B63e617;
case 0x63e619:c.instructions+=2;goto B63e619;
case 0x63e61b:c.instructions+=1;goto B63e61b;
case 0x63e620:goto L63e620;
case 0x63e621:c.instructions+=1;goto B63e621;
case 0x63e627:goto L63e627;
case 0x63e629:c.instructions+=4;goto B63e629;
case 0x63e62a:c.instructions+=3;goto B63e62a;
case 0x63e62c:c.instructions+=2;goto B63e62c;
case 0x63e62e:c.instructions+=1;goto B63e62e;
case 0x63e633:goto L63e633;
case 0x63e634:c.instructions+=1;goto B63e634;
case 0x63e63a:goto L63e63a;
case 0x63e63c:c.instructions+=4;goto B63e63c;
case 0x63e63d:c.instructions+=3;goto B63e63d;
case 0x63e63f:c.instructions+=2;goto B63e63f;
case 0x63e641:c.instructions+=1;goto B63e641;
case 0x63e646:goto L63e646;
case 0x63e647:c.instructions+=1;goto B63e647;
case 0x63e64d:goto L63e64d;
case 0x63e64f:c.instructions+=6;goto B63e64f;
case 0x63e650:c.instructions+=5;goto B63e650;
case 0x63e652:c.instructions+=4;goto B63e652;
case 0x63e655:c.instructions+=3;goto B63e655;
case 0x63e657:c.instructions+=2;goto B63e657;
case 0x63e65a:c.instructions+=1;goto B63e65a;
case 0x63e65c:goto L63e65c;
case 0x63e65e:c.instructions+=5;goto B63e65e;
case 0x63e660:c.instructions+=4;goto B63e660;
case 0x63e663:c.instructions+=3;goto B63e663;
case 0x63e666:c.instructions+=2;goto B63e666;
case 0x63e669:c.instructions+=1;goto B63e669;
case 0x63e66c:goto L63e66c;
case 0x63e66d:c.instructions+=3;goto B63e66d;
case 0x63e670:c.instructions+=2;goto B63e670;
case 0x63e672:c.instructions+=1;goto B63e672;
case 0x63e674:goto L63e674;
case 0x63e677:c.instructions+=1;goto B63e677;
case 0x63e67c:goto L63e67c;
case 0x63e67e:c.instructions+=1;goto B63e67e;
case 0x63e680:goto L63e680;
case 0x63e681:c.instructions+=2;goto B63e681;
case 0x63e682:c.instructions+=1;goto B63e682;
case 0x63e685:goto L63e685;
case 0x63e687:c.instructions+=4;goto B63e687;
case 0x63e688:c.instructions+=3;goto B63e688;
case 0x63e68a:c.instructions+=2;goto B63e68a;
case 0x63e68c:c.instructions+=1;goto B63e68c;
case 0x63e691:goto L63e691;
case 0x63e692:c.instructions+=1;goto B63e692;
case 0x63e698:goto L63e698;
case 0x63e69e:goto L63e69e;
case 0x63e6a0:c.instructions+=11;goto B63e6a0;
case 0x63e6a1:c.instructions+=10;goto B63e6a1;
case 0x63e6a3:c.instructions+=9;goto B63e6a3;
case 0x63e6a6:c.instructions+=8;goto B63e6a6;
case 0x63e6a9:c.instructions+=7;goto B63e6a9;
case 0x63e6ac:c.instructions+=6;goto B63e6ac;
case 0x63e6ae:c.instructions+=5;goto B63e6ae;
case 0x63e6b1:c.instructions+=4;goto B63e6b1;
case 0x63e6b7:c.instructions+=3;goto B63e6b7;
case 0x63e6b9:c.instructions+=2;goto B63e6b9;
case 0x63e6bc:c.instructions+=1;goto B63e6bc;
case 0x63e6be:goto L63e6be;
case 0x63e6c4:c.instructions+=19;goto B63e6c4;
case 0x63e6c7:c.instructions+=18;goto B63e6c7;
case 0x63e6c9:c.instructions+=17;goto B63e6c9;
case 0x63e6cf:c.instructions+=16;goto B63e6cf;
case 0x63e6d1:c.instructions+=15;goto B63e6d1;
case 0x63e6d4:c.instructions+=14;goto B63e6d4;
case 0x63e6da:c.instructions+=13;goto B63e6da;
case 0x63e6dd:c.instructions+=12;goto B63e6dd;
case 0x63e6e0:c.instructions+=11;goto B63e6e0;
case 0x63e6e2:c.instructions+=10;goto B63e6e2;
case 0x63e6e4:c.instructions+=9;goto B63e6e4;
case 0x63e6e7:c.instructions+=8;goto B63e6e7;
case 0x63e6ea:c.instructions+=7;goto B63e6ea;
case 0x63e6ec:c.instructions+=6;goto B63e6ec;
case 0x63e6ef:c.instructions+=5;goto B63e6ef;
case 0x63e6f2:c.instructions+=4;goto B63e6f2;
case 0x63e6f5:c.instructions+=3;goto B63e6f5;
case 0x63e6f7:c.instructions+=2;goto B63e6f7;
case 0x63e6fa:c.instructions+=1;goto B63e6fa;
case 0x63e6ff:goto L63e6ff;
case 0x63e701:c.instructions+=26;goto B63e701;
case 0x63e705:c.instructions+=25;goto B63e705;
case 0x63e707:c.instructions+=24;goto B63e707;
case 0x63e708:c.instructions+=23;goto B63e708;
case 0x63e70b:c.instructions+=22;goto B63e70b;
case 0x63e70c:c.instructions+=21;goto B63e70c;
case 0x63e70d:c.instructions+=20;goto B63e70d;
case 0x63e70f:c.instructions+=19;goto B63e70f;
case 0x63e712:c.instructions+=18;goto B63e712;
case 0x63e713:c.instructions+=17;goto B63e713;
case 0x63e715:c.instructions+=16;goto B63e715;
case 0x63e716:c.instructions+=15;goto B63e716;
case 0x63e719:c.instructions+=14;goto B63e719;
case 0x63e71c:c.instructions+=13;goto B63e71c;
case 0x63e71f:c.instructions+=12;goto B63e71f;
case 0x63e722:c.instructions+=11;goto B63e722;
case 0x63e724:c.instructions+=10;goto B63e724;
case 0x63e727:c.instructions+=9;goto B63e727;
case 0x63e72a:c.instructions+=8;goto B63e72a;
case 0x63e72d:c.instructions+=7;goto B63e72d;
case 0x63e72f:c.instructions+=6;goto B63e72f;
case 0x63e732:c.instructions+=5;goto B63e732;
case 0x63e735:c.instructions+=4;goto B63e735;
case 0x63e738:c.instructions+=3;goto B63e738;
case 0x63e73a:c.instructions+=2;goto B63e73a;
case 0x63e73c:c.instructions+=1;goto B63e73c;
case 0x63e73e:goto L63e73e;
case 0x63e740:goto L63e740;
case 0x63e744:c.instructions+=5;goto B63e744;
case 0x63e747:c.instructions+=4;goto B63e747;
case 0x63e74a:c.instructions+=3;goto B63e74a;
case 0x63e74c:c.instructions+=2;goto B63e74c;
case 0x63e74f:c.instructions+=1;goto B63e74f;
case 0x63e751:goto L63e751;
case 0x63e753:c.instructions+=1;goto B63e753;
case 0x63e756:goto L63e756;
case 0x63e758:c.instructions+=41;goto B63e758;
case 0x63e75b:c.instructions+=40;goto B63e75b;
case 0x63e75f:c.instructions+=39;goto B63e75f;
case 0x63e763:c.instructions+=38;goto B63e763;
case 0x63e769:c.instructions+=37;goto B63e769;
case 0x63e76c:c.instructions+=36;goto B63e76c;
case 0x63e76e:c.instructions+=35;goto B63e76e;
case 0x63e771:c.instructions+=34;goto B63e771;
case 0x63e773:c.instructions+=33;goto B63e773;
case 0x63e775:c.instructions+=32;goto B63e775;
case 0x63e778:c.instructions+=31;goto B63e778;
case 0x63e77a:c.instructions+=30;goto B63e77a;
case 0x63e780:c.instructions+=29;goto B63e780;
case 0x63e782:c.instructions+=28;goto B63e782;
case 0x63e785:c.instructions+=27;goto B63e785;
case 0x63e78b:c.instructions+=26;goto B63e78b;
case 0x63e78e:c.instructions+=25;goto B63e78e;
case 0x63e791:c.instructions+=24;goto B63e791;
case 0x63e794:c.instructions+=23;goto B63e794;
case 0x63e798:c.instructions+=22;goto B63e798;
case 0x63e79b:c.instructions+=21;goto B63e79b;
case 0x63e79d:c.instructions+=20;goto B63e79d;
case 0x63e79f:c.instructions+=19;goto B63e79f;
case 0x63e7a2:c.instructions+=18;goto B63e7a2;
case 0x63e7a6:c.instructions+=17;goto B63e7a6;
case 0x63e7a9:c.instructions+=16;goto B63e7a9;
case 0x63e7ab:c.instructions+=15;goto B63e7ab;
case 0x63e7ae:c.instructions+=14;goto B63e7ae;
case 0x63e7b0:c.instructions+=13;goto B63e7b0;
case 0x63e7b3:c.instructions+=12;goto B63e7b3;
case 0x63e7b6:c.instructions+=11;goto B63e7b6;
case 0x63e7b9:c.instructions+=10;goto B63e7b9;
case 0x63e7bb:c.instructions+=9;goto B63e7bb;
case 0x63e7be:c.instructions+=8;goto B63e7be;
case 0x63e7c0:c.instructions+=7;goto B63e7c0;
case 0x63e7c3:c.instructions+=6;goto B63e7c3;
case 0x63e7c4:c.instructions+=5;goto B63e7c4;
case 0x63e7c7:c.instructions+=4;goto B63e7c7;
case 0x63e7c8:c.instructions+=3;goto B63e7c8;
case 0x63e7c9:c.instructions+=2;goto B63e7c9;
case 0x63e7cb:c.instructions+=1;goto B63e7cb;
case 0x63e7ce:goto L63e7ce;
case 0x63e7d0:c.instructions+=2;goto B63e7d0;
case 0x63e7d1:c.instructions+=1;goto B63e7d1;
case 0x63e7d4:goto L63e7d4;
case 0x63e7d6:c.instructions+=4;goto B63e7d6;
case 0x63e7d7:c.instructions+=3;goto B63e7d7;
case 0x63e7d9:c.instructions+=2;goto B63e7d9;
case 0x63e7db:c.instructions+=1;goto B63e7db;
case 0x63e7e0:goto L63e7e0;
case 0x63e7e3:c.instructions+=5;goto B63e7e3;
case 0x63e7e4:c.instructions+=4;goto B63e7e4;
case 0x63e7e7:c.instructions+=3;goto B63e7e7;
case 0x63e7ea:c.instructions+=2;goto B63e7ea;
case 0x63e7ed:c.instructions+=1;goto B63e7ed;
case 0x63e7f3:goto L63e7f3;
case 0x63e7f4:c.instructions+=1;goto B63e7f4;
case 0x63e7f7:goto L63e7f7;
case 0x63e7f9:c.instructions+=7;goto B63e7f9;
case 0x63e7fa:c.instructions+=6;goto B63e7fa;
case 0x63e7fc:c.instructions+=5;goto B63e7fc;
case 0x63e7ff:c.instructions+=4;goto B63e7ff;
case 0x63e802:c.instructions+=3;goto B63e802;
case 0x63e805:c.instructions+=2;goto B63e805;
case 0x63e806:c.instructions+=1;goto B63e806;
case 0x63e80b:goto L63e80b;
case 0x63e80e:c.instructions+=25;goto B63e80e;
case 0x63e811:c.instructions+=24;goto B63e811;
case 0x63e817:c.instructions+=23;goto B63e817;
case 0x63e81a:c.instructions+=22;goto B63e81a;
case 0x63e81d:c.instructions+=21;goto B63e81d;
case 0x63e820:c.instructions+=20;goto B63e820;
case 0x63e823:c.instructions+=19;goto B63e823;
case 0x63e826:c.instructions+=18;goto B63e826;
case 0x63e829:c.instructions+=17;goto B63e829;
case 0x63e82c:c.instructions+=16;goto B63e82c;
case 0x63e82f:c.instructions+=15;goto B63e82f;
case 0x63e831:c.instructions+=14;goto B63e831;
case 0x63e833:c.instructions+=13;goto B63e833;
case 0x63e835:c.instructions+=12;goto B63e835;
case 0x63e838:c.instructions+=11;goto B63e838;
case 0x63e83b:c.instructions+=10;goto B63e83b;
case 0x63e83d:c.instructions+=9;goto B63e83d;
case 0x63e83f:c.instructions+=8;goto B63e83f;
case 0x63e842:c.instructions+=7;goto B63e842;
case 0x63e845:c.instructions+=6;goto B63e845;
case 0x63e848:c.instructions+=5;goto B63e848;
case 0x63e84b:c.instructions+=4;goto B63e84b;
case 0x63e84e:c.instructions+=3;goto B63e84e;
case 0x63e851:c.instructions+=2;goto B63e851;
case 0x63e852:c.instructions+=1;goto B63e852;
case 0x63e855:goto L63e855;
case 0x63e857:c.instructions+=4;goto B63e857;
case 0x63e858:c.instructions+=3;goto B63e858;
case 0x63e85a:c.instructions+=2;goto B63e85a;
case 0x63e85c:c.instructions+=1;goto B63e85c;
case 0x63e861:goto L63e861;
case 0x63e864:c.instructions+=8;goto B63e864;
case 0x63e867:c.instructions+=7;goto B63e867;
case 0x63e86b:c.instructions+=6;goto B63e86b;
case 0x63e86e:c.instructions+=5;goto B63e86e;
case 0x63e872:c.instructions+=4;goto B63e872;
case 0x63e875:c.instructions+=3;goto B63e875;
case 0x63e878:c.instructions+=2;goto B63e878;
case 0x63e87b:c.instructions+=1;goto B63e87b;
case 0x63e881:goto L63e881;
case 0x63e882:c.instructions+=1;goto B63e882;
case 0x63e885:goto L63e885;
case 0x63e88b:goto L63e88b;
case 0x63e88d:c.instructions+=79;goto B63e88d;
case 0x63e88e:c.instructions+=78;goto B63e88e;
case 0x63e890:c.instructions+=77;goto B63e890;
case 0x63e893:c.instructions+=76;goto B63e893;
case 0x63e896:c.instructions+=75;goto B63e896;
case 0x63e899:c.instructions+=74;goto B63e899;
case 0x63e89f:c.instructions+=73;goto B63e89f;
case 0x63e8a2:c.instructions+=72;goto B63e8a2;
case 0x63e8a5:c.instructions+=71;goto B63e8a5;
case 0x63e8a8:c.instructions+=70;goto B63e8a8;
case 0x63e8ab:c.instructions+=69;goto B63e8ab;
case 0x63e8ae:c.instructions+=68;goto B63e8ae;
case 0x63e8b1:c.instructions+=67;goto B63e8b1;
case 0x63e8b4:c.instructions+=66;goto B63e8b4;
case 0x63e8b6:c.instructions+=65;goto B63e8b6;
case 0x63e8b8:c.instructions+=64;goto B63e8b8;
case 0x63e8ba:c.instructions+=63;goto B63e8ba;
case 0x63e8bd:c.instructions+=62;goto B63e8bd;
case 0x63e8c0:c.instructions+=61;goto B63e8c0;
case 0x63e8c6:c.instructions+=60;goto B63e8c6;
case 0x63e8c9:c.instructions+=59;goto B63e8c9;
case 0x63e8cc:c.instructions+=58;goto B63e8cc;
case 0x63e8cf:c.instructions+=57;goto B63e8cf;
case 0x63e8d2:c.instructions+=56;goto B63e8d2;
case 0x63e8d5:c.instructions+=55;goto B63e8d5;
case 0x63e8d8:c.instructions+=54;goto B63e8d8;
case 0x63e8db:c.instructions+=53;goto B63e8db;
case 0x63e8dd:c.instructions+=52;goto B63e8dd;
case 0x63e8df:c.instructions+=51;goto B63e8df;
case 0x63e8e1:c.instructions+=50;goto B63e8e1;
case 0x63e8e4:c.instructions+=49;goto B63e8e4;
case 0x63e8e7:c.instructions+=48;goto B63e8e7;
case 0x63e8ed:c.instructions+=47;goto B63e8ed;
case 0x63e8f0:c.instructions+=46;goto B63e8f0;
case 0x63e8f3:c.instructions+=45;goto B63e8f3;
case 0x63e8f6:c.instructions+=44;goto B63e8f6;
case 0x63e8f9:c.instructions+=43;goto B63e8f9;
case 0x63e8fc:c.instructions+=42;goto B63e8fc;
case 0x63e8ff:c.instructions+=41;goto B63e8ff;
case 0x63e902:c.instructions+=40;goto B63e902;
case 0x63e904:c.instructions+=39;goto B63e904;
case 0x63e906:c.instructions+=38;goto B63e906;
case 0x63e908:c.instructions+=37;goto B63e908;
case 0x63e90b:c.instructions+=36;goto B63e90b;
case 0x63e90e:c.instructions+=35;goto B63e90e;
case 0x63e911:c.instructions+=34;goto B63e911;
case 0x63e914:c.instructions+=33;goto B63e914;
case 0x63e917:c.instructions+=32;goto B63e917;
case 0x63e91a:c.instructions+=31;goto B63e91a;
case 0x63e91c:c.instructions+=30;goto B63e91c;
case 0x63e91e:c.instructions+=29;goto B63e91e;
case 0x63e921:c.instructions+=28;goto B63e921;
case 0x63e923:c.instructions+=27;goto B63e923;
case 0x63e925:c.instructions+=26;goto B63e925;
case 0x63e927:c.instructions+=25;goto B63e927;
case 0x63e92a:c.instructions+=24;goto B63e92a;
case 0x63e92c:c.instructions+=23;goto B63e92c;
case 0x63e92f:c.instructions+=22;goto B63e92f;
case 0x63e931:c.instructions+=21;goto B63e931;
case 0x63e934:c.instructions+=20;goto B63e934;
case 0x63e936:c.instructions+=19;goto B63e936;
case 0x63e938:c.instructions+=18;goto B63e938;
case 0x63e93b:c.instructions+=17;goto B63e93b;
case 0x63e93e:c.instructions+=16;goto B63e93e;
case 0x63e941:c.instructions+=15;goto B63e941;
case 0x63e944:c.instructions+=14;goto B63e944;
case 0x63e946:c.instructions+=13;goto B63e946;
case 0x63e949:c.instructions+=12;goto B63e949;
case 0x63e94b:c.instructions+=11;goto B63e94b;
case 0x63e94e:c.instructions+=10;goto B63e94e;
case 0x63e950:c.instructions+=9;goto B63e950;
case 0x63e953:c.instructions+=8;goto B63e953;
case 0x63e956:c.instructions+=7;goto B63e956;
case 0x63e958:c.instructions+=6;goto B63e958;
case 0x63e95b:c.instructions+=5;goto B63e95b;
case 0x63e95d:c.instructions+=4;goto B63e95d;
case 0x63e960:c.instructions+=3;goto B63e960;
case 0x63e962:c.instructions+=2;goto B63e962;
case 0x63e963:c.instructions+=1;goto B63e963;
case 0x63e966:goto L63e966;
case 0x63e968:c.instructions+=4;goto B63e968;
case 0x63e969:c.instructions+=3;goto B63e969;
case 0x63e96b:c.instructions+=2;goto B63e96b;
case 0x63e96d:c.instructions+=1;goto B63e96d;
case 0x63e972:goto L63e972;
case 0x63e973:c.instructions+=1;goto B63e973;
case 0x63e979:goto L63e979;
case 0x63e97f:goto L63e97f;
case 0x63e981:c.instructions+=60;goto B63e981;
case 0x63e982:c.instructions+=59;goto B63e982;
case 0x63e984:c.instructions+=58;goto B63e984;
case 0x63e987:c.instructions+=57;goto B63e987;
case 0x63e98a:c.instructions+=56;goto B63e98a;
case 0x63e98d:c.instructions+=55;goto B63e98d;
case 0x63e990:c.instructions+=54;goto B63e990;
case 0x63e992:c.instructions+=53;goto B63e992;
case 0x63e995:c.instructions+=52;goto B63e995;
case 0x63e998:c.instructions+=51;goto B63e998;
case 0x63e99b:c.instructions+=50;goto B63e99b;
case 0x63e99e:c.instructions+=49;goto B63e99e;
case 0x63e9a1:c.instructions+=48;goto B63e9a1;
case 0x63e9a4:c.instructions+=47;goto B63e9a4;
case 0x63e9a6:c.instructions+=46;goto B63e9a6;
case 0x63e9a8:c.instructions+=45;goto B63e9a8;
case 0x63e9ab:c.instructions+=44;goto B63e9ab;
case 0x63e9ad:c.instructions+=43;goto B63e9ad;
case 0x63e9b0:c.instructions+=42;goto B63e9b0;
case 0x63e9b2:c.instructions+=41;goto B63e9b2;
case 0x63e9b5:c.instructions+=40;goto B63e9b5;
case 0x63e9b7:c.instructions+=39;goto B63e9b7;
case 0x63e9b9:c.instructions+=38;goto B63e9b9;
case 0x63e9bb:c.instructions+=37;goto B63e9bb;
case 0x63e9bd:c.instructions+=36;goto B63e9bd;
case 0x63e9bf:c.instructions+=35;goto B63e9bf;
case 0x63e9c1:c.instructions+=34;goto B63e9c1;
case 0x63e9c3:c.instructions+=33;goto B63e9c3;
case 0x63e9c6:c.instructions+=32;goto B63e9c6;
case 0x63e9c9:c.instructions+=31;goto B63e9c9;
case 0x63e9cc:c.instructions+=30;goto B63e9cc;
case 0x63e9ce:c.instructions+=29;goto B63e9ce;
case 0x63e9d1:c.instructions+=28;goto B63e9d1;
case 0x63e9d4:c.instructions+=27;goto B63e9d4;
case 0x63e9d7:c.instructions+=26;goto B63e9d7;
case 0x63e9da:c.instructions+=25;goto B63e9da;
case 0x63e9dc:c.instructions+=24;goto B63e9dc;
case 0x63e9de:c.instructions+=23;goto B63e9de;
case 0x63e9e0:c.instructions+=22;goto B63e9e0;
case 0x63e9e2:c.instructions+=21;goto B63e9e2;
case 0x63e9e4:c.instructions+=20;goto B63e9e4;
case 0x63e9e7:c.instructions+=19;goto B63e9e7;
case 0x63e9ea:c.instructions+=18;goto B63e9ea;
case 0x63e9ed:c.instructions+=17;goto B63e9ed;
case 0x63e9f0:c.instructions+=16;goto B63e9f0;
case 0x63e9f3:c.instructions+=15;goto B63e9f3;
case 0x63e9f5:c.instructions+=14;goto B63e9f5;
case 0x63e9f8:c.instructions+=13;goto B63e9f8;
case 0x63e9fb:c.instructions+=12;goto B63e9fb;
case 0x63e9fd:c.instructions+=11;goto B63e9fd;
case 0x63e9ff:c.instructions+=10;goto B63e9ff;
case 0x63ea01:c.instructions+=9;goto B63ea01;
case 0x63ea03:c.instructions+=8;goto B63ea03;
case 0x63ea05:c.instructions+=7;goto B63ea05;
case 0x63ea07:c.instructions+=6;goto B63ea07;
case 0x63ea0a:c.instructions+=5;goto B63ea0a;
case 0x63ea0d:c.instructions+=4;goto B63ea0d;
case 0x63ea10:c.instructions+=3;goto B63ea10;
case 0x63ea13:c.instructions+=2;goto B63ea13;
case 0x63ea14:c.instructions+=1;goto B63ea14;
case 0x63ea17:goto L63ea17;
case 0x63ea19:c.instructions+=4;goto B63ea19;
case 0x63ea1a:c.instructions+=3;goto B63ea1a;
case 0x63ea1c:c.instructions+=2;goto B63ea1c;
case 0x63ea1e:c.instructions+=1;goto B63ea1e;
case 0x63ea23:goto L63ea23;
case 0x63ea24:c.instructions+=1;goto B63ea24;
case 0x63ea2a:goto L63ea2a;
case 0x63ea2c:c.instructions+=4;goto B63ea2c;
case 0x63ea2d:c.instructions+=3;goto B63ea2d;
case 0x63ea2f:c.instructions+=2;goto B63ea2f;
case 0x63ea31:c.instructions+=1;goto B63ea31;
case 0x63ea36:goto L63ea36;
case 0x63ea37:c.instructions+=1;goto B63ea37;
case 0x63ea3d:goto L63ea3d;
case 0x63ea43:goto L63ea43;
case 0x63ea45:c.instructions+=29;goto B63ea45;
case 0x63ea46:c.instructions+=28;goto B63ea46;
case 0x63ea48:c.instructions+=27;goto B63ea48;
case 0x63ea4b:c.instructions+=26;goto B63ea4b;
case 0x63ea4e:c.instructions+=25;goto B63ea4e;
case 0x63ea51:c.instructions+=24;goto B63ea51;
case 0x63ea54:c.instructions+=23;goto B63ea54;
case 0x63ea57:c.instructions+=22;goto B63ea57;
case 0x63ea59:c.instructions+=21;goto B63ea59;
case 0x63ea5b:c.instructions+=20;goto B63ea5b;
case 0x63ea5d:c.instructions+=19;goto B63ea5d;
case 0x63ea5f:c.instructions+=18;goto B63ea5f;
case 0x63ea61:c.instructions+=17;goto B63ea61;
case 0x63ea63:c.instructions+=16;goto B63ea63;
case 0x63ea65:c.instructions+=15;goto B63ea65;
case 0x63ea67:c.instructions+=14;goto B63ea67;
case 0x63ea69:c.instructions+=13;goto B63ea69;
case 0x63ea6b:c.instructions+=12;goto B63ea6b;
case 0x63ea6d:c.instructions+=11;goto B63ea6d;
case 0x63ea6f:c.instructions+=10;goto B63ea6f;
case 0x63ea72:c.instructions+=9;goto B63ea72;
case 0x63ea74:c.instructions+=8;goto B63ea74;
case 0x63ea76:c.instructions+=7;goto B63ea76;
case 0x63ea78:c.instructions+=6;goto B63ea78;
case 0x63ea7a:c.instructions+=5;goto B63ea7a;
case 0x63ea7d:c.instructions+=4;goto B63ea7d;
case 0x63ea83:c.instructions+=3;goto B63ea83;
case 0x63ea85:c.instructions+=2;goto B63ea85;
case 0x63ea88:c.instructions+=1;goto B63ea88;
case 0x63ea8a:goto L63ea8a;
case 0x63ea8c:c.instructions+=17;goto B63ea8c;
case 0x63ea8d:c.instructions+=16;goto B63ea8d;
case 0x63ea8f:c.instructions+=15;goto B63ea8f;
case 0x63ea90:c.instructions+=14;goto B63ea90;
case 0x63ea92:c.instructions+=13;goto B63ea92;
case 0x63ea95:c.instructions+=12;goto B63ea95;
case 0x63ea97:c.instructions+=11;goto B63ea97;
case 0x63ea9a:c.instructions+=10;goto B63ea9a;
case 0x63ea9d:c.instructions+=9;goto B63ea9d;
case 0x63ea9f:c.instructions+=8;goto B63ea9f;
case 0x63eaa2:c.instructions+=7;goto B63eaa2;
case 0x63eaa5:c.instructions+=6;goto B63eaa5;
case 0x63eaa7:c.instructions+=5;goto B63eaa7;
case 0x63eaaa:c.instructions+=4;goto B63eaaa;
case 0x63eaae:c.instructions+=3;goto B63eaae;
case 0x63eab1:c.instructions+=2;goto B63eab1;
case 0x63eab4:c.instructions+=1;goto B63eab4;
case 0x63eab9:goto L63eab9;
case 0x63eabb:c.instructions+=1;goto B63eabb;
case 0x63eabd:goto L63eabd;
case 0x63eabf:c.instructions+=12;goto B63eabf;
case 0x63eac2:c.instructions+=11;goto B63eac2;
case 0x63eac4:c.instructions+=10;goto B63eac4;
case 0x63eac6:c.instructions+=9;goto B63eac6;
case 0x63eac8:c.instructions+=8;goto B63eac8;
case 0x63eaca:c.instructions+=7;goto B63eaca;
case 0x63eacd:c.instructions+=6;goto B63eacd;
case 0x63ead0:c.instructions+=5;goto B63ead0;
case 0x63ead2:c.instructions+=4;goto B63ead2;
case 0x63ead5:c.instructions+=3;goto B63ead5;
case 0x63ead8:c.instructions+=2;goto B63ead8;
case 0x63eadb:c.instructions+=1;goto B63eadb;
case 0x63eadd:goto L63eadd;
case 0x63eadf:c.instructions+=6;goto B63eadf;
case 0x63eae1:c.instructions+=5;goto B63eae1;
case 0x63eae3:c.instructions+=4;goto B63eae3;
case 0x63eae6:c.instructions+=3;goto B63eae6;
case 0x63eae8:c.instructions+=2;goto B63eae8;
case 0x63eaeb:c.instructions+=1;goto B63eaeb;
case 0x63eaed:goto L63eaed;
case 0x63eaf0:goto L63eaf0;
case 0x63eaf2:c.instructions+=2;goto B63eaf2;
case 0x63eaf3:c.instructions+=1;goto B63eaf3;
case 0x63eaf6:goto L63eaf6;
case 0x63eaf8:c.instructions+=4;goto B63eaf8;
case 0x63eaf9:c.instructions+=3;goto B63eaf9;
case 0x63eafb:c.instructions+=2;goto B63eafb;
case 0x63eafd:c.instructions+=1;goto B63eafd;
case 0x63eb02:goto L63eb02;
case 0x63eb03:c.instructions+=1;goto B63eb03;
case 0x63eb09:goto L63eb09;
case 0x63eb0f:goto L63eb0f;
case 0x63eb11:c.instructions+=10;goto B63eb11;
case 0x63eb12:c.instructions+=9;goto B63eb12;
case 0x63eb14:c.instructions+=8;goto B63eb14;
case 0x63eb15:c.instructions+=7;goto B63eb15;
case 0x63eb16:c.instructions+=6;goto B63eb16;
case 0x63eb19:c.instructions+=5;goto B63eb19;
case 0x63eb1c:c.instructions+=4;goto B63eb1c;
case 0x63eb22:c.instructions+=3;goto B63eb22;
case 0x63eb24:c.instructions+=2;goto B63eb24;
case 0x63eb27:c.instructions+=1;goto B63eb27;
case 0x63eb29:goto L63eb29;
case 0x63eb2c:c.instructions+=1;goto B63eb2c;
case 0x63eb31:goto L63eb31;
case 0x63eb34:c.instructions+=9;goto B63eb34;
case 0x63eb36:c.instructions+=8;goto B63eb36;
case 0x63eb37:c.instructions+=7;goto B63eb37;
case 0x63eb38:c.instructions+=6;goto B63eb38;
case 0x63eb3b:c.instructions+=5;goto B63eb3b;
case 0x63eb3d:c.instructions+=4;goto B63eb3d;
case 0x63eb41:c.instructions+=3;goto B63eb41;
case 0x63eb44:c.instructions+=2;goto B63eb44;
case 0x63eb47:c.instructions+=1;goto B63eb47;
case 0x63eb4c:goto L63eb4c;
case 0x63eb4e:c.instructions+=2;goto B63eb4e;
case 0x63eb51:c.instructions+=1;goto B63eb51;
case 0x63eb53:goto L63eb53;
case 0x63eb56:c.instructions+=10;goto B63eb56;
case 0x63eb59:c.instructions+=9;goto B63eb59;
case 0x63eb5b:c.instructions+=8;goto B63eb5b;
case 0x63eb5d:c.instructions+=7;goto B63eb5d;
case 0x63eb5f:c.instructions+=6;goto B63eb5f;
case 0x63eb61:c.instructions+=5;goto B63eb61;
case 0x63eb64:c.instructions+=4;goto B63eb64;
case 0x63eb67:c.instructions+=3;goto B63eb67;
case 0x63eb6a:c.instructions+=2;goto B63eb6a;
case 0x63eb6d:c.instructions+=1;goto B63eb6d;
case 0x63eb6f:goto L63eb6f;
case 0x63eb72:goto L63eb72;
case 0x63eb74:c.instructions+=5;goto B63eb74;
case 0x63eb76:c.instructions+=4;goto B63eb76;
case 0x63eb79:c.instructions+=3;goto B63eb79;
case 0x63eb7c:c.instructions+=2;goto B63eb7c;
case 0x63eb7f:c.instructions+=1;goto B63eb7f;
case 0x63eb82:goto L63eb82;
case 0x63eb84:c.instructions+=4;goto B63eb84;
case 0x63eb85:c.instructions+=3;goto B63eb85;
case 0x63eb88:c.instructions+=2;goto B63eb88;
case 0x63eb89:c.instructions+=1;goto B63eb89;
case 0x63eb8c:goto L63eb8c;
case 0x63eb8e:c.instructions+=4;goto B63eb8e;
case 0x63eb8f:c.instructions+=3;goto B63eb8f;
case 0x63eb91:c.instructions+=2;goto B63eb91;
case 0x63eb93:c.instructions+=1;goto B63eb93;
case 0x63eb98:goto L63eb98;
case 0x63eb99:c.instructions+=1;goto B63eb99;
case 0x63eb9f:goto L63eb9f;
case 0x63eba5:goto L63eba5;
case 0x63eba7:c.instructions+=40;goto B63eba7;
case 0x63eba8:c.instructions+=39;goto B63eba8;
case 0x63ebaa:c.instructions+=38;goto B63ebaa;
case 0x63ebab:c.instructions+=37;goto B63ebab;
case 0x63ebac:c.instructions+=36;goto B63ebac;
case 0x63ebaf:c.instructions+=35;goto B63ebaf;
case 0x63ebb2:c.instructions+=34;goto B63ebb2;
case 0x63ebb3:c.instructions+=33;goto B63ebb3;
case 0x63ebb6:c.instructions+=32;goto B63ebb6;
case 0x63ebb9:c.instructions+=31;goto B63ebb9;
case 0x63ebbb:c.instructions+=30;goto B63ebbb;
case 0x63ebbe:c.instructions+=29;goto B63ebbe;
case 0x63ebc0:c.instructions+=28;goto B63ebc0;
case 0x63ebc3:c.instructions+=27;goto B63ebc3;
case 0x63ebc5:c.instructions+=26;goto B63ebc5;
case 0x63ebc8:c.instructions+=25;goto B63ebc8;
case 0x63ebca:c.instructions+=24;goto B63ebca;
case 0x63ebcd:c.instructions+=23;goto B63ebcd;
case 0x63ebcf:c.instructions+=22;goto B63ebcf;
case 0x63ebd1:c.instructions+=21;goto B63ebd1;
case 0x63ebd3:c.instructions+=20;goto B63ebd3;
case 0x63ebd5:c.instructions+=19;goto B63ebd5;
case 0x63ebd7:c.instructions+=18;goto B63ebd7;
case 0x63ebd9:c.instructions+=17;goto B63ebd9;
case 0x63ebdb:c.instructions+=16;goto B63ebdb;
case 0x63ebdd:c.instructions+=15;goto B63ebdd;
case 0x63ebdf:c.instructions+=14;goto B63ebdf;
case 0x63ebe2:c.instructions+=13;goto B63ebe2;
case 0x63ebe5:c.instructions+=12;goto B63ebe5;
case 0x63ebe8:c.instructions+=11;goto B63ebe8;
case 0x63ebeb:c.instructions+=10;goto B63ebeb;
case 0x63ebed:c.instructions+=9;goto B63ebed;
case 0x63ebef:c.instructions+=8;goto B63ebef;
case 0x63ebf1:c.instructions+=7;goto B63ebf1;
case 0x63ebf3:c.instructions+=6;goto B63ebf3;
case 0x63ebf4:c.instructions+=5;goto B63ebf4;
case 0x63ebf5:c.instructions+=4;goto B63ebf5;
case 0x63ebf9:c.instructions+=3;goto B63ebf9;
case 0x63ebfc:c.instructions+=2;goto B63ebfc;
case 0x63ebff:c.instructions+=1;goto B63ebff;
case 0x63ec04:goto L63ec04;
case 0x63ec06:c.instructions+=1;goto B63ec06;
case 0x63ec08:goto L63ec08;
case 0x63ec0a:c.instructions+=1;goto B63ec0a;
case 0x63ec0c:goto L63ec0c;
case 0x63ec0e:c.instructions+=6;goto B63ec0e;
case 0x63ec10:c.instructions+=5;goto B63ec10;
case 0x63ec13:c.instructions+=4;goto B63ec13;
case 0x63ec16:c.instructions+=3;goto B63ec16;
case 0x63ec19:c.instructions+=2;goto B63ec19;
case 0x63ec1c:c.instructions+=1;goto B63ec1c;
case 0x63ec1e:goto L63ec1e;
case 0x63ec21:c.instructions+=9;goto B63ec21;
case 0x63ec24:c.instructions+=8;goto B63ec24;
case 0x63ec26:c.instructions+=7;goto B63ec26;
case 0x63ec28:c.instructions+=6;goto B63ec28;
case 0x63ec2a:c.instructions+=5;goto B63ec2a;
case 0x63ec2c:c.instructions+=4;goto B63ec2c;
case 0x63ec2f:c.instructions+=3;goto B63ec2f;
case 0x63ec32:c.instructions+=2;goto B63ec32;
case 0x63ec35:c.instructions+=1;goto B63ec35;
case 0x63ec38:goto L63ec38;
case 0x63ec3a:c.instructions+=3;goto B63ec3a;
case 0x63ec3b:c.instructions+=2;goto B63ec3b;
case 0x63ec3c:c.instructions+=1;goto B63ec3c;
case 0x63ec3f:goto L63ec3f;
case 0x63ec41:c.instructions+=4;goto B63ec41;
case 0x63ec42:c.instructions+=3;goto B63ec42;
case 0x63ec44:c.instructions+=2;goto B63ec44;
case 0x63ec46:c.instructions+=1;goto B63ec46;
case 0x63ec4b:goto L63ec4b;
case 0x63ec4e:c.instructions+=6;goto B63ec4e;
case 0x63ec4f:c.instructions+=5;goto B63ec4f;
case 0x63ec52:c.instructions+=4;goto B63ec52;
case 0x63ec55:c.instructions+=3;goto B63ec55;
case 0x63ec58:c.instructions+=2;goto B63ec58;
case 0x63ec5b:c.instructions+=1;goto B63ec5b;
case 0x63ec61:goto L63ec61;
case 0x63ec62:c.instructions+=1;goto B63ec62;
case 0x63ec65:goto L63ec65;
case 0x63ec6b:goto L63ec6b;
case 0x63ec6d:c.instructions+=22;goto B63ec6d;
case 0x63ec6e:c.instructions+=21;goto B63ec6e;
case 0x63ec70:c.instructions+=20;goto B63ec70;
case 0x63ec71:c.instructions+=19;goto B63ec71;
case 0x63ec74:c.instructions+=18;goto B63ec74;
case 0x63ec76:c.instructions+=17;goto B63ec76;
case 0x63ec79:c.instructions+=16;goto B63ec79;
case 0x63ec7c:c.instructions+=15;goto B63ec7c;
case 0x63ec7e:c.instructions+=14;goto B63ec7e;
case 0x63ec80:c.instructions+=13;goto B63ec80;
case 0x63ec83:c.instructions+=12;goto B63ec83;
case 0x63ec86:c.instructions+=11;goto B63ec86;
case 0x63ec88:c.instructions+=10;goto B63ec88;
case 0x63ec8b:c.instructions+=9;goto B63ec8b;
case 0x63ec8e:c.instructions+=8;goto B63ec8e;
case 0x63ec90:c.instructions+=7;goto B63ec90;
case 0x63ec93:c.instructions+=6;goto B63ec93;
case 0x63ec96:c.instructions+=5;goto B63ec96;
case 0x63ec98:c.instructions+=4;goto B63ec98;
case 0x63ec9e:c.instructions+=3;goto B63ec9e;
case 0x63eca0:c.instructions+=2;goto B63eca0;
case 0x63eca3:c.instructions+=1;goto B63eca3;
case 0x63eca5:goto L63eca5;
case 0x63eca7:c.instructions+=2;goto B63eca7;
case 0x63ecaa:c.instructions+=1;goto B63ecaa;
case 0x63ecac:goto L63ecac;
case 0x63ecb3:goto L63ecb3;
case 0x63ecb6:c.instructions+=9;goto B63ecb6;
case 0x63ecb8:c.instructions+=8;goto B63ecb8;
case 0x63ecbb:c.instructions+=7;goto B63ecbb;
case 0x63ecbd:c.instructions+=6;goto B63ecbd;
case 0x63ecbf:c.instructions+=5;goto B63ecbf;
case 0x63ecc1:c.instructions+=4;goto B63ecc1;
case 0x63ecc7:c.instructions+=3;goto B63ecc7;
case 0x63ecc9:c.instructions+=2;goto B63ecc9;
case 0x63eccc:c.instructions+=1;goto B63eccc;
case 0x63ecce:goto L63ecce;
case 0x63ecd0:c.instructions+=22;goto B63ecd0;
case 0x63ecd2:c.instructions+=21;goto B63ecd2;
case 0x63ecd8:c.instructions+=20;goto B63ecd8;
case 0x63ecda:c.instructions+=19;goto B63ecda;
case 0x63ecdc:c.instructions+=18;goto B63ecdc;
case 0x63ecde:c.instructions+=17;goto B63ecde;
case 0x63ece1:c.instructions+=16;goto B63ece1;
case 0x63ece3:c.instructions+=15;goto B63ece3;
case 0x63ece6:c.instructions+=14;goto B63ece6;
case 0x63ece8:c.instructions+=13;goto B63ece8;
case 0x63ecea:c.instructions+=12;goto B63ecea;
case 0x63eced:c.instructions+=11;goto B63eced;
case 0x63ecef:c.instructions+=10;goto B63ecef;
case 0x63ecf2:c.instructions+=9;goto B63ecf2;
case 0x63ecf4:c.instructions+=8;goto B63ecf4;
case 0x63ecf6:c.instructions+=7;goto B63ecf6;
case 0x63ecf8:c.instructions+=6;goto B63ecf8;
case 0x63ecfb:c.instructions+=5;goto B63ecfb;
case 0x63ecfe:c.instructions+=4;goto B63ecfe;
case 0x63ed01:c.instructions+=3;goto B63ed01;
case 0x63ed03:c.instructions+=2;goto B63ed03;
case 0x63ed06:c.instructions+=1;goto B63ed06;
case 0x63ed08:goto L63ed08;
case 0x63ed0a:c.instructions+=1;goto B63ed0a;
case 0x63ed0d:goto L63ed0d;
case 0x63ed10:c.instructions+=27;goto B63ed10;
case 0x63ed13:c.instructions+=26;goto B63ed13;
case 0x63ed15:c.instructions+=25;goto B63ed15;
case 0x63ed17:c.instructions+=24;goto B63ed17;
case 0x63ed19:c.instructions+=23;goto B63ed19;
case 0x63ed1b:c.instructions+=22;goto B63ed1b;
case 0x63ed1d:c.instructions+=21;goto B63ed1d;
case 0x63ed1f:c.instructions+=20;goto B63ed1f;
case 0x63ed21:c.instructions+=19;goto B63ed21;
case 0x63ed24:c.instructions+=18;goto B63ed24;
case 0x63ed26:c.instructions+=17;goto B63ed26;
case 0x63ed29:c.instructions+=16;goto B63ed29;
case 0x63ed2b:c.instructions+=15;goto B63ed2b;
case 0x63ed2e:c.instructions+=14;goto B63ed2e;
case 0x63ed30:c.instructions+=13;goto B63ed30;
case 0x63ed33:c.instructions+=12;goto B63ed33;
case 0x63ed35:c.instructions+=11;goto B63ed35;
case 0x63ed38:c.instructions+=10;goto B63ed38;
case 0x63ed3a:c.instructions+=9;goto B63ed3a;
case 0x63ed3d:c.instructions+=8;goto B63ed3d;
case 0x63ed40:c.instructions+=7;goto B63ed40;
case 0x63ed42:c.instructions+=6;goto B63ed42;
case 0x63ed45:c.instructions+=5;goto B63ed45;
case 0x63ed47:c.instructions+=4;goto B63ed47;
case 0x63ed4a:c.instructions+=3;goto B63ed4a;
case 0x63ed4c:c.instructions+=2;goto B63ed4c;
case 0x63ed4d:c.instructions+=1;goto B63ed4d;
case 0x63ed50:goto L63ed50;
case 0x63ed52:c.instructions+=4;goto B63ed52;
case 0x63ed53:c.instructions+=3;goto B63ed53;
case 0x63ed55:c.instructions+=2;goto B63ed55;
case 0x63ed57:c.instructions+=1;goto B63ed57;
case 0x63ed5c:goto L63ed5c;
case 0x63ed5f:c.instructions+=8;goto B63ed5f;
case 0x63ed60:c.instructions+=7;goto B63ed60;
case 0x63ed63:c.instructions+=6;goto B63ed63;
case 0x63ed66:c.instructions+=5;goto B63ed66;
case 0x63ed69:c.instructions+=4;goto B63ed69;
case 0x63ed6c:c.instructions+=3;goto B63ed6c;
case 0x63ed6f:c.instructions+=2;goto B63ed6f;
case 0x63ed72:c.instructions+=1;goto B63ed72;
case 0x63ed78:goto L63ed78;
case 0x63ed79:c.instructions+=1;goto B63ed79;
case 0x63ed7c:goto L63ed7c;
case 0x63ed7e:c.instructions+=11;goto B63ed7e;
case 0x63ed7f:c.instructions+=10;goto B63ed7f;
case 0x63ed81:c.instructions+=9;goto B63ed81;
case 0x63ed84:c.instructions+=8;goto B63ed84;
case 0x63ed87:c.instructions+=7;goto B63ed87;
case 0x63ed88:c.instructions+=6;goto B63ed88;
case 0x63ed8b:c.instructions+=5;goto B63ed8b;
case 0x63ed8e:c.instructions+=4;goto B63ed8e;
case 0x63ed91:c.instructions+=3;goto B63ed91;
case 0x63ed94:c.instructions+=2;goto B63ed94;
case 0x63ed95:c.instructions+=1;goto B63ed95;
case 0x63ed9a:goto L63ed9a;
case 0x63ed9d:c.instructions+=7;goto B63ed9d;
case 0x63ed9e:c.instructions+=6;goto B63ed9e;
case 0x63eda1:c.instructions+=5;goto B63eda1;
case 0x63eda4:c.instructions+=4;goto B63eda4;
case 0x63eda7:c.instructions+=3;goto B63eda7;
case 0x63edaa:c.instructions+=2;goto B63edaa;
case 0x63edab:c.instructions+=1;goto B63edab;
case 0x63edb0:goto L63edb0;
case 0x63edb2:c.instructions+=11;goto B63edb2;
case 0x63edb5:c.instructions+=10;goto B63edb5;
case 0x63edb6:c.instructions+=9;goto B63edb6;
case 0x63edb9:c.instructions+=8;goto B63edb9;
case 0x63edbc:c.instructions+=7;goto B63edbc;
case 0x63edbe:c.instructions+=6;goto B63edbe;
case 0x63edc1:c.instructions+=5;goto B63edc1;
case 0x63edc2:c.instructions+=4;goto B63edc2;
case 0x63edc5:c.instructions+=3;goto B63edc5;
case 0x63edc6:c.instructions+=2;goto B63edc6;
case 0x63edc9:c.instructions+=1;goto B63edc9;
case 0x63edce:goto L63edce;
case 0x63edd1:c.instructions+=2;goto B63edd1;
case 0x63edd2:c.instructions+=1;goto B63edd2;
case 0x63edd5:goto L63edd5;
case 0x63edd7:c.instructions+=4;goto B63edd7;
case 0x63edd8:c.instructions+=3;goto B63edd8;
case 0x63edda:c.instructions+=2;goto B63edda;
case 0x63eddc:c.instructions+=1;goto B63eddc;
case 0x63ede1:goto L63ede1;
case 0x63ede2:c.instructions+=1;goto B63ede2;
case 0x63ede8:goto L63ede8;
case 0x63edea:c.instructions+=4;goto B63edea;
case 0x63edeb:c.instructions+=3;goto B63edeb;
case 0x63eded:c.instructions+=2;goto B63eded;
case 0x63edef:c.instructions+=1;goto B63edef;
case 0x63edf4:goto L63edf4;
case 0x63edf7:c.instructions+=10;goto B63edf7;
case 0x63edf8:c.instructions+=9;goto B63edf8;
case 0x63edf9:c.instructions+=8;goto B63edf9;
case 0x63edfd:c.instructions+=7;goto B63edfd;
case 0x63ee00:c.instructions+=6;goto B63ee00;
case 0x63ee03:c.instructions+=5;goto B63ee03;
case 0x63ee06:c.instructions+=4;goto B63ee06;
case 0x63ee09:c.instructions+=3;goto B63ee09;
case 0x63ee0c:c.instructions+=2;goto B63ee0c;
case 0x63ee0f:c.instructions+=1;goto B63ee0f;
case 0x63ee15:goto L63ee15;
case 0x63ee16:c.instructions+=1;goto B63ee16;
case 0x63ee19:goto L63ee19;
case 0x63ee1b:c.instructions+=14;goto B63ee1b;
case 0x63ee1c:c.instructions+=13;goto B63ee1c;
case 0x63ee1e:c.instructions+=12;goto B63ee1e;
case 0x63ee21:c.instructions+=11;goto B63ee21;
case 0x63ee24:c.instructions+=10;goto B63ee24;
case 0x63ee25:c.instructions+=9;goto B63ee25;
case 0x63ee28:c.instructions+=8;goto B63ee28;
case 0x63ee29:c.instructions+=7;goto B63ee29;
case 0x63ee2a:c.instructions+=6;goto B63ee2a;
case 0x63ee2d:c.instructions+=5;goto B63ee2d;
case 0x63ee2f:c.instructions+=4;goto B63ee2f;
case 0x63ee33:c.instructions+=3;goto B63ee33;
case 0x63ee36:c.instructions+=2;goto B63ee36;
case 0x63ee39:c.instructions+=1;goto B63ee39;
case 0x63ee3e:goto L63ee3e;
case 0x63ee40:c.instructions+=1;goto B63ee40;
case 0x63ee42:goto L63ee42;
case 0x63ee45:c.instructions+=2;goto B63ee45;
case 0x63ee48:c.instructions+=1;goto B63ee48;
case 0x63ee4a:goto L63ee4a;
case 0x63ee4b:c.instructions+=7;goto B63ee4b;
case 0x63ee4e:c.instructions+=6;goto B63ee4e;
case 0x63ee4f:c.instructions+=5;goto B63ee4f;
case 0x63ee50:c.instructions+=4;goto B63ee50;
case 0x63ee51:c.instructions+=3;goto B63ee51;
case 0x63ee52:c.instructions+=2;goto B63ee52;
case 0x63ee53:c.instructions+=1;goto B63ee53;
case 0x63ee55:goto L63ee55;
case 0x63ee58:c.instructions+=7;goto B63ee58;
case 0x63ee59:c.instructions+=6;goto B63ee59;
case 0x63ee5c:c.instructions+=5;goto B63ee5c;
case 0x63ee5f:c.instructions+=4;goto B63ee5f;
case 0x63ee62:c.instructions+=3;goto B63ee62;
case 0x63ee65:c.instructions+=2;goto B63ee65;
case 0x63ee66:c.instructions+=1;goto B63ee66;
case 0x63ee6b:goto L63ee6b;
case 0x63ee6e:c.instructions+=7;goto B63ee6e;
case 0x63ee6f:c.instructions+=6;goto B63ee6f;
case 0x63ee72:c.instructions+=5;goto B63ee72;
case 0x63ee75:c.instructions+=4;goto B63ee75;
case 0x63ee78:c.instructions+=3;goto B63ee78;
case 0x63ee7b:c.instructions+=2;goto B63ee7b;
case 0x63ee7c:c.instructions+=1;goto B63ee7c;
case 0x63ee81:goto L63ee81;
case 0x63ee84:c.instructions+=9;goto B63ee84;
case 0x63ee87:c.instructions+=8;goto B63ee87;
case 0x63ee88:c.instructions+=7;goto B63ee88;
case 0x63ee8b:c.instructions+=6;goto B63ee8b;
case 0x63ee8e:c.instructions+=5;goto B63ee8e;
case 0x63ee8f:c.instructions+=4;goto B63ee8f;
case 0x63ee92:c.instructions+=3;goto B63ee92;
case 0x63ee93:c.instructions+=2;goto B63ee93;
case 0x63ee96:c.instructions+=1;goto B63ee96;
case 0x63ee9b:goto L63ee9b;
case 0x63ee9e:c.instructions+=3;goto B63ee9e;
case 0x63ee9f:c.instructions+=2;goto B63ee9f;
case 0x63eea0:c.instructions+=1;goto B63eea0;
case 0x63eea3:goto L63eea3;
case 0x63eea5:c.instructions+=4;goto B63eea5;
case 0x63eea6:c.instructions+=3;goto B63eea6;
case 0x63eea8:c.instructions+=2;goto B63eea8;
case 0x63eeaa:c.instructions+=1;goto B63eeaa;
case 0x63eeaf:goto L63eeaf;
case 0x63eeb0:c.instructions+=1;goto B63eeb0;
case 0x63eeb6:goto L63eeb6;
case 0x63eebc:goto L63eebc;
case 0x63eebe:c.instructions+=26;goto B63eebe;
case 0x63eebf:c.instructions+=25;goto B63eebf;
case 0x63eec1:c.instructions+=24;goto B63eec1;
case 0x63eec2:c.instructions+=23;goto B63eec2;
case 0x63eec5:c.instructions+=22;goto B63eec5;
case 0x63eec8:c.instructions+=21;goto B63eec8;
case 0x63eec9:c.instructions+=20;goto B63eec9;
case 0x63eecc:c.instructions+=19;goto B63eecc;
case 0x63eecd:c.instructions+=18;goto B63eecd;
case 0x63eecf:c.instructions+=17;goto B63eecf;
case 0x63eed1:c.instructions+=16;goto B63eed1;
case 0x63eed3:c.instructions+=15;goto B63eed3;
case 0x63eed5:c.instructions+=14;goto B63eed5;
case 0x63eed7:c.instructions+=13;goto B63eed7;
case 0x63eed9:c.instructions+=12;goto B63eed9;
case 0x63eedb:c.instructions+=11;goto B63eedb;
case 0x63eedd:c.instructions+=10;goto B63eedd;
case 0x63eedf:c.instructions+=9;goto B63eedf;
case 0x63eee2:c.instructions+=8;goto B63eee2;
case 0x63eee4:c.instructions+=7;goto B63eee4;
case 0x63eee6:c.instructions+=6;goto B63eee6;
case 0x63eee8:c.instructions+=5;goto B63eee8;
case 0x63eeea:c.instructions+=4;goto B63eeea;
case 0x63eeee:c.instructions+=3;goto B63eeee;
case 0x63eef1:c.instructions+=2;goto B63eef1;
case 0x63eef4:c.instructions+=1;goto B63eef4;
case 0x63eef9:goto L63eef9;
case 0x63eefb:c.instructions+=1;goto B63eefb;
case 0x63eefd:goto L63eefd;
case 0x63ef00:c.instructions+=2;goto B63ef00;
case 0x63ef02:c.instructions+=1;goto B63ef02;
case 0x63ef04:goto L63ef04;
case 0x63ef05:c.instructions+=7;goto B63ef05;
case 0x63ef07:c.instructions+=6;goto B63ef07;
case 0x63ef08:c.instructions+=5;goto B63ef08;
case 0x63ef09:c.instructions+=4;goto B63ef09;
case 0x63ef0a:c.instructions+=3;goto B63ef0a;
case 0x63ef0b:c.instructions+=2;goto B63ef0b;
case 0x63ef0c:c.instructions+=1;goto B63ef0c;
case 0x63ef0e:goto L63ef0e;
case 0x63ef11:c.instructions+=5;goto B63ef11;
case 0x63ef17:c.instructions+=4;goto B63ef17;
case 0x63ef19:c.instructions+=3;goto B63ef19;
case 0x63ef1c:c.instructions+=2;goto B63ef1c;
case 0x63ef1f:c.instructions+=1;goto B63ef1f;
case 0x63ef21:goto L63ef21;
case 0x63ef24:c.instructions+=13;goto B63ef24;
case 0x63ef26:c.instructions+=12;goto B63ef26;
case 0x63ef2c:c.instructions+=11;goto B63ef2c;
case 0x63ef2e:c.instructions+=10;goto B63ef2e;
case 0x63ef30:c.instructions+=9;goto B63ef30;
case 0x63ef32:c.instructions+=8;goto B63ef32;
case 0x63ef34:c.instructions+=7;goto B63ef34;
case 0x63ef37:c.instructions+=6;goto B63ef37;
case 0x63ef3a:c.instructions+=5;goto B63ef3a;
case 0x63ef3c:c.instructions+=4;goto B63ef3c;
case 0x63ef3f:c.instructions+=3;goto B63ef3f;
case 0x63ef42:c.instructions+=2;goto B63ef42;
case 0x63ef45:c.instructions+=1;goto B63ef45;
case 0x63ef47:goto L63ef47;
case 0x63ef49:c.instructions+=6;goto B63ef49;
case 0x63ef4b:c.instructions+=5;goto B63ef4b;
case 0x63ef4d:c.instructions+=4;goto B63ef4d;
case 0x63ef50:c.instructions+=3;goto B63ef50;
case 0x63ef52:c.instructions+=2;goto B63ef52;
case 0x63ef55:c.instructions+=1;goto B63ef55;
case 0x63ef57:goto L63ef57;
case 0x63ef5a:goto L63ef5a;
case 0x63ef5b:c.instructions+=2;goto B63ef5b;
case 0x63ef5c:c.instructions+=1;goto B63ef5c;
case 0x63ef5f:goto L63ef5f;
case 0x63ef61:c.instructions+=4;goto B63ef61;
case 0x63ef62:c.instructions+=3;goto B63ef62;
case 0x63ef64:c.instructions+=2;goto B63ef64;
case 0x63ef66:c.instructions+=1;goto B63ef66;
case 0x63ef6b:goto L63ef6b;
case 0x63ef6c:c.instructions+=1;goto B63ef6c;
case 0x63ef72:goto L63ef72;
case 0x63ef74:c.instructions+=30;goto B63ef74;
case 0x63ef75:c.instructions+=29;goto B63ef75;
case 0x63ef77:c.instructions+=28;goto B63ef77;
case 0x63ef7a:c.instructions+=27;goto B63ef7a;
case 0x63ef7c:c.instructions+=26;goto B63ef7c;
case 0x63ef7d:c.instructions+=25;goto B63ef7d;
case 0x63ef80:c.instructions+=24;goto B63ef80;
case 0x63ef82:c.instructions+=23;goto B63ef82;
case 0x63ef83:c.instructions+=22;goto B63ef83;
case 0x63ef86:c.instructions+=21;goto B63ef86;
case 0x63ef89:c.instructions+=20;goto B63ef89;
case 0x63ef8c:c.instructions+=19;goto B63ef8c;
case 0x63ef8f:c.instructions+=18;goto B63ef8f;
case 0x63ef92:c.instructions+=17;goto B63ef92;
case 0x63ef94:c.instructions+=16;goto B63ef94;
case 0x63ef96:c.instructions+=15;goto B63ef96;
case 0x63ef98:c.instructions+=14;goto B63ef98;
case 0x63ef9a:c.instructions+=13;goto B63ef9a;
case 0x63ef9d:c.instructions+=12;goto B63ef9d;
case 0x63efa0:c.instructions+=11;goto B63efa0;
case 0x63efa2:c.instructions+=10;goto B63efa2;
case 0x63efa5:c.instructions+=9;goto B63efa5;
case 0x63efa8:c.instructions+=8;goto B63efa8;
case 0x63efaa:c.instructions+=7;goto B63efaa;
case 0x63efac:c.instructions+=6;goto B63efac;
case 0x63efb2:c.instructions+=5;goto B63efb2;
case 0x63efb4:c.instructions+=4;goto B63efb4;
case 0x63efb6:c.instructions+=3;goto B63efb6;
case 0x63efb8:c.instructions+=2;goto B63efb8;
case 0x63efbb:c.instructions+=1;goto B63efbb;
case 0x63efbd:goto L63efbd;
case 0x63efbf:c.instructions+=2;goto B63efbf;
case 0x63efc1:c.instructions+=1;goto B63efc1;
case 0x63efc3:goto L63efc3;
case 0x63efc6:c.instructions+=15;goto B63efc6;
case 0x63efc7:c.instructions+=14;goto B63efc7;
case 0x63efca:c.instructions+=13;goto B63efca;
case 0x63efcb:c.instructions+=12;goto B63efcb;
case 0x63efce:c.instructions+=11;goto B63efce;
case 0x63efd1:c.instructions+=10;goto B63efd1;
case 0x63efd3:c.instructions+=9;goto B63efd3;
case 0x63efd6:c.instructions+=8;goto B63efd6;
case 0x63efd8:c.instructions+=7;goto B63efd8;
case 0x63efda:c.instructions+=6;goto B63efda;
case 0x63efdd:c.instructions+=5;goto B63efdd;
case 0x63efdf:c.instructions+=4;goto B63efdf;
case 0x63efe1:c.instructions+=3;goto B63efe1;
case 0x63efe4:c.instructions+=2;goto B63efe4;
case 0x63efe7:c.instructions+=1;goto B63efe7;
case 0x63efec:goto L63efec;
case 0x63efee:c.instructions+=3;goto B63efee;
case 0x63efef:c.instructions+=2;goto B63efef;
case 0x63eff0:c.instructions+=1;goto B63eff0;
case 0x63eff2:goto L63eff2;
case 0x63eff4:c.instructions+=1;goto B63eff4;
case 0x63eff6:goto L63eff6;
case 0x63eff8:c.instructions+=3;goto B63eff8;
case 0x63effb:c.instructions+=2;goto B63effb;
case 0x63effd:c.instructions+=1;goto B63effd;
default:missing_instruction(c.pc);}
B63e001:L63e001:{c.instructions+=11;NFSU2_TR(0x63e001);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e004:{NFSU2_TR(0x63e004);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e007:{NFSU2_TR(0x63e007);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e00a:{NFSU2_TR(0x63e00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63e00b:{NFSU2_TR(0x63e00b);
__builtin_memmove((R+0),(R+24),4);
}
B63e00d:{NFSU2_TR(0x63e00d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63e00e:{NFSU2_TR(0x63e00e);
__builtin_memmove((R+16),(R+20),4);
}
B63e010:{NFSU2_TR(0x63e010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e011:{NFSU2_TR(0x63e011);
__builtin_memmove((R+16),(R+12),4);
}
B63e013:{NFSU2_TR(0x63e013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63e014:{NFSU2_TR(0x63e014);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e017:L63e017:{c.instructions+=5;NFSU2_TR(0x63e017);
__builtin_memmove((R+28),(R+28),4);
}
B63e019:{NFSU2_TR(0x63e019);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e01a:{NFSU2_TR(0x63e01a);
__builtin_memmove((R+20),(R+16),4);
}
B63e01c:{NFSU2_TR(0x63e01c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e01e:{NFSU2_TR(0x63e01e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e023ull));
TAIL_STATIC(0x641713u,641);
}
B63e023:L63e023:{c.instructions+=12;NFSU2_TR(0x63e023);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e026:{NFSU2_TR(0x63e026);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e029:{NFSU2_TR(0x63e029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e02a:{NFSU2_TR(0x63e02a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e02d:{NFSU2_TR(0x63e02d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e030:{NFSU2_TR(0x63e030);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e033:{NFSU2_TR(0x63e033);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e036:{NFSU2_TR(0x63e036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e037:{NFSU2_TR(0x63e037);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e03a:{NFSU2_TR(0x63e03a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e03d:{NFSU2_TR(0x63e03d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e040:{NFSU2_TR(0x63e040);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f88),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e046ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63e046:L63e046:{c.instructions+=2;NFSU2_TR(0x63e046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e047:{NFSU2_TR(0x63e047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e04a:L63e04a:{c.instructions+=14;NFSU2_TR(0x63e04a);
__builtin_memmove((R+28),(R+28),4);
}
B63e04c:{NFSU2_TR(0x63e04c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e04d:{NFSU2_TR(0x63e04d);
__builtin_memmove((R+12),(R+16),4);
}
B63e04f:{NFSU2_TR(0x63e04f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e050:{NFSU2_TR(0x63e050);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63e053:{NFSU2_TR(0x63e053);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e056:{NFSU2_TR(0x63e056);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e057:{NFSU2_TR(0x63e057);
__builtin_memmove((R+20),(R+16),4);
}
B63e059:{NFSU2_TR(0x63e059);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63e05c:{NFSU2_TR(0x63e05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B63e062:{NFSU2_TR(0x63e062);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63e064:{NFSU2_TR(0x63e064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e065:{NFSU2_TR(0x63e065);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e066:{NFSU2_TR(0x63e066);
if(r1(R+518)){{goto L63e26f;}}
}
B63e06c:L63e06c:{c.instructions+=7;NFSU2_TR(0x63e06c);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e06f:{NFSU2_TR(0x63e06f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e075:{NFSU2_TR(0x63e075);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B63e077:{NFSU2_TR(0x63e077);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e079:{NFSU2_TR(0x63e079);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63e07b:{NFSU2_TR(0x63e07b);
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
B63e07e:{NFSU2_TR(0x63e07e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L63e1bd;}}
}
B63e084:L63e084:{c.instructions+=37;NFSU2_TR(0x63e084);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e087:{NFSU2_TR(0x63e087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63e089:{NFSU2_TR(0x63e089);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e08b:{NFSU2_TR(0x63e08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e08e:{NFSU2_TR(0x63e08e);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e091:{NFSU2_TR(0x63e091);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e094:{NFSU2_TR(0x63e094);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e096:{NFSU2_TR(0x63e096);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e097:{NFSU2_TR(0x63e097);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e09a:{NFSU2_TR(0x63e09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e09d:{NFSU2_TR(0x63e09d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e09f:{NFSU2_TR(0x63e09f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e0a2:{NFSU2_TR(0x63e0a2);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0a5:{NFSU2_TR(0x63e0a5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0a7:{NFSU2_TR(0x63e0a7);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0aa:{NFSU2_TR(0x63e0aa);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0ac:{NFSU2_TR(0x63e0ac);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0af:{NFSU2_TR(0x63e0af);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0b1:{NFSU2_TR(0x63e0b1);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0b4:{NFSU2_TR(0x63e0b4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0b6:{NFSU2_TR(0x63e0b6);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0b9:{NFSU2_TR(0x63e0b9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0bb:{NFSU2_TR(0x63e0bb);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0be:{NFSU2_TR(0x63e0be);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0c0:{NFSU2_TR(0x63e0c0);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0c3:{NFSU2_TR(0x63e0c3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0c5:{NFSU2_TR(0x63e0c5);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0c8:{NFSU2_TR(0x63e0c8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e0ca:{NFSU2_TR(0x63e0ca);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0cd:{NFSU2_TR(0x63e0cd);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e0cf:{NFSU2_TR(0x63e0cf);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0d2:{NFSU2_TR(0x63e0d2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e0d4:{NFSU2_TR(0x63e0d4);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0d7:{NFSU2_TR(0x63e0d7);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e0da:{NFSU2_TR(0x63e0da);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e0dd:{NFSU2_TR(0x63e0dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e0de:{NFSU2_TR(0x63e0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e0e3ull));
TAIL_STATIC(0x63da23u,63d);
}
B63e0e3:L63e0e3:{c.instructions+=5;NFSU2_TR(0x63e0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63e0e6:{NFSU2_TR(0x63e0e6);
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
B63e0e8:{NFSU2_TR(0x63e0e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e0eb:{NFSU2_TR(0x63e0eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e0ec:{NFSU2_TR(0x63e0ec);
if(r1(R+518)){{goto L63e199;}}
}
B63e0f2:L63e0f2:{c.instructions+=3;NFSU2_TR(0x63e0f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e0f8:{NFSU2_TR(0x63e0f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e0f9:{NFSU2_TR(0x63e0f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e0feull));
TAIL_STATIC(0x63d12cu,63d);
}
B63e0fe:L63e0fe:{c.instructions+=44;NFSU2_TR(0x63e0fe);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e100:{NFSU2_TR(0x63e100);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e103:{NFSU2_TR(0x63e103);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e106:{NFSU2_TR(0x63e106);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e108:{NFSU2_TR(0x63e108);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e10e:{NFSU2_TR(0x63e10e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e111:{NFSU2_TR(0x63e111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e112:{NFSU2_TR(0x63e112);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e114:{NFSU2_TR(0x63e114);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e115:{NFSU2_TR(0x63e115);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e116:{NFSU2_TR(0x63e116);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e119:{NFSU2_TR(0x63e119);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e11b:{NFSU2_TR(0x63e11b);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e11e:{NFSU2_TR(0x63e11e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e120:{NFSU2_TR(0x63e120);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e123:{NFSU2_TR(0x63e123);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e125:{NFSU2_TR(0x63e125);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e128:{NFSU2_TR(0x63e128);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e12a:{NFSU2_TR(0x63e12a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e12d:{NFSU2_TR(0x63e12d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e12f:{NFSU2_TR(0x63e12f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e132:{NFSU2_TR(0x63e132);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e134:{NFSU2_TR(0x63e134);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e137:{NFSU2_TR(0x63e137);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e139:{NFSU2_TR(0x63e139);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e13c:{NFSU2_TR(0x63e13c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e13e:{NFSU2_TR(0x63e13e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e141:{NFSU2_TR(0x63e141);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e143:{NFSU2_TR(0x63e143);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e146:{NFSU2_TR(0x63e146);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e148:{NFSU2_TR(0x63e148);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e14b:{NFSU2_TR(0x63e14b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e14d:{NFSU2_TR(0x63e14d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e150:{NFSU2_TR(0x63e150);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e152:{NFSU2_TR(0x63e152);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e155:{NFSU2_TR(0x63e155);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e157:{NFSU2_TR(0x63e157);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e159:{NFSU2_TR(0x63e159);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e15b:{NFSU2_TR(0x63e15b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63e15d:{NFSU2_TR(0x63e15d);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e160:{NFSU2_TR(0x63e160);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e163:{NFSU2_TR(0x63e163);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63e165:{NFSU2_TR(0x63e165);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e168:{NFSU2_TR(0x63e168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e16dull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e16d:L63e16d:{c.instructions+=5;NFSU2_TR(0x63e16d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e170:{NFSU2_TR(0x63e170);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e171:{NFSU2_TR(0x63e171);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e172:{NFSU2_TR(0x63e172);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e173:{NFSU2_TR(0x63e173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e178ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e178:L63e178:{c.instructions+=5;NFSU2_TR(0x63e178);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e17b:{NFSU2_TR(0x63e17b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e17c:{NFSU2_TR(0x63e17c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e17d:{NFSU2_TR(0x63e17d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e17e:{NFSU2_TR(0x63e17e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e183ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e183:L63e183:{c.instructions+=7;NFSU2_TR(0x63e183);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e185:{NFSU2_TR(0x63e185);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e188:{NFSU2_TR(0x63e188);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e18b:{NFSU2_TR(0x63e18b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e18e:{NFSU2_TR(0x63e18e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e191:{NFSU2_TR(0x63e191);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e194:{NFSU2_TR(0x63e194);
{goto L63e2c1;}
}
B63e199:L63e199:{c.instructions+=3;NFSU2_TR(0x63e199);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e19c:{NFSU2_TR(0x63e19c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e19d:{NFSU2_TR(0x63e19d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e1a2ull));
TAIL_STATIC(0x63d12cu,63d);
}
B63e1a2:L63e1a2:{c.instructions+=5;NFSU2_TR(0x63e1a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e1a5:{NFSU2_TR(0x63e1a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e1a6:{NFSU2_TR(0x63e1a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e1a7:{NFSU2_TR(0x63e1a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e1a8:{NFSU2_TR(0x63e1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e1adull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e1ad:L63e1ad:{c.instructions+=5;NFSU2_TR(0x63e1ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e1b0:{NFSU2_TR(0x63e1b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e1b1:{NFSU2_TR(0x63e1b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e1b2:{NFSU2_TR(0x63e1b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e1b3:{NFSU2_TR(0x63e1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e1b8ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e1b8:L63e1b8:{c.instructions+=1;NFSU2_TR(0x63e1b8);
{goto L63e2c1;}
}
B63e1bd:L63e1bd:{c.instructions+=4;NFSU2_TR(0x63e1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e1c0:{NFSU2_TR(0x63e1c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63e1c2:{NFSU2_TR(0x63e1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e1c5:{NFSU2_TR(0x63e1c5);
if(r1(R+518)){{goto L63e224;}}
}
B63e1c7:L63e1c7:{c.instructions+=33;NFSU2_TR(0x63e1c7);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1ca:{NFSU2_TR(0x63e1ca);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1cc:{NFSU2_TR(0x63e1cc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1cf:{NFSU2_TR(0x63e1cf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1d1:{NFSU2_TR(0x63e1d1);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1d4:{NFSU2_TR(0x63e1d4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1d6:{NFSU2_TR(0x63e1d6);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1d9:{NFSU2_TR(0x63e1d9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1db:{NFSU2_TR(0x63e1db);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1de:{NFSU2_TR(0x63e1de);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1e0:{NFSU2_TR(0x63e1e0);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1e3:{NFSU2_TR(0x63e1e3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1e5:{NFSU2_TR(0x63e1e5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1e8:{NFSU2_TR(0x63e1e8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1ea:{NFSU2_TR(0x63e1ea);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1ed:{NFSU2_TR(0x63e1ed);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e1ef:{NFSU2_TR(0x63e1ef);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1f2:{NFSU2_TR(0x63e1f2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e1f4:{NFSU2_TR(0x63e1f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63e1f6:{NFSU2_TR(0x63e1f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63e1f8:{NFSU2_TR(0x63e1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e1fb:{NFSU2_TR(0x63e1fb);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e1fe:{NFSU2_TR(0x63e1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e201:{NFSU2_TR(0x63e201);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e203:{NFSU2_TR(0x63e203);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e205:{NFSU2_TR(0x63e205);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e207:{NFSU2_TR(0x63e207);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e20a:{NFSU2_TR(0x63e20a);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e20c:{NFSU2_TR(0x63e20c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e20f:{NFSU2_TR(0x63e20f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e212:{NFSU2_TR(0x63e212);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e215:{NFSU2_TR(0x63e215);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e217:{NFSU2_TR(0x63e217);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e21a:L63e21a:{c.instructions+=3;NFSU2_TR(0x63e21a);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e21c:{NFSU2_TR(0x63e21c);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e21f:{NFSU2_TR(0x63e21f);
{goto L63e2c1;}
}
B63e224:L63e224:{c.instructions+=30;NFSU2_TR(0x63e224);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e227:{NFSU2_TR(0x63e227);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e229:{NFSU2_TR(0x63e229);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e22c:{NFSU2_TR(0x63e22c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e22e:{NFSU2_TR(0x63e22e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e231:{NFSU2_TR(0x63e231);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e233:{NFSU2_TR(0x63e233);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e236:{NFSU2_TR(0x63e236);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e238:{NFSU2_TR(0x63e238);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e23b:{NFSU2_TR(0x63e23b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e23d:{NFSU2_TR(0x63e23d);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e240:{NFSU2_TR(0x63e240);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e242:{NFSU2_TR(0x63e242);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e245:{NFSU2_TR(0x63e245);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e247:{NFSU2_TR(0x63e247);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e24a:{NFSU2_TR(0x63e24a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e24c:{NFSU2_TR(0x63e24c);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e24f:{NFSU2_TR(0x63e24f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e251:{NFSU2_TR(0x63e251);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e254:{NFSU2_TR(0x63e254);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e256:{NFSU2_TR(0x63e256);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e259:{NFSU2_TR(0x63e259);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e25b:{NFSU2_TR(0x63e25b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e25e:{NFSU2_TR(0x63e25e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e260:{NFSU2_TR(0x63e260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63e262:{NFSU2_TR(0x63e262);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63e264:{NFSU2_TR(0x63e264);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e267:{NFSU2_TR(0x63e267);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e26a:{NFSU2_TR(0x63e26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e26d:{NFSU2_TR(0x63e26d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63e21au);}goto L63e21a;}
}
B63e26f:L63e26f:{c.instructions+=33;NFSU2_TR(0x63e26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e272:{NFSU2_TR(0x63e272);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e274:{NFSU2_TR(0x63e274);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e277:{NFSU2_TR(0x63e277);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e279:{NFSU2_TR(0x63e279);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e27c:{NFSU2_TR(0x63e27c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e27e:{NFSU2_TR(0x63e27e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e281:{NFSU2_TR(0x63e281);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e283:{NFSU2_TR(0x63e283);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e286:{NFSU2_TR(0x63e286);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e288:{NFSU2_TR(0x63e288);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e28b:{NFSU2_TR(0x63e28b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e28d:{NFSU2_TR(0x63e28d);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e290:{NFSU2_TR(0x63e290);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e292:{NFSU2_TR(0x63e292);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e295:{NFSU2_TR(0x63e295);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e297:{NFSU2_TR(0x63e297);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e29a:{NFSU2_TR(0x63e29a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e29c:{NFSU2_TR(0x63e29c);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e29f:{NFSU2_TR(0x63e29f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e2a1:{NFSU2_TR(0x63e2a1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2a4:{NFSU2_TR(0x63e2a4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e2a6:{NFSU2_TR(0x63e2a6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2a9:{NFSU2_TR(0x63e2a9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e2ab:{NFSU2_TR(0x63e2ab);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2ae:{NFSU2_TR(0x63e2ae);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e2b0:{NFSU2_TR(0x63e2b0);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2b3:{NFSU2_TR(0x63e2b3);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e2b5:{NFSU2_TR(0x63e2b5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2b8:{NFSU2_TR(0x63e2b8);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e2ba:{NFSU2_TR(0x63e2ba);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2bd:{NFSU2_TR(0x63e2bd);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e2bf:{NFSU2_TR(0x63e2bf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2c1:L63e2c1:{c.instructions+=6;NFSU2_TR(0x63e2c1);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e2c4:{NFSU2_TR(0x63e2c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e2ca:{NFSU2_TR(0x63e2ca);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B63e2cc:{NFSU2_TR(0x63e2cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63e2ce:{NFSU2_TR(0x63e2ce);
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
B63e2d1:{NFSU2_TR(0x63e2d1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L63e31e;}}
}
B63e2d3:L63e2d3:{c.instructions+=6;NFSU2_TR(0x63e2d3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e2d6:{NFSU2_TR(0x63e2d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e2d7:{NFSU2_TR(0x63e2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e2da:{NFSU2_TR(0x63e2da);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2dd:{NFSU2_TR(0x63e2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e2de:{NFSU2_TR(0x63e2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e2e3ull));
TAIL_STATIC(0x63da23u,63d);
}
B63e2e3:L63e2e3:{c.instructions+=7;NFSU2_TR(0x63e2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63e2e6:{NFSU2_TR(0x63e2e6);
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
B63e2e8:{NFSU2_TR(0x63e2e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e2eb:{NFSU2_TR(0x63e2eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e2ec:{NFSU2_TR(0x63e2ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e2ed:{NFSU2_TR(0x63e2ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e2ee:{NFSU2_TR(0x63e2ee);
if(r1(R+518)){{goto L63e319;}}
}
B63e2f0:L63e2f0:{c.instructions+=7;NFSU2_TR(0x63e2f0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e2f3:{NFSU2_TR(0x63e2f3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e2f5:{NFSU2_TR(0x63e2f5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e2f8:{NFSU2_TR(0x63e2f8);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e2fb:{NFSU2_TR(0x63e2fb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e2fe:{NFSU2_TR(0x63e2fe);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e301:{NFSU2_TR(0x63e301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e306ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e306:L63e306:{c.instructions+=7;NFSU2_TR(0x63e306);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e308:{NFSU2_TR(0x63e308);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e30b:{NFSU2_TR(0x63e30b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e30e:{NFSU2_TR(0x63e30e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e311:{NFSU2_TR(0x63e311);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e314:{NFSU2_TR(0x63e314);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e317:{NFSU2_TR(0x63e317);
{goto L63e31e;}
}
B63e319:L63e319:{c.instructions+=1;NFSU2_TR(0x63e319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e31eull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e31e:L63e31e:{c.instructions+=3;NFSU2_TR(0x63e31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e321:{NFSU2_TR(0x63e321);
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
B63e323:{NFSU2_TR(0x63e323);
if(r1(R+518)){{goto L63e336;}}
}
B63e325:L63e325:{c.instructions+=6;NFSU2_TR(0x63e325);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e327:{NFSU2_TR(0x63e327);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e32a:{NFSU2_TR(0x63e32a);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e32d:{NFSU2_TR(0x63e32d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e330:{NFSU2_TR(0x63e330);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e333:{NFSU2_TR(0x63e333);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e336:L63e336:{c.instructions+=8;NFSU2_TR(0x63e336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63e337:{NFSU2_TR(0x63e337);
__builtin_memmove((R+0),(R+24),4);
}
B63e339:{NFSU2_TR(0x63e339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63e33a:{NFSU2_TR(0x63e33a);
__builtin_memmove((R+16),(R+20),4);
}
B63e33c:{NFSU2_TR(0x63e33c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e33d:{NFSU2_TR(0x63e33d);
__builtin_memmove((R+16),(R+12),4);
}
B63e33f:{NFSU2_TR(0x63e33f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63e340:{NFSU2_TR(0x63e340);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e343:L63e343:{c.instructions+=5;NFSU2_TR(0x63e343);
__builtin_memmove((R+28),(R+28),4);
}
B63e345:{NFSU2_TR(0x63e345);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e346:{NFSU2_TR(0x63e346);
__builtin_memmove((R+20),(R+16),4);
}
B63e348:{NFSU2_TR(0x63e348);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e34a:{NFSU2_TR(0x63e34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e34full));
TAIL_STATIC(0x641713u,641);
}
B63e34f:L63e34f:{c.instructions+=8;NFSU2_TR(0x63e34f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e352:{NFSU2_TR(0x63e352);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e355:{NFSU2_TR(0x63e355);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e358:{NFSU2_TR(0x63e358);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e35b:{NFSU2_TR(0x63e35b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e35c:{NFSU2_TR(0x63e35c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e35f:{NFSU2_TR(0x63e35f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e362:{NFSU2_TR(0x63e362);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f10),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e368ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63e368:L63e368:{c.instructions+=2;NFSU2_TR(0x63e368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e369:{NFSU2_TR(0x63e369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e36c:L63e36c:{c.instructions+=44;NFSU2_TR(0x63e36c);
__builtin_memmove((R+28),(R+28),4);
}
B63e36e:{NFSU2_TR(0x63e36e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e36f:{NFSU2_TR(0x63e36f);
__builtin_memmove((R+12),(R+16),4);
}
B63e371:{NFSU2_TR(0x63e371);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e372:{NFSU2_TR(0x63e372);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63e375:{NFSU2_TR(0x63e375);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e378:{NFSU2_TR(0x63e378);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e379:{NFSU2_TR(0x63e379);
__builtin_memmove((R+20),(R+16),4);
}
B63e37b:{NFSU2_TR(0x63e37b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B63e37e:{NFSU2_TR(0x63e37e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e380:{NFSU2_TR(0x63e380);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B63e384:{NFSU2_TR(0x63e384);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e385:{NFSU2_TR(0x63e385);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e388:{NFSU2_TR(0x63e388);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e38b:{NFSU2_TR(0x63e38b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e38c:{NFSU2_TR(0x63e38c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e38e:{NFSU2_TR(0x63e38e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e391:{NFSU2_TR(0x63e391);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e393:{NFSU2_TR(0x63e393);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e396:{NFSU2_TR(0x63e396);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e398:{NFSU2_TR(0x63e398);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e39b:{NFSU2_TR(0x63e39b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e39d:{NFSU2_TR(0x63e39d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3a0:{NFSU2_TR(0x63e3a0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3a2:{NFSU2_TR(0x63e3a2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3a5:{NFSU2_TR(0x63e3a5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3a7:{NFSU2_TR(0x63e3a7);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3aa:{NFSU2_TR(0x63e3aa);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3ac:{NFSU2_TR(0x63e3ac);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3af:{NFSU2_TR(0x63e3af);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3b1:{NFSU2_TR(0x63e3b1);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3b4:{NFSU2_TR(0x63e3b4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3b6:{NFSU2_TR(0x63e3b6);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3b9:{NFSU2_TR(0x63e3b9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3bb:{NFSU2_TR(0x63e3bb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3be:{NFSU2_TR(0x63e3be);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e3c0:{NFSU2_TR(0x63e3c0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3c3:{NFSU2_TR(0x63e3c3);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e3c6:{NFSU2_TR(0x63e3c6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63e3c8:{NFSU2_TR(0x63e3c8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63e3cb:{NFSU2_TR(0x63e3cb);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3ce:{NFSU2_TR(0x63e3ce);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e3d0:{NFSU2_TR(0x63e3d0);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3d3:{NFSU2_TR(0x63e3d3);
if(r1(R+518)){{goto L63e42e;}}
}
B63e3d5:L63e3d5:{c.instructions+=4;NFSU2_TR(0x63e3d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e3d8:{NFSU2_TR(0x63e3d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e3db:{NFSU2_TR(0x63e3db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e3dc:{NFSU2_TR(0x63e3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e3e1ull));
TAIL_STATIC(0x63dbdeu,63d);
}
B63e3e1:L63e3e1:{c.instructions+=7;NFSU2_TR(0x63e3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63e3e4:{NFSU2_TR(0x63e3e4);
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
B63e3e6:{NFSU2_TR(0x63e3e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e3e9:{NFSU2_TR(0x63e3e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e3ea:{NFSU2_TR(0x63e3ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e3eb:{NFSU2_TR(0x63e3eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e3ec:{NFSU2_TR(0x63e3ec);
if(r1(R+518)){{goto L63e429;}}
}
B63e3ee:L63e3ee:{c.instructions+=10;NFSU2_TR(0x63e3ee);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e3f1:{NFSU2_TR(0x63e3f1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e3f3:{NFSU2_TR(0x63e3f3);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3f6:{NFSU2_TR(0x63e3f6);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e3f9:{NFSU2_TR(0x63e3f9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e3fc:{NFSU2_TR(0x63e3fc);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e3ff:{NFSU2_TR(0x63e3ff);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e402:{NFSU2_TR(0x63e402);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e405:{NFSU2_TR(0x63e405);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e408:{NFSU2_TR(0x63e408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e40dull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e40d:L63e40d:{c.instructions+=10;NFSU2_TR(0x63e40d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e40f:{NFSU2_TR(0x63e40f);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e412:{NFSU2_TR(0x63e412);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e415:{NFSU2_TR(0x63e415);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e418:{NFSU2_TR(0x63e418);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e41b:{NFSU2_TR(0x63e41b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e41e:{NFSU2_TR(0x63e41e);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e421:{NFSU2_TR(0x63e421);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e424:{NFSU2_TR(0x63e424);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e427:{NFSU2_TR(0x63e427);
{goto L63e42e;}
}
B63e429:L63e429:{c.instructions+=1;NFSU2_TR(0x63e429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e42eull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e42e:L63e42e:{c.instructions+=3;NFSU2_TR(0x63e42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e431:{NFSU2_TR(0x63e431);
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
B63e433:{NFSU2_TR(0x63e433);
if(r1(R+518)){{goto L63e44f;}}
}
B63e435:L63e435:{c.instructions+=9;NFSU2_TR(0x63e435);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e437:{NFSU2_TR(0x63e437);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e43a:{NFSU2_TR(0x63e43a);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e43d:{NFSU2_TR(0x63e43d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e440:{NFSU2_TR(0x63e440);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e443:{NFSU2_TR(0x63e443);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e446:{NFSU2_TR(0x63e446);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e449:{NFSU2_TR(0x63e449);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e44c:{NFSU2_TR(0x63e44c);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e44f:L63e44f:{c.instructions+=8;NFSU2_TR(0x63e44f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63e450:{NFSU2_TR(0x63e450);
__builtin_memmove((R+0),(R+24),4);
}
B63e452:{NFSU2_TR(0x63e452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63e453:{NFSU2_TR(0x63e453);
__builtin_memmove((R+16),(R+20),4);
}
B63e455:{NFSU2_TR(0x63e455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e456:{NFSU2_TR(0x63e456);
__builtin_memmove((R+16),(R+12),4);
}
B63e458:{NFSU2_TR(0x63e458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63e459:{NFSU2_TR(0x63e459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e45c:L63e45c:{c.instructions+=5;NFSU2_TR(0x63e45c);
__builtin_memmove((R+28),(R+28),4);
}
B63e45e:{NFSU2_TR(0x63e45e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e45f:{NFSU2_TR(0x63e45f);
__builtin_memmove((R+20),(R+16),4);
}
B63e461:{NFSU2_TR(0x63e461);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e463:{NFSU2_TR(0x63e463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e468ull));
TAIL_STATIC(0x641713u,641);
}
B63e468:L63e468:{c.instructions+=10;NFSU2_TR(0x63e468);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e46b:{NFSU2_TR(0x63e46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e46e:{NFSU2_TR(0x63e46e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e46f:{NFSU2_TR(0x63e46f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e472:{NFSU2_TR(0x63e472);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e475:{NFSU2_TR(0x63e475);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e478:{NFSU2_TR(0x63e478);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e479:{NFSU2_TR(0x63e479);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e47c:{NFSU2_TR(0x63e47c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e47f:{NFSU2_TR(0x63e47f);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f8c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e485ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63e485:L63e485:{c.instructions+=2;NFSU2_TR(0x63e485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e486:{NFSU2_TR(0x63e486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e489:L63e489:{c.instructions+=49;NFSU2_TR(0x63e489);
__builtin_memmove((R+28),(R+28),4);
}
B63e48b:{NFSU2_TR(0x63e48b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e48c:{NFSU2_TR(0x63e48c);
__builtin_memmove((R+12),(R+16),4);
}
B63e48e:{NFSU2_TR(0x63e48e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e48f:{NFSU2_TR(0x63e48f);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B63e492:{NFSU2_TR(0x63e492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e495:{NFSU2_TR(0x63e495);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e496:{NFSU2_TR(0x63e496);
__builtin_memmove((R+20),(R+16),4);
}
B63e498:{NFSU2_TR(0x63e498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B63e49b:{NFSU2_TR(0x63e49b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e49d:{NFSU2_TR(0x63e49d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e49e:{NFSU2_TR(0x63e49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e4a1:{NFSU2_TR(0x63e4a1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4a4:{NFSU2_TR(0x63e4a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e4a5:{NFSU2_TR(0x63e4a5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4a7:{NFSU2_TR(0x63e4a7);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4aa:{NFSU2_TR(0x63e4aa);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4ac:{NFSU2_TR(0x63e4ac);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4af:{NFSU2_TR(0x63e4af);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4b1:{NFSU2_TR(0x63e4b1);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4b4:{NFSU2_TR(0x63e4b4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4b6:{NFSU2_TR(0x63e4b6);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4b9:{NFSU2_TR(0x63e4b9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4bb:{NFSU2_TR(0x63e4bb);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4be:{NFSU2_TR(0x63e4be);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4c0:{NFSU2_TR(0x63e4c0);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4c3:{NFSU2_TR(0x63e4c3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4c5:{NFSU2_TR(0x63e4c5);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4c8:{NFSU2_TR(0x63e4c8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4ca:{NFSU2_TR(0x63e4ca);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4cd:{NFSU2_TR(0x63e4cd);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4cf:{NFSU2_TR(0x63e4cf);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4d2:{NFSU2_TR(0x63e4d2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4d4:{NFSU2_TR(0x63e4d4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4d7:{NFSU2_TR(0x63e4d7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e4d9:{NFSU2_TR(0x63e4d9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4dc:{NFSU2_TR(0x63e4dc);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e4df:{NFSU2_TR(0x63e4df);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63e4e1:{NFSU2_TR(0x63e4e1);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4e4:{NFSU2_TR(0x63e4e4);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e4e6:{NFSU2_TR(0x63e4e6);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4e9:{NFSU2_TR(0x63e4e9);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e4eb:{NFSU2_TR(0x63e4eb);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e4ee:{NFSU2_TR(0x63e4ee);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e4f1:{NFSU2_TR(0x63e4f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e4f7:{NFSU2_TR(0x63e4f7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B63e4f9:{NFSU2_TR(0x63e4f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63e4fb:{NFSU2_TR(0x63e4fb);
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
B63e4fe:{NFSU2_TR(0x63e4fe);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L63e54b;}}
}
B63e500:L63e500:{c.instructions+=6;NFSU2_TR(0x63e500);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e503:{NFSU2_TR(0x63e503);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e504:{NFSU2_TR(0x63e504);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e507:{NFSU2_TR(0x63e507);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e50a:{NFSU2_TR(0x63e50a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e50b:{NFSU2_TR(0x63e50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e510ull));
TAIL_STATIC(0x63da23u,63d);
}
B63e510:L63e510:{c.instructions+=7;NFSU2_TR(0x63e510);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63e513:{NFSU2_TR(0x63e513);
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
B63e515:{NFSU2_TR(0x63e515);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e518:{NFSU2_TR(0x63e518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e519:{NFSU2_TR(0x63e519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e51a:{NFSU2_TR(0x63e51a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e51b:{NFSU2_TR(0x63e51b);
if(r1(R+518)){{goto L63e546;}}
}
B63e51d:L63e51d:{c.instructions+=7;NFSU2_TR(0x63e51d);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e520:{NFSU2_TR(0x63e520);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e522:{NFSU2_TR(0x63e522);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e525:{NFSU2_TR(0x63e525);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e528:{NFSU2_TR(0x63e528);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e52b:{NFSU2_TR(0x63e52b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e52e:{NFSU2_TR(0x63e52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e533ull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e533:L63e533:{c.instructions+=7;NFSU2_TR(0x63e533);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e535:{NFSU2_TR(0x63e535);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e538:{NFSU2_TR(0x63e538);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e53b:{NFSU2_TR(0x63e53b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e53e:{NFSU2_TR(0x63e53e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e541:{NFSU2_TR(0x63e541);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e544:{NFSU2_TR(0x63e544);
{goto L63e54b;}
}
B63e546:L63e546:{c.instructions+=1;NFSU2_TR(0x63e546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e54bull));
TAIL_STATIC(0x63cedbu,63c);
}
B63e54b:L63e54b:{c.instructions+=3;NFSU2_TR(0x63e54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e54e:{NFSU2_TR(0x63e54e);
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
B63e550:{NFSU2_TR(0x63e550);
if(r1(R+518)){{goto L63e563;}}
}
B63e552:L63e552:{c.instructions+=6;NFSU2_TR(0x63e552);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e554:{NFSU2_TR(0x63e554);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e557:{NFSU2_TR(0x63e557);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e55a:{NFSU2_TR(0x63e55a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e55d:{NFSU2_TR(0x63e55d);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e560:{NFSU2_TR(0x63e560);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e563:L63e563:{c.instructions+=8;NFSU2_TR(0x63e563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63e564:{NFSU2_TR(0x63e564);
__builtin_memmove((R+0),(R+24),4);
}
B63e566:{NFSU2_TR(0x63e566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63e567:{NFSU2_TR(0x63e567);
__builtin_memmove((R+16),(R+20),4);
}
B63e569:{NFSU2_TR(0x63e569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e56a:{NFSU2_TR(0x63e56a);
__builtin_memmove((R+16),(R+12),4);
}
B63e56c:{NFSU2_TR(0x63e56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63e56d:{NFSU2_TR(0x63e56d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e570:L63e570:{c.instructions+=63;NFSU2_TR(0x63e570);
__builtin_memmove((R+28),(R+28),4);
}
B63e572:{NFSU2_TR(0x63e572);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e573:{NFSU2_TR(0x63e573);
__builtin_memmove((R+20),(R+16),4);
}
B63e575:{NFSU2_TR(0x63e575);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e576:{NFSU2_TR(0x63e576);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e57c:{NFSU2_TR(0x63e57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e57f:{NFSU2_TR(0x63e57f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e582:{NFSU2_TR(0x63e582);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e585:{NFSU2_TR(0x63e585);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B63e587:{NFSU2_TR(0x63e587);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e58a:{NFSU2_TR(0x63e58a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e58d:{NFSU2_TR(0x63e58d);
__asm__ volatile(".byte 0xd8,0xfa":::"memory");
}
B63e58f:{NFSU2_TR(0x63e58f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e592:{NFSU2_TR(0x63e592);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e598:{NFSU2_TR(0x63e598);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63e59a:{NFSU2_TR(0x63e59a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e59c:{NFSU2_TR(0x63e59c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e59e:{NFSU2_TR(0x63e59e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5a0:{NFSU2_TR(0x63e5a0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5a3:{NFSU2_TR(0x63e5a3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5a5:{NFSU2_TR(0x63e5a5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5a8:{NFSU2_TR(0x63e5a8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5aa:{NFSU2_TR(0x63e5aa);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5ad:{NFSU2_TR(0x63e5ad);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5af:{NFSU2_TR(0x63e5af);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5b2:{NFSU2_TR(0x63e5b2);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e5b5:{NFSU2_TR(0x63e5b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e5b7:{NFSU2_TR(0x63e5b7);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5ba:{NFSU2_TR(0x63e5ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e5bc:{NFSU2_TR(0x63e5bc);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5be:{NFSU2_TR(0x63e5be);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5c1:{NFSU2_TR(0x63e5c1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5c3:{NFSU2_TR(0x63e5c3);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5c6:{NFSU2_TR(0x63e5c6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5c8:{NFSU2_TR(0x63e5c8);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5cb:{NFSU2_TR(0x63e5cb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5cd:{NFSU2_TR(0x63e5cd);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5d0:{NFSU2_TR(0x63e5d0);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e5d3:{NFSU2_TR(0x63e5d3);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e5d6:{NFSU2_TR(0x63e5d6);
__asm__ volatile(".byte 0xd8,0xfa":::"memory");
}
B63e5d8:{NFSU2_TR(0x63e5d8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63e5db:{NFSU2_TR(0x63e5db);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5de:{NFSU2_TR(0x63e5de);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63e5e0:{NFSU2_TR(0x63e5e0);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5e3:{NFSU2_TR(0x63e5e3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e5e6:{NFSU2_TR(0x63e5e6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e5e9:{NFSU2_TR(0x63e5e9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e5eb:{NFSU2_TR(0x63e5eb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63e5ed:{NFSU2_TR(0x63e5ed);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e5f0:{NFSU2_TR(0x63e5f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e5f2:{NFSU2_TR(0x63e5f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e5f4:{NFSU2_TR(0x63e5f4);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e5f7:{NFSU2_TR(0x63e5f7);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e5fa:{NFSU2_TR(0x63e5fa);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e5fd:{NFSU2_TR(0x63e5fd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63e5ff:{NFSU2_TR(0x63e5ff);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e602:{NFSU2_TR(0x63e602);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e605:{NFSU2_TR(0x63e605);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e608:{NFSU2_TR(0x63e608);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e60b:{NFSU2_TR(0x63e60b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63e60d:{NFSU2_TR(0x63e60d);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e610:{NFSU2_TR(0x63e610);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e611:{NFSU2_TR(0x63e611);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e614:L63e614:{c.instructions+=5;NFSU2_TR(0x63e614);
__builtin_memmove((R+28),(R+28),4);
}
B63e616:{NFSU2_TR(0x63e616);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e617:{NFSU2_TR(0x63e617);
__builtin_memmove((R+20),(R+16),4);
}
B63e619:{NFSU2_TR(0x63e619);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e61b:{NFSU2_TR(0x63e61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e620ull));
TAIL_STATIC(0x641713u,641);
}
B63e620:L63e620:{c.instructions+=2;NFSU2_TR(0x63e620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e621:{NFSU2_TR(0x63e621);
{u32 t_=u32(m4(0x803ed8));TAIL_DYNAMIC(t_);}
}
B63e627:L63e627:{c.instructions+=5;NFSU2_TR(0x63e627);
__builtin_memmove((R+28),(R+28),4);
}
B63e629:{NFSU2_TR(0x63e629);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e62a:{NFSU2_TR(0x63e62a);
__builtin_memmove((R+20),(R+16),4);
}
B63e62c:{NFSU2_TR(0x63e62c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e62e:{NFSU2_TR(0x63e62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e633ull));
TAIL_STATIC(0x641713u,641);
}
B63e633:L63e633:{c.instructions+=2;NFSU2_TR(0x63e633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e634:{NFSU2_TR(0x63e634);
{u32 t_=u32(m4(0x803edc));TAIL_DYNAMIC(t_);}
}
B63e63a:L63e63a:{c.instructions+=5;NFSU2_TR(0x63e63a);
__builtin_memmove((R+28),(R+28),4);
}
B63e63c:{NFSU2_TR(0x63e63c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e63d:{NFSU2_TR(0x63e63d);
__builtin_memmove((R+20),(R+16),4);
}
B63e63f:{NFSU2_TR(0x63e63f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e641:{NFSU2_TR(0x63e641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e646ull));
TAIL_STATIC(0x641713u,641);
}
B63e646:L63e646:{c.instructions+=2;NFSU2_TR(0x63e646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e647:{NFSU2_TR(0x63e647);
{u32 t_=u32(m4(0x803ec8));TAIL_DYNAMIC(t_);}
}
B63e64d:L63e64d:{c.instructions+=7;NFSU2_TR(0x63e64d);
__builtin_memmove((R+28),(R+28),4);
}
B63e64f:{NFSU2_TR(0x63e64f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e650:{NFSU2_TR(0x63e650);
__builtin_memmove((R+20),(R+16),4);
}
B63e652:{NFSU2_TR(0x63e652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63e655:{NFSU2_TR(0x63e655);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63e657:{NFSU2_TR(0x63e657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e65a:{NFSU2_TR(0x63e65a);
if(r1(R+518)){{goto L63e66c;}}
}
B63e65c:L63e65c:{c.instructions+=6;NFSU2_TR(0x63e65c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63e65e:{NFSU2_TR(0x63e65e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63e660:{NFSU2_TR(0x63e660);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e663:{NFSU2_TR(0x63e663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e666:{NFSU2_TR(0x63e666);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e669:{NFSU2_TR(0x63e669);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e66c:L63e66c:{c.instructions+=4;NFSU2_TR(0x63e66c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e66d:{NFSU2_TR(0x63e66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63e670:{NFSU2_TR(0x63e670);
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
B63e672:{NFSU2_TR(0x63e672);
if(r1(R+518)){{goto L63e680;}}
}
B63e674:L63e674:{c.instructions+=2;NFSU2_TR(0x63e674);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e677:{NFSU2_TR(0x63e677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e67cull));
TAIL_STATIC(0x75db80u,75d);
}
B63e67c:L63e67c:{c.instructions+=2;NFSU2_TR(0x63e67c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63e67e:{NFSU2_TR(0x63e67e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e680:L63e680:{c.instructions+=3;NFSU2_TR(0x63e680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63e681:{NFSU2_TR(0x63e681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e682:{NFSU2_TR(0x63e682);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e685:L63e685:{c.instructions+=5;NFSU2_TR(0x63e685);
__builtin_memmove((R+28),(R+28),4);
}
B63e687:{NFSU2_TR(0x63e687);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e688:{NFSU2_TR(0x63e688);
__builtin_memmove((R+20),(R+16),4);
}
B63e68a:{NFSU2_TR(0x63e68a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e68c:{NFSU2_TR(0x63e68c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e691ull));
TAIL_STATIC(0x641713u,641);
}
B63e691:L63e691:{c.instructions+=2;NFSU2_TR(0x63e691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e692:{NFSU2_TR(0x63e692);
{u32 t_=u32(m4(0x803ecc));TAIL_DYNAMIC(t_);}
}
B63e698:L63e698:{c.instructions+=1;NFSU2_TR(0x63e698);
{u32 t_=u32(m4(0x803ecc));TAIL_DYNAMIC(t_);}
}
B63e69e:L63e69e:{c.instructions+=12;NFSU2_TR(0x63e69e);
__builtin_memmove((R+28),(R+28),4);
}
B63e6a0:{NFSU2_TR(0x63e6a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e6a1:{NFSU2_TR(0x63e6a1);
__builtin_memmove((R+20),(R+16),4);
}
B63e6a3:{NFSU2_TR(0x63e6a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B63e6a6:{NFSU2_TR(0x63e6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63e6a9:{NFSU2_TR(0x63e6a9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e6ac:{NFSU2_TR(0x63e6ac);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e6ae:{NFSU2_TR(0x63e6ae);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e6b1:{NFSU2_TR(0x63e6b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B63e6b7:{NFSU2_TR(0x63e6b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63e6b9:{NFSU2_TR(0x63e6b9);
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
B63e6bc:{NFSU2_TR(0x63e6bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63e6ff;}}
}
B63e6be:L63e6be:{c.instructions+=20;NFSU2_TR(0x63e6be);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e6c4:{NFSU2_TR(0x63e6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e6c7:{NFSU2_TR(0x63e6c7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63e6c9:{NFSU2_TR(0x63e6c9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e6cf:{NFSU2_TR(0x63e6cf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63e6d1:{NFSU2_TR(0x63e6d1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e6d4:{NFSU2_TR(0x63e6d4);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63e6da:{NFSU2_TR(0x63e6da);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e6dd:{NFSU2_TR(0x63e6dd);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e6e0:{NFSU2_TR(0x63e6e0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e6e2:{NFSU2_TR(0x63e6e2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e6e4:{NFSU2_TR(0x63e6e4);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e6e7:{NFSU2_TR(0x63e6e7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e6ea:{NFSU2_TR(0x63e6ea);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e6ec:{NFSU2_TR(0x63e6ec);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e6ef:{NFSU2_TR(0x63e6ef);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e6f2:{NFSU2_TR(0x63e6f2);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e6f5:{NFSU2_TR(0x63e6f5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e6f7:{NFSU2_TR(0x63e6f7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e6fa:{NFSU2_TR(0x63e6fa);
{goto L63e7ce;}
}
B63e6ff:L63e6ff:{c.instructions+=27;NFSU2_TR(0x63e6ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e701:{NFSU2_TR(0x63e701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B63e705:{NFSU2_TR(0x63e705);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e707:{NFSU2_TR(0x63e707);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e708:{NFSU2_TR(0x63e708);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e70b:{NFSU2_TR(0x63e70b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e70c:{NFSU2_TR(0x63e70c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e70d:{NFSU2_TR(0x63e70d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63e70f:{NFSU2_TR(0x63e70f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e712:{NFSU2_TR(0x63e712);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B63e713:{NFSU2_TR(0x63e713);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e715:{NFSU2_TR(0x63e715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63e716:{NFSU2_TR(0x63e716);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63e719:{NFSU2_TR(0x63e719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e71c:{NFSU2_TR(0x63e71c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e71f:{NFSU2_TR(0x63e71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e722:{NFSU2_TR(0x63e722);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e724:{NFSU2_TR(0x63e724);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e727:{NFSU2_TR(0x63e727);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e72a:{NFSU2_TR(0x63e72a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e72d:{NFSU2_TR(0x63e72d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e72f:{NFSU2_TR(0x63e72f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63e732:{NFSU2_TR(0x63e732);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e735:{NFSU2_TR(0x63e735);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63e738:{NFSU2_TR(0x63e738);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63e73a:{NFSU2_TR(0x63e73a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+1))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63e73c:{NFSU2_TR(0x63e73c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63e740;}}
}
B63e73e:L63e73e:{c.instructions+=1;NFSU2_TR(0x63e73e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63e740:L63e740:{c.instructions+=6;NFSU2_TR(0x63e740);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e744:{NFSU2_TR(0x63e744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e747:{NFSU2_TR(0x63e747);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63e74a:{NFSU2_TR(0x63e74a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63e74c:{NFSU2_TR(0x63e74c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63e74f:{NFSU2_TR(0x63e74f);
if(r1(R+518)){{goto L63e756;}}
}
B63e751:L63e751:{c.instructions+=2;NFSU2_TR(0x63e751);
__builtin_memmove((R+12),(R+8),4);
}
B63e753:{NFSU2_TR(0x63e753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e756:L63e756:{c.instructions+=42;NFSU2_TR(0x63e756);
__builtin_memmove((R+8),(R+12),4);
}
B63e758:{NFSU2_TR(0x63e758);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B63e75b:{NFSU2_TR(0x63e75b);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e75f:{NFSU2_TR(0x63e75f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B63e763:{NFSU2_TR(0x63e763);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e769:{NFSU2_TR(0x63e769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e76c:{NFSU2_TR(0x63e76c);
__builtin_memmove((R+24),(R+28),4);
}
B63e76e:{NFSU2_TR(0x63e76e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B63e771:{NFSU2_TR(0x63e771);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63e773:{NFSU2_TR(0x63e773);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B63e775:{NFSU2_TR(0x63e775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e778:{NFSU2_TR(0x63e778);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B63e77a:{NFSU2_TR(0x63e77a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e780:{NFSU2_TR(0x63e780);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63e782:{NFSU2_TR(0x63e782);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e785:{NFSU2_TR(0x63e785);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63e78b:{NFSU2_TR(0x63e78b);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e78e:{NFSU2_TR(0x63e78e);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e791:{NFSU2_TR(0x63e791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63e794:{NFSU2_TR(0x63e794);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B63e798:{NFSU2_TR(0x63e798);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B63e79b:{NFSU2_TR(0x63e79b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B63e79d:{NFSU2_TR(0x63e79d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e79f:{NFSU2_TR(0x63e79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e7a2:{NFSU2_TR(0x63e7a2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B63e7a6:{NFSU2_TR(0x63e7a6);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e7a9:{NFSU2_TR(0x63e7a9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B63e7ab:{NFSU2_TR(0x63e7ab);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e7ae:{NFSU2_TR(0x63e7ae);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B63e7b0:{NFSU2_TR(0x63e7b0);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63e7b3:{NFSU2_TR(0x63e7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e7b6:{NFSU2_TR(0x63e7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63e7b9:{NFSU2_TR(0x63e7b9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e7bb:{NFSU2_TR(0x63e7bb);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e7be:{NFSU2_TR(0x63e7be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63e7c0:{NFSU2_TR(0x63e7c0);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e7c3:{NFSU2_TR(0x63e7c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63e7c4:{NFSU2_TR(0x63e7c4);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63e7c7:{NFSU2_TR(0x63e7c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63e7c8:{NFSU2_TR(0x63e7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63e7c9:{NFSU2_TR(0x63e7c9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e7cb:{NFSU2_TR(0x63e7cb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e7ce:L63e7ce:{c.instructions+=3;NFSU2_TR(0x63e7ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e7d0:{NFSU2_TR(0x63e7d0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e7d1:{NFSU2_TR(0x63e7d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e7d4:L63e7d4:{c.instructions+=5;NFSU2_TR(0x63e7d4);
__builtin_memmove((R+28),(R+28),4);
}
B63e7d6:{NFSU2_TR(0x63e7d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e7d7:{NFSU2_TR(0x63e7d7);
__builtin_memmove((R+20),(R+16),4);
}
B63e7d9:{NFSU2_TR(0x63e7d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e7db:{NFSU2_TR(0x63e7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e7e0ull));
TAIL_STATIC(0x641713u,641);
}
B63e7e0:L63e7e0:{c.instructions+=6;NFSU2_TR(0x63e7e0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e7e3:{NFSU2_TR(0x63e7e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e7e4:{NFSU2_TR(0x63e7e4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e7e7:{NFSU2_TR(0x63e7e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e7ea:{NFSU2_TR(0x63e7ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e7ed:{NFSU2_TR(0x63e7ed);
u8 U[4];
__builtin_memmove((U+0),gp(0x803ee0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e7f3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63e7f3:L63e7f3:{c.instructions+=2;NFSU2_TR(0x63e7f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e7f4:{NFSU2_TR(0x63e7f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e7f7:L63e7f7:{c.instructions+=8;NFSU2_TR(0x63e7f7);
__builtin_memmove((R+28),(R+28),4);
}
B63e7f9:{NFSU2_TR(0x63e7f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e7fa:{NFSU2_TR(0x63e7fa);
__builtin_memmove((R+20),(R+16),4);
}
B63e7fc:{NFSU2_TR(0x63e7fc);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63e7ff:{NFSU2_TR(0x63e7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e802:{NFSU2_TR(0x63e802);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e805:{NFSU2_TR(0x63e805);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e806:{NFSU2_TR(0x63e806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e80bull));
TAIL_STATIC(0x63c226u,63c);
}
B63e80b:L63e80b:{c.instructions+=26;NFSU2_TR(0x63e80b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e80e:{NFSU2_TR(0x63e80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63e811:{NFSU2_TR(0x63e811);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e817:{NFSU2_TR(0x63e817);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e81a:{NFSU2_TR(0x63e81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e81d:{NFSU2_TR(0x63e81d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e820:{NFSU2_TR(0x63e820);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e823:{NFSU2_TR(0x63e823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e826:{NFSU2_TR(0x63e826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e829:{NFSU2_TR(0x63e829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e82c:{NFSU2_TR(0x63e82c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e82f:{NFSU2_TR(0x63e82f);
__asm__ volatile(".byte 0xd9,0xfb":::"memory");
}
B63e831:{NFSU2_TR(0x63e831);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e833:{NFSU2_TR(0x63e833);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e835:{NFSU2_TR(0x63e835);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e838:{NFSU2_TR(0x63e838);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e83b:{NFSU2_TR(0x63e83b);
__builtin_memmove((R+0),(R+4),4);
}
B63e83d:{NFSU2_TR(0x63e83d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e83f:{NFSU2_TR(0x63e83f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e842:{NFSU2_TR(0x63e842);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e845:{NFSU2_TR(0x63e845);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e848:{NFSU2_TR(0x63e848);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e84b:{NFSU2_TR(0x63e84b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e84e:{NFSU2_TR(0x63e84e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e851:{NFSU2_TR(0x63e851);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e852:{NFSU2_TR(0x63e852);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e855:L63e855:{c.instructions+=5;NFSU2_TR(0x63e855);
__builtin_memmove((R+28),(R+28),4);
}
B63e857:{NFSU2_TR(0x63e857);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e858:{NFSU2_TR(0x63e858);
__builtin_memmove((R+20),(R+16),4);
}
B63e85a:{NFSU2_TR(0x63e85a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e85c:{NFSU2_TR(0x63e85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e861ull));
TAIL_STATIC(0x641713u,641);
}
B63e861:L63e861:{c.instructions+=9;NFSU2_TR(0x63e861);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e864:{NFSU2_TR(0x63e864);
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
B63e867:{NFSU2_TR(0x63e867);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e86b:{NFSU2_TR(0x63e86b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e86e:{NFSU2_TR(0x63e86e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e872:{NFSU2_TR(0x63e872);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e875:{NFSU2_TR(0x63e875);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e878:{NFSU2_TR(0x63e878);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63e87b:{NFSU2_TR(0x63e87b);
u8 U[4];
__builtin_memmove((U+0),gp(0x803ed0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e881ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63e881:L63e881:{c.instructions+=2;NFSU2_TR(0x63e881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e882:{NFSU2_TR(0x63e882);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e885:L63e885:{c.instructions+=1;NFSU2_TR(0x63e885);
{u32 t_=u32(m4(0x803ed0));TAIL_DYNAMIC(t_);}
}
B63e88b:L63e88b:{c.instructions+=80;NFSU2_TR(0x63e88b);
__builtin_memmove((R+28),(R+28),4);
}
B63e88d:{NFSU2_TR(0x63e88d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e88e:{NFSU2_TR(0x63e88e);
__builtin_memmove((R+20),(R+16),4);
}
B63e890:{NFSU2_TR(0x63e890);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63e893:{NFSU2_TR(0x63e893);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e896:{NFSU2_TR(0x63e896);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e899:{NFSU2_TR(0x63e899);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e89f:{NFSU2_TR(0x63e89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e8a2:{NFSU2_TR(0x63e8a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e8a5:{NFSU2_TR(0x63e8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e8a8:{NFSU2_TR(0x63e8a8);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8ab:{NFSU2_TR(0x63e8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e8ae:{NFSU2_TR(0x63e8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e8b1:{NFSU2_TR(0x63e8b1);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e8b4:{NFSU2_TR(0x63e8b4);
__asm__ volatile(".byte 0xd9,0xfb":::"memory");
}
B63e8b6:{NFSU2_TR(0x63e8b6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8b8:{NFSU2_TR(0x63e8b8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8ba:{NFSU2_TR(0x63e8ba);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e8bd:{NFSU2_TR(0x63e8bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e8c0:{NFSU2_TR(0x63e8c0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e8c6:{NFSU2_TR(0x63e8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e8c9:{NFSU2_TR(0x63e8c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e8cc:{NFSU2_TR(0x63e8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e8cf:{NFSU2_TR(0x63e8cf);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8d2:{NFSU2_TR(0x63e8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e8d5:{NFSU2_TR(0x63e8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e8d8:{NFSU2_TR(0x63e8d8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e8db:{NFSU2_TR(0x63e8db);
__asm__ volatile(".byte 0xd9,0xfb":::"memory");
}
B63e8dd:{NFSU2_TR(0x63e8dd);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8df:{NFSU2_TR(0x63e8df);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8e1:{NFSU2_TR(0x63e8e1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e8e4:{NFSU2_TR(0x63e8e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e8e7:{NFSU2_TR(0x63e8e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e8ed:{NFSU2_TR(0x63e8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e8f0:{NFSU2_TR(0x63e8f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63e8f3:{NFSU2_TR(0x63e8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63e8f6:{NFSU2_TR(0x63e8f6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e8f9:{NFSU2_TR(0x63e8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e8fc:{NFSU2_TR(0x63e8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e8ff:{NFSU2_TR(0x63e8ff);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e902:{NFSU2_TR(0x63e902);
__asm__ volatile(".byte 0xd9,0xfb":::"memory");
}
B63e904:{NFSU2_TR(0x63e904);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e906:{NFSU2_TR(0x63e906);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e908:{NFSU2_TR(0x63e908);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e90b:{NFSU2_TR(0x63e90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e90e:{NFSU2_TR(0x63e90e);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e911:{NFSU2_TR(0x63e911);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e914:{NFSU2_TR(0x63e914);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e917:{NFSU2_TR(0x63e917);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e91a:{NFSU2_TR(0x63e91a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63e91c:{NFSU2_TR(0x63e91c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63e91e:{NFSU2_TR(0x63e91e);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e921:{NFSU2_TR(0x63e921);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63e923:{NFSU2_TR(0x63e923);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e925:{NFSU2_TR(0x63e925);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63e927:{NFSU2_TR(0x63e927);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e92a:{NFSU2_TR(0x63e92a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63e92c:{NFSU2_TR(0x63e92c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e92f:{NFSU2_TR(0x63e92f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63e931:{NFSU2_TR(0x63e931);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e934:{NFSU2_TR(0x63e934);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e936:{NFSU2_TR(0x63e936);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e938:{NFSU2_TR(0x63e938);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e93b:{NFSU2_TR(0x63e93b);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e93e:{NFSU2_TR(0x63e93e);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e941:{NFSU2_TR(0x63e941);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e944:{NFSU2_TR(0x63e944);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63e946:{NFSU2_TR(0x63e946);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e949:{NFSU2_TR(0x63e949);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63e94b:{NFSU2_TR(0x63e94b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e94e:{NFSU2_TR(0x63e94e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63e950:{NFSU2_TR(0x63e950);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e953:{NFSU2_TR(0x63e953);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e956:{NFSU2_TR(0x63e956);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63e958:{NFSU2_TR(0x63e958);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e95b:{NFSU2_TR(0x63e95b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63e95d:{NFSU2_TR(0x63e95d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63e960:{NFSU2_TR(0x63e960);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63e962:{NFSU2_TR(0x63e962);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63e963:{NFSU2_TR(0x63e963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63e966:L63e966:{c.instructions+=5;NFSU2_TR(0x63e966);
__builtin_memmove((R+28),(R+28),4);
}
B63e968:{NFSU2_TR(0x63e968);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e969:{NFSU2_TR(0x63e969);
__builtin_memmove((R+20),(R+16),4);
}
B63e96b:{NFSU2_TR(0x63e96b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e96d:{NFSU2_TR(0x63e96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63e972ull));
TAIL_STATIC(0x641713u,641);
}
B63e972:L63e972:{c.instructions+=2;NFSU2_TR(0x63e972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63e973:{NFSU2_TR(0x63e973);
{u32 t_=u32(m4(0x803eb8));TAIL_DYNAMIC(t_);}
}
B63e979:L63e979:{c.instructions+=1;NFSU2_TR(0x63e979);
{u32 t_=u32(m4(0x803eb8));TAIL_DYNAMIC(t_);}
}
B63e97f:L63e97f:{c.instructions+=61;NFSU2_TR(0x63e97f);
__builtin_memmove((R+28),(R+28),4);
}
B63e981:{NFSU2_TR(0x63e981);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63e982:{NFSU2_TR(0x63e982);
__builtin_memmove((R+20),(R+16),4);
}
B63e984:{NFSU2_TR(0x63e984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63e987:{NFSU2_TR(0x63e987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63e98a:{NFSU2_TR(0x63e98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63e98d:{NFSU2_TR(0x63e98d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e990:{NFSU2_TR(0x63e990);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e992:{NFSU2_TR(0x63e992);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e995:{NFSU2_TR(0x63e995);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e998:{NFSU2_TR(0x63e998);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e99b:{NFSU2_TR(0x63e99b);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e99e:{NFSU2_TR(0x63e99e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9a1:{NFSU2_TR(0x63e9a1);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9a4:{NFSU2_TR(0x63e9a4);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63e9a6:{NFSU2_TR(0x63e9a6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9a8:{NFSU2_TR(0x63e9a8);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9ab:{NFSU2_TR(0x63e9ab);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9ad:{NFSU2_TR(0x63e9ad);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9b0:{NFSU2_TR(0x63e9b0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9b2:{NFSU2_TR(0x63e9b2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9b5:{NFSU2_TR(0x63e9b5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9b7:{NFSU2_TR(0x63e9b7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9b9:{NFSU2_TR(0x63e9b9);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63e9bb:{NFSU2_TR(0x63e9bb);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63e9bd:{NFSU2_TR(0x63e9bd);
__asm__ volatile(".byte 0xde,0xec":::"memory");
}
B63e9bf:{NFSU2_TR(0x63e9bf);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63e9c1:{NFSU2_TR(0x63e9c1);
__asm__ volatile(".byte 0xde,0xec":::"memory");
}
B63e9c3:{NFSU2_TR(0x63e9c3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9c6:{NFSU2_TR(0x63e9c6);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9c9:{NFSU2_TR(0x63e9c9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9cc:{NFSU2_TR(0x63e9cc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9ce:{NFSU2_TR(0x63e9ce);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9d1:{NFSU2_TR(0x63e9d1);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9d4:{NFSU2_TR(0x63e9d4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9d7:{NFSU2_TR(0x63e9d7);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9da:{NFSU2_TR(0x63e9da);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63e9dc:{NFSU2_TR(0x63e9dc);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63e9de:{NFSU2_TR(0x63e9de);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63e9e0:{NFSU2_TR(0x63e9e0);
__asm__ volatile(".byte 0xde,0xec":::"memory");
}
B63e9e2:{NFSU2_TR(0x63e9e2);
__asm__ volatile(".byte 0xde,0xec":::"memory");
}
B63e9e4:{NFSU2_TR(0x63e9e4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9e7:{NFSU2_TR(0x63e9e7);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9ea:{NFSU2_TR(0x63e9ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9ed:{NFSU2_TR(0x63e9ed);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9f0:{NFSU2_TR(0x63e9f0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9f3:{NFSU2_TR(0x63e9f3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9f5:{NFSU2_TR(0x63e9f5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63e9f8:{NFSU2_TR(0x63e9f8);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63e9fb:{NFSU2_TR(0x63e9fb);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B63e9fd:{NFSU2_TR(0x63e9fd);
__asm__ volatile(".byte 0xde,0xec":::"memory");
}
B63e9ff:{NFSU2_TR(0x63e9ff);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63ea01:{NFSU2_TR(0x63ea01);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B63ea03:{NFSU2_TR(0x63ea03);
__asm__ volatile(".byte 0xde,0xec":::"memory");
}
B63ea05:{NFSU2_TR(0x63ea05);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea07:{NFSU2_TR(0x63ea07);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea0a:{NFSU2_TR(0x63ea0a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea0d:{NFSU2_TR(0x63ea0d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea10:{NFSU2_TR(0x63ea10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ea13:{NFSU2_TR(0x63ea13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ea14:{NFSU2_TR(0x63ea14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ea17:L63ea17:{c.instructions+=5;NFSU2_TR(0x63ea17);
__builtin_memmove((R+28),(R+28),4);
}
B63ea19:{NFSU2_TR(0x63ea19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea1a:{NFSU2_TR(0x63ea1a);
__builtin_memmove((R+20),(R+16),4);
}
B63ea1c:{NFSU2_TR(0x63ea1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea1e:{NFSU2_TR(0x63ea1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ea23ull));
TAIL_STATIC(0x641713u,641);
}
B63ea23:L63ea23:{c.instructions+=2;NFSU2_TR(0x63ea23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ea24:{NFSU2_TR(0x63ea24);
{u32 t_=u32(m4(0x803ebc));TAIL_DYNAMIC(t_);}
}
B63ea2a:L63ea2a:{c.instructions+=5;NFSU2_TR(0x63ea2a);
__builtin_memmove((R+28),(R+28),4);
}
B63ea2c:{NFSU2_TR(0x63ea2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea2d:{NFSU2_TR(0x63ea2d);
__builtin_memmove((R+20),(R+16),4);
}
B63ea2f:{NFSU2_TR(0x63ea2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea31:{NFSU2_TR(0x63ea31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ea36ull));
TAIL_STATIC(0x641713u,641);
}
B63ea36:L63ea36:{c.instructions+=2;NFSU2_TR(0x63ea36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ea37:{NFSU2_TR(0x63ea37);
{u32 t_=u32(m4(0x803f1c));TAIL_DYNAMIC(t_);}
}
B63ea3d:L63ea3d:{c.instructions+=1;NFSU2_TR(0x63ea3d);
{u32 t_=u32(m4(0x803f1c));TAIL_DYNAMIC(t_);}
}
B63ea43:L63ea43:{c.instructions+=30;NFSU2_TR(0x63ea43);
__builtin_memmove((R+28),(R+28),4);
}
B63ea45:{NFSU2_TR(0x63ea45);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea46:{NFSU2_TR(0x63ea46);
__builtin_memmove((R+20),(R+16),4);
}
B63ea48:{NFSU2_TR(0x63ea48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63ea4b:{NFSU2_TR(0x63ea4b);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea4e:{NFSU2_TR(0x63ea4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ea51:{NFSU2_TR(0x63ea51);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea54:{NFSU2_TR(0x63ea54);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea57:{NFSU2_TR(0x63ea57);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea59:{NFSU2_TR(0x63ea59);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ea5b:{NFSU2_TR(0x63ea5b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63ea5d:{NFSU2_TR(0x63ea5d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ea5f:{NFSU2_TR(0x63ea5f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63ea61:{NFSU2_TR(0x63ea61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ea63:{NFSU2_TR(0x63ea63);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ea65:{NFSU2_TR(0x63ea65);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B63ea67:{NFSU2_TR(0x63ea67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ea69:{NFSU2_TR(0x63ea69);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63ea6b:{NFSU2_TR(0x63ea6b);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B63ea6d:{NFSU2_TR(0x63ea6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ea6f:{NFSU2_TR(0x63ea6f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea72:{NFSU2_TR(0x63ea72);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ea74:{NFSU2_TR(0x63ea74);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ea76:{NFSU2_TR(0x63ea76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ea78:{NFSU2_TR(0x63ea78);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ea7a:{NFSU2_TR(0x63ea7a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea7d:{NFSU2_TR(0x63ea7d);
{u32 ea_=u32(u32(8041612u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63ea83:{NFSU2_TR(0x63ea83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63ea85:{NFSU2_TR(0x63ea85);
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
B63ea88:{NFSU2_TR(0x63ea88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63eadd;}}
}
B63ea8a:L63ea8a:{c.instructions+=18;NFSU2_TR(0x63ea8a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea8c:{NFSU2_TR(0x63ea8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea8d:{NFSU2_TR(0x63ea8d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63ea8f:{NFSU2_TR(0x63ea8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ea90:{NFSU2_TR(0x63ea90);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea92:{NFSU2_TR(0x63ea92);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea95:{NFSU2_TR(0x63ea95);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63ea97:{NFSU2_TR(0x63ea97);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ea9a:{NFSU2_TR(0x63ea9a);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ea9d:{NFSU2_TR(0x63ea9d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B63ea9f:{NFSU2_TR(0x63ea9f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eaa2:{NFSU2_TR(0x63eaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63eaa5:{NFSU2_TR(0x63eaa5);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63eaa7:{NFSU2_TR(0x63eaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63eaaa:{NFSU2_TR(0x63eaaa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eaae:{NFSU2_TR(0x63eaae);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eab1:{NFSU2_TR(0x63eab1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eab4:{NFSU2_TR(0x63eab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eab9ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63eab9:L63eab9:{c.instructions+=2;NFSU2_TR(0x63eab9);
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
B63eabb:{NFSU2_TR(0x63eabb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63eaf0;}}
}
B63eabd:L63eabd:{c.instructions+=13;NFSU2_TR(0x63eabd);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63eabf:{NFSU2_TR(0x63eabf);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63eac2:{NFSU2_TR(0x63eac2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63eac4:{NFSU2_TR(0x63eac4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63eac6:{NFSU2_TR(0x63eac6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eac8:{NFSU2_TR(0x63eac8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63eaca:{NFSU2_TR(0x63eaca);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63eacd:{NFSU2_TR(0x63eacd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ead0:{NFSU2_TR(0x63ead0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ead2:{NFSU2_TR(0x63ead2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ead5:{NFSU2_TR(0x63ead5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ead8:{NFSU2_TR(0x63ead8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63eadb:{NFSU2_TR(0x63eadb);
{goto L63eaed;}
}
B63eadd:L63eadd:{c.instructions+=7;NFSU2_TR(0x63eadd);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63eadf:{NFSU2_TR(0x63eadf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eae1:{NFSU2_TR(0x63eae1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63eae3:{NFSU2_TR(0x63eae3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eae6:{NFSU2_TR(0x63eae6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63eae8:{NFSU2_TR(0x63eae8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eaeb:{NFSU2_TR(0x63eaeb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63eaed:L63eaed:{c.instructions+=1;NFSU2_TR(0x63eaed);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eaf0:L63eaf0:{c.instructions+=3;NFSU2_TR(0x63eaf0);
__builtin_memmove((R+0),(R+4),4);
}
B63eaf2:{NFSU2_TR(0x63eaf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63eaf3:{NFSU2_TR(0x63eaf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63eaf6:L63eaf6:{c.instructions+=5;NFSU2_TR(0x63eaf6);
__builtin_memmove((R+28),(R+28),4);
}
B63eaf8:{NFSU2_TR(0x63eaf8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eaf9:{NFSU2_TR(0x63eaf9);
__builtin_memmove((R+20),(R+16),4);
}
B63eafb:{NFSU2_TR(0x63eafb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eafd:{NFSU2_TR(0x63eafd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eb02ull));
TAIL_STATIC(0x641713u,641);
}
B63eb02:L63eb02:{c.instructions+=2;NFSU2_TR(0x63eb02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63eb03:{NFSU2_TR(0x63eb03);
{u32 t_=u32(m4(0x803f48));TAIL_DYNAMIC(t_);}
}
B63eb09:L63eb09:{c.instructions+=1;NFSU2_TR(0x63eb09);
{u32 t_=u32(m4(0x803f48));TAIL_DYNAMIC(t_);}
}
B63eb0f:L63eb0f:{c.instructions+=11;NFSU2_TR(0x63eb0f);
__builtin_memmove((R+28),(R+28),4);
}
B63eb11:{NFSU2_TR(0x63eb11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb12:{NFSU2_TR(0x63eb12);
__builtin_memmove((R+20),(R+16),4);
}
B63eb14:{NFSU2_TR(0x63eb14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb15:{NFSU2_TR(0x63eb15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb16:{NFSU2_TR(0x63eb16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63eb19:{NFSU2_TR(0x63eb19);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eb1c:{NFSU2_TR(0x63eb1c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63eb22:{NFSU2_TR(0x63eb22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63eb24:{NFSU2_TR(0x63eb24);
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
B63eb27:{NFSU2_TR(0x63eb27);
if(r1(R+514)){{goto L63eb6f;}}
}
B63eb29:L63eb29:{c.instructions+=2;NFSU2_TR(0x63eb29);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eb2c:{NFSU2_TR(0x63eb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eb31ull));
TAIL_STATIC(0x75db80u,75d);
}
B63eb31:L63eb31:{c.instructions+=10;NFSU2_TR(0x63eb31);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63eb34:{NFSU2_TR(0x63eb34);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B63eb36:{NFSU2_TR(0x63eb36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb37:{NFSU2_TR(0x63eb37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb38:{NFSU2_TR(0x63eb38);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb3b:{NFSU2_TR(0x63eb3b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63eb3d:{NFSU2_TR(0x63eb3d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb41:{NFSU2_TR(0x63eb41);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eb44:{NFSU2_TR(0x63eb44);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb47:{NFSU2_TR(0x63eb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eb4cull));
TAIL_STATIC(0x63bd36u,63b);
}
B63eb4c:L63eb4c:{c.instructions+=3;NFSU2_TR(0x63eb4c);
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
B63eb4e:{NFSU2_TR(0x63eb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63eb51:{NFSU2_TR(0x63eb51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63eb72;}}
}
B63eb53:L63eb53:{c.instructions+=11;NFSU2_TR(0x63eb53);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eb56:{NFSU2_TR(0x63eb56);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63eb59:{NFSU2_TR(0x63eb59);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63eb5b:{NFSU2_TR(0x63eb5b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63eb5d:{NFSU2_TR(0x63eb5d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb5f:{NFSU2_TR(0x63eb5f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63eb61:{NFSU2_TR(0x63eb61);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63eb64:{NFSU2_TR(0x63eb64);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb67:{NFSU2_TR(0x63eb67);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63eb6a:{NFSU2_TR(0x63eb6a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb6d:{NFSU2_TR(0x63eb6d);
{goto L63eb82;}
}
B63eb6f:L63eb6f:{c.instructions+=1;NFSU2_TR(0x63eb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63eb72:L63eb72:{c.instructions+=6;NFSU2_TR(0x63eb72);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eb74:{NFSU2_TR(0x63eb74);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb76:{NFSU2_TR(0x63eb76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63eb79:{NFSU2_TR(0x63eb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63eb7c:{NFSU2_TR(0x63eb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63eb7f:{NFSU2_TR(0x63eb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63eb82:L63eb82:{c.instructions+=5;NFSU2_TR(0x63eb82);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63eb84:{NFSU2_TR(0x63eb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63eb85:{NFSU2_TR(0x63eb85);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eb88:{NFSU2_TR(0x63eb88);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63eb89:{NFSU2_TR(0x63eb89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63eb8c:L63eb8c:{c.instructions+=5;NFSU2_TR(0x63eb8c);
__builtin_memmove((R+28),(R+28),4);
}
B63eb8e:{NFSU2_TR(0x63eb8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb8f:{NFSU2_TR(0x63eb8f);
__builtin_memmove((R+20),(R+16),4);
}
B63eb91:{NFSU2_TR(0x63eb91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eb93:{NFSU2_TR(0x63eb93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eb98ull));
TAIL_STATIC(0x641713u,641);
}
B63eb98:L63eb98:{c.instructions+=2;NFSU2_TR(0x63eb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63eb99:{NFSU2_TR(0x63eb99);
{u32 t_=u32(m4(0x803f4c));TAIL_DYNAMIC(t_);}
}
B63eb9f:L63eb9f:{c.instructions+=1;NFSU2_TR(0x63eb9f);
{u32 t_=u32(m4(0x803f4c));TAIL_DYNAMIC(t_);}
}
B63eba5:L63eba5:{c.instructions+=41;NFSU2_TR(0x63eba5);
__builtin_memmove((R+28),(R+28),4);
}
B63eba7:{NFSU2_TR(0x63eba7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eba8:{NFSU2_TR(0x63eba8);
__builtin_memmove((R+20),(R+16),4);
}
B63ebaa:{NFSU2_TR(0x63ebaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ebab:{NFSU2_TR(0x63ebab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ebac:{NFSU2_TR(0x63ebac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ebaf:{NFSU2_TR(0x63ebaf);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ebb2:{NFSU2_TR(0x63ebb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ebb3:{NFSU2_TR(0x63ebb3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ebb6:{NFSU2_TR(0x63ebb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ebb9:{NFSU2_TR(0x63ebb9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ebbb:{NFSU2_TR(0x63ebbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ebbe:{NFSU2_TR(0x63ebbe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ebc0:{NFSU2_TR(0x63ebc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ebc3:{NFSU2_TR(0x63ebc3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63ebc5:{NFSU2_TR(0x63ebc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ebc8:{NFSU2_TR(0x63ebc8);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ebca:{NFSU2_TR(0x63ebca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ebcd:{NFSU2_TR(0x63ebcd);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63ebcf:{NFSU2_TR(0x63ebcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ebd1:{NFSU2_TR(0x63ebd1);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ebd3:{NFSU2_TR(0x63ebd3);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B63ebd5:{NFSU2_TR(0x63ebd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ebd7:{NFSU2_TR(0x63ebd7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63ebd9:{NFSU2_TR(0x63ebd9);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B63ebdb:{NFSU2_TR(0x63ebdb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ebdd:{NFSU2_TR(0x63ebdd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ebdf:{NFSU2_TR(0x63ebdf);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ebe2:{NFSU2_TR(0x63ebe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ebe5:{NFSU2_TR(0x63ebe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63ebe8:{NFSU2_TR(0x63ebe8);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ebeb:{NFSU2_TR(0x63ebeb);
__asm__ volatile(".byte 0xd9,0xfb":::"memory");
}
B63ebed:{NFSU2_TR(0x63ebed);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ebef:{NFSU2_TR(0x63ebef);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ebf1:{NFSU2_TR(0x63ebf1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ebf3:{NFSU2_TR(0x63ebf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ebf4:{NFSU2_TR(0x63ebf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ebf5:{NFSU2_TR(0x63ebf5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ebf9:{NFSU2_TR(0x63ebf9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ebfc:{NFSU2_TR(0x63ebfc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ebff:{NFSU2_TR(0x63ebff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ec04ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63ec04:L63ec04:{c.instructions+=2;NFSU2_TR(0x63ec04);
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
B63ec06:{NFSU2_TR(0x63ec06);
if(r1(R+518)){{goto L63ec1e;}}
}
B63ec08:L63ec08:{c.instructions+=2;NFSU2_TR(0x63ec08);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B63ec0a:{NFSU2_TR(0x63ec0a);
if(r1(R+518)){{goto L63ec38;}}
}
B63ec0c:L63ec0c:{c.instructions+=7;NFSU2_TR(0x63ec0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63ec0e:{NFSU2_TR(0x63ec0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63ec10:{NFSU2_TR(0x63ec10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ec13:{NFSU2_TR(0x63ec13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ec16:{NFSU2_TR(0x63ec16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ec19:{NFSU2_TR(0x63ec19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ec1c:{NFSU2_TR(0x63ec1c);
{goto L63ec38;}
}
B63ec1e:L63ec1e:{c.instructions+=10;NFSU2_TR(0x63ec1e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ec21:{NFSU2_TR(0x63ec21);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63ec24:{NFSU2_TR(0x63ec24);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ec26:{NFSU2_TR(0x63ec26);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec28:{NFSU2_TR(0x63ec28);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ec2a:{NFSU2_TR(0x63ec2a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ec2c:{NFSU2_TR(0x63ec2c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec2f:{NFSU2_TR(0x63ec2f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ec32:{NFSU2_TR(0x63ec32);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec35:{NFSU2_TR(0x63ec35);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ec38:L63ec38:{c.instructions+=4;NFSU2_TR(0x63ec38);
__builtin_memmove((R+0),(R+24),4);
}
B63ec3a:{NFSU2_TR(0x63ec3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ec3b:{NFSU2_TR(0x63ec3b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63ec3c:{NFSU2_TR(0x63ec3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ec3f:L63ec3f:{c.instructions+=5;NFSU2_TR(0x63ec3f);
__builtin_memmove((R+28),(R+28),4);
}
B63ec41:{NFSU2_TR(0x63ec41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ec42:{NFSU2_TR(0x63ec42);
__builtin_memmove((R+20),(R+16),4);
}
B63ec44:{NFSU2_TR(0x63ec44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ec46:{NFSU2_TR(0x63ec46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ec4bull));
TAIL_STATIC(0x641713u,641);
}
B63ec4b:L63ec4b:{c.instructions+=7;NFSU2_TR(0x63ec4b);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ec4e:{NFSU2_TR(0x63ec4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ec4f:{NFSU2_TR(0x63ec4f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ec52:{NFSU2_TR(0x63ec52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ec55:{NFSU2_TR(0x63ec55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ec58:{NFSU2_TR(0x63ec58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ec5b:{NFSU2_TR(0x63ec5b);
u8 U[4];
__builtin_memmove((U+0),gp(0x803ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ec61ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63ec61:L63ec61:{c.instructions+=2;NFSU2_TR(0x63ec61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ec62:{NFSU2_TR(0x63ec62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ec65:L63ec65:{c.instructions+=1;NFSU2_TR(0x63ec65);
{u32 t_=u32(m4(0x803ef8));TAIL_DYNAMIC(t_);}
}
B63ec6b:L63ec6b:{c.instructions+=23;NFSU2_TR(0x63ec6b);
__builtin_memmove((R+28),(R+28),4);
}
B63ec6d:{NFSU2_TR(0x63ec6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ec6e:{NFSU2_TR(0x63ec6e);
__builtin_memmove((R+20),(R+16),4);
}
B63ec70:{NFSU2_TR(0x63ec70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ec71:{NFSU2_TR(0x63ec71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ec74:{NFSU2_TR(0x63ec74);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63ec76:{NFSU2_TR(0x63ec76);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63ec79:{NFSU2_TR(0x63ec79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63ec7c:{NFSU2_TR(0x63ec7c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ec7e:{NFSU2_TR(0x63ec7e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec80:{NFSU2_TR(0x63ec80);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ec83:{NFSU2_TR(0x63ec83);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec86:{NFSU2_TR(0x63ec86);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ec88:{NFSU2_TR(0x63ec88);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ec8b:{NFSU2_TR(0x63ec8b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec8e:{NFSU2_TR(0x63ec8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ec90:{NFSU2_TR(0x63ec90);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ec93:{NFSU2_TR(0x63ec93);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ec96:{NFSU2_TR(0x63ec96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ec98:{NFSU2_TR(0x63ec98);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B63ec9e:{NFSU2_TR(0x63ec9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63eca0:{NFSU2_TR(0x63eca0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63eca3:{NFSU2_TR(0x63eca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ecac;}}
}
B63eca5:L63eca5:{c.instructions+=3;NFSU2_TR(0x63eca5);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63eca7:{NFSU2_TR(0x63eca7);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ecaa:{NFSU2_TR(0x63ecaa);
{goto L63ecb3;}
}
B63ecac:L63ecac:{c.instructions+=1;NFSU2_TR(0x63ecac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63ecb3:L63ecb3:{c.instructions+=10;NFSU2_TR(0x63ecb3);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ecb6:{NFSU2_TR(0x63ecb6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63ecb8:{NFSU2_TR(0x63ecb8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63ecbb:{NFSU2_TR(0x63ecbb);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63ecbd:{NFSU2_TR(0x63ecbd);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63ecbf:{NFSU2_TR(0x63ecbf);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63ecc1:{NFSU2_TR(0x63ecc1);
{u32 ea_=u32(u32(8041600u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63ecc7:{NFSU2_TR(0x63ecc7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63ecc9:{NFSU2_TR(0x63ecc9);
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
B63eccc:{NFSU2_TR(0x63eccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ed08;}}
}
B63ecce:L63ecce:{c.instructions+=23;NFSU2_TR(0x63ecce);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ecd0:{NFSU2_TR(0x63ecd0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63ecd2:{NFSU2_TR(0x63ecd2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63ecd8:{NFSU2_TR(0x63ecd8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63ecda:{NFSU2_TR(0x63ecda);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63ecdc:{NFSU2_TR(0x63ecdc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ecde:{NFSU2_TR(0x63ecde);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ece1:{NFSU2_TR(0x63ece1);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B63ece3:{NFSU2_TR(0x63ece3);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ece6:{NFSU2_TR(0x63ece6);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63ece8:{NFSU2_TR(0x63ece8);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B63ecea:{NFSU2_TR(0x63ecea);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eced:{NFSU2_TR(0x63eced);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ecef:{NFSU2_TR(0x63ecef);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ecf2:{NFSU2_TR(0x63ecf2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63ecf4:{NFSU2_TR(0x63ecf4);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B63ecf6:{NFSU2_TR(0x63ecf6);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B63ecf8:{NFSU2_TR(0x63ecf8);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ecfb:{NFSU2_TR(0x63ecfb);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ecfe:{NFSU2_TR(0x63ecfe);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed01:{NFSU2_TR(0x63ed01);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B63ed03:{NFSU2_TR(0x63ed03);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed06:{NFSU2_TR(0x63ed06);
{goto L63ed0d;}
}
B63ed08:L63ed08:{c.instructions+=2;NFSU2_TR(0x63ed08);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ed0a:{NFSU2_TR(0x63ed0a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ed0d:L63ed0d:{c.instructions+=28;NFSU2_TR(0x63ed0d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed10:{NFSU2_TR(0x63ed10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ed13:{NFSU2_TR(0x63ed13);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63ed15:{NFSU2_TR(0x63ed15);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed17:{NFSU2_TR(0x63ed17);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63ed19:{NFSU2_TR(0x63ed19);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed1b:{NFSU2_TR(0x63ed1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ed1d:{NFSU2_TR(0x63ed1d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ed1f:{NFSU2_TR(0x63ed1f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ed21:{NFSU2_TR(0x63ed21);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed24:{NFSU2_TR(0x63ed24);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ed26:{NFSU2_TR(0x63ed26);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed29:{NFSU2_TR(0x63ed29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ed2b:{NFSU2_TR(0x63ed2b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ed2e:{NFSU2_TR(0x63ed2e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ed30:{NFSU2_TR(0x63ed30);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed33:{NFSU2_TR(0x63ed33);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ed35:{NFSU2_TR(0x63ed35);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed38:{NFSU2_TR(0x63ed38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ed3a:{NFSU2_TR(0x63ed3a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ed3d:{NFSU2_TR(0x63ed3d);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed40:{NFSU2_TR(0x63ed40);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63ed42:{NFSU2_TR(0x63ed42);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ed45:{NFSU2_TR(0x63ed45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ed47:{NFSU2_TR(0x63ed47);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ed4a:{NFSU2_TR(0x63ed4a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ed4c:{NFSU2_TR(0x63ed4c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63ed4d:{NFSU2_TR(0x63ed4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ed50:L63ed50:{c.instructions+=5;NFSU2_TR(0x63ed50);
__builtin_memmove((R+28),(R+28),4);
}
B63ed52:{NFSU2_TR(0x63ed52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed53:{NFSU2_TR(0x63ed53);
__builtin_memmove((R+20),(R+16),4);
}
B63ed55:{NFSU2_TR(0x63ed55);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed57:{NFSU2_TR(0x63ed57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ed5cull));
TAIL_STATIC(0x641713u,641);
}
B63ed5c:L63ed5c:{c.instructions+=9;NFSU2_TR(0x63ed5c);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ed5f:{NFSU2_TR(0x63ed5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed60:{NFSU2_TR(0x63ed60);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ed63:{NFSU2_TR(0x63ed63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed66:{NFSU2_TR(0x63ed66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed69:{NFSU2_TR(0x63ed69);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed6c:{NFSU2_TR(0x63ed6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed6f:{NFSU2_TR(0x63ed6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed72:{NFSU2_TR(0x63ed72);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ed78ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63ed78:L63ed78:{c.instructions+=2;NFSU2_TR(0x63ed78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ed79:{NFSU2_TR(0x63ed79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ed7c:L63ed7c:{c.instructions+=12;NFSU2_TR(0x63ed7c);
__builtin_memmove((R+28),(R+28),4);
}
B63ed7e:{NFSU2_TR(0x63ed7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed7f:{NFSU2_TR(0x63ed7f);
__builtin_memmove((R+20),(R+16),4);
}
B63ed81:{NFSU2_TR(0x63ed81);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63ed84:{NFSU2_TR(0x63ed84);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ed87:{NFSU2_TR(0x63ed87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed88:{NFSU2_TR(0x63ed88);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ed8b:{NFSU2_TR(0x63ed8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed8e:{NFSU2_TR(0x63ed8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ed91:{NFSU2_TR(0x63ed91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ed94:{NFSU2_TR(0x63ed94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed95:{NFSU2_TR(0x63ed95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ed9aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ec65u);}goto L63ec65;}
}
B63ed9a:L63ed9a:{c.instructions+=8;NFSU2_TR(0x63ed9a);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ed9d:{NFSU2_TR(0x63ed9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ed9e:{NFSU2_TR(0x63ed9e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eda1:{NFSU2_TR(0x63eda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63eda4:{NFSU2_TR(0x63eda4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63eda7:{NFSU2_TR(0x63eda7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63edaa:{NFSU2_TR(0x63edaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edab:{NFSU2_TR(0x63edab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63edb0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ec65u);}goto L63ec65;}
}
B63edb0:L63edb0:{c.instructions+=12;NFSU2_TR(0x63edb0);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63edb2:{NFSU2_TR(0x63edb2);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63edb5:{NFSU2_TR(0x63edb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edb6:{NFSU2_TR(0x63edb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63edb9:{NFSU2_TR(0x63edb9);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63edbc:{NFSU2_TR(0x63edbc);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63edbe:{NFSU2_TR(0x63edbe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63edc1:{NFSU2_TR(0x63edc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edc2:{NFSU2_TR(0x63edc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63edc5:{NFSU2_TR(0x63edc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edc6:{NFSU2_TR(0x63edc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63edc9:{NFSU2_TR(0x63edc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63edceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ec65u);}goto L63ec65;}
}
B63edce:L63edce:{c.instructions+=3;NFSU2_TR(0x63edce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63edd1:{NFSU2_TR(0x63edd1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63edd2:{NFSU2_TR(0x63edd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63edd5:L63edd5:{c.instructions+=5;NFSU2_TR(0x63edd5);
__builtin_memmove((R+28),(R+28),4);
}
B63edd7:{NFSU2_TR(0x63edd7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edd8:{NFSU2_TR(0x63edd8);
__builtin_memmove((R+20),(R+16),4);
}
B63edda:{NFSU2_TR(0x63edda);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eddc:{NFSU2_TR(0x63eddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ede1ull));
TAIL_STATIC(0x641713u,641);
}
B63ede1:L63ede1:{c.instructions+=2;NFSU2_TR(0x63ede1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ede2:{NFSU2_TR(0x63ede2);
{u32 t_=u32(m4(0x803f20));TAIL_DYNAMIC(t_);}
}
B63ede8:L63ede8:{c.instructions+=5;NFSU2_TR(0x63ede8);
__builtin_memmove((R+28),(R+28),4);
}
B63edea:{NFSU2_TR(0x63edea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edeb:{NFSU2_TR(0x63edeb);
__builtin_memmove((R+20),(R+16),4);
}
B63eded:{NFSU2_TR(0x63eded);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edef:{NFSU2_TR(0x63edef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63edf4ull));
TAIL_STATIC(0x641713u,641);
}
B63edf4:L63edf4:{c.instructions+=11;NFSU2_TR(0x63edf4);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63edf7:{NFSU2_TR(0x63edf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edf8:{NFSU2_TR(0x63edf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63edf9:{NFSU2_TR(0x63edf9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63edfd:{NFSU2_TR(0x63edfd);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ee00:{NFSU2_TR(0x63ee00);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee03:{NFSU2_TR(0x63ee03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee06:{NFSU2_TR(0x63ee06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee09:{NFSU2_TR(0x63ee09);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee0c:{NFSU2_TR(0x63ee0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee0f:{NFSU2_TR(0x63ee0f);
u8 U[4];
__builtin_memmove((U+0),gp(0x803efc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ee15ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63ee15:L63ee15:{c.instructions+=2;NFSU2_TR(0x63ee15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ee16:{NFSU2_TR(0x63ee16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ee19:L63ee19:{c.instructions+=15;NFSU2_TR(0x63ee19);
__builtin_memmove((R+28),(R+28),4);
}
B63ee1b:{NFSU2_TR(0x63ee1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee1c:{NFSU2_TR(0x63ee1c);
__builtin_memmove((R+20),(R+16),4);
}
B63ee1e:{NFSU2_TR(0x63ee1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B63ee21:{NFSU2_TR(0x63ee21);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ee24:{NFSU2_TR(0x63ee24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee25:{NFSU2_TR(0x63ee25);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63ee28:{NFSU2_TR(0x63ee28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee29:{NFSU2_TR(0x63ee29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee2a:{NFSU2_TR(0x63ee2a);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee2d:{NFSU2_TR(0x63ee2d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ee2f:{NFSU2_TR(0x63ee2f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee33:{NFSU2_TR(0x63ee33);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ee36:{NFSU2_TR(0x63ee36);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee39:{NFSU2_TR(0x63ee39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ee3eull));
TAIL_STATIC(0x63bd36u,63b);
}
B63ee3e:L63ee3e:{c.instructions+=2;NFSU2_TR(0x63ee3e);
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
B63ee40:{NFSU2_TR(0x63ee40);
if(r1(R+518)){{goto L63ee55;}}
}
B63ee42:L63ee42:{c.instructions+=3;NFSU2_TR(0x63ee42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ee45:{NFSU2_TR(0x63ee45);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B63ee48:{NFSU2_TR(0x63ee48);
if(r1(R+518)){{goto L63ee9b;}}
}
B63ee4a:L63ee4a:{c.instructions+=8;NFSU2_TR(0x63ee4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee4b:{NFSU2_TR(0x63ee4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63ee4e:{NFSU2_TR(0x63ee4e);
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
B63ee4f:{NFSU2_TR(0x63ee4f);
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
B63ee50:{NFSU2_TR(0x63ee50);
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
B63ee51:{NFSU2_TR(0x63ee51);
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
B63ee52:{NFSU2_TR(0x63ee52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ee53:{NFSU2_TR(0x63ee53);
{goto L63ee9b;}
}
B63ee55:L63ee55:{c.instructions+=8;NFSU2_TR(0x63ee55);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ee58:{NFSU2_TR(0x63ee58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee59:{NFSU2_TR(0x63ee59);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee5c:{NFSU2_TR(0x63ee5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee5f:{NFSU2_TR(0x63ee5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ee62:{NFSU2_TR(0x63ee62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee65:{NFSU2_TR(0x63ee65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee66:{NFSU2_TR(0x63ee66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ee6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ec65u);}goto L63ec65;}
}
B63ee6b:L63ee6b:{c.instructions+=8;NFSU2_TR(0x63ee6b);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ee6e:{NFSU2_TR(0x63ee6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee6f:{NFSU2_TR(0x63ee6f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee72:{NFSU2_TR(0x63ee72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee75:{NFSU2_TR(0x63ee75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ee78:{NFSU2_TR(0x63ee78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee7b:{NFSU2_TR(0x63ee7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee7c:{NFSU2_TR(0x63ee7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ee81ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ec65u);}goto L63ec65;}
}
B63ee81:L63ee81:{c.instructions+=10;NFSU2_TR(0x63ee81);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ee84:{NFSU2_TR(0x63ee84);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63ee87:{NFSU2_TR(0x63ee87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee88:{NFSU2_TR(0x63ee88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ee8b:{NFSU2_TR(0x63ee8b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ee8e:{NFSU2_TR(0x63ee8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee8f:{NFSU2_TR(0x63ee8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63ee92:{NFSU2_TR(0x63ee92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ee93:{NFSU2_TR(0x63ee93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ee96:{NFSU2_TR(0x63ee96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ee9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ec65u);}goto L63ec65;}
}
B63ee9b:L63ee9b:{c.instructions+=4;NFSU2_TR(0x63ee9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ee9e:{NFSU2_TR(0x63ee9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ee9f:{NFSU2_TR(0x63ee9f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63eea0:{NFSU2_TR(0x63eea0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63eea3:L63eea3:{c.instructions+=5;NFSU2_TR(0x63eea3);
__builtin_memmove((R+28),(R+28),4);
}
B63eea5:{NFSU2_TR(0x63eea5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eea6:{NFSU2_TR(0x63eea6);
__builtin_memmove((R+20),(R+16),4);
}
B63eea8:{NFSU2_TR(0x63eea8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eeaa:{NFSU2_TR(0x63eeaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eeafull));
TAIL_STATIC(0x641713u,641);
}
B63eeaf:L63eeaf:{c.instructions+=2;NFSU2_TR(0x63eeaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63eeb0:{NFSU2_TR(0x63eeb0);
{u32 t_=u32(m4(0x803ec0));TAIL_DYNAMIC(t_);}
}
B63eeb6:L63eeb6:{c.instructions+=1;NFSU2_TR(0x63eeb6);
{u32 t_=u32(m4(0x803ec0));TAIL_DYNAMIC(t_);}
}
B63eebc:L63eebc:{c.instructions+=27;NFSU2_TR(0x63eebc);
__builtin_memmove((R+28),(R+28),4);
}
B63eebe:{NFSU2_TR(0x63eebe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eebf:{NFSU2_TR(0x63eebf);
__builtin_memmove((R+20),(R+16),4);
}
B63eec1:{NFSU2_TR(0x63eec1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eec2:{NFSU2_TR(0x63eec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63eec5:{NFSU2_TR(0x63eec5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eec8:{NFSU2_TR(0x63eec8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eec9:{NFSU2_TR(0x63eec9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eecc:{NFSU2_TR(0x63eecc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63eecd:{NFSU2_TR(0x63eecd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eecf:{NFSU2_TR(0x63eecf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63eed1:{NFSU2_TR(0x63eed1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63eed3:{NFSU2_TR(0x63eed3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63eed5:{NFSU2_TR(0x63eed5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B63eed7:{NFSU2_TR(0x63eed7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63eed9:{NFSU2_TR(0x63eed9);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63eedb:{NFSU2_TR(0x63eedb);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B63eedd:{NFSU2_TR(0x63eedd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63eedf:{NFSU2_TR(0x63eedf);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eee2:{NFSU2_TR(0x63eee2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63eee4:{NFSU2_TR(0x63eee4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63eee6:{NFSU2_TR(0x63eee6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63eee8:{NFSU2_TR(0x63eee8);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63eeea:{NFSU2_TR(0x63eeea);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eeee:{NFSU2_TR(0x63eeee);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eef1:{NFSU2_TR(0x63eef1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63eef4:{NFSU2_TR(0x63eef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63eef9ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63eef9:L63eef9:{c.instructions+=2;NFSU2_TR(0x63eef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63eefb:{NFSU2_TR(0x63eefb);
if(r1(R+518)){{goto L63ef0e;}}
}
B63eefd:L63eefd:{c.instructions+=3;NFSU2_TR(0x63eefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ef00:{NFSU2_TR(0x63ef00);
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
B63ef02:{NFSU2_TR(0x63ef02);
if(r1(R+518)){{goto L63ef5a;}}
}
B63ef04:L63ef04:{c.instructions+=8;NFSU2_TR(0x63ef04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ef05:{NFSU2_TR(0x63ef05);
__builtin_memmove((R+28),(R+0),4);
}
B63ef07:{NFSU2_TR(0x63ef07);
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
B63ef08:{NFSU2_TR(0x63ef08);
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
B63ef09:{NFSU2_TR(0x63ef09);
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
B63ef0a:{NFSU2_TR(0x63ef0a);
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
B63ef0b:{NFSU2_TR(0x63ef0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ef0c:{NFSU2_TR(0x63ef0c);
{goto L63ef5a;}
}
B63ef0e:L63ef0e:{c.instructions+=6;NFSU2_TR(0x63ef0e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef11:{NFSU2_TR(0x63ef11);
{u32 ea_=u32(u32(8041608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B63ef17:{NFSU2_TR(0x63ef17);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63ef19:{NFSU2_TR(0x63ef19);
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
B63ef1c:{NFSU2_TR(0x63ef1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ef1f:{NFSU2_TR(0x63ef1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ef47;}}
}
B63ef21:L63ef21:{c.instructions+=14;NFSU2_TR(0x63ef21);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef24:{NFSU2_TR(0x63ef24);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B63ef26:{NFSU2_TR(0x63ef26);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B63ef2c:{NFSU2_TR(0x63ef2c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ef2e:{NFSU2_TR(0x63ef2e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef30:{NFSU2_TR(0x63ef30);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef32:{NFSU2_TR(0x63ef32);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ef34:{NFSU2_TR(0x63ef34);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef37:{NFSU2_TR(0x63ef37);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef3a:{NFSU2_TR(0x63ef3a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ef3c:{NFSU2_TR(0x63ef3c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef3f:{NFSU2_TR(0x63ef3f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef42:{NFSU2_TR(0x63ef42);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef45:{NFSU2_TR(0x63ef45);
{goto L63ef57;}
}
B63ef47:L63ef47:{c.instructions+=7;NFSU2_TR(0x63ef47);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ef49:{NFSU2_TR(0x63ef49);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef4b:{NFSU2_TR(0x63ef4b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ef4d:{NFSU2_TR(0x63ef4d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef50:{NFSU2_TR(0x63ef50);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ef52:{NFSU2_TR(0x63ef52);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef55:{NFSU2_TR(0x63ef55);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B63ef57:L63ef57:{c.instructions+=1;NFSU2_TR(0x63ef57);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ef5a:L63ef5a:{c.instructions+=3;NFSU2_TR(0x63ef5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ef5b:{NFSU2_TR(0x63ef5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ef5c:{NFSU2_TR(0x63ef5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ef5f:L63ef5f:{c.instructions+=5;NFSU2_TR(0x63ef5f);
__builtin_memmove((R+28),(R+28),4);
}
B63ef61:{NFSU2_TR(0x63ef61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ef62:{NFSU2_TR(0x63ef62);
__builtin_memmove((R+20),(R+16),4);
}
B63ef64:{NFSU2_TR(0x63ef64);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ef66:{NFSU2_TR(0x63ef66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ef6bull));
TAIL_STATIC(0x641713u,641);
}
B63ef6b:L63ef6b:{c.instructions+=2;NFSU2_TR(0x63ef6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ef6c:{NFSU2_TR(0x63ef6c);
{u32 t_=u32(m4(0x803ec4));TAIL_DYNAMIC(t_);}
}
B63ef72:L63ef72:{c.instructions+=31;NFSU2_TR(0x63ef72);
__builtin_memmove((R+28),(R+28),4);
}
B63ef74:{NFSU2_TR(0x63ef74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ef75:{NFSU2_TR(0x63ef75);
__builtin_memmove((R+20),(R+16),4);
}
B63ef77:{NFSU2_TR(0x63ef77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ef7a:{NFSU2_TR(0x63ef7a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef7c:{NFSU2_TR(0x63ef7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ef7d:{NFSU2_TR(0x63ef7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ef80:{NFSU2_TR(0x63ef80);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef82:{NFSU2_TR(0x63ef82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ef83:{NFSU2_TR(0x63ef83);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef86:{NFSU2_TR(0x63ef86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63ef89:{NFSU2_TR(0x63ef89);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef8c:{NFSU2_TR(0x63ef8c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef8f:{NFSU2_TR(0x63ef8f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef92:{NFSU2_TR(0x63ef92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ef94:{NFSU2_TR(0x63ef94);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63ef96:{NFSU2_TR(0x63ef96);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef98:{NFSU2_TR(0x63ef98);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ef9a:{NFSU2_TR(0x63ef9a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ef9d:{NFSU2_TR(0x63ef9d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63efa0:{NFSU2_TR(0x63efa0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63efa2:{NFSU2_TR(0x63efa2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63efa5:{NFSU2_TR(0x63efa5);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63efa8:{NFSU2_TR(0x63efa8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63efaa:{NFSU2_TR(0x63efaa);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63efac:{NFSU2_TR(0x63efac);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63efb2:{NFSU2_TR(0x63efb2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63efb4:{NFSU2_TR(0x63efb4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B63efb6:{NFSU2_TR(0x63efb6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B63efb8:{NFSU2_TR(0x63efb8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B63efbb:{NFSU2_TR(0x63efbb);
if(r1(R+514)){{goto L63efc3;}}
}
B63efbd:L63efbd:{c.instructions+=3;NFSU2_TR(0x63efbd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63efbf:{NFSU2_TR(0x63efbf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63efc1:{NFSU2_TR(0x63efc1);
{goto L63eff2;}
}
B63efc3:L63efc3:{c.instructions+=16;NFSU2_TR(0x63efc3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63efc6:{NFSU2_TR(0x63efc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63efc7:{NFSU2_TR(0x63efc7);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63efca:{NFSU2_TR(0x63efca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63efcb:{NFSU2_TR(0x63efcb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63efce:{NFSU2_TR(0x63efce);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63efd1:{NFSU2_TR(0x63efd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63efd3:{NFSU2_TR(0x63efd3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63efd6:{NFSU2_TR(0x63efd6);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63efd8:{NFSU2_TR(0x63efd8);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B63efda:{NFSU2_TR(0x63efda);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63efdd:{NFSU2_TR(0x63efdd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63efdf:{NFSU2_TR(0x63efdf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63efe1:{NFSU2_TR(0x63efe1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63efe4:{NFSU2_TR(0x63efe4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B63efe7:{NFSU2_TR(0x63efe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63efecull));
TAIL_STATIC(0x75dc4bu,75d);
}
B63efec:L63efec:{c.instructions+=4;NFSU2_TR(0x63efec);
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
B63efee:{NFSU2_TR(0x63efee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63efef:{NFSU2_TR(0x63efef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63eff0:{NFSU2_TR(0x63eff0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63eff6;}}
}
B63eff2:L63eff2:{c.instructions+=2;NFSU2_TR(0x63eff2);
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
B63eff4:{NFSU2_TR(0x63eff4);
TAIL_STATIC(0x63f022u,63f);
}
B63eff6:L63eff6:{c.instructions+=4;NFSU2_TR(0x63eff6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63eff8:{NFSU2_TR(0x63eff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63effb:{NFSU2_TR(0x63effb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63effd:{NFSU2_TR(0x63effd);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x63f000u,63f);
}
XIT:NFSU2_TR_EXIT(0x63e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
