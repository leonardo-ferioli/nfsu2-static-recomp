#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6be(u8* __restrict R,Cpu& c);
u32 body_6c0(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6bf,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6bf,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6bf(u8* __restrict R,Cpu& c);
u32 page_6bf(Cpu& c){return body_6bf(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6bf(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6bf000:goto L6bf000;
case 0x6bf002:c.instructions+=2;goto B6bf002;
case 0x6bf004:c.instructions+=1;goto B6bf004;
case 0x6bf009:goto L6bf009;
case 0x6bf00b:c.instructions+=1;goto B6bf00b;
case 0x6bf00d:goto L6bf00d;
case 0x6bf00e:c.instructions+=15;goto B6bf00e;
case 0x6bf00f:c.instructions+=14;goto B6bf00f;
case 0x6bf010:c.instructions+=13;goto B6bf010;
case 0x6bf011:c.instructions+=12;goto B6bf011;
case 0x6bf013:c.instructions+=11;goto B6bf013;
case 0x6bf014:c.instructions+=10;goto B6bf014;
case 0x6bf015:c.instructions+=9;goto B6bf015;
case 0x6bf018:c.instructions+=8;goto B6bf018;
case 0x6bf019:c.instructions+=7;goto B6bf019;
case 0x6bf01f:c.instructions+=6;goto B6bf01f;
case 0x6bf022:c.instructions+=5;goto B6bf022;
case 0x6bf024:c.instructions+=4;goto B6bf024;
case 0x6bf026:c.instructions+=3;goto B6bf026;
case 0x6bf027:c.instructions+=2;goto B6bf027;
case 0x6bf029:c.instructions+=1;goto B6bf029;
case 0x6bf02b:goto L6bf02b;
case 0x6bf031:c.instructions+=15;goto B6bf031;
case 0x6bf034:c.instructions+=14;goto B6bf034;
case 0x6bf037:c.instructions+=13;goto B6bf037;
case 0x6bf038:c.instructions+=12;goto B6bf038;
case 0x6bf039:c.instructions+=11;goto B6bf039;
case 0x6bf03a:c.instructions+=10;goto B6bf03a;
case 0x6bf03b:c.instructions+=9;goto B6bf03b;
case 0x6bf03d:c.instructions+=8;goto B6bf03d;
case 0x6bf03e:c.instructions+=7;goto B6bf03e;
case 0x6bf03f:c.instructions+=6;goto B6bf03f;
case 0x6bf041:c.instructions+=5;goto B6bf041;
case 0x6bf042:c.instructions+=4;goto B6bf042;
case 0x6bf044:c.instructions+=3;goto B6bf044;
case 0x6bf046:c.instructions+=2;goto B6bf046;
case 0x6bf047:c.instructions+=1;goto B6bf047;
case 0x6bf049:goto L6bf049;
case 0x6bf04b:c.instructions+=1;goto B6bf04b;
case 0x6bf050:goto L6bf050;
case 0x6bf052:c.instructions+=1;goto B6bf052;
case 0x6bf054:goto L6bf054;
case 0x6bf057:c.instructions+=4;goto B6bf057;
case 0x6bf05d:c.instructions+=3;goto B6bf05d;
case 0x6bf060:c.instructions+=2;goto B6bf060;
case 0x6bf063:c.instructions+=1;goto B6bf063;
case 0x6bf069:goto L6bf069;
case 0x6bf06b:goto L6bf06b;
case 0x6bf06c:c.instructions+=4;goto B6bf06c;
case 0x6bf06d:c.instructions+=3;goto B6bf06d;
case 0x6bf06e:c.instructions+=2;goto B6bf06e;
case 0x6bf06f:c.instructions+=1;goto B6bf06f;
case 0x6bf070:goto L6bf070;
case 0x6bf072:c.instructions+=13;goto B6bf072;
case 0x6bf073:c.instructions+=12;goto B6bf073;
case 0x6bf075:c.instructions+=11;goto B6bf075;
case 0x6bf078:c.instructions+=10;goto B6bf078;
case 0x6bf079:c.instructions+=9;goto B6bf079;
case 0x6bf07a:c.instructions+=8;goto B6bf07a;
case 0x6bf07c:c.instructions+=7;goto B6bf07c;
case 0x6bf082:c.instructions+=6;goto B6bf082;
case 0x6bf085:c.instructions+=5;goto B6bf085;
case 0x6bf086:c.instructions+=4;goto B6bf086;
case 0x6bf088:c.instructions+=3;goto B6bf088;
case 0x6bf08a:c.instructions+=2;goto B6bf08a;
case 0x6bf08d:c.instructions+=1;goto B6bf08d;
case 0x6bf08f:goto L6bf08f;
case 0x6bf092:c.instructions+=1;goto B6bf092;
case 0x6bf095:goto L6bf095;
case 0x6bf097:c.instructions+=3;goto B6bf097;
case 0x6bf09a:c.instructions+=2;goto B6bf09a;
case 0x6bf09e:c.instructions+=1;goto B6bf09e;
case 0x6bf0a0:goto L6bf0a0;
case 0x6bf0a3:c.instructions+=3;goto B6bf0a3;
case 0x6bf0a6:c.instructions+=2;goto B6bf0a6;
case 0x6bf0a9:c.instructions+=1;goto B6bf0a9;
case 0x6bf0ab:goto L6bf0ab;
case 0x6bf0ae:c.instructions+=1;goto B6bf0ae;
case 0x6bf0b0:goto L6bf0b0;
case 0x6bf0b6:c.instructions+=8;goto B6bf0b6;
case 0x6bf0b7:c.instructions+=7;goto B6bf0b7;
case 0x6bf0b8:c.instructions+=6;goto B6bf0b8;
case 0x6bf0bb:c.instructions+=5;goto B6bf0bb;
case 0x6bf0be:c.instructions+=4;goto B6bf0be;
case 0x6bf0c1:c.instructions+=3;goto B6bf0c1;
case 0x6bf0c4:c.instructions+=2;goto B6bf0c4;
case 0x6bf0c6:c.instructions+=1;goto B6bf0c6;
case 0x6bf0c8:goto L6bf0c8;
case 0x6bf0ce:c.instructions+=4;goto B6bf0ce;
case 0x6bf0d3:c.instructions+=3;goto B6bf0d3;
case 0x6bf0d8:c.instructions+=2;goto B6bf0d8;
case 0x6bf0de:c.instructions+=1;goto B6bf0de;
case 0x6bf0e0:goto L6bf0e0;
case 0x6bf0e1:c.instructions+=6;goto B6bf0e1;
case 0x6bf0e2:c.instructions+=5;goto B6bf0e2;
case 0x6bf0e5:c.instructions+=4;goto B6bf0e5;
case 0x6bf0e8:c.instructions+=3;goto B6bf0e8;
case 0x6bf0eb:c.instructions+=2;goto B6bf0eb;
case 0x6bf0ee:c.instructions+=1;goto B6bf0ee;
case 0x6bf0f0:goto L6bf0f0;
case 0x6bf0f2:c.instructions+=1;goto B6bf0f2;
case 0x6bf0f7:goto L6bf0f7;
case 0x6bf0fc:goto L6bf0fc;
case 0x6bf0ff:c.instructions+=3;goto B6bf0ff;
case 0x6bf102:c.instructions+=2;goto B6bf102;
case 0x6bf105:c.instructions+=1;goto B6bf105;
case 0x6bf10b:goto L6bf10b;
case 0x6bf10d:c.instructions+=8;goto B6bf10d;
case 0x6bf10e:c.instructions+=7;goto B6bf10e;
case 0x6bf10f:c.instructions+=6;goto B6bf10f;
case 0x6bf111:c.instructions+=5;goto B6bf111;
case 0x6bf114:c.instructions+=4;goto B6bf114;
case 0x6bf115:c.instructions+=3;goto B6bf115;
case 0x6bf11b:c.instructions+=2;goto B6bf11b;
case 0x6bf11d:c.instructions+=1;goto B6bf11d;
case 0x6bf123:goto L6bf123;
case 0x6bf125:c.instructions+=1;goto B6bf125;
case 0x6bf12b:goto L6bf12b;
case 0x6bf131:c.instructions+=16;goto B6bf131;
case 0x6bf132:c.instructions+=15;goto B6bf132;
case 0x6bf133:c.instructions+=14;goto B6bf133;
case 0x6bf134:c.instructions+=13;goto B6bf134;
case 0x6bf135:c.instructions+=12;goto B6bf135;
case 0x6bf137:c.instructions+=11;goto B6bf137;
case 0x6bf138:c.instructions+=10;goto B6bf138;
case 0x6bf139:c.instructions+=9;goto B6bf139;
case 0x6bf13a:c.instructions+=8;goto B6bf13a;
case 0x6bf13b:c.instructions+=7;goto B6bf13b;
case 0x6bf13e:c.instructions+=6;goto B6bf13e;
case 0x6bf141:c.instructions+=5;goto B6bf141;
case 0x6bf142:c.instructions+=4;goto B6bf142;
case 0x6bf143:c.instructions+=3;goto B6bf143;
case 0x6bf145:c.instructions+=2;goto B6bf145;
case 0x6bf147:c.instructions+=1;goto B6bf147;
case 0x6bf14c:goto L6bf14c;
case 0x6bf14e:c.instructions+=1;goto B6bf14e;
case 0x6bf154:goto L6bf154;
case 0x6bf15a:c.instructions+=3;goto B6bf15a;
case 0x6bf15c:c.instructions+=2;goto B6bf15c;
case 0x6bf15f:c.instructions+=1;goto B6bf15f;
case 0x6bf161:goto L6bf161;
case 0x6bf164:c.instructions+=4;goto B6bf164;
case 0x6bf168:c.instructions+=3;goto B6bf168;
case 0x6bf169:c.instructions+=2;goto B6bf169;
case 0x6bf16c:c.instructions+=1;goto B6bf16c;
case 0x6bf16e:goto L6bf16e;
case 0x6bf174:c.instructions+=15;goto B6bf174;
case 0x6bf177:c.instructions+=14;goto B6bf177;
case 0x6bf178:c.instructions+=13;goto B6bf178;
case 0x6bf179:c.instructions+=12;goto B6bf179;
case 0x6bf17a:c.instructions+=11;goto B6bf17a;
case 0x6bf17b:c.instructions+=10;goto B6bf17b;
case 0x6bf17c:c.instructions+=9;goto B6bf17c;
case 0x6bf17d:c.instructions+=8;goto B6bf17d;
case 0x6bf17e:c.instructions+=7;goto B6bf17e;
case 0x6bf181:c.instructions+=6;goto B6bf181;
case 0x6bf182:c.instructions+=5;goto B6bf182;
case 0x6bf183:c.instructions+=4;goto B6bf183;
case 0x6bf186:c.instructions+=3;goto B6bf186;
case 0x6bf188:c.instructions+=2;goto B6bf188;
case 0x6bf189:c.instructions+=1;goto B6bf189;
case 0x6bf18e:goto L6bf18e;
case 0x6bf190:c.instructions+=1;goto B6bf190;
case 0x6bf196:goto L6bf196;
case 0x6bf19b:goto L6bf19b;
case 0x6bf19d:c.instructions+=2;goto B6bf19d;
case 0x6bf1a0:c.instructions+=1;goto B6bf1a0;
case 0x6bf1a6:goto L6bf1a6;
case 0x6bf1a8:c.instructions+=1;goto B6bf1a8;
case 0x6bf1a9:goto L6bf1a9;
case 0x6bf1ac:c.instructions+=8;goto B6bf1ac;
case 0x6bf1b2:c.instructions+=7;goto B6bf1b2;
case 0x6bf1b5:c.instructions+=6;goto B6bf1b5;
case 0x6bf1b8:c.instructions+=5;goto B6bf1b8;
case 0x6bf1bb:c.instructions+=4;goto B6bf1bb;
case 0x6bf1be:c.instructions+=3;goto B6bf1be;
case 0x6bf1c1:c.instructions+=2;goto B6bf1c1;
case 0x6bf1c5:c.instructions+=1;goto B6bf1c5;
case 0x6bf1c7:goto L6bf1c7;
case 0x6bf1cd:c.instructions+=16;goto B6bf1cd;
case 0x6bf1d0:c.instructions+=15;goto B6bf1d0;
case 0x6bf1d3:c.instructions+=14;goto B6bf1d3;
case 0x6bf1d4:c.instructions+=13;goto B6bf1d4;
case 0x6bf1d5:c.instructions+=12;goto B6bf1d5;
case 0x6bf1d6:c.instructions+=11;goto B6bf1d6;
case 0x6bf1d7:c.instructions+=10;goto B6bf1d7;
case 0x6bf1d8:c.instructions+=9;goto B6bf1d8;
case 0x6bf1d9:c.instructions+=8;goto B6bf1d9;
case 0x6bf1da:c.instructions+=7;goto B6bf1da;
case 0x6bf1dc:c.instructions+=6;goto B6bf1dc;
case 0x6bf1dd:c.instructions+=5;goto B6bf1dd;
case 0x6bf1de:c.instructions+=4;goto B6bf1de;
case 0x6bf1e0:c.instructions+=3;goto B6bf1e0;
case 0x6bf1e1:c.instructions+=2;goto B6bf1e1;
case 0x6bf1e3:c.instructions+=1;goto B6bf1e3;
case 0x6bf1e5:goto L6bf1e5;
case 0x6bf1e8:c.instructions+=1;goto B6bf1e8;
case 0x6bf1ea:goto L6bf1ea;
case 0x6bf1ec:c.instructions+=8;goto B6bf1ec;
case 0x6bf1ed:c.instructions+=7;goto B6bf1ed;
case 0x6bf1ee:c.instructions+=6;goto B6bf1ee;
case 0x6bf1f0:c.instructions+=5;goto B6bf1f0;
case 0x6bf1f3:c.instructions+=4;goto B6bf1f3;
case 0x6bf1f4:c.instructions+=3;goto B6bf1f4;
case 0x6bf1fa:c.instructions+=2;goto B6bf1fa;
case 0x6bf1fc:c.instructions+=1;goto B6bf1fc;
case 0x6bf202:goto L6bf202;
case 0x6bf204:c.instructions+=1;goto B6bf204;
case 0x6bf206:goto L6bf206;
case 0x6bf209:goto L6bf209;
case 0x6bf20f:c.instructions+=18;goto B6bf20f;
case 0x6bf212:c.instructions+=17;goto B6bf212;
case 0x6bf215:c.instructions+=16;goto B6bf215;
case 0x6bf216:c.instructions+=15;goto B6bf216;
case 0x6bf217:c.instructions+=14;goto B6bf217;
case 0x6bf218:c.instructions+=13;goto B6bf218;
case 0x6bf219:c.instructions+=12;goto B6bf219;
case 0x6bf21a:c.instructions+=11;goto B6bf21a;
case 0x6bf21b:c.instructions+=10;goto B6bf21b;
case 0x6bf21c:c.instructions+=9;goto B6bf21c;
case 0x6bf21f:c.instructions+=8;goto B6bf21f;
case 0x6bf221:c.instructions+=7;goto B6bf221;
case 0x6bf222:c.instructions+=6;goto B6bf222;
case 0x6bf223:c.instructions+=5;goto B6bf223;
case 0x6bf226:c.instructions+=4;goto B6bf226;
case 0x6bf227:c.instructions+=3;goto B6bf227;
case 0x6bf229:c.instructions+=2;goto B6bf229;
case 0x6bf22b:c.instructions+=1;goto B6bf22b;
case 0x6bf230:goto L6bf230;
case 0x6bf232:c.instructions+=1;goto B6bf232;
case 0x6bf234:goto L6bf234;
case 0x6bf235:c.instructions+=16;goto B6bf235;
case 0x6bf236:c.instructions+=15;goto B6bf236;
case 0x6bf237:c.instructions+=14;goto B6bf237;
case 0x6bf238:c.instructions+=13;goto B6bf238;
case 0x6bf239:c.instructions+=12;goto B6bf239;
case 0x6bf23a:c.instructions+=11;goto B6bf23a;
case 0x6bf23b:c.instructions+=10;goto B6bf23b;
case 0x6bf23e:c.instructions+=9;goto B6bf23e;
case 0x6bf23f:c.instructions+=8;goto B6bf23f;
case 0x6bf245:c.instructions+=7;goto B6bf245;
case 0x6bf248:c.instructions+=6;goto B6bf248;
case 0x6bf24b:c.instructions+=5;goto B6bf24b;
case 0x6bf24e:c.instructions+=4;goto B6bf24e;
case 0x6bf24f:c.instructions+=3;goto B6bf24f;
case 0x6bf251:c.instructions+=2;goto B6bf251;
case 0x6bf252:c.instructions+=1;goto B6bf252;
case 0x6bf253:goto L6bf253;
case 0x6bf255:c.instructions+=1;goto B6bf255;
case 0x6bf25a:goto L6bf25a;
case 0x6bf25c:c.instructions+=1;goto B6bf25c;
case 0x6bf25e:goto L6bf25e;
case 0x6bf261:c.instructions+=4;goto B6bf261;
case 0x6bf267:c.instructions+=3;goto B6bf267;
case 0x6bf26a:c.instructions+=2;goto B6bf26a;
case 0x6bf26d:c.instructions+=1;goto B6bf26d;
case 0x6bf273:goto L6bf273;
case 0x6bf275:goto L6bf275;
case 0x6bf276:c.instructions+=4;goto B6bf276;
case 0x6bf277:c.instructions+=3;goto B6bf277;
case 0x6bf278:c.instructions+=2;goto B6bf278;
case 0x6bf279:c.instructions+=1;goto B6bf279;
case 0x6bf27a:goto L6bf27a;
case 0x6bf27c:c.instructions+=13;goto B6bf27c;
case 0x6bf27d:c.instructions+=12;goto B6bf27d;
case 0x6bf27f:c.instructions+=11;goto B6bf27f;
case 0x6bf282:c.instructions+=10;goto B6bf282;
case 0x6bf283:c.instructions+=9;goto B6bf283;
case 0x6bf284:c.instructions+=8;goto B6bf284;
case 0x6bf286:c.instructions+=7;goto B6bf286;
case 0x6bf289:c.instructions+=6;goto B6bf289;
case 0x6bf28c:c.instructions+=5;goto B6bf28c;
case 0x6bf28f:c.instructions+=4;goto B6bf28f;
case 0x6bf295:c.instructions+=3;goto B6bf295;
case 0x6bf29a:c.instructions+=2;goto B6bf29a;
case 0x6bf29f:c.instructions+=1;goto B6bf29f;
case 0x6bf2a1:goto L6bf2a1;
case 0x6bf2a7:c.instructions+=5;goto B6bf2a7;
case 0x6bf2ac:c.instructions+=4;goto B6bf2ac;
case 0x6bf2b1:c.instructions+=3;goto B6bf2b1;
case 0x6bf2b4:c.instructions+=2;goto B6bf2b4;
case 0x6bf2b5:c.instructions+=1;goto B6bf2b5;
case 0x6bf2ba:goto L6bf2ba;
case 0x6bf2bd:c.instructions+=2;goto B6bf2bd;
case 0x6bf2c2:c.instructions+=1;goto B6bf2c2;
case 0x6bf2c7:goto L6bf2c7;
case 0x6bf2ca:c.instructions+=2;goto B6bf2ca;
case 0x6bf2cd:c.instructions+=1;goto B6bf2cd;
case 0x6bf2cf:goto L6bf2cf;
case 0x6bf2d0:c.instructions+=2;goto B6bf2d0;
case 0x6bf2d2:c.instructions+=1;goto B6bf2d2;
case 0x6bf2d7:goto L6bf2d7;
case 0x6bf2d9:c.instructions+=1;goto B6bf2d9;
case 0x6bf2df:goto L6bf2df;
case 0x6bf2e2:c.instructions+=2;goto B6bf2e2;
case 0x6bf2e8:c.instructions+=1;goto B6bf2e8;
case 0x6bf2ea:goto L6bf2ea;
case 0x6bf2ec:c.instructions+=1;goto B6bf2ec;
case 0x6bf2f1:goto L6bf2f1;
case 0x6bf2f3:c.instructions+=2;goto B6bf2f3;
case 0x6bf2f5:c.instructions+=1;goto B6bf2f5;
case 0x6bf2fa:goto L6bf2fa;
case 0x6bf2fc:c.instructions+=1;goto B6bf2fc;
case 0x6bf2fe:goto L6bf2fe;
case 0x6bf300:c.instructions+=7;goto B6bf300;
case 0x6bf301:c.instructions+=6;goto B6bf301;
case 0x6bf303:c.instructions+=5;goto B6bf303;
case 0x6bf308:c.instructions+=4;goto B6bf308;
case 0x6bf309:c.instructions+=3;goto B6bf309;
case 0x6bf30e:c.instructions+=2;goto B6bf30e;
case 0x6bf310:c.instructions+=1;goto B6bf310;
case 0x6bf313:goto L6bf313;
case 0x6bf315:c.instructions+=1;goto B6bf315;
case 0x6bf317:goto L6bf317;
case 0x6bf319:c.instructions+=7;goto B6bf319;
case 0x6bf31c:c.instructions+=6;goto B6bf31c;
case 0x6bf31d:c.instructions+=5;goto B6bf31d;
case 0x6bf320:c.instructions+=4;goto B6bf320;
case 0x6bf321:c.instructions+=3;goto B6bf321;
case 0x6bf322:c.instructions+=2;goto B6bf322;
case 0x6bf324:c.instructions+=1;goto B6bf324;
case 0x6bf327:goto L6bf327;
case 0x6bf329:c.instructions+=1;goto B6bf329;
case 0x6bf32b:goto L6bf32b;
case 0x6bf32d:c.instructions+=8;goto B6bf32d;
case 0x6bf330:c.instructions+=7;goto B6bf330;
case 0x6bf331:c.instructions+=6;goto B6bf331;
case 0x6bf332:c.instructions+=5;goto B6bf332;
case 0x6bf334:c.instructions+=4;goto B6bf334;
case 0x6bf337:c.instructions+=3;goto B6bf337;
case 0x6bf338:c.instructions+=2;goto B6bf338;
case 0x6bf33a:c.instructions+=1;goto B6bf33a;
case 0x6bf33d:goto L6bf33d;
case 0x6bf33f:c.instructions+=1;goto B6bf33f;
case 0x6bf341:goto L6bf341;
case 0x6bf344:c.instructions+=5;goto B6bf344;
case 0x6bf346:c.instructions+=4;goto B6bf346;
case 0x6bf349:c.instructions+=3;goto B6bf349;
case 0x6bf34b:c.instructions+=2;goto B6bf34b;
case 0x6bf34e:c.instructions+=1;goto B6bf34e;
case 0x6bf351:goto L6bf351;
case 0x6bf353:c.instructions+=1;goto B6bf353;
case 0x6bf355:goto L6bf355;
case 0x6bf357:c.instructions+=2;goto B6bf357;
case 0x6bf359:c.instructions+=1;goto B6bf359;
case 0x6bf35c:goto L6bf35c;
case 0x6bf35e:c.instructions+=1;goto B6bf35e;
case 0x6bf360:goto L6bf360;
case 0x6bf362:c.instructions+=1;goto B6bf362;
case 0x6bf367:goto L6bf367;
case 0x6bf369:c.instructions+=1;goto B6bf369;
case 0x6bf36b:goto L6bf36b;
case 0x6bf36e:c.instructions+=2;goto B6bf36e;
case 0x6bf374:c.instructions+=1;goto B6bf374;
case 0x6bf376:goto L6bf376;
case 0x6bf377:goto L6bf377;
case 0x6bf378:c.instructions+=3;goto B6bf378;
case 0x6bf379:c.instructions+=2;goto B6bf379;
case 0x6bf37a:c.instructions+=1;goto B6bf37a;
case 0x6bf37d:goto L6bf37d;
case 0x6bf37f:c.instructions+=6;goto B6bf37f;
case 0x6bf380:c.instructions+=5;goto B6bf380;
case 0x6bf382:c.instructions+=4;goto B6bf382;
case 0x6bf383:c.instructions+=3;goto B6bf383;
case 0x6bf385:c.instructions+=2;goto B6bf385;
case 0x6bf38b:c.instructions+=1;goto B6bf38b;
case 0x6bf390:goto L6bf390;
case 0x6bf394:c.instructions+=1;goto B6bf394;
case 0x6bf396:goto L6bf396;
case 0x6bf397:c.instructions+=1;goto B6bf397;
case 0x6bf39c:goto L6bf39c;
case 0x6bf39d:goto L6bf39d;
case 0x6bf39f:c.instructions+=3;goto B6bf39f;
case 0x6bf3a0:c.instructions+=2;goto B6bf3a0;
case 0x6bf3a1:c.instructions+=1;goto B6bf3a1;
case 0x6bf3a4:goto L6bf3a4;
case 0x6bf3a6:c.instructions+=11;goto B6bf3a6;
case 0x6bf3a7:c.instructions+=10;goto B6bf3a7;
case 0x6bf3a9:c.instructions+=9;goto B6bf3a9;
case 0x6bf3ac:c.instructions+=8;goto B6bf3ac;
case 0x6bf3ad:c.instructions+=7;goto B6bf3ad;
case 0x6bf3af:c.instructions+=6;goto B6bf3af;
case 0x6bf3b5:c.instructions+=5;goto B6bf3b5;
case 0x6bf3b7:c.instructions+=4;goto B6bf3b7;
case 0x6bf3bd:c.instructions+=3;goto B6bf3bd;
case 0x6bf3c0:c.instructions+=2;goto B6bf3c0;
case 0x6bf3c3:c.instructions+=1;goto B6bf3c3;
case 0x6bf3c5:goto L6bf3c5;
case 0x6bf3c7:c.instructions+=2;goto B6bf3c7;
case 0x6bf3c8:c.instructions+=1;goto B6bf3c8;
case 0x6bf3cd:goto L6bf3cd;
case 0x6bf3d0:c.instructions+=8;goto B6bf3d0;
case 0x6bf3d2:c.instructions+=7;goto B6bf3d2;
case 0x6bf3d4:c.instructions+=6;goto B6bf3d4;
case 0x6bf3d8:c.instructions+=5;goto B6bf3d8;
case 0x6bf3d9:c.instructions+=4;goto B6bf3d9;
case 0x6bf3da:c.instructions+=3;goto B6bf3da;
case 0x6bf3dc:c.instructions+=2;goto B6bf3dc;
case 0x6bf3df:c.instructions+=1;goto B6bf3df;
case 0x6bf3e5:goto L6bf3e5;
case 0x6bf3e9:goto L6bf3e9;
case 0x6bf3ec:c.instructions+=16;goto B6bf3ec;
case 0x6bf3ee:c.instructions+=15;goto B6bf3ee;
case 0x6bf3f1:c.instructions+=14;goto B6bf3f1;
case 0x6bf3f2:c.instructions+=13;goto B6bf3f2;
case 0x6bf3f3:c.instructions+=12;goto B6bf3f3;
case 0x6bf3f5:c.instructions+=11;goto B6bf3f5;
case 0x6bf3f8:c.instructions+=10;goto B6bf3f8;
case 0x6bf3f9:c.instructions+=9;goto B6bf3f9;
case 0x6bf3fc:c.instructions+=8;goto B6bf3fc;
case 0x6bf3ff:c.instructions+=7;goto B6bf3ff;
case 0x6bf402:c.instructions+=6;goto B6bf402;
case 0x6bf405:c.instructions+=5;goto B6bf405;
case 0x6bf408:c.instructions+=4;goto B6bf408;
case 0x6bf409:c.instructions+=3;goto B6bf409;
case 0x6bf40c:c.instructions+=2;goto B6bf40c;
case 0x6bf40f:c.instructions+=1;goto B6bf40f;
case 0x6bf415:goto L6bf415;
case 0x6bf41b:c.instructions+=5;goto B6bf41b;
case 0x6bf41e:c.instructions+=4;goto B6bf41e;
case 0x6bf421:c.instructions+=3;goto B6bf421;
case 0x6bf424:c.instructions+=2;goto B6bf424;
case 0x6bf427:c.instructions+=1;goto B6bf427;
case 0x6bf42a:goto L6bf42a;
case 0x6bf42d:c.instructions+=7;goto B6bf42d;
case 0x6bf42f:c.instructions+=6;goto B6bf42f;
case 0x6bf432:c.instructions+=5;goto B6bf432;
case 0x6bf435:c.instructions+=4;goto B6bf435;
case 0x6bf438:c.instructions+=3;goto B6bf438;
case 0x6bf43a:c.instructions+=2;goto B6bf43a;
case 0x6bf43c:c.instructions+=1;goto B6bf43c;
case 0x6bf442:goto L6bf442;
case 0x6bf443:c.instructions+=1;goto B6bf443;
case 0x6bf449:goto L6bf449;
case 0x6bf44a:c.instructions+=1;goto B6bf44a;
case 0x6bf450:goto L6bf450;
case 0x6bf451:c.instructions+=1;goto B6bf451;
case 0x6bf457:goto L6bf457;
case 0x6bf45b:c.instructions+=1;goto B6bf45b;
case 0x6bf461:goto L6bf461;
case 0x6bf464:c.instructions+=7;goto B6bf464;
case 0x6bf467:c.instructions+=6;goto B6bf467;
case 0x6bf46a:c.instructions+=5;goto B6bf46a;
case 0x6bf46f:c.instructions+=4;goto B6bf46f;
case 0x6bf472:c.instructions+=3;goto B6bf472;
case 0x6bf475:c.instructions+=2;goto B6bf475;
case 0x6bf479:c.instructions+=1;goto B6bf479;
case 0x6bf47f:goto L6bf47f;
case 0x6bf482:c.instructions+=7;goto B6bf482;
case 0x6bf485:c.instructions+=6;goto B6bf485;
case 0x6bf487:c.instructions+=5;goto B6bf487;
case 0x6bf489:c.instructions+=4;goto B6bf489;
case 0x6bf48f:c.instructions+=3;goto B6bf48f;
case 0x6bf495:c.instructions+=2;goto B6bf495;
case 0x6bf498:c.instructions+=1;goto B6bf498;
case 0x6bf49a:goto L6bf49a;
case 0x6bf49c:c.instructions+=2;goto B6bf49c;
case 0x6bf4a1:c.instructions+=1;goto B6bf4a1;
case 0x6bf4a7:goto L6bf4a7;
case 0x6bf4aa:goto L6bf4aa;
case 0x6bf4ac:c.instructions+=2;goto B6bf4ac;
case 0x6bf4af:c.instructions+=1;goto B6bf4af;
case 0x6bf4b1:goto L6bf4b1;
case 0x6bf4b2:c.instructions+=3;goto B6bf4b2;
case 0x6bf4b5:c.instructions+=2;goto B6bf4b5;
case 0x6bf4b7:c.instructions+=1;goto B6bf4b7;
case 0x6bf4b9:goto L6bf4b9;
case 0x6bf4bc:c.instructions+=1;goto B6bf4bc;
case 0x6bf4c1:goto L6bf4c1;
case 0x6bf4c4:c.instructions+=3;goto B6bf4c4;
case 0x6bf4c7:c.instructions+=2;goto B6bf4c7;
case 0x6bf4ca:c.instructions+=1;goto B6bf4ca;
case 0x6bf4cc:goto L6bf4cc;
case 0x6bf4d0:c.instructions+=1;goto B6bf4d0;
case 0x6bf4d5:goto L6bf4d5;
case 0x6bf4d8:c.instructions+=1;goto B6bf4d8;
case 0x6bf4de:goto L6bf4de;
case 0x6bf4e1:c.instructions+=8;goto B6bf4e1;
case 0x6bf4e4:c.instructions+=7;goto B6bf4e4;
case 0x6bf4e7:c.instructions+=6;goto B6bf4e7;
case 0x6bf4ec:c.instructions+=5;goto B6bf4ec;
case 0x6bf4ef:c.instructions+=4;goto B6bf4ef;
case 0x6bf4f1:c.instructions+=3;goto B6bf4f1;
case 0x6bf4f4:c.instructions+=2;goto B6bf4f4;
case 0x6bf4f8:c.instructions+=1;goto B6bf4f8;
case 0x6bf4fe:goto L6bf4fe;
case 0x6bf501:c.instructions+=7;goto B6bf501;
case 0x6bf504:c.instructions+=6;goto B6bf504;
case 0x6bf506:c.instructions+=5;goto B6bf506;
case 0x6bf508:c.instructions+=4;goto B6bf508;
case 0x6bf50e:c.instructions+=3;goto B6bf50e;
case 0x6bf514:c.instructions+=2;goto B6bf514;
case 0x6bf517:c.instructions+=1;goto B6bf517;
case 0x6bf519:goto L6bf519;
case 0x6bf51b:c.instructions+=2;goto B6bf51b;
case 0x6bf520:c.instructions+=1;goto B6bf520;
case 0x6bf522:goto L6bf522;
case 0x6bf525:goto L6bf525;
case 0x6bf527:c.instructions+=1;goto B6bf527;
case 0x6bf529:goto L6bf529;
case 0x6bf52a:c.instructions+=3;goto B6bf52a;
case 0x6bf52d:c.instructions+=2;goto B6bf52d;
case 0x6bf52f:c.instructions+=1;goto B6bf52f;
case 0x6bf531:goto L6bf531;
case 0x6bf533:goto L6bf533;
case 0x6bf536:c.instructions+=3;goto B6bf536;
case 0x6bf539:c.instructions+=2;goto B6bf539;
case 0x6bf53c:c.instructions+=1;goto B6bf53c;
case 0x6bf53e:goto L6bf53e;
case 0x6bf542:c.instructions+=1;goto B6bf542;
case 0x6bf544:goto L6bf544;
case 0x6bf548:c.instructions+=1;goto B6bf548;
case 0x6bf54a:goto L6bf54a;
case 0x6bf54d:c.instructions+=1;goto B6bf54d;
case 0x6bf54f:goto L6bf54f;
case 0x6bf552:c.instructions+=4;goto B6bf552;
case 0x6bf555:c.instructions+=3;goto B6bf555;
case 0x6bf558:c.instructions+=2;goto B6bf558;
case 0x6bf55b:c.instructions+=1;goto B6bf55b;
case 0x6bf55d:goto L6bf55d;
case 0x6bf561:c.instructions+=1;goto B6bf561;
case 0x6bf563:goto L6bf563;
case 0x6bf566:c.instructions+=1;goto B6bf566;
case 0x6bf568:goto L6bf568;
case 0x6bf56b:c.instructions+=3;goto B6bf56b;
case 0x6bf56e:c.instructions+=2;goto B6bf56e;
case 0x6bf571:c.instructions+=1;goto B6bf571;
case 0x6bf574:goto L6bf574;
case 0x6bf577:c.instructions+=3;goto B6bf577;
case 0x6bf57a:c.instructions+=2;goto B6bf57a;
case 0x6bf57e:c.instructions+=1;goto B6bf57e;
case 0x6bf582:goto L6bf582;
case 0x6bf585:goto L6bf585;
case 0x6bf589:c.instructions+=2;goto B6bf589;
case 0x6bf58c:c.instructions+=1;goto B6bf58c;
case 0x6bf592:goto L6bf592;
case 0x6bf595:c.instructions+=2;goto B6bf595;
case 0x6bf598:c.instructions+=1;goto B6bf598;
case 0x6bf59e:goto L6bf59e;
case 0x6bf5a1:c.instructions+=1;goto B6bf5a1;
case 0x6bf5a7:goto L6bf5a7;
case 0x6bf5aa:c.instructions+=3;goto B6bf5aa;
case 0x6bf5ac:c.instructions+=2;goto B6bf5ac;
case 0x6bf5ae:c.instructions+=1;goto B6bf5ae;
case 0x6bf5b0:goto L6bf5b0;
case 0x6bf5b6:c.instructions+=1;goto B6bf5b6;
case 0x6bf5b8:goto L6bf5b8;
case 0x6bf5bb:c.instructions+=1;goto B6bf5bb;
case 0x6bf5bd:goto L6bf5bd;
case 0x6bf5c0:c.instructions+=2;goto B6bf5c0;
case 0x6bf5c2:c.instructions+=1;goto B6bf5c2;
case 0x6bf5c4:goto L6bf5c4;
case 0x6bf5c7:c.instructions+=1;goto B6bf5c7;
case 0x6bf5c9:goto L6bf5c9;
case 0x6bf5ca:goto L6bf5ca;
case 0x6bf5cd:c.instructions+=2;goto B6bf5cd;
case 0x6bf5d0:c.instructions+=1;goto B6bf5d0;
case 0x6bf5d2:goto L6bf5d2;
case 0x6bf5d5:c.instructions+=2;goto B6bf5d5;
case 0x6bf5d7:c.instructions+=1;goto B6bf5d7;
case 0x6bf5d9:goto L6bf5d9;
case 0x6bf5dc:c.instructions+=1;goto B6bf5dc;
case 0x6bf5de:goto L6bf5de;
case 0x6bf5e0:c.instructions+=1;goto B6bf5e0;
case 0x6bf5e1:goto L6bf5e1;
case 0x6bf5e4:c.instructions+=1;goto B6bf5e4;
case 0x6bf5e6:goto L6bf5e6;
case 0x6bf5e8:c.instructions+=3;goto B6bf5e8;
case 0x6bf5eb:c.instructions+=2;goto B6bf5eb;
case 0x6bf5ed:c.instructions+=1;goto B6bf5ed;
case 0x6bf5ef:goto L6bf5ef;
case 0x6bf5f2:c.instructions+=1;goto B6bf5f2;
case 0x6bf5f4:goto L6bf5f4;
case 0x6bf5f6:goto L6bf5f6;
case 0x6bf5f9:c.instructions+=1;goto B6bf5f9;
case 0x6bf5fb:goto L6bf5fb;
case 0x6bf5fd:c.instructions+=1;goto B6bf5fd;
case 0x6bf5fe:goto L6bf5fe;
case 0x6bf601:c.instructions+=3;goto B6bf601;
case 0x6bf603:c.instructions+=2;goto B6bf603;
case 0x6bf605:c.instructions+=1;goto B6bf605;
case 0x6bf607:goto L6bf607;
case 0x6bf60d:c.instructions+=1;goto B6bf60d;
case 0x6bf613:goto L6bf613;
case 0x6bf616:c.instructions+=8;goto B6bf616;
case 0x6bf619:c.instructions+=7;goto B6bf619;
case 0x6bf61b:c.instructions+=6;goto B6bf61b;
case 0x6bf61e:c.instructions+=5;goto B6bf61e;
case 0x6bf621:c.instructions+=4;goto B6bf621;
case 0x6bf624:c.instructions+=3;goto B6bf624;
case 0x6bf627:c.instructions+=2;goto B6bf627;
case 0x6bf62b:c.instructions+=1;goto B6bf62b;
case 0x6bf62d:goto L6bf62d;
case 0x6bf633:c.instructions+=5;goto B6bf633;
case 0x6bf636:c.instructions+=4;goto B6bf636;
case 0x6bf638:c.instructions+=3;goto B6bf638;
case 0x6bf63a:c.instructions+=2;goto B6bf63a;
case 0x6bf63d:c.instructions+=1;goto B6bf63d;
case 0x6bf63f:goto L6bf63f;
case 0x6bf641:c.instructions+=1;goto B6bf641;
case 0x6bf642:goto L6bf642;
case 0x6bf644:c.instructions+=1;goto B6bf644;
case 0x6bf64a:goto L6bf64a;
case 0x6bf64d:c.instructions+=2;goto B6bf64d;
case 0x6bf650:c.instructions+=1;goto B6bf650;
case 0x6bf656:goto L6bf656;
case 0x6bf65a:c.instructions+=3;goto B6bf65a;
case 0x6bf65d:c.instructions+=2;goto B6bf65d;
case 0x6bf660:c.instructions+=1;goto B6bf660;
case 0x6bf666:goto L6bf666;
case 0x6bf669:c.instructions+=4;goto B6bf669;
case 0x6bf66b:c.instructions+=3;goto B6bf66b;
case 0x6bf672:c.instructions+=2;goto B6bf672;
case 0x6bf675:c.instructions+=1;goto B6bf675;
case 0x6bf677:goto L6bf677;
case 0x6bf67d:c.instructions+=6;goto B6bf67d;
case 0x6bf680:c.instructions+=5;goto B6bf680;
case 0x6bf683:c.instructions+=4;goto B6bf683;
case 0x6bf686:c.instructions+=3;goto B6bf686;
case 0x6bf68c:c.instructions+=2;goto B6bf68c;
case 0x6bf68f:c.instructions+=1;goto B6bf68f;
case 0x6bf692:goto L6bf692;
case 0x6bf694:c.instructions+=3;goto B6bf694;
case 0x6bf697:c.instructions+=2;goto B6bf697;
case 0x6bf69a:c.instructions+=1;goto B6bf69a;
case 0x6bf69c:goto L6bf69c;
case 0x6bf6a0:goto L6bf6a0;
case 0x6bf6a3:c.instructions+=2;goto B6bf6a3;
case 0x6bf6a6:c.instructions+=1;goto B6bf6a6;
case 0x6bf6a8:goto L6bf6a8;
case 0x6bf6ac:goto L6bf6ac;
case 0x6bf6b0:c.instructions+=1;goto B6bf6b0;
case 0x6bf6b2:goto L6bf6b2;
case 0x6bf6b6:c.instructions+=1;goto B6bf6b6;
case 0x6bf6b8:goto L6bf6b8;
case 0x6bf6bc:c.instructions+=1;goto B6bf6bc;
case 0x6bf6be:goto L6bf6be;
case 0x6bf6c2:c.instructions+=1;goto B6bf6c2;
case 0x6bf6c4:goto L6bf6c4;
case 0x6bf6c7:c.instructions+=1;goto B6bf6c7;
case 0x6bf6c9:goto L6bf6c9;
case 0x6bf6cc:c.instructions+=2;goto B6bf6cc;
case 0x6bf6cf:c.instructions+=1;goto B6bf6cf;
case 0x6bf6d1:goto L6bf6d1;
case 0x6bf6d5:goto L6bf6d5;
case 0x6bf6d8:c.instructions+=2;goto B6bf6d8;
case 0x6bf6db:c.instructions+=1;goto B6bf6db;
case 0x6bf6dd:goto L6bf6dd;
case 0x6bf6e0:goto L6bf6e0;
case 0x6bf6e4:goto L6bf6e4;
case 0x6bf6e7:c.instructions+=3;goto B6bf6e7;
case 0x6bf6eb:c.instructions+=2;goto B6bf6eb;
case 0x6bf6ee:c.instructions+=1;goto B6bf6ee;
case 0x6bf6f0:goto L6bf6f0;
case 0x6bf6f3:c.instructions+=4;goto B6bf6f3;
case 0x6bf6f6:c.instructions+=3;goto B6bf6f6;
case 0x6bf6f9:c.instructions+=2;goto B6bf6f9;
case 0x6bf6fb:c.instructions+=1;goto B6bf6fb;
case 0x6bf6fd:goto L6bf6fd;
case 0x6bf700:c.instructions+=3;goto B6bf700;
case 0x6bf703:c.instructions+=2;goto B6bf703;
case 0x6bf706:c.instructions+=1;goto B6bf706;
case 0x6bf708:goto L6bf708;
case 0x6bf70a:c.instructions+=4;goto B6bf70a;
case 0x6bf70d:c.instructions+=3;goto B6bf70d;
case 0x6bf710:c.instructions+=2;goto B6bf710;
case 0x6bf712:c.instructions+=1;goto B6bf712;
case 0x6bf714:goto L6bf714;
case 0x6bf717:c.instructions+=1;goto B6bf717;
case 0x6bf719:goto L6bf719;
case 0x6bf71c:c.instructions+=1;goto B6bf71c;
case 0x6bf71e:goto L6bf71e;
case 0x6bf722:goto L6bf722;
case 0x6bf725:c.instructions+=2;goto B6bf725;
case 0x6bf726:c.instructions+=1;goto B6bf726;
case 0x6bf728:goto L6bf728;
case 0x6bf72b:c.instructions+=1;goto B6bf72b;
case 0x6bf72e:goto L6bf72e;
case 0x6bf731:c.instructions+=3;goto B6bf731;
case 0x6bf734:c.instructions+=2;goto B6bf734;
case 0x6bf737:c.instructions+=1;goto B6bf737;
case 0x6bf739:goto L6bf739;
case 0x6bf73d:c.instructions+=1;goto B6bf73d;
case 0x6bf73f:goto L6bf73f;
case 0x6bf740:c.instructions+=3;goto B6bf740;
case 0x6bf743:c.instructions+=2;goto B6bf743;
case 0x6bf746:c.instructions+=1;goto B6bf746;
case 0x6bf74c:goto L6bf74c;
case 0x6bf74e:goto L6bf74e;
case 0x6bf752:c.instructions+=3;goto B6bf752;
case 0x6bf755:c.instructions+=2;goto B6bf755;
case 0x6bf758:c.instructions+=1;goto B6bf758;
case 0x6bf75a:goto L6bf75a;
case 0x6bf75d:c.instructions+=2;goto B6bf75d;
case 0x6bf760:c.instructions+=1;goto B6bf760;
case 0x6bf762:goto L6bf762;
case 0x6bf765:c.instructions+=6;goto B6bf765;
case 0x6bf768:c.instructions+=5;goto B6bf768;
case 0x6bf76b:c.instructions+=4;goto B6bf76b;
case 0x6bf76e:c.instructions+=3;goto B6bf76e;
case 0x6bf771:c.instructions+=2;goto B6bf771;
case 0x6bf774:c.instructions+=1;goto B6bf774;
case 0x6bf77a:goto L6bf77a;
case 0x6bf77c:c.instructions+=1;goto B6bf77c;
case 0x6bf77d:goto L6bf77d;
case 0x6bf77e:c.instructions+=1;goto B6bf77e;
case 0x6bf77f:goto L6bf77f;
case 0x6bf780:c.instructions+=2;goto B6bf780;
case 0x6bf781:c.instructions+=1;goto B6bf781;
case 0x6bf782:goto L6bf782;
case 0x6bf784:c.instructions+=1;goto B6bf784;
case 0x6bf789:goto L6bf789;
case 0x6bf78b:c.instructions+=1;goto B6bf78b;
case 0x6bf78d:goto L6bf78d;
case 0x6bf78f:c.instructions+=1;goto B6bf78f;
case 0x6bf794:goto L6bf794;
case 0x6bf796:c.instructions+=1;goto B6bf796;
case 0x6bf798:goto L6bf798;
case 0x6bf79a:goto L6bf79a;
case 0x6bf79c:c.instructions+=1;goto B6bf79c;
case 0x6bf79e:goto L6bf79e;
case 0x6bf7a3:c.instructions+=1;goto B6bf7a3;
case 0x6bf7a5:goto L6bf7a5;
case 0x6bf7a7:c.instructions+=9;goto B6bf7a7;
case 0x6bf7a8:c.instructions+=8;goto B6bf7a8;
case 0x6bf7ab:c.instructions+=7;goto B6bf7ab;
case 0x6bf7ac:c.instructions+=6;goto B6bf7ac;
case 0x6bf7ae:c.instructions+=5;goto B6bf7ae;
case 0x6bf7b3:c.instructions+=4;goto B6bf7b3;
case 0x6bf7b8:c.instructions+=3;goto B6bf7b8;
case 0x6bf7b9:c.instructions+=2;goto B6bf7b9;
case 0x6bf7bb:c.instructions+=1;goto B6bf7bb;
case 0x6bf7c0:goto L6bf7c0;
case 0x6bf7c2:c.instructions+=1;goto B6bf7c2;
case 0x6bf7c4:goto L6bf7c4;
case 0x6bf7c6:c.instructions+=1;goto B6bf7c6;
case 0x6bf7cb:goto L6bf7cb;
case 0x6bf7d1:c.instructions+=2;goto B6bf7d1;
case 0x6bf7d3:c.instructions+=1;goto B6bf7d3;
case 0x6bf7d8:goto L6bf7d8;
case 0x6bf7da:c.instructions+=1;goto B6bf7da;
case 0x6bf7dc:goto L6bf7dc;
case 0x6bf7de:c.instructions+=2;goto B6bf7de;
case 0x6bf7e0:c.instructions+=1;goto B6bf7e0;
case 0x6bf7e2:goto L6bf7e2;
case 0x6bf7e4:c.instructions+=1;goto B6bf7e4;
case 0x6bf7e7:goto L6bf7e7;
case 0x6bf7ea:c.instructions+=2;goto B6bf7ea;
case 0x6bf7ec:c.instructions+=1;goto B6bf7ec;
case 0x6bf7ee:goto L6bf7ee;
case 0x6bf7f1:c.instructions+=7;goto B6bf7f1;
case 0x6bf7f3:c.instructions+=6;goto B6bf7f3;
case 0x6bf7f6:c.instructions+=5;goto B6bf7f6;
case 0x6bf7f9:c.instructions+=4;goto B6bf7f9;
case 0x6bf7fc:c.instructions+=3;goto B6bf7fc;
case 0x6bf7ff:c.instructions+=2;goto B6bf7ff;
case 0x6bf802:c.instructions+=1;goto B6bf802;
case 0x6bf804:goto L6bf804;
case 0x6bf807:c.instructions+=2;goto B6bf807;
case 0x6bf80a:c.instructions+=1;goto B6bf80a;
case 0x6bf80c:goto L6bf80c;
case 0x6bf80f:c.instructions+=2;goto B6bf80f;
case 0x6bf812:c.instructions+=1;goto B6bf812;
case 0x6bf814:goto L6bf814;
case 0x6bf81a:c.instructions+=4;goto B6bf81a;
case 0x6bf81f:c.instructions+=3;goto B6bf81f;
case 0x6bf824:c.instructions+=2;goto B6bf824;
case 0x6bf827:c.instructions+=1;goto B6bf827;
case 0x6bf828:goto L6bf828;
case 0x6bf82d:goto L6bf82d;
case 0x6bf82f:c.instructions+=3;goto B6bf82f;
case 0x6bf832:c.instructions+=2;goto B6bf832;
case 0x6bf833:c.instructions+=1;goto B6bf833;
case 0x6bf838:goto L6bf838;
case 0x6bf83c:c.instructions+=1;goto B6bf83c;
case 0x6bf83e:goto L6bf83e;
case 0x6bf841:c.instructions+=1;goto B6bf841;
case 0x6bf844:goto L6bf844;
case 0x6bf847:c.instructions+=5;goto B6bf847;
case 0x6bf84a:c.instructions+=4;goto B6bf84a;
case 0x6bf84b:c.instructions+=3;goto B6bf84b;
case 0x6bf84e:c.instructions+=2;goto B6bf84e;
case 0x6bf851:c.instructions+=1;goto B6bf851;
case 0x6bf853:goto L6bf853;
case 0x6bf855:c.instructions+=3;goto B6bf855;
case 0x6bf857:c.instructions+=2;goto B6bf857;
case 0x6bf85a:c.instructions+=1;goto B6bf85a;
case 0x6bf85c:goto L6bf85c;
case 0x6bf860:c.instructions+=4;goto B6bf860;
case 0x6bf864:c.instructions+=3;goto B6bf864;
case 0x6bf867:c.instructions+=2;goto B6bf867;
case 0x6bf86a:c.instructions+=1;goto B6bf86a;
case 0x6bf86c:goto L6bf86c;
case 0x6bf870:c.instructions+=1;goto B6bf870;
case 0x6bf872:goto L6bf872;
case 0x6bf876:c.instructions+=1;goto B6bf876;
case 0x6bf878:goto L6bf878;
case 0x6bf87c:c.instructions+=1;goto B6bf87c;
case 0x6bf87e:goto L6bf87e;
case 0x6bf881:c.instructions+=2;goto B6bf881;
case 0x6bf884:c.instructions+=1;goto B6bf884;
case 0x6bf885:goto L6bf885;
case 0x6bf888:c.instructions+=1;goto B6bf888;
case 0x6bf88e:goto L6bf88e;
case 0x6bf891:c.instructions+=3;goto B6bf891;
case 0x6bf892:c.instructions+=2;goto B6bf892;
case 0x6bf895:c.instructions+=1;goto B6bf895;
case 0x6bf897:goto L6bf897;
case 0x6bf89a:c.instructions+=3;goto B6bf89a;
case 0x6bf89e:c.instructions+=2;goto B6bf89e;
case 0x6bf8a0:c.instructions+=1;goto B6bf8a0;
case 0x6bf8a2:goto L6bf8a2;
case 0x6bf8a9:goto L6bf8a9;
case 0x6bf8ac:c.instructions+=3;goto B6bf8ac;
case 0x6bf8ae:c.instructions+=2;goto B6bf8ae;
case 0x6bf8b1:c.instructions+=1;goto B6bf8b1;
case 0x6bf8b3:goto L6bf8b3;
case 0x6bf8b6:c.instructions+=11;goto B6bf8b6;
case 0x6bf8b9:c.instructions+=10;goto B6bf8b9;
case 0x6bf8bc:c.instructions+=9;goto B6bf8bc;
case 0x6bf8bf:c.instructions+=8;goto B6bf8bf;
case 0x6bf8c2:c.instructions+=7;goto B6bf8c2;
case 0x6bf8c5:c.instructions+=6;goto B6bf8c5;
case 0x6bf8c8:c.instructions+=5;goto B6bf8c8;
case 0x6bf8cb:c.instructions+=4;goto B6bf8cb;
case 0x6bf8ce:c.instructions+=3;goto B6bf8ce;
case 0x6bf8d1:c.instructions+=2;goto B6bf8d1;
case 0x6bf8d4:c.instructions+=1;goto B6bf8d4;
case 0x6bf8d6:goto L6bf8d6;
case 0x6bf8d9:c.instructions+=10;goto B6bf8d9;
case 0x6bf8db:c.instructions+=9;goto B6bf8db;
case 0x6bf8dd:c.instructions+=8;goto B6bf8dd;
case 0x6bf8e0:c.instructions+=7;goto B6bf8e0;
case 0x6bf8e3:c.instructions+=6;goto B6bf8e3;
case 0x6bf8e6:c.instructions+=5;goto B6bf8e6;
case 0x6bf8e8:c.instructions+=4;goto B6bf8e8;
case 0x6bf8eb:c.instructions+=3;goto B6bf8eb;
case 0x6bf8ee:c.instructions+=2;goto B6bf8ee;
case 0x6bf8f1:c.instructions+=1;goto B6bf8f1;
case 0x6bf8f4:goto L6bf8f4;
case 0x6bf8f7:c.instructions+=2;goto B6bf8f7;
case 0x6bf8fa:c.instructions+=1;goto B6bf8fa;
case 0x6bf8fc:goto L6bf8fc;
case 0x6bf8ff:c.instructions+=3;goto B6bf8ff;
case 0x6bf902:c.instructions+=2;goto B6bf902;
case 0x6bf905:c.instructions+=1;goto B6bf905;
case 0x6bf907:goto L6bf907;
case 0x6bf90a:c.instructions+=4;goto B6bf90a;
case 0x6bf90d:c.instructions+=3;goto B6bf90d;
case 0x6bf910:c.instructions+=2;goto B6bf910;
case 0x6bf913:c.instructions+=1;goto B6bf913;
case 0x6bf915:goto L6bf915;
case 0x6bf917:c.instructions+=3;goto B6bf917;
case 0x6bf919:c.instructions+=2;goto B6bf919;
case 0x6bf91c:c.instructions+=1;goto B6bf91c;
case 0x6bf91e:goto L6bf91e;
case 0x6bf922:c.instructions+=2;goto B6bf922;
case 0x6bf925:c.instructions+=1;goto B6bf925;
case 0x6bf927:goto L6bf927;
case 0x6bf92a:c.instructions+=2;goto B6bf92a;
case 0x6bf92d:c.instructions+=1;goto B6bf92d;
case 0x6bf92f:goto L6bf92f;
case 0x6bf930:c.instructions+=2;goto B6bf930;
case 0x6bf933:c.instructions+=1;goto B6bf933;
case 0x6bf935:goto L6bf935;
case 0x6bf938:c.instructions+=3;goto B6bf938;
case 0x6bf93a:c.instructions+=2;goto B6bf93a;
case 0x6bf93f:c.instructions+=1;goto B6bf93f;
case 0x6bf945:goto L6bf945;
case 0x6bf947:c.instructions+=2;goto B6bf947;
case 0x6bf94c:c.instructions+=1;goto B6bf94c;
case 0x6bf94e:goto L6bf94e;
case 0x6bf950:c.instructions+=1;goto B6bf950;
case 0x6bf952:goto L6bf952;
case 0x6bf955:c.instructions+=6;goto B6bf955;
case 0x6bf95b:c.instructions+=5;goto B6bf95b;
case 0x6bf960:c.instructions+=4;goto B6bf960;
case 0x6bf965:c.instructions+=3;goto B6bf965;
case 0x6bf968:c.instructions+=2;goto B6bf968;
case 0x6bf969:c.instructions+=1;goto B6bf969;
case 0x6bf96e:goto L6bf96e;
case 0x6bf974:c.instructions+=5;goto B6bf974;
case 0x6bf979:c.instructions+=4;goto B6bf979;
case 0x6bf97e:c.instructions+=3;goto B6bf97e;
case 0x6bf981:c.instructions+=2;goto B6bf981;
case 0x6bf982:c.instructions+=1;goto B6bf982;
case 0x6bf987:goto L6bf987;
case 0x6bf98a:c.instructions+=1;goto B6bf98a;
case 0x6bf98f:goto L6bf98f;
case 0x6bf991:c.instructions+=2;goto B6bf991;
case 0x6bf993:c.instructions+=1;goto B6bf993;
case 0x6bf998:goto L6bf998;
case 0x6bf99a:c.instructions+=1;goto B6bf99a;
case 0x6bf99f:goto L6bf99f;
case 0x6bf9a1:c.instructions+=1;goto B6bf9a1;
case 0x6bf9a3:goto L6bf9a3;
case 0x6bf9a6:c.instructions+=3;goto B6bf9a6;
case 0x6bf9a8:c.instructions+=2;goto B6bf9a8;
case 0x6bf9ab:c.instructions+=1;goto B6bf9ab;
case 0x6bf9ad:goto L6bf9ad;
case 0x6bf9b0:c.instructions+=2;goto B6bf9b0;
case 0x6bf9b3:c.instructions+=1;goto B6bf9b3;
case 0x6bf9b5:goto L6bf9b5;
case 0x6bf9b8:goto L6bf9b8;
case 0x6bf9bb:c.instructions+=2;goto B6bf9bb;
case 0x6bf9be:c.instructions+=1;goto B6bf9be;
case 0x6bf9c0:goto L6bf9c0;
case 0x6bf9c2:c.instructions+=2;goto B6bf9c2;
case 0x6bf9c5:c.instructions+=1;goto B6bf9c5;
case 0x6bf9c7:goto L6bf9c7;
case 0x6bf9ca:goto L6bf9ca;
case 0x6bf9cd:c.instructions+=2;goto B6bf9cd;
case 0x6bf9cf:c.instructions+=1;goto B6bf9cf;
case 0x6bf9d1:goto L6bf9d1;
case 0x6bf9d3:c.instructions+=2;goto B6bf9d3;
case 0x6bf9d8:c.instructions+=1;goto B6bf9d8;
case 0x6bf9da:goto L6bf9da;
case 0x6bf9dc:c.instructions+=1;goto B6bf9dc;
case 0x6bf9de:goto L6bf9de;
case 0x6bf9e1:c.instructions+=3;goto B6bf9e1;
case 0x6bf9e4:c.instructions+=2;goto B6bf9e4;
case 0x6bf9e6:c.instructions+=1;goto B6bf9e6;
case 0x6bf9e8:goto L6bf9e8;
case 0x6bf9eb:c.instructions+=2;goto B6bf9eb;
case 0x6bf9ee:c.instructions+=1;goto B6bf9ee;
case 0x6bf9f0:goto L6bf9f0;
case 0x6bf9f3:goto L6bf9f3;
case 0x6bf9f6:c.instructions+=1;goto B6bf9f6;
case 0x6bf9f8:goto L6bf9f8;
case 0x6bf9fb:c.instructions+=2;goto B6bf9fb;
case 0x6bf9fd:c.instructions+=1;goto B6bf9fd;
case 0x6bf9ff:goto L6bf9ff;
case 0x6bfa02:goto L6bfa02;
case 0x6bfa05:c.instructions+=5;goto B6bfa05;
case 0x6bfa08:c.instructions+=4;goto B6bfa08;
case 0x6bfa0b:c.instructions+=3;goto B6bfa0b;
case 0x6bfa0e:c.instructions+=2;goto B6bfa0e;
case 0x6bfa10:c.instructions+=1;goto B6bfa10;
case 0x6bfa12:goto L6bfa12;
case 0x6bfa14:c.instructions+=1;goto B6bfa14;
case 0x6bfa19:goto L6bfa19;
case 0x6bfa1c:c.instructions+=3;goto B6bfa1c;
case 0x6bfa1f:c.instructions+=2;goto B6bfa1f;
case 0x6bfa21:c.instructions+=1;goto B6bfa21;
case 0x6bfa26:goto L6bfa26;
case 0x6bfa28:c.instructions+=12;goto B6bfa28;
case 0x6bfa29:c.instructions+=11;goto B6bfa29;
case 0x6bfa2b:c.instructions+=10;goto B6bfa2b;
case 0x6bfa2c:c.instructions+=9;goto B6bfa2c;
case 0x6bfa2d:c.instructions+=8;goto B6bfa2d;
case 0x6bfa2e:c.instructions+=7;goto B6bfa2e;
case 0x6bfa2f:c.instructions+=6;goto B6bfa2f;
case 0x6bfa30:c.instructions+=5;goto B6bfa30;
case 0x6bfa32:c.instructions+=4;goto B6bfa32;
case 0x6bfa34:c.instructions+=3;goto B6bfa34;
case 0x6bfa37:c.instructions+=2;goto B6bfa37;
case 0x6bfa3c:c.instructions+=1;goto B6bfa3c;
case 0x6bfa3e:goto L6bfa3e;
case 0x6bfa41:c.instructions+=2;goto B6bfa41;
case 0x6bfa47:c.instructions+=1;goto B6bfa47;
case 0x6bfa49:goto L6bfa49;
case 0x6bfa4f:c.instructions+=7;goto B6bfa4f;
case 0x6bfa52:c.instructions+=6;goto B6bfa52;
case 0x6bfa55:c.instructions+=5;goto B6bfa55;
case 0x6bfa5b:c.instructions+=4;goto B6bfa5b;
case 0x6bfa5d:c.instructions+=3;goto B6bfa5d;
case 0x6bfa5f:c.instructions+=2;goto B6bfa5f;
case 0x6bfa64:c.instructions+=1;goto B6bfa64;
case 0x6bfa66:goto L6bfa66;
case 0x6bfa68:c.instructions+=1;goto B6bfa68;
case 0x6bfa6d:goto L6bfa6d;
case 0x6bfa6f:c.instructions+=1;goto B6bfa6f;
case 0x6bfa75:goto L6bfa75;
case 0x6bfa77:c.instructions+=3;goto B6bfa77;
case 0x6bfa79:c.instructions+=2;goto B6bfa79;
case 0x6bfa7c:c.instructions+=1;goto B6bfa7c;
case 0x6bfa7e:goto L6bfa7e;
case 0x6bfa84:c.instructions+=3;goto B6bfa84;
case 0x6bfa8a:c.instructions+=2;goto B6bfa8a;
case 0x6bfa8d:c.instructions+=1;goto B6bfa8d;
case 0x6bfa8f:goto L6bfa8f;
case 0x6bfa91:c.instructions+=1;goto B6bfa91;
case 0x6bfa93:goto L6bfa93;
case 0x6bfa95:c.instructions+=1;goto B6bfa95;
case 0x6bfa9a:goto L6bfa9a;
case 0x6bfaa1:c.instructions+=1;goto B6bfaa1;
case 0x6bfaa7:goto L6bfaa7;
case 0x6bfaa9:c.instructions+=2;goto B6bfaa9;
case 0x6bfaac:c.instructions+=1;goto B6bfaac;
case 0x6bfaae:goto L6bfaae;
case 0x6bfab1:c.instructions+=5;goto B6bfab1;
case 0x6bfab7:c.instructions+=4;goto B6bfab7;
case 0x6bfaba:c.instructions+=3;goto B6bfaba;
case 0x6bfabc:c.instructions+=2;goto B6bfabc;
case 0x6bfac2:c.instructions+=1;goto B6bfac2;
case 0x6bfac7:goto L6bfac7;
case 0x6bfac9:c.instructions+=1;goto B6bfac9;
case 0x6bfacb:goto L6bfacb;
case 0x6bfacd:c.instructions+=1;goto B6bfacd;
case 0x6bfad2:goto L6bfad2;
case 0x6bfad3:c.instructions+=2;goto B6bfad3;
case 0x6bfad6:c.instructions+=1;goto B6bfad6;
case 0x6bfad8:goto L6bfad8;
case 0x6bfada:c.instructions+=2;goto B6bfada;
case 0x6bfadd:c.instructions+=1;goto B6bfadd;
case 0x6bfadf:goto L6bfadf;
case 0x6bfae2:c.instructions+=7;goto B6bfae2;
case 0x6bfae8:c.instructions+=6;goto B6bfae8;
case 0x6bfaeb:c.instructions+=5;goto B6bfaeb;
case 0x6bfaf1:c.instructions+=4;goto B6bfaf1;
case 0x6bfaf3:c.instructions+=3;goto B6bfaf3;
case 0x6bfaf5:c.instructions+=2;goto B6bfaf5;
case 0x6bfafa:c.instructions+=1;goto B6bfafa;
case 0x6bfafc:goto L6bfafc;
case 0x6bfafe:c.instructions+=1;goto B6bfafe;
case 0x6bfb03:goto L6bfb03;
case 0x6bfb05:c.instructions+=1;goto B6bfb05;
case 0x6bfb0b:goto L6bfb0b;
case 0x6bfb0c:c.instructions+=2;goto B6bfb0c;
case 0x6bfb0f:c.instructions+=1;goto B6bfb0f;
case 0x6bfb11:goto L6bfb11;
case 0x6bfb13:c.instructions+=1;goto B6bfb13;
case 0x6bfb18:goto L6bfb18;
case 0x6bfb1a:c.instructions+=2;goto B6bfb1a;
case 0x6bfb1d:c.instructions+=1;goto B6bfb1d;
case 0x6bfb1f:goto L6bfb1f;
case 0x6bfb22:c.instructions+=7;goto B6bfb22;
case 0x6bfb28:c.instructions+=6;goto B6bfb28;
case 0x6bfb2b:c.instructions+=5;goto B6bfb2b;
case 0x6bfb31:c.instructions+=4;goto B6bfb31;
case 0x6bfb33:c.instructions+=3;goto B6bfb33;
case 0x6bfb35:c.instructions+=2;goto B6bfb35;
case 0x6bfb3a:c.instructions+=1;goto B6bfb3a;
case 0x6bfb3c:goto L6bfb3c;
case 0x6bfb41:c.instructions+=1;goto B6bfb41;
case 0x6bfb43:goto L6bfb43;
case 0x6bfb48:c.instructions+=1;goto B6bfb48;
case 0x6bfb4a:goto L6bfb4a;
case 0x6bfb4f:c.instructions+=1;goto B6bfb4f;
case 0x6bfb51:goto L6bfb51;
case 0x6bfb56:c.instructions+=1;goto B6bfb56;
case 0x6bfb58:goto L6bfb58;
case 0x6bfb5a:c.instructions+=1;goto B6bfb5a;
case 0x6bfb5f:goto L6bfb5f;
case 0x6bfb61:c.instructions+=1;goto B6bfb61;
case 0x6bfb67:goto L6bfb67;
case 0x6bfb68:c.instructions+=2;goto B6bfb68;
case 0x6bfb6b:c.instructions+=1;goto B6bfb6b;
case 0x6bfb6d:goto L6bfb6d;
case 0x6bfb71:c.instructions+=1;goto B6bfb71;
case 0x6bfb77:goto L6bfb77;
case 0x6bfb7b:goto L6bfb7b;
case 0x6bfb7f:c.instructions+=1;goto B6bfb7f;
case 0x6bfb81:goto L6bfb81;
case 0x6bfb84:c.instructions+=4;goto B6bfb84;
case 0x6bfb86:c.instructions+=3;goto B6bfb86;
case 0x6bfb88:c.instructions+=2;goto B6bfb88;
case 0x6bfb8f:c.instructions+=1;goto B6bfb8f;
case 0x6bfb91:goto L6bfb91;
case 0x6bfb94:c.instructions+=4;goto B6bfb94;
case 0x6bfb97:c.instructions+=3;goto B6bfb97;
case 0x6bfb99:c.instructions+=2;goto B6bfb99;
case 0x6bfb9f:c.instructions+=1;goto B6bfb9f;
case 0x6bfba4:goto L6bfba4;
case 0x6bfba6:c.instructions+=1;goto B6bfba6;
case 0x6bfbac:goto L6bfbac;
case 0x6bfbae:goto L6bfbae;
case 0x6bfbb2:goto L6bfbb2;
case 0x6bfbb8:c.instructions+=2;goto B6bfbb8;
case 0x6bfbba:c.instructions+=1;goto B6bfbba;
case 0x6bfbbf:goto L6bfbbf;
case 0x6bfbc1:c.instructions+=1;goto B6bfbc1;
case 0x6bfbc7:goto L6bfbc7;
case 0x6bfbcd:c.instructions+=4;goto B6bfbcd;
case 0x6bfbd0:c.instructions+=3;goto B6bfbd0;
case 0x6bfbd1:c.instructions+=2;goto B6bfbd1;
case 0x6bfbd3:c.instructions+=1;goto B6bfbd3;
case 0x6bfbd5:goto L6bfbd5;
case 0x6bfbd7:c.instructions+=1;goto B6bfbd7;
case 0x6bfbdc:goto L6bfbdc;
case 0x6bfbde:c.instructions+=1;goto B6bfbde;
case 0x6bfbe4:goto L6bfbe4;
case 0x6bfbe7:c.instructions+=2;goto B6bfbe7;
case 0x6bfbeb:c.instructions+=1;goto B6bfbeb;
case 0x6bfbed:goto L6bfbed;
case 0x6bfbf1:c.instructions+=1;goto B6bfbf1;
case 0x6bfbf7:goto L6bfbf7;
case 0x6bfbfa:c.instructions+=4;goto B6bfbfa;
case 0x6bfbfc:c.instructions+=3;goto B6bfbfc;
case 0x6bfbfe:c.instructions+=2;goto B6bfbfe;
case 0x6bfc05:c.instructions+=1;goto B6bfc05;
case 0x6bfc07:goto L6bfc07;
case 0x6bfc0a:c.instructions+=4;goto B6bfc0a;
case 0x6bfc0d:c.instructions+=3;goto B6bfc0d;
case 0x6bfc0f:c.instructions+=2;goto B6bfc0f;
case 0x6bfc15:c.instructions+=1;goto B6bfc15;
case 0x6bfc1a:goto L6bfc1a;
case 0x6bfc1c:c.instructions+=1;goto B6bfc1c;
case 0x6bfc1e:goto L6bfc1e;
case 0x6bfc20:goto L6bfc20;
case 0x6bfc26:c.instructions+=5;goto B6bfc26;
case 0x6bfc2b:c.instructions+=4;goto B6bfc2b;
case 0x6bfc30:c.instructions+=3;goto B6bfc30;
case 0x6bfc33:c.instructions+=2;goto B6bfc33;
case 0x6bfc34:c.instructions+=1;goto B6bfc34;
case 0x6bfc39:goto L6bfc39;
case 0x6bfc3c:c.instructions+=1;goto B6bfc3c;
case 0x6bfc40:goto L6bfc40;
case 0x6bfc46:c.instructions+=2;goto B6bfc46;
case 0x6bfc48:c.instructions+=1;goto B6bfc48;
case 0x6bfc4d:goto L6bfc4d;
case 0x6bfc4f:c.instructions+=1;goto B6bfc4f;
case 0x6bfc51:goto L6bfc51;
case 0x6bfc57:c.instructions+=4;goto B6bfc57;
case 0x6bfc5a:c.instructions+=3;goto B6bfc5a;
case 0x6bfc5b:c.instructions+=2;goto B6bfc5b;
case 0x6bfc5d:c.instructions+=1;goto B6bfc5d;
case 0x6bfc5f:goto L6bfc5f;
case 0x6bfc61:c.instructions+=1;goto B6bfc61;
case 0x6bfc66:goto L6bfc66;
case 0x6bfc68:c.instructions+=1;goto B6bfc68;
case 0x6bfc6a:goto L6bfc6a;
case 0x6bfc6e:c.instructions+=1;goto B6bfc6e;
case 0x6bfc70:goto L6bfc70;
case 0x6bfc75:c.instructions+=1;goto B6bfc75;
case 0x6bfc77:goto L6bfc77;
case 0x6bfc7b:c.instructions+=1;goto B6bfc7b;
case 0x6bfc7d:goto L6bfc7d;
case 0x6bfc7f:c.instructions+=1;goto B6bfc7f;
case 0x6bfc84:goto L6bfc84;
case 0x6bfc86:c.instructions+=1;goto B6bfc86;
case 0x6bfc88:goto L6bfc88;
case 0x6bfc8a:c.instructions+=1;goto B6bfc8a;
case 0x6bfc8f:goto L6bfc8f;
case 0x6bfc91:c.instructions+=1;goto B6bfc91;
case 0x6bfc96:goto L6bfc96;
case 0x6bfc98:c.instructions+=1;goto B6bfc98;
case 0x6bfc9a:goto L6bfc9a;
case 0x6bfc9c:goto L6bfc9c;
case 0x6bfc9d:c.instructions+=4;goto B6bfc9d;
case 0x6bfc9e:c.instructions+=3;goto B6bfc9e;
case 0x6bfc9f:c.instructions+=2;goto B6bfc9f;
case 0x6bfca0:c.instructions+=1;goto B6bfca0;
case 0x6bfca1:goto L6bfca1;
case 0x6bfca3:c.instructions+=9;goto B6bfca3;
case 0x6bfca4:c.instructions+=8;goto B6bfca4;
case 0x6bfca6:c.instructions+=7;goto B6bfca6;
case 0x6bfcac:c.instructions+=6;goto B6bfcac;
case 0x6bfcad:c.instructions+=5;goto B6bfcad;
case 0x6bfcb0:c.instructions+=4;goto B6bfcb0;
case 0x6bfcb2:c.instructions+=3;goto B6bfcb2;
case 0x6bfcb3:c.instructions+=2;goto B6bfcb3;
case 0x6bfcb5:c.instructions+=1;goto B6bfcb5;
case 0x6bfcb7:goto L6bfcb7;
case 0x6bfcb9:c.instructions+=2;goto B6bfcb9;
case 0x6bfcba:c.instructions+=1;goto B6bfcba;
case 0x6bfcbf:goto L6bfcbf;
case 0x6bfcc1:c.instructions+=3;goto B6bfcc1;
case 0x6bfcc3:c.instructions+=2;goto B6bfcc3;
case 0x6bfcc9:c.instructions+=1;goto B6bfcc9;
case 0x6bfccb:goto L6bfccb;
case 0x6bfcd1:c.instructions+=1;goto B6bfcd1;
case 0x6bfcd3:goto L6bfcd3;
case 0x6bfcd5:c.instructions+=1;goto B6bfcd5;
case 0x6bfcda:goto L6bfcda;
case 0x6bfcdf:c.instructions+=8;goto B6bfcdf;
case 0x6bfce0:c.instructions+=7;goto B6bfce0;
case 0x6bfce2:c.instructions+=6;goto B6bfce2;
case 0x6bfce5:c.instructions+=5;goto B6bfce5;
case 0x6bfce7:c.instructions+=4;goto B6bfce7;
case 0x6bfce9:c.instructions+=3;goto B6bfce9;
case 0x6bfcef:c.instructions+=2;goto B6bfcef;
case 0x6bfcf2:c.instructions+=1;goto B6bfcf2;
case 0x6bfcf4:goto L6bfcf4;
case 0x6bfcfa:c.instructions+=1;goto B6bfcfa;
case 0x6bfcfc:goto L6bfcfc;
case 0x6bfd02:c.instructions+=1;goto B6bfd02;
case 0x6bfd04:goto L6bfd04;
case 0x6bfd0b:goto L6bfd0b;
case 0x6bfd0f:c.instructions+=1;goto B6bfd0f;
case 0x6bfd15:goto L6bfd15;
case 0x6bfd1b:c.instructions+=16;goto B6bfd1b;
case 0x6bfd21:c.instructions+=15;goto B6bfd21;
case 0x6bfd24:c.instructions+=14;goto B6bfd24;
case 0x6bfd27:c.instructions+=13;goto B6bfd27;
case 0x6bfd2c:c.instructions+=12;goto B6bfd2c;
case 0x6bfd2f:c.instructions+=11;goto B6bfd2f;
case 0x6bfd34:c.instructions+=10;goto B6bfd34;
case 0x6bfd37:c.instructions+=9;goto B6bfd37;
case 0x6bfd3c:c.instructions+=8;goto B6bfd3c;
case 0x6bfd47:c.instructions+=7;goto B6bfd47;
case 0x6bfd49:c.instructions+=6;goto B6bfd49;
case 0x6bfd4c:c.instructions+=5;goto B6bfd4c;
case 0x6bfd57:c.instructions+=4;goto B6bfd57;
case 0x6bfd62:c.instructions+=3;goto B6bfd62;
case 0x6bfd65:c.instructions+=2;goto B6bfd65;
case 0x6bfd68:c.instructions+=1;goto B6bfd68;
case 0x6bfd6e:goto L6bfd6e;
case 0x6bfd70:c.instructions+=3;goto B6bfd70;
case 0x6bfd73:c.instructions+=2;goto B6bfd73;
case 0x6bfd76:c.instructions+=1;goto B6bfd76;
case 0x6bfd79:goto L6bfd79;
case 0x6bfd7c:c.instructions+=10;goto B6bfd7c;
case 0x6bfd7f:c.instructions+=9;goto B6bfd7f;
case 0x6bfd82:c.instructions+=8;goto B6bfd82;
case 0x6bfd85:c.instructions+=7;goto B6bfd85;
case 0x6bfd88:c.instructions+=6;goto B6bfd88;
case 0x6bfd8b:c.instructions+=5;goto B6bfd8b;
case 0x6bfd8e:c.instructions+=4;goto B6bfd8e;
case 0x6bfd91:c.instructions+=3;goto B6bfd91;
case 0x6bfd93:c.instructions+=2;goto B6bfd93;
case 0x6bfd99:c.instructions+=1;goto B6bfd99;
case 0x6bfd9b:goto L6bfd9b;
case 0x6bfd9d:c.instructions+=1;goto B6bfd9d;
case 0x6bfd9f:goto L6bfd9f;
case 0x6bfda2:c.instructions+=1;goto B6bfda2;
case 0x6bfda4:goto L6bfda4;
case 0x6bfda6:c.instructions+=1;goto B6bfda6;
case 0x6bfda8:goto L6bfda8;
case 0x6bfdae:c.instructions+=1;goto B6bfdae;
case 0x6bfdb0:goto L6bfdb0;
case 0x6bfdb2:c.instructions+=1;goto B6bfdb2;
case 0x6bfdb4:goto L6bfdb4;
case 0x6bfdb6:c.instructions+=1;goto B6bfdb6;
case 0x6bfdb8:goto L6bfdb8;
case 0x6bfdbb:c.instructions+=3;goto B6bfdbb;
case 0x6bfdbd:c.instructions+=2;goto B6bfdbd;
case 0x6bfdbf:c.instructions+=1;goto B6bfdbf;
case 0x6bfdc2:goto L6bfdc2;
case 0x6bfdc7:c.instructions+=1;goto B6bfdc7;
case 0x6bfdc9:goto L6bfdc9;
case 0x6bfdcf:c.instructions+=1;goto B6bfdcf;
case 0x6bfdd1:goto L6bfdd1;
case 0x6bfdd7:goto L6bfdd7;
case 0x6bfddb:c.instructions+=3;goto B6bfddb;
case 0x6bfddf:c.instructions+=2;goto B6bfddf;
case 0x6bfde2:c.instructions+=1;goto B6bfde2;
case 0x6bfde4:goto L6bfde4;
case 0x6bfde7:c.instructions+=1;goto B6bfde7;
case 0x6bfdea:goto L6bfdea;
case 0x6bfdec:c.instructions+=4;goto B6bfdec;
case 0x6bfdef:c.instructions+=3;goto B6bfdef;
case 0x6bfdf2:c.instructions+=2;goto B6bfdf2;
case 0x6bfdf5:c.instructions+=1;goto B6bfdf5;
case 0x6bfdf7:goto L6bfdf7;
case 0x6bfdfa:c.instructions+=2;goto B6bfdfa;
case 0x6bfdfd:c.instructions+=1;goto B6bfdfd;
case 0x6bfdff:goto L6bfdff;
case 0x6bfe02:c.instructions+=2;goto B6bfe02;
case 0x6bfe05:c.instructions+=1;goto B6bfe05;
case 0x6bfe07:goto L6bfe07;
case 0x6bfe0a:c.instructions+=4;goto B6bfe0a;
case 0x6bfe0d:c.instructions+=3;goto B6bfe0d;
case 0x6bfe10:c.instructions+=2;goto B6bfe10;
case 0x6bfe13:c.instructions+=1;goto B6bfe13;
case 0x6bfe15:goto L6bfe15;
case 0x6bfe18:goto L6bfe18;
case 0x6bfe1b:c.instructions+=2;goto B6bfe1b;
case 0x6bfe1e:c.instructions+=1;goto B6bfe1e;
case 0x6bfe20:goto L6bfe20;
case 0x6bfe23:c.instructions+=6;goto B6bfe23;
case 0x6bfe26:c.instructions+=5;goto B6bfe26;
case 0x6bfe2a:c.instructions+=4;goto B6bfe2a;
case 0x6bfe2c:c.instructions+=3;goto B6bfe2c;
case 0x6bfe2e:c.instructions+=2;goto B6bfe2e;
case 0x6bfe35:c.instructions+=1;goto B6bfe35;
case 0x6bfe37:goto L6bfe37;
case 0x6bfe3d:c.instructions+=3;goto B6bfe3d;
case 0x6bfe42:c.instructions+=2;goto B6bfe42;
case 0x6bfe47:c.instructions+=1;goto B6bfe47;
case 0x6bfe49:goto L6bfe49;
case 0x6bfe4c:c.instructions+=2;goto B6bfe4c;
case 0x6bfe4f:c.instructions+=1;goto B6bfe4f;
case 0x6bfe51:goto L6bfe51;
case 0x6bfe54:c.instructions+=2;goto B6bfe54;
case 0x6bfe58:c.instructions+=1;goto B6bfe58;
case 0x6bfe5a:goto L6bfe5a;
case 0x6bfe5d:c.instructions+=6;goto B6bfe5d;
case 0x6bfe60:c.instructions+=5;goto B6bfe60;
case 0x6bfe61:c.instructions+=4;goto B6bfe61;
case 0x6bfe64:c.instructions+=3;goto B6bfe64;
case 0x6bfe67:c.instructions+=2;goto B6bfe67;
case 0x6bfe6a:c.instructions+=1;goto B6bfe6a;
case 0x6bfe70:goto L6bfe70;
case 0x6bfe72:goto L6bfe72;
case 0x6bfe73:goto L6bfe73;
case 0x6bfe74:c.instructions+=3;goto B6bfe74;
case 0x6bfe75:c.instructions+=2;goto B6bfe75;
case 0x6bfe76:c.instructions+=1;goto B6bfe76;
case 0x6bfe79:goto L6bfe79;
case 0x6bfe7c:c.instructions+=2;goto B6bfe7c;
case 0x6bfe7e:c.instructions+=1;goto B6bfe7e;
case 0x6bfe80:goto L6bfe80;
case 0x6bfe82:goto L6bfe82;
case 0x6bfe84:c.instructions+=2;goto B6bfe84;
case 0x6bfe85:c.instructions+=1;goto B6bfe85;
case 0x6bfe87:goto L6bfe87;
case 0x6bfe8d:c.instructions+=3;goto B6bfe8d;
case 0x6bfe92:c.instructions+=2;goto B6bfe92;
case 0x6bfe97:c.instructions+=1;goto B6bfe97;
case 0x6bfe99:goto L6bfe99;
case 0x6bfe9f:c.instructions+=2;goto B6bfe9f;
case 0x6bfea5:c.instructions+=1;goto B6bfea5;
case 0x6bfea7:goto L6bfea7;
case 0x6bfea9:c.instructions+=1;goto B6bfea9;
case 0x6bfeaa:goto L6bfeaa;
case 0x6bfeab:c.instructions+=6;goto B6bfeab;
case 0x6bfeac:c.instructions+=5;goto B6bfeac;
case 0x6bfead:c.instructions+=4;goto B6bfead;
case 0x6bfeb0:c.instructions+=3;goto B6bfeb0;
case 0x6bfeb2:c.instructions+=2;goto B6bfeb2;
case 0x6bfeb4:c.instructions+=1;goto B6bfeb4;
case 0x6bfeb6:goto L6bfeb6;
case 0x6bfeb9:c.instructions+=1;goto B6bfeb9;
case 0x6bfebc:goto L6bfebc;
case 0x6bfebe:c.instructions+=3;goto B6bfebe;
case 0x6bfec1:c.instructions+=2;goto B6bfec1;
case 0x6bfec5:c.instructions+=1;goto B6bfec5;
case 0x6bfec7:goto L6bfec7;
case 0x6bfec8:c.instructions+=3;goto B6bfec8;
case 0x6bfecb:c.instructions+=2;goto B6bfecb;
case 0x6bfecd:c.instructions+=1;goto B6bfecd;
case 0x6bfecf:goto L6bfecf;
case 0x6bfed1:goto L6bfed1;
case 0x6bfed4:c.instructions+=1;goto B6bfed4;
case 0x6bfed9:goto L6bfed9;
case 0x6bfedb:c.instructions+=1;goto B6bfedb;
case 0x6bfedd:goto L6bfedd;
case 0x6bfedf:goto L6bfedf;
case 0x6bfee0:c.instructions+=3;goto B6bfee0;
case 0x6bfee1:c.instructions+=2;goto B6bfee1;
case 0x6bfee2:c.instructions+=1;goto B6bfee2;
case 0x6bfee3:goto L6bfee3;
case 0x6bfee5:c.instructions+=7;goto B6bfee5;
case 0x6bfee6:c.instructions+=6;goto B6bfee6;
case 0x6bfee7:c.instructions+=5;goto B6bfee7;
case 0x6bfee8:c.instructions+=4;goto B6bfee8;
case 0x6bfeea:c.instructions+=3;goto B6bfeea;
case 0x6bfeec:c.instructions+=2;goto B6bfeec;
case 0x6bfeef:c.instructions+=1;goto B6bfeef;
case 0x6bfef1:goto L6bfef1;
case 0x6bfef4:c.instructions+=5;goto B6bfef4;
case 0x6bfefa:c.instructions+=4;goto B6bfefa;
case 0x6bfefd:c.instructions+=3;goto B6bfefd;
case 0x6bfeff:c.instructions+=2;goto B6bfeff;
case 0x6bff05:c.instructions+=1;goto B6bff05;
case 0x6bff0a:goto L6bff0a;
case 0x6bff0b:c.instructions+=2;goto B6bff0b;
case 0x6bff0e:c.instructions+=1;goto B6bff0e;
case 0x6bff10:goto L6bff10;
case 0x6bff12:c.instructions+=2;goto B6bff12;
case 0x6bff15:c.instructions+=1;goto B6bff15;
case 0x6bff1b:goto L6bff1b;
case 0x6bff20:c.instructions+=7;goto B6bff20;
case 0x6bff23:c.instructions+=6;goto B6bff23;
case 0x6bff29:c.instructions+=5;goto B6bff29;
case 0x6bff2c:c.instructions+=4;goto B6bff2c;
case 0x6bff32:c.instructions+=3;goto B6bff32;
case 0x6bff35:c.instructions+=2;goto B6bff35;
case 0x6bff37:c.instructions+=1;goto B6bff37;
case 0x6bff39:goto L6bff39;
case 0x6bff3d:c.instructions+=1;goto B6bff3d;
case 0x6bff3f:goto L6bff3f;
case 0x6bff42:c.instructions+=1;goto B6bff42;
case 0x6bff48:goto L6bff48;
case 0x6bff4a:c.instructions+=1;goto B6bff4a;
case 0x6bff4f:goto L6bff4f;
case 0x6bff51:c.instructions+=1;goto B6bff51;
case 0x6bff57:goto L6bff57;
case 0x6bff5d:c.instructions+=4;goto B6bff5d;
case 0x6bff5f:c.instructions+=3;goto B6bff5f;
case 0x6bff64:c.instructions+=2;goto B6bff64;
case 0x6bff66:c.instructions+=1;goto B6bff66;
case 0x6bff6c:goto L6bff6c;
case 0x6bff72:goto L6bff72;
case 0x6bff77:c.instructions+=2;goto B6bff77;
case 0x6bff79:c.instructions+=1;goto B6bff79;
case 0x6bff7f:goto L6bff7f;
case 0x6bff85:goto L6bff85;
case 0x6bff8a:c.instructions+=2;goto B6bff8a;
case 0x6bff8c:c.instructions+=1;goto B6bff8c;
case 0x6bff92:goto L6bff92;
case 0x6bff94:goto L6bff94;
case 0x6bff96:c.instructions+=1;goto B6bff96;
case 0x6bff98:goto L6bff98;
case 0x6bff9d:c.instructions+=1;goto B6bff9d;
case 0x6bffa3:goto L6bffa3;
case 0x6bffa8:c.instructions+=1;goto B6bffa8;
case 0x6bffaa:goto L6bffaa;
case 0x6bffaf:c.instructions+=1;goto B6bffaf;
case 0x6bffb1:goto L6bffb1;
case 0x6bffb6:c.instructions+=1;goto B6bffb6;
case 0x6bffb8:goto L6bffb8;
case 0x6bffbd:c.instructions+=1;goto B6bffbd;
case 0x6bffbf:goto L6bffbf;
case 0x6bffc4:c.instructions+=1;goto B6bffc4;
case 0x6bffca:goto L6bffca;
case 0x6bffcc:c.instructions+=1;goto B6bffcc;
case 0x6bffd1:goto L6bffd1;
case 0x6bffd6:goto L6bffd6;
case 0x6bffd8:c.instructions+=1;goto B6bffd8;
case 0x6bffdd:goto L6bffdd;
case 0x6bffe2:goto L6bffe2;
case 0x6bffe4:c.instructions+=1;goto B6bffe4;
case 0x6bffe9:goto L6bffe9;
case 0x6bffee:goto L6bffee;
case 0x6bfff0:c.instructions+=1;goto B6bfff0;
case 0x6bfff5:goto L6bfff5;
case 0x6bfffa:goto L6bfffa;
case 0x6bfffc:c.instructions+=1;goto B6bfffc;
default:missing_instruction(c.pc);}
B6bf000:L6bf000:{c.instructions+=3;NFSU2_TR(0x6bf000);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf002:{NFSU2_TR(0x6bf002);
__builtin_memmove((R+4),(R+24),4);
}
B6bf004:{NFSU2_TR(0x6bf004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf009ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bf009:L6bf009:{c.instructions+=2;NFSU2_TR(0x6bf009);
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
B6bf00b:{NFSU2_TR(0x6bf00b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf06b;}}
}
B6bf00d:L6bf00d:{c.instructions+=16;NFSU2_TR(0x6bf00d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf00e:{NFSU2_TR(0x6bf00e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf00f:{NFSU2_TR(0x6bf00f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf010:{NFSU2_TR(0x6bf010);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf011:{NFSU2_TR(0x6bf011);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf013:{NFSU2_TR(0x6bf013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf014:{NFSU2_TR(0x6bf014);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf015:{NFSU2_TR(0x6bf015);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bf018:{NFSU2_TR(0x6bf018);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf019:{NFSU2_TR(0x6bf019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf01f:{NFSU2_TR(0x6bf01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf022:{NFSU2_TR(0x6bf022);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf024:{NFSU2_TR(0x6bf024);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bf026:{NFSU2_TR(0x6bf026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf027:{NFSU2_TR(0x6bf027);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf029:{NFSU2_TR(0x6bf029);
{goto L6bf049;}
}
B6bf02b:L6bf02b:{c.instructions+=16;NFSU2_TR(0x6bf02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf031:{NFSU2_TR(0x6bf031);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf034:{NFSU2_TR(0x6bf034);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf037:{NFSU2_TR(0x6bf037);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf038:{NFSU2_TR(0x6bf038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf039:{NFSU2_TR(0x6bf039);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf03a:{NFSU2_TR(0x6bf03a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf03b:{NFSU2_TR(0x6bf03b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf03d:{NFSU2_TR(0x6bf03d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf03e:{NFSU2_TR(0x6bf03e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf03f:{NFSU2_TR(0x6bf03f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6bf041:{NFSU2_TR(0x6bf041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf042:{NFSU2_TR(0x6bf042);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf044:{NFSU2_TR(0x6bf044);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6bf046:{NFSU2_TR(0x6bf046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf047:{NFSU2_TR(0x6bf047);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf049:L6bf049:{c.instructions+=2;NFSU2_TR(0x6bf049);
__builtin_memmove((R+4),(R+24),4);
}
B6bf04b:{NFSU2_TR(0x6bf04b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf050ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bf050:L6bf050:{c.instructions+=2;NFSU2_TR(0x6bf050);
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
B6bf052:{NFSU2_TR(0x6bf052);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf06b;}}
}
B6bf054:L6bf054:{c.instructions+=5;NFSU2_TR(0x6bf054);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf057:{NFSU2_TR(0x6bf057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf05d:{NFSU2_TR(0x6bf05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf060:{NFSU2_TR(0x6bf060);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bf063:{NFSU2_TR(0x6bf063);
if(r1(R+512)){TAIL_STATIC(0x6bef6fu,6be);}
}
B6bf069:L6bf069:{c.instructions+=1;NFSU2_TR(0x6bf069);
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
B6bf06b:L6bf06b:{c.instructions+=5;NFSU2_TR(0x6bf06b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bf06c:{NFSU2_TR(0x6bf06c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bf06d:{NFSU2_TR(0x6bf06d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bf06e:{NFSU2_TR(0x6bf06e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bf06f:{NFSU2_TR(0x6bf06f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bf070:L6bf070:{c.instructions+=14;NFSU2_TR(0x6bf070);
__builtin_memmove((R+28),(R+28),4);
}
B6bf072:{NFSU2_TR(0x6bf072);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf073:{NFSU2_TR(0x6bf073);
__builtin_memmove((R+20),(R+16),4);
}
B6bf075:{NFSU2_TR(0x6bf075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6bf078:{NFSU2_TR(0x6bf078);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf079:{NFSU2_TR(0x6bf079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf07a:{NFSU2_TR(0x6bf07a);
__builtin_memmove((R+24),(R+4),4);
}
B6bf07c:{NFSU2_TR(0x6bf07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf082:{NFSU2_TR(0x6bf082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf085:{NFSU2_TR(0x6bf085);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf086:{NFSU2_TR(0x6bf086);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bf088:{NFSU2_TR(0x6bf088);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf08a:{NFSU2_TR(0x6bf08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf08d:{NFSU2_TR(0x6bf08d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf0ab;}}
}
B6bf08f:L6bf08f:{c.instructions+=2;NFSU2_TR(0x6bf08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf092:{NFSU2_TR(0x6bf092);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf095:L6bf095:{c.instructions+=4;NFSU2_TR(0x6bf095);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6bf097:{NFSU2_TR(0x6bf097);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6bf09a:{NFSU2_TR(0x6bf09a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bf09e:{NFSU2_TR(0x6bf09e);
if(r1(R+518)){{goto L6bf0ab;}}
}
B6bf0a0:L6bf0a0:{c.instructions+=4;NFSU2_TR(0x6bf0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf0a3:{NFSU2_TR(0x6bf0a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bf0a6:{NFSU2_TR(0x6bf0a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6bf0a9:{NFSU2_TR(0x6bf0a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf095u);}goto L6bf095;}}
}
B6bf0ab:L6bf0ab:{c.instructions+=2;NFSU2_TR(0x6bf0ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6bf0ae:{NFSU2_TR(0x6bf0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bf0c8;}}
}
B6bf0b0:L6bf0b0:{c.instructions+=9;NFSU2_TR(0x6bf0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf0b6:{NFSU2_TR(0x6bf0b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf0b7:{NFSU2_TR(0x6bf0b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf0b8:{NFSU2_TR(0x6bf0b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0bb:{NFSU2_TR(0x6bf0bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0be:{NFSU2_TR(0x6bf0be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0c1:{NFSU2_TR(0x6bf0c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0c4:{NFSU2_TR(0x6bf0c4);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf0c6:{NFSU2_TR(0x6bf0c6);
{goto L6bf0f0;}
}
B6bf0c8:L6bf0c8:{c.instructions+=5;NFSU2_TR(0x6bf0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf0ce:{NFSU2_TR(0x6bf0ce);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bf0d3:{NFSU2_TR(0x6bf0d3);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6bf0d8:{NFSU2_TR(0x6bf0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf0de:{NFSU2_TR(0x6bf0de);
if(r1(R+512)){{goto L6bf0fc;}}
}
B6bf0e0:L6bf0e0:{c.instructions+=7;NFSU2_TR(0x6bf0e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf0e1:{NFSU2_TR(0x6bf0e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf0e2:{NFSU2_TR(0x6bf0e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0e5:{NFSU2_TR(0x6bf0e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0e8:{NFSU2_TR(0x6bf0e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0eb:{NFSU2_TR(0x6bf0eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf0ee:{NFSU2_TR(0x6bf0ee);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf0f0:L6bf0f0:{c.instructions+=2;NFSU2_TR(0x6bf0f0);
__builtin_memmove((R+4),(R+24),4);
}
B6bf0f2:{NFSU2_TR(0x6bf0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf0f7ull));
TAIL_STATIC(0x6d3382u,6d3);
}
B6bf0f7:L6bf0f7:{c.instructions+=1;NFSU2_TR(0x6bf0f7);
{goto L6bf275;}
}
B6bf0fc:L6bf0fc:{c.instructions+=4;NFSU2_TR(0x6bf0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf0ff:{NFSU2_TR(0x6bf0ff);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bf102:{NFSU2_TR(0x6bf102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf105:{NFSU2_TR(0x6bf105);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf19b;}}
}
B6bf10b:L6bf10b:{c.instructions+=9;NFSU2_TR(0x6bf10b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf10d:{NFSU2_TR(0x6bf10d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf10e:{NFSU2_TR(0x6bf10e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf10f:{NFSU2_TR(0x6bf10f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf111:{NFSU2_TR(0x6bf111);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf114:{NFSU2_TR(0x6bf114);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf115:{NFSU2_TR(0x6bf115);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf11b:{NFSU2_TR(0x6bf11b);
__builtin_memmove((R+4),(R+24),4);
}
B6bf11d:{NFSU2_TR(0x6bf11d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf123ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf123:L6bf123:{c.instructions+=2;NFSU2_TR(0x6bf123);
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
B6bf125:{NFSU2_TR(0x6bf125);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf275;}}
}
B6bf12b:L6bf12b:{c.instructions+=17;NFSU2_TR(0x6bf12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf131:{NFSU2_TR(0x6bf131);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf132:{NFSU2_TR(0x6bf132);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf133:{NFSU2_TR(0x6bf133);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf134:{NFSU2_TR(0x6bf134);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf135:{NFSU2_TR(0x6bf135);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bf137:{NFSU2_TR(0x6bf137);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bf138:{NFSU2_TR(0x6bf138);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf139:{NFSU2_TR(0x6bf139);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf13a:{NFSU2_TR(0x6bf13a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf13b:{NFSU2_TR(0x6bf13b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf13e:{NFSU2_TR(0x6bf13e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bf141:{NFSU2_TR(0x6bf141);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf142:{NFSU2_TR(0x6bf142);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf143:{NFSU2_TR(0x6bf143);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf145:{NFSU2_TR(0x6bf145);
__builtin_memmove((R+4),(R+24),4);
}
B6bf147:{NFSU2_TR(0x6bf147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf14cull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bf14c:L6bf14c:{c.instructions+=2;NFSU2_TR(0x6bf14c);
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
B6bf14e:{NFSU2_TR(0x6bf14e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf275;}}
}
B6bf154:L6bf154:{c.instructions+=4;NFSU2_TR(0x6bf154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf15a:{NFSU2_TR(0x6bf15a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf15c:{NFSU2_TR(0x6bf15c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf15f:{NFSU2_TR(0x6bf15f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf16e;}}
}
B6bf161:L6bf161:{c.instructions+=5;NFSU2_TR(0x6bf161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf164:{NFSU2_TR(0x6bf164);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bf168:{NFSU2_TR(0x6bf168);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf169:{NFSU2_TR(0x6bf169);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bf16c:{NFSU2_TR(0x6bf16c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf161u);}goto L6bf161;}}
}
B6bf16e:L6bf16e:{c.instructions+=16;NFSU2_TR(0x6bf16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf174:{NFSU2_TR(0x6bf174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf177:{NFSU2_TR(0x6bf177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf178:{NFSU2_TR(0x6bf178);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf179:{NFSU2_TR(0x6bf179);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf17a:{NFSU2_TR(0x6bf17a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf17b:{NFSU2_TR(0x6bf17b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf17c:{NFSU2_TR(0x6bf17c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf17d:{NFSU2_TR(0x6bf17d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf17e:{NFSU2_TR(0x6bf17e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bf181:{NFSU2_TR(0x6bf181);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf182:{NFSU2_TR(0x6bf182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf183:{NFSU2_TR(0x6bf183);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf186:{NFSU2_TR(0x6bf186);
__builtin_memmove((R+4),(R+24),4);
}
B6bf188:{NFSU2_TR(0x6bf188);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf189:{NFSU2_TR(0x6bf189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf18eull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bf18e:L6bf18e:{c.instructions+=2;NFSU2_TR(0x6bf18e);
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
B6bf190:{NFSU2_TR(0x6bf190);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6bf273;}}
}
B6bf196:L6bf196:{c.instructions+=1;NFSU2_TR(0x6bf196);
{goto L6bf275;}
}
B6bf19b:L6bf19b:{c.instructions+=3;NFSU2_TR(0x6bf19b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf19d:{NFSU2_TR(0x6bf19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf1a0:{NFSU2_TR(0x6bf1a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf273;}}
}
B6bf1a6:L6bf1a6:{c.instructions+=2;NFSU2_TR(0x6bf1a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bf1a8:{NFSU2_TR(0x6bf1a8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bf1a9:L6bf1a9:{c.instructions+=9;NFSU2_TR(0x6bf1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf1ac:{NFSU2_TR(0x6bf1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf1b2:{NFSU2_TR(0x6bf1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf1b5:{NFSU2_TR(0x6bf1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf1b8:{NFSU2_TR(0x6bf1b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bf1bb:{NFSU2_TR(0x6bf1bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf1be:{NFSU2_TR(0x6bf1be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf1c1:{NFSU2_TR(0x6bf1c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf1c5:{NFSU2_TR(0x6bf1c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf1e5;}}
}
B6bf1c7:L6bf1c7:{c.instructions+=17;NFSU2_TR(0x6bf1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf1cd:{NFSU2_TR(0x6bf1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf1d0:{NFSU2_TR(0x6bf1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf1d3:{NFSU2_TR(0x6bf1d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1d4:{NFSU2_TR(0x6bf1d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1d5:{NFSU2_TR(0x6bf1d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1d6:{NFSU2_TR(0x6bf1d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1d7:{NFSU2_TR(0x6bf1d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1d8:{NFSU2_TR(0x6bf1d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1d9:{NFSU2_TR(0x6bf1d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1da:{NFSU2_TR(0x6bf1da);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6bf1dc:{NFSU2_TR(0x6bf1dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1dd:{NFSU2_TR(0x6bf1dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1de:{NFSU2_TR(0x6bf1de);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6bf1e0:{NFSU2_TR(0x6bf1e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1e1:{NFSU2_TR(0x6bf1e1);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1e3:{NFSU2_TR(0x6bf1e3);
{goto L6bf253;}
}
B6bf1e5:L6bf1e5:{c.instructions+=2;NFSU2_TR(0x6bf1e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bf1e8:{NFSU2_TR(0x6bf1e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf209;}}
}
B6bf1ea:L6bf1ea:{c.instructions+=9;NFSU2_TR(0x6bf1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf1ec:{NFSU2_TR(0x6bf1ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1ed:{NFSU2_TR(0x6bf1ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1ee:{NFSU2_TR(0x6bf1ee);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1f0:{NFSU2_TR(0x6bf1f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf1f3:{NFSU2_TR(0x6bf1f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf1f4:{NFSU2_TR(0x6bf1f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf1fa:{NFSU2_TR(0x6bf1fa);
__builtin_memmove((R+4),(R+24),4);
}
B6bf1fc:{NFSU2_TR(0x6bf1fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf202ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf202:L6bf202:{c.instructions+=2;NFSU2_TR(0x6bf202);
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
B6bf204:{NFSU2_TR(0x6bf204);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf275;}}
}
B6bf206:L6bf206:{c.instructions+=1;NFSU2_TR(0x6bf206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf209:L6bf209:{c.instructions+=19;NFSU2_TR(0x6bf209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf20f:{NFSU2_TR(0x6bf20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf212:{NFSU2_TR(0x6bf212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf215:{NFSU2_TR(0x6bf215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf216:{NFSU2_TR(0x6bf216);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf217:{NFSU2_TR(0x6bf217);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf218:{NFSU2_TR(0x6bf218);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf219:{NFSU2_TR(0x6bf219);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf21a:{NFSU2_TR(0x6bf21a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf21b:{NFSU2_TR(0x6bf21b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf21c:{NFSU2_TR(0x6bf21c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bf21f:{NFSU2_TR(0x6bf21f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6bf221:{NFSU2_TR(0x6bf221);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf222:{NFSU2_TR(0x6bf222);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf223:{NFSU2_TR(0x6bf223);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bf226:{NFSU2_TR(0x6bf226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf227:{NFSU2_TR(0x6bf227);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf229:{NFSU2_TR(0x6bf229);
__builtin_memmove((R+4),(R+24),4);
}
B6bf22b:{NFSU2_TR(0x6bf22b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf230ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bf230:L6bf230:{c.instructions+=2;NFSU2_TR(0x6bf230);
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
B6bf232:{NFSU2_TR(0x6bf232);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf275;}}
}
B6bf234:L6bf234:{c.instructions+=17;NFSU2_TR(0x6bf234);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf235:{NFSU2_TR(0x6bf235);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf236:{NFSU2_TR(0x6bf236);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf237:{NFSU2_TR(0x6bf237);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf238:{NFSU2_TR(0x6bf238);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf239:{NFSU2_TR(0x6bf239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf23a:{NFSU2_TR(0x6bf23a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf23b:{NFSU2_TR(0x6bf23b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bf23e:{NFSU2_TR(0x6bf23e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf23f:{NFSU2_TR(0x6bf23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf245:{NFSU2_TR(0x6bf245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf248:{NFSU2_TR(0x6bf248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf24b:{NFSU2_TR(0x6bf24b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bf24e:{NFSU2_TR(0x6bf24e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf24f:{NFSU2_TR(0x6bf24f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6bf251:{NFSU2_TR(0x6bf251);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf252:{NFSU2_TR(0x6bf252);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf253:L6bf253:{c.instructions+=2;NFSU2_TR(0x6bf253);
__builtin_memmove((R+4),(R+24),4);
}
B6bf255:{NFSU2_TR(0x6bf255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf25aull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bf25a:L6bf25a:{c.instructions+=2;NFSU2_TR(0x6bf25a);
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
B6bf25c:{NFSU2_TR(0x6bf25c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf275;}}
}
B6bf25e:L6bf25e:{c.instructions+=5;NFSU2_TR(0x6bf25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf261:{NFSU2_TR(0x6bf261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf267:{NFSU2_TR(0x6bf267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf26a:{NFSU2_TR(0x6bf26a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bf26d:{NFSU2_TR(0x6bf26d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf1a9u);}goto L6bf1a9;}}
}
B6bf273:L6bf273:{c.instructions+=1;NFSU2_TR(0x6bf273);
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
B6bf275:L6bf275:{c.instructions+=5;NFSU2_TR(0x6bf275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bf276:{NFSU2_TR(0x6bf276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bf277:{NFSU2_TR(0x6bf277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bf278:{NFSU2_TR(0x6bf278);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bf279:{NFSU2_TR(0x6bf279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bf27a:L6bf27a:{c.instructions+=14;NFSU2_TR(0x6bf27a);
__builtin_memmove((R+28),(R+28),4);
}
B6bf27c:{NFSU2_TR(0x6bf27c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf27d:{NFSU2_TR(0x6bf27d);
__builtin_memmove((R+20),(R+16),4);
}
B6bf27f:{NFSU2_TR(0x6bf27f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6bf282:{NFSU2_TR(0x6bf282);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf283:{NFSU2_TR(0x6bf283);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf284:{NFSU2_TR(0x6bf284);
__builtin_memmove((R+24),(R+4),4);
}
B6bf286:{NFSU2_TR(0x6bf286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf289:{NFSU2_TR(0x6bf289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf28c:{NFSU2_TR(0x6bf28c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6bf28f:{NFSU2_TR(0x6bf28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf295:{NFSU2_TR(0x6bf295);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bf29a:{NFSU2_TR(0x6bf29a);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf29f:{NFSU2_TR(0x6bf29f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bf2c7;}}
}
B6bf2a1:L6bf2a1:{c.instructions+=6;NFSU2_TR(0x6bf2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf2a7:{NFSU2_TR(0x6bf2a7);
u8 U[4];
w4(U+0,u32(0x7bb1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf2ac:{NFSU2_TR(0x6bf2ac);
u8 U[4];
w4(U+0,u32(0x119full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf2b1:{NFSU2_TR(0x6bf2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf2b4:{NFSU2_TR(0x6bf2b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf2b5:{NFSU2_TR(0x6bf2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf2baull));
TAIL_STATIC(0x69e936u,69e);
}
B6bf2ba:L6bf2ba:{c.instructions+=3;NFSU2_TR(0x6bf2ba);
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
B6bf2bd:{NFSU2_TR(0x6bf2bd);
w4(R+0,u32(0x80004001ull));
}
B6bf2c2:{NFSU2_TR(0x6bf2c2);
{goto L6bf377;}
}
B6bf2c7:L6bf2c7:{c.instructions+=3;NFSU2_TR(0x6bf2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf2ca:{NFSU2_TR(0x6bf2ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf2cd:{NFSU2_TR(0x6bf2cd);
if(r1(R+518)){{goto L6bf2df;}}
}
B6bf2cf:L6bf2cf:{c.instructions+=3;NFSU2_TR(0x6bf2cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf2d0:{NFSU2_TR(0x6bf2d0);
__builtin_memmove((R+4),(R+24),4);
}
B6bf2d2:{NFSU2_TR(0x6bf2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf2d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf27au);}goto L6bf27a;}
}
B6bf2d7:L6bf2d7:{c.instructions+=2;NFSU2_TR(0x6bf2d7);
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
B6bf2d9:{NFSU2_TR(0x6bf2d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf377;}}
}
B6bf2df:L6bf2df:{c.instructions+=3;NFSU2_TR(0x6bf2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf2e2:{NFSU2_TR(0x6bf2e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf2e8:{NFSU2_TR(0x6bf2e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf2f1;}}
}
B6bf2ea:L6bf2ea:{c.instructions+=2;NFSU2_TR(0x6bf2ea);
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
B6bf2ec:{NFSU2_TR(0x6bf2ec);
{goto L6bf377;}
}
B6bf2f1:L6bf2f1:{c.instructions+=3;NFSU2_TR(0x6bf2f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf2f3:{NFSU2_TR(0x6bf2f3);
__builtin_memmove((R+4),(R+24),4);
}
B6bf2f5:{NFSU2_TR(0x6bf2f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf2faull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6bf2fa:L6bf2fa:{c.instructions+=2;NFSU2_TR(0x6bf2fa);
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
B6bf2fc:{NFSU2_TR(0x6bf2fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf377;}}
}
B6bf2fe:L6bf2fe:{c.instructions+=8;NFSU2_TR(0x6bf2fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf300:{NFSU2_TR(0x6bf300);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf301:{NFSU2_TR(0x6bf301);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf303:{NFSU2_TR(0x6bf303);
w4(R+28,u32(0x10000ull));
}
B6bf308:{NFSU2_TR(0x6bf308);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf309:{NFSU2_TR(0x6bf309);
u8 U[4];
w4(U+0,u32(0xb0000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf30e:{NFSU2_TR(0x6bf30e);
__builtin_memmove((R+4),(R+24),4);
}
B6bf310:{NFSU2_TR(0x6bf310);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf313ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf313:L6bf313:{c.instructions+=2;NFSU2_TR(0x6bf313);
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
B6bf315:{NFSU2_TR(0x6bf315);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf376;}}
}
B6bf317:L6bf317:{c.instructions+=8;NFSU2_TR(0x6bf317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf319:{NFSU2_TR(0x6bf319);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf31c:{NFSU2_TR(0x6bf31c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf31d:{NFSU2_TR(0x6bf31d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf320:{NFSU2_TR(0x6bf320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf321:{NFSU2_TR(0x6bf321);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf322:{NFSU2_TR(0x6bf322);
__builtin_memmove((R+4),(R+24),4);
}
B6bf324:{NFSU2_TR(0x6bf324);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf327ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf327:L6bf327:{c.instructions+=2;NFSU2_TR(0x6bf327);
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
B6bf329:{NFSU2_TR(0x6bf329);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf376;}}
}
B6bf32b:L6bf32b:{c.instructions+=9;NFSU2_TR(0x6bf32b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf32d:{NFSU2_TR(0x6bf32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf330:{NFSU2_TR(0x6bf330);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf331:{NFSU2_TR(0x6bf331);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf332:{NFSU2_TR(0x6bf332);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf334:{NFSU2_TR(0x6bf334);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf337:{NFSU2_TR(0x6bf337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf338:{NFSU2_TR(0x6bf338);
__builtin_memmove((R+4),(R+24),4);
}
B6bf33a:{NFSU2_TR(0x6bf33a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf33dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf33d:L6bf33d:{c.instructions+=2;NFSU2_TR(0x6bf33d);
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
B6bf33f:{NFSU2_TR(0x6bf33f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf376;}}
}
B6bf341:L6bf341:{c.instructions+=6;NFSU2_TR(0x6bf341);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf344:{NFSU2_TR(0x6bf344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf346:{NFSU2_TR(0x6bf346);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf349:{NFSU2_TR(0x6bf349);
__builtin_memmove((R+4),(R+24),4);
}
B6bf34b:{NFSU2_TR(0x6bf34b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf34e:{NFSU2_TR(0x6bf34e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf351ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf351:L6bf351:{c.instructions+=2;NFSU2_TR(0x6bf351);
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
B6bf353:{NFSU2_TR(0x6bf353);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf376;}}
}
B6bf355:L6bf355:{c.instructions+=3;NFSU2_TR(0x6bf355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf357:{NFSU2_TR(0x6bf357);
__builtin_memmove((R+4),(R+24),4);
}
B6bf359:{NFSU2_TR(0x6bf359);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf35cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bf35c:L6bf35c:{c.instructions+=2;NFSU2_TR(0x6bf35c);
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
B6bf35e:{NFSU2_TR(0x6bf35e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf376;}}
}
B6bf360:L6bf360:{c.instructions+=2;NFSU2_TR(0x6bf360);
__builtin_memmove((R+4),(R+24),4);
}
B6bf362:{NFSU2_TR(0x6bf362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf367ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6bf367:L6bf367:{c.instructions+=2;NFSU2_TR(0x6bf367);
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
B6bf369:{NFSU2_TR(0x6bf369);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bf376;}}
}
B6bf36b:L6bf36b:{c.instructions+=3;NFSU2_TR(0x6bf36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf36e:{NFSU2_TR(0x6bf36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf374:{NFSU2_TR(0x6bf374);
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
B6bf376:L6bf376:{c.instructions+=1;NFSU2_TR(0x6bf376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bf377:L6bf377:{c.instructions+=4;NFSU2_TR(0x6bf377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bf378:{NFSU2_TR(0x6bf378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bf379:{NFSU2_TR(0x6bf379);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bf37a:{NFSU2_TR(0x6bf37a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bf37d:L6bf37d:{c.instructions+=7;NFSU2_TR(0x6bf37d);
__builtin_memmove((R+28),(R+28),4);
}
B6bf37f:{NFSU2_TR(0x6bf37f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf380:{NFSU2_TR(0x6bf380);
__builtin_memmove((R+20),(R+16),4);
}
B6bf382:{NFSU2_TR(0x6bf382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf383:{NFSU2_TR(0x6bf383);
__builtin_memmove((R+24),(R+4),4);
}
B6bf385:{NFSU2_TR(0x6bf385);
u8 U[4];
w4(U+0,u32(0x7bd198ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6bf38b:{NFSU2_TR(0x6bf38b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf390ull));
TAIL_STATIC(0x6cd245u,6cd);
}
B6bf390:L6bf390:{c.instructions+=2;NFSU2_TR(0x6bf390);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6bf394:{NFSU2_TR(0x6bf394);
if(r1(R+518)){{goto L6bf39d;}}
}
B6bf396:L6bf396:{c.instructions+=2;NFSU2_TR(0x6bf396);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf397:{NFSU2_TR(0x6bf397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf39cull));
TAIL_STATIC(0x575630u,575);
}
B6bf39c:L6bf39c:{c.instructions+=1;NFSU2_TR(0x6bf39c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bf39d:L6bf39d:{c.instructions+=4;NFSU2_TR(0x6bf39d);
__builtin_memmove((R+0),(R+24),4);
}
B6bf39f:{NFSU2_TR(0x6bf39f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bf3a0:{NFSU2_TR(0x6bf3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bf3a1:{NFSU2_TR(0x6bf3a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bf3a4:L6bf3a4:{c.instructions+=12;NFSU2_TR(0x6bf3a4);
__builtin_memmove((R+28),(R+28),4);
}
B6bf3a6:{NFSU2_TR(0x6bf3a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf3a7:{NFSU2_TR(0x6bf3a7);
__builtin_memmove((R+20),(R+16),4);
}
B6bf3a9:{NFSU2_TR(0x6bf3a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B6bf3ac:{NFSU2_TR(0x6bf3ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf3ad:{NFSU2_TR(0x6bf3ad);
__builtin_memmove((R+12),(R+4),4);
}
B6bf3af:{NFSU2_TR(0x6bf3af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf3b5:{NFSU2_TR(0x6bf3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bf3b7:{NFSU2_TR(0x6bf3b7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bf3bd:{NFSU2_TR(0x6bf3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3c0:{NFSU2_TR(0x6bf3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3c3:{NFSU2_TR(0x6bf3c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf3cd;}}
}
B6bf3c5:L6bf3c5:{c.instructions+=3;NFSU2_TR(0x6bf3c5);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bf3c7:{NFSU2_TR(0x6bf3c7);
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
B6bf3c8:{NFSU2_TR(0x6bf3c8);
{goto L6bf77f;}
}
B6bf3cd:L6bf3cd:{c.instructions+=9;NFSU2_TR(0x6bf3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf3d0:{NFSU2_TR(0x6bf3d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bf3d2:{NFSU2_TR(0x6bf3d2);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bf3d2);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bf3d2);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6bf3d4:{NFSU2_TR(0x6bf3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3d8:{NFSU2_TR(0x6bf3d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf3d9:{NFSU2_TR(0x6bf3d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf3da:{NFSU2_TR(0x6bf3da);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf3dc:{NFSU2_TR(0x6bf3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3df:{NFSU2_TR(0x6bf3df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf77a;}}
}
B6bf3e5:L6bf3e5:{c.instructions+=1;NFSU2_TR(0x6bf3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3e9:L6bf3e9:{c.instructions+=17;NFSU2_TR(0x6bf3e9);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6bf3ec:{NFSU2_TR(0x6bf3ec);
__builtin_memmove((R+0),(R+24),4);
}
B6bf3ee:{NFSU2_TR(0x6bf3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bf3f1:{NFSU2_TR(0x6bf3f1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bf3f2:{NFSU2_TR(0x6bf3f2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bf3f3:{NFSU2_TR(0x6bf3f3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf3f5:{NFSU2_TR(0x6bf3f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf3f8:{NFSU2_TR(0x6bf3f8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bf3f9:{NFSU2_TR(0x6bf3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3fc:{NFSU2_TR(0x6bf3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf3ff:{NFSU2_TR(0x6bf3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf402:{NFSU2_TR(0x6bf402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf405:{NFSU2_TR(0x6bf405);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf408:{NFSU2_TR(0x6bf408);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bf409:{NFSU2_TR(0x6bf409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf40c:{NFSU2_TR(0x6bf40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf40f:{NFSU2_TR(0x6bf40f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf592;}}
}
B6bf415:L6bf415:{c.instructions+=6;NFSU2_TR(0x6bf415);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf41b:{NFSU2_TR(0x6bf41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf41e:{NFSU2_TR(0x6bf41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bf421:{NFSU2_TR(0x6bf421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf424:{NFSU2_TR(0x6bf424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf427:{NFSU2_TR(0x6bf427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf42a:L6bf42a:{c.instructions+=8;NFSU2_TR(0x6bf42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf42d:{NFSU2_TR(0x6bf42d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bf42f:{NFSU2_TR(0x6bf42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf432:{NFSU2_TR(0x6bf432);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf435:{NFSU2_TR(0x6bf435);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf438:{NFSU2_TR(0x6bf438);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bf43a:{NFSU2_TR(0x6bf43a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6bf43c:{NFSU2_TR(0x6bf43c);
if(r1(R+518)){{goto L6bf55d;}}
}
B6bf442:L6bf442:{c.instructions+=2;NFSU2_TR(0x6bf442);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6bf443:{NFSU2_TR(0x6bf443);
if(r1(R+518)){{goto L6bf544;}}
}
B6bf449:L6bf449:{c.instructions+=2;NFSU2_TR(0x6bf449);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6bf44a:{NFSU2_TR(0x6bf44a);
if(r1(R+518)){{goto L6bf4d5;}}
}
B6bf450:L6bf450:{c.instructions+=2;NFSU2_TR(0x6bf450);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6bf451:{NFSU2_TR(0x6bf451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf585;}}
}
B6bf457:L6bf457:{c.instructions+=2;NFSU2_TR(0x6bf457);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf45b:{NFSU2_TR(0x6bf45b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf585;}}
}
B6bf461:L6bf461:{c.instructions+=8;NFSU2_TR(0x6bf461);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf464:{NFSU2_TR(0x6bf464);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf467:{NFSU2_TR(0x6bf467);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bf46a:{NFSU2_TR(0x6bf46a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bf46f:{NFSU2_TR(0x6bf46f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf472:{NFSU2_TR(0x6bf472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf475:{NFSU2_TR(0x6bf475);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bf479:{NFSU2_TR(0x6bf479);
if(r1(R+518)){{goto L6bf582;}}
}
B6bf47f:L6bf47f:{c.instructions+=8;NFSU2_TR(0x6bf47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf482:{NFSU2_TR(0x6bf482);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bf485:{NFSU2_TR(0x6bf485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf487:{NFSU2_TR(0x6bf487);
__builtin_memmove((R+4),(R+0),4);
}
B6bf489:{NFSU2_TR(0x6bf489);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6bf48f:{NFSU2_TR(0x6bf48f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf495:{NFSU2_TR(0x6bf495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf498:{NFSU2_TR(0x6bf498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf4cc;}}
}
B6bf49a:L6bf49a:{c.instructions+=3;NFSU2_TR(0x6bf49a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf49c:{NFSU2_TR(0x6bf49c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bf4a1:{NFSU2_TR(0x6bf4a1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf582;}}
}
B6bf4a7:L6bf4a7:{c.instructions+=1;NFSU2_TR(0x6bf4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf4aa:L6bf4aa:{c.instructions+=3;NFSU2_TR(0x6bf4aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6bf4ac:{NFSU2_TR(0x6bf4ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf4af:{NFSU2_TR(0x6bf4af);
if(r1(R+518)){{goto L6bf4c1;}}
}
B6bf4b1:L6bf4b1:{c.instructions+=4;NFSU2_TR(0x6bf4b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf4b2:{NFSU2_TR(0x6bf4b2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6bf4b5:{NFSU2_TR(0x6bf4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6bf4b7:{NFSU2_TR(0x6bf4b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf4aau);}goto L6bf4aa;}}
}
B6bf4b9:L6bf4b9:{c.instructions+=2;NFSU2_TR(0x6bf4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bf4bc:{NFSU2_TR(0x6bf4bc);
{goto L6bf582;}
}
B6bf4c1:L6bf4c1:{c.instructions+=4;NFSU2_TR(0x6bf4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf4c4:{NFSU2_TR(0x6bf4c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf4c7:{NFSU2_TR(0x6bf4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf4ca:{NFSU2_TR(0x6bf4ca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf4b9u);}goto L6bf4b9;}
}
B6bf4cc:L6bf4cc:{c.instructions+=2;NFSU2_TR(0x6bf4cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf4d0:{NFSU2_TR(0x6bf4d0);
{goto L6bf582;}
}
B6bf4d5:L6bf4d5:{c.instructions+=2;NFSU2_TR(0x6bf4d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf4d8:{NFSU2_TR(0x6bf4d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf585;}}
}
B6bf4de:L6bf4de:{c.instructions+=9;NFSU2_TR(0x6bf4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf4e1:{NFSU2_TR(0x6bf4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf4e4:{NFSU2_TR(0x6bf4e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bf4e7:{NFSU2_TR(0x6bf4e7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))|u32(u32(0xffffffffull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bf4ec:{NFSU2_TR(0x6bf4ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf4ef:{NFSU2_TR(0x6bf4ef);
__builtin_memmove((R+24),(R+4),4);
}
B6bf4f1:{NFSU2_TR(0x6bf4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf4f4:{NFSU2_TR(0x6bf4f4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bf4f8:{NFSU2_TR(0x6bf4f8);
if(r1(R+518)){{goto L6bf582;}}
}
B6bf4fe:L6bf4fe:{c.instructions+=8;NFSU2_TR(0x6bf4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf501:{NFSU2_TR(0x6bf501);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bf504:{NFSU2_TR(0x6bf504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf506:{NFSU2_TR(0x6bf506);
__builtin_memmove((R+4),(R+0),4);
}
B6bf508:{NFSU2_TR(0x6bf508);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6bf50e:{NFSU2_TR(0x6bf50e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf514:{NFSU2_TR(0x6bf514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf517:{NFSU2_TR(0x6bf517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf53e;}}
}
B6bf519:L6bf519:{c.instructions+=3;NFSU2_TR(0x6bf519);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf51b:{NFSU2_TR(0x6bf51b);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bf520:{NFSU2_TR(0x6bf520);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf582;}}
}
B6bf522:L6bf522:{c.instructions+=1;NFSU2_TR(0x6bf522);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf525:L6bf525:{c.instructions+=2;NFSU2_TR(0x6bf525);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf527:{NFSU2_TR(0x6bf527);
if(r1(R+518)){{goto L6bf533;}}
}
B6bf529:L6bf529:{c.instructions+=4;NFSU2_TR(0x6bf529);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf52a:{NFSU2_TR(0x6bf52a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6bf52d:{NFSU2_TR(0x6bf52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6bf52f:{NFSU2_TR(0x6bf52f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf525u);}goto L6bf525;}}
}
B6bf531:L6bf531:{c.instructions+=1;NFSU2_TR(0x6bf531);
{goto L6bf582;}
}
B6bf533:L6bf533:{c.instructions+=4;NFSU2_TR(0x6bf533);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf536:{NFSU2_TR(0x6bf536);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6bf539:{NFSU2_TR(0x6bf539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf53c:{NFSU2_TR(0x6bf53c);
{goto L6bf582;}
}
B6bf53e:L6bf53e:{c.instructions+=2;NFSU2_TR(0x6bf53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf542:{NFSU2_TR(0x6bf542);
{goto L6bf582;}
}
B6bf544:L6bf544:{c.instructions+=2;NFSU2_TR(0x6bf544);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf548:{NFSU2_TR(0x6bf548);
if(r1(R+518)){{goto L6bf585;}}
}
B6bf54a:L6bf54a:{c.instructions+=2;NFSU2_TR(0x6bf54a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf54d:{NFSU2_TR(0x6bf54d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf585;}}
}
B6bf54f:L6bf54f:{c.instructions+=5;NFSU2_TR(0x6bf54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf552:{NFSU2_TR(0x6bf552);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf555:{NFSU2_TR(0x6bf555);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bf558:{NFSU2_TR(0x6bf558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf55b:{NFSU2_TR(0x6bf55b);
{goto L6bf574;}
}
B6bf55d:L6bf55d:{c.instructions+=2;NFSU2_TR(0x6bf55d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf561:{NFSU2_TR(0x6bf561);
if(r1(R+518)){{goto L6bf585;}}
}
B6bf563:L6bf563:{c.instructions+=2;NFSU2_TR(0x6bf563);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf566:{NFSU2_TR(0x6bf566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf585;}}
}
B6bf568:L6bf568:{c.instructions+=4;NFSU2_TR(0x6bf568);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf56b:{NFSU2_TR(0x6bf56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf56e:{NFSU2_TR(0x6bf56e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bf571:{NFSU2_TR(0x6bf571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf574:L6bf574:{c.instructions+=4;NFSU2_TR(0x6bf574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf577:{NFSU2_TR(0x6bf577);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bf57a:{NFSU2_TR(0x6bf57a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bf57e:{NFSU2_TR(0x6bf57e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bf582:L6bf582:{c.instructions+=1;NFSU2_TR(0x6bf582);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf585:L6bf585:{c.instructions+=3;NFSU2_TR(0x6bf585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf589:{NFSU2_TR(0x6bf589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf58c:{NFSU2_TR(0x6bf58c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf42au);}goto L6bf42a;}}
}
B6bf592:L6bf592:{c.instructions+=3;NFSU2_TR(0x6bf592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf595:{NFSU2_TR(0x6bf595);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf598:{NFSU2_TR(0x6bf598);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf762;}}
}
B6bf59e:L6bf59e:{c.instructions+=2;NFSU2_TR(0x6bf59e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf5a1:{NFSU2_TR(0x6bf5a1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf762;}}
}
B6bf5a7:L6bf5a7:{c.instructions+=4;NFSU2_TR(0x6bf5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf5aa:{NFSU2_TR(0x6bf5aa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf5ac:{NFSU2_TR(0x6bf5ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf5ae:{NFSU2_TR(0x6bf5ae);
if(r1(R+518)){{goto L6bf5fe;}}
}
B6bf5b0:L6bf5b0:{c.instructions+=2;NFSU2_TR(0x6bf5b0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x20500001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf5b6:{NFSU2_TR(0x6bf5b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf5fb;}}
}
B6bf5b8:L6bf5b8:{c.instructions+=2;NFSU2_TR(0x6bf5b8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf5bb:{NFSU2_TR(0x6bf5bb);
if(r1(R+518)){{goto L6bf5ca;}}
}
B6bf5bd:L6bf5bd:{c.instructions+=3;NFSU2_TR(0x6bf5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf5c0:{NFSU2_TR(0x6bf5c0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf5c2:{NFSU2_TR(0x6bf5c2);
if(r1(R+518)){{goto L6bf5ca;}}
}
B6bf5c4:L6bf5c4:{c.instructions+=2;NFSU2_TR(0x6bf5c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf5c7:{NFSU2_TR(0x6bf5c7);
if(r1(R+518)){{goto L6bf5ca;}}
}
B6bf5c9:L6bf5c9:{c.instructions+=1;NFSU2_TR(0x6bf5c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf5ca:L6bf5ca:{c.instructions+=3;NFSU2_TR(0x6bf5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf5cd:{NFSU2_TR(0x6bf5cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf5d0:{NFSU2_TR(0x6bf5d0);
if(r1(R+518)){{goto L6bf5fe;}}
}
B6bf5d2:L6bf5d2:{c.instructions+=3;NFSU2_TR(0x6bf5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf5d5:{NFSU2_TR(0x6bf5d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf5d7:{NFSU2_TR(0x6bf5d7);
if(r1(R+518)){{goto L6bf5e1;}}
}
B6bf5d9:L6bf5d9:{c.instructions+=2;NFSU2_TR(0x6bf5d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf5dc:{NFSU2_TR(0x6bf5dc);
if(r1(R+518)){{goto L6bf5e1;}}
}
B6bf5de:L6bf5de:{c.instructions+=2;NFSU2_TR(0x6bf5de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf5e0:{NFSU2_TR(0x6bf5e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf5e1:L6bf5e1:{c.instructions+=2;NFSU2_TR(0x6bf5e1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf5e4:{NFSU2_TR(0x6bf5e4);
if(r1(R+518)){{goto L6bf5fe;}}
}
B6bf5e6:L6bf5e6:{c.instructions+=4;NFSU2_TR(0x6bf5e6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf5e8:{NFSU2_TR(0x6bf5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf5eb:{NFSU2_TR(0x6bf5eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bf5ed:{NFSU2_TR(0x6bf5ed);
if(r1(R+518)){{goto L6bf5f6;}}
}
B6bf5ef:L6bf5ef:{c.instructions+=2;NFSU2_TR(0x6bf5ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf5f2:{NFSU2_TR(0x6bf5f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf5fe;}}
}
B6bf5f4:L6bf5f4:{c.instructions+=1;NFSU2_TR(0x6bf5f4);
{goto L6bf5fb;}
}
B6bf5f6:L6bf5f6:{c.instructions+=2;NFSU2_TR(0x6bf5f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf5f9:{NFSU2_TR(0x6bf5f9);
if(r1(R+518)){{goto L6bf5fe;}}
}
B6bf5fb:L6bf5fb:{c.instructions+=2;NFSU2_TR(0x6bf5fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf5fd:{NFSU2_TR(0x6bf5fd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf5fe:L6bf5fe:{c.instructions+=4;NFSU2_TR(0x6bf5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf601:{NFSU2_TR(0x6bf601);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bf603:{NFSU2_TR(0x6bf603);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf605:{NFSU2_TR(0x6bf605);
if(r1(R+518)){{goto L6bf642;}}
}
B6bf607:L6bf607:{c.instructions+=2;NFSU2_TR(0x6bf607);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x10000001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf60d:{NFSU2_TR(0x6bf60d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf762;}}
}
B6bf613:L6bf613:{c.instructions+=9;NFSU2_TR(0x6bf613);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf616:{NFSU2_TR(0x6bf616);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bf619:{NFSU2_TR(0x6bf619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf61b:{NFSU2_TR(0x6bf61b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf61e:{NFSU2_TR(0x6bf61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bf621:{NFSU2_TR(0x6bf621);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf624:{NFSU2_TR(0x6bf624);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6bf627:{NFSU2_TR(0x6bf627);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bf62b:{NFSU2_TR(0x6bf62b);
if(r1(R+518)){{goto L6bf63f;}}
}
B6bf62d:L6bf62d:{c.instructions+=6;NFSU2_TR(0x6bf62d);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6bf633:{NFSU2_TR(0x6bf633);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6bf636:{NFSU2_TR(0x6bf636);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6bf638:{NFSU2_TR(0x6bf638);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6bf63a:{NFSU2_TR(0x6bf63a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6bf63d:{NFSU2_TR(0x6bf63d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6bf642;}}
}
B6bf63f:L6bf63f:{c.instructions+=2;NFSU2_TR(0x6bf63f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf641:{NFSU2_TR(0x6bf641);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf642:L6bf642:{c.instructions+=2;NFSU2_TR(0x6bf642);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf644:{NFSU2_TR(0x6bf644);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf762;}}
}
B6bf64a:L6bf64a:{c.instructions+=3;NFSU2_TR(0x6bf64a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf64d:{NFSU2_TR(0x6bf64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf650:{NFSU2_TR(0x6bf650);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf762;}}
}
B6bf656:L6bf656:{c.instructions+=4;NFSU2_TR(0x6bf656);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bf65a:{NFSU2_TR(0x6bf65a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf65d:{NFSU2_TR(0x6bf65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf660:{NFSU2_TR(0x6bf660);
if(r1(R+518)){{goto L6bf73f;}}
}
B6bf666:L6bf666:{c.instructions+=5;NFSU2_TR(0x6bf666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf669:{NFSU2_TR(0x6bf669);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf66b:{NFSU2_TR(0x6bf66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf672:{NFSU2_TR(0x6bf672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf675:{NFSU2_TR(0x6bf675);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf6e0;}}
}
B6bf677:L6bf677:{c.instructions+=7;NFSU2_TR(0x6bf677);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf67d:{NFSU2_TR(0x6bf67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf680:{NFSU2_TR(0x6bf680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf683:{NFSU2_TR(0x6bf683);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf686:{NFSU2_TR(0x6bf686);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bf68c:{NFSU2_TR(0x6bf68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bf68f:{NFSU2_TR(0x6bf68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf692:L6bf692:{c.instructions+=4;NFSU2_TR(0x6bf692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bf694:{NFSU2_TR(0x6bf694);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bf697:{NFSU2_TR(0x6bf697);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6bf69a:{NFSU2_TR(0x6bf69a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bf6a0;}}
}
B6bf69c:L6bf69c:{c.instructions+=1;NFSU2_TR(0x6bf69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf6a0:L6bf6a0:{c.instructions+=3;NFSU2_TR(0x6bf6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf6a3:{NFSU2_TR(0x6bf6a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf6a6:{NFSU2_TR(0x6bf6a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf6ac;}}
}
B6bf6a8:L6bf6a8:{c.instructions+=1;NFSU2_TR(0x6bf6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf6ac:L6bf6ac:{c.instructions+=2;NFSU2_TR(0x6bf6ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf6b0:{NFSU2_TR(0x6bf6b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf6b8;}}
}
B6bf6b2:L6bf6b2:{c.instructions+=2;NFSU2_TR(0x6bf6b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf6b6:{NFSU2_TR(0x6bf6b6);
if(r1(R+518)){{goto L6bf6c4;}}
}
B6bf6b8:L6bf6b8:{c.instructions+=2;NFSU2_TR(0x6bf6b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf6bc:{NFSU2_TR(0x6bf6bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf6c9;}}
}
B6bf6be:L6bf6be:{c.instructions+=2;NFSU2_TR(0x6bf6be);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf6c2:{NFSU2_TR(0x6bf6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf6c9;}}
}
B6bf6c4:L6bf6c4:{c.instructions+=2;NFSU2_TR(0x6bf6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf6c7:{NFSU2_TR(0x6bf6c7);
{goto L6bf6d5;}
}
B6bf6c9:L6bf6c9:{c.instructions+=3;NFSU2_TR(0x6bf6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf6cc:{NFSU2_TR(0x6bf6cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bf6cf:{NFSU2_TR(0x6bf6cf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bf6d5;}}
}
B6bf6d1:L6bf6d1:{c.instructions+=1;NFSU2_TR(0x6bf6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf6d5:L6bf6d5:{c.instructions+=3;NFSU2_TR(0x6bf6d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bf6d8:{NFSU2_TR(0x6bf6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf6db:{NFSU2_TR(0x6bf6db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf692u);}goto L6bf692;}}
}
B6bf6dd:L6bf6dd:{c.instructions+=1;NFSU2_TR(0x6bf6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf6e0:L6bf6e0:{c.instructions+=1;NFSU2_TR(0x6bf6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf6e4:L6bf6e4:{c.instructions+=4;NFSU2_TR(0x6bf6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf6e7:{NFSU2_TR(0x6bf6e7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bf6eb:{NFSU2_TR(0x6bf6eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf6ee:{NFSU2_TR(0x6bf6ee);
if(r1(R+518)){{goto L6bf72e;}}
}
B6bf6f0:L6bf6f0:{c.instructions+=5;NFSU2_TR(0x6bf6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf6f3:{NFSU2_TR(0x6bf6f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf6f6:{NFSU2_TR(0x6bf6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf6f9:{NFSU2_TR(0x6bf6f9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf6fb:{NFSU2_TR(0x6bf6fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf72e;}}
}
B6bf6fd:L6bf6fd:{c.instructions+=4;NFSU2_TR(0x6bf6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf700:{NFSU2_TR(0x6bf700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf703:{NFSU2_TR(0x6bf703);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bf706:{NFSU2_TR(0x6bf706);
__builtin_memmove((R+28),(R+4),4);
}
B6bf708:L6bf708:{c.instructions+=5;NFSU2_TR(0x6bf708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bf70a:{NFSU2_TR(0x6bf70a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bf70d:{NFSU2_TR(0x6bf70d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bf710:{NFSU2_TR(0x6bf710);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf712:{NFSU2_TR(0x6bf712);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf719;}}
}
B6bf714:L6bf714:{c.instructions+=2;NFSU2_TR(0x6bf714);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf717:{NFSU2_TR(0x6bf717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf71e;}}
}
B6bf719:L6bf719:{c.instructions+=2;NFSU2_TR(0x6bf719);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6bf71c:{NFSU2_TR(0x6bf71c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bf722;}}
}
B6bf71e:L6bf71e:{c.instructions+=1;NFSU2_TR(0x6bf71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf722:L6bf722:{c.instructions+=3;NFSU2_TR(0x6bf722);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bf725:{NFSU2_TR(0x6bf725);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6bf726:{NFSU2_TR(0x6bf726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf708u);}goto L6bf708;}}
}
B6bf728:L6bf728:{c.instructions+=2;NFSU2_TR(0x6bf728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf72b:{NFSU2_TR(0x6bf72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bf72e:L6bf72e:{c.instructions+=4;NFSU2_TR(0x6bf72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf731:{NFSU2_TR(0x6bf731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf734:{NFSU2_TR(0x6bf734);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bf737:{NFSU2_TR(0x6bf737);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf6e4u);}goto L6bf6e4;}}
}
B6bf739:L6bf739:{c.instructions+=2;NFSU2_TR(0x6bf739);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf73d:{NFSU2_TR(0x6bf73d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf74e;}}
}
B6bf73f:L6bf73f:{c.instructions+=4;NFSU2_TR(0x6bf73f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bf740:{NFSU2_TR(0x6bf740);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bf743:{NFSU2_TR(0x6bf743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf746:{NFSU2_TR(0x6bf746);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf656u);}goto L6bf656;}}
}
B6bf74c:L6bf74c:{c.instructions+=1;NFSU2_TR(0x6bf74c);
{goto L6bf762;}
}
B6bf74e:L6bf74e:{c.instructions+=4;NFSU2_TR(0x6bf74e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bf752:{NFSU2_TR(0x6bf752);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf755:{NFSU2_TR(0x6bf755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf758:{NFSU2_TR(0x6bf758);
if(r1(R+518)){{goto L6bf762;}}
}
B6bf75a:L6bf75a:{c.instructions+=3;NFSU2_TR(0x6bf75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf75d:{NFSU2_TR(0x6bf75d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6bf760:{NFSU2_TR(0x6bf760);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bf782;}}
}
B6bf762:L6bf762:{c.instructions+=7;NFSU2_TR(0x6bf762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf765:{NFSU2_TR(0x6bf765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf768:{NFSU2_TR(0x6bf768);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bf76b:{NFSU2_TR(0x6bf76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf76e:{NFSU2_TR(0x6bf76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf771:{NFSU2_TR(0x6bf771);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bf774:{NFSU2_TR(0x6bf774);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf3e9u);}goto L6bf3e9;}}
}
B6bf77a:L6bf77a:{c.instructions+=2;NFSU2_TR(0x6bf77a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bf77c:{NFSU2_TR(0x6bf77c);
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
B6bf77d:L6bf77d:{c.instructions+=2;NFSU2_TR(0x6bf77d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bf77e:{NFSU2_TR(0x6bf77e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bf77f:L6bf77f:{c.instructions+=3;NFSU2_TR(0x6bf77f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bf780:{NFSU2_TR(0x6bf780);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bf781:{NFSU2_TR(0x6bf781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bf782:L6bf782:{c.instructions+=2;NFSU2_TR(0x6bf782);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf784:{NFSU2_TR(0x6bf784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf789ull));
TAIL_STATIC(0x699317u,699);
}
B6bf789:L6bf789:{c.instructions+=2;NFSU2_TR(0x6bf789);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf78b:{NFSU2_TR(0x6bf78b);
if(r1(R+518)){{goto L6bf798;}}
}
B6bf78d:L6bf78d:{c.instructions+=2;NFSU2_TR(0x6bf78d);
__builtin_memmove((R+4),(R+0),4);
}
B6bf78f:{NFSU2_TR(0x6bf78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf794ull));
TAIL_STATIC(0x698e7du,698);
}
B6bf794:L6bf794:{c.instructions+=2;NFSU2_TR(0x6bf794);
__builtin_memmove((R+24),(R+0),4);
}
B6bf796:{NFSU2_TR(0x6bf796);
{goto L6bf79a;}
}
B6bf798:L6bf798:{c.instructions+=1;NFSU2_TR(0x6bf798);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bf79a:L6bf79a:{c.instructions+=2;NFSU2_TR(0x6bf79a);
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
B6bf79c:{NFSU2_TR(0x6bf79c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf7a5;}}
}
B6bf79e:L6bf79e:{c.instructions+=2;NFSU2_TR(0x6bf79e);
w4(R+0,u32(0x8007000eull));
}
B6bf7a3:{NFSU2_TR(0x6bf7a3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf77du);}goto L6bf77d;}
}
B6bf7a5:L6bf7a5:{c.instructions+=10;NFSU2_TR(0x6bf7a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf7a7:{NFSU2_TR(0x6bf7a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf7a8:{NFSU2_TR(0x6bf7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bf7ab:{NFSU2_TR(0x6bf7ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf7ac:{NFSU2_TR(0x6bf7ac);
__builtin_memmove((R+0),(R+28),4);
}
B6bf7ae:{NFSU2_TR(0x6bf7ae);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bf7b3:{NFSU2_TR(0x6bf7b3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70900000ull))));
}
B6bf7b8:{NFSU2_TR(0x6bf7b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf7b9:{NFSU2_TR(0x6bf7b9);
__builtin_memmove((R+4),(R+24),4);
}
B6bf7bb:{NFSU2_TR(0x6bf7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf7c0ull));
TAIL_STATIC(0x699362u,699);
}
B6bf7c0:L6bf7c0:{c.instructions+=2;NFSU2_TR(0x6bf7c0);
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
B6bf7c2:{NFSU2_TR(0x6bf7c2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6bf7cb;}}
}
B6bf7c4:L6bf7c4:{c.instructions+=2;NFSU2_TR(0x6bf7c4);
__builtin_memmove((R+28),(R+0),4);
}
B6bf7c6:{NFSU2_TR(0x6bf7c6);
{goto L6bf98f;}
}
B6bf7cb:L6bf7cb:{c.instructions+=3;NFSU2_TR(0x6bf7cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf7d1:{NFSU2_TR(0x6bf7d1);
__builtin_memmove((R+4),(R+24),4);
}
B6bf7d3:{NFSU2_TR(0x6bf7d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf7d8ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bf7d8:L6bf7d8:{c.instructions+=2;NFSU2_TR(0x6bf7d8);
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
B6bf7da:{NFSU2_TR(0x6bf7da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf7c4u);}goto L6bf7c4;}}
}
B6bf7dc:L6bf7dc:{c.instructions+=3;NFSU2_TR(0x6bf7dc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf7de:{NFSU2_TR(0x6bf7de);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf7e0:{NFSU2_TR(0x6bf7e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf853;}}
}
B6bf7e2:L6bf7e2:{c.instructions+=2;NFSU2_TR(0x6bf7e2);
__builtin_memmove((R+0),(R+28),4);
}
B6bf7e4:{NFSU2_TR(0x6bf7e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bf7e7:L6bf7e7:{c.instructions+=3;NFSU2_TR(0x6bf7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf7ea:{NFSU2_TR(0x6bf7ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf7ec:{NFSU2_TR(0x6bf7ec);
if(r1(R+518)){{goto L6bf804;}}
}
B6bf7ee:L6bf7ee:{c.instructions+=8;NFSU2_TR(0x6bf7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf7f1:{NFSU2_TR(0x6bf7f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bf7f3:{NFSU2_TR(0x6bf7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf7f6:{NFSU2_TR(0x6bf7f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bf7f9:{NFSU2_TR(0x6bf7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf7fc:{NFSU2_TR(0x6bf7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf7ff:{NFSU2_TR(0x6bf7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf802:{NFSU2_TR(0x6bf802);
{goto L6bf844;}
}
B6bf804:L6bf804:{c.instructions+=3;NFSU2_TR(0x6bf804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf807:{NFSU2_TR(0x6bf807);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf80a:{NFSU2_TR(0x6bf80a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf838;}}
}
B6bf80c:L6bf80c:{c.instructions+=3;NFSU2_TR(0x6bf80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf80f:{NFSU2_TR(0x6bf80f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf812:{NFSU2_TR(0x6bf812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf83e;}}
}
B6bf814:L6bf814:{c.instructions+=5;NFSU2_TR(0x6bf814);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf81a:{NFSU2_TR(0x6bf81a);
u8 U[4];
w4(U+0,u32(0x7bd2ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf81f:{NFSU2_TR(0x6bf81f);
u8 U[4];
w4(U+0,u32(0x12d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf824:{NFSU2_TR(0x6bf824);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf827:{NFSU2_TR(0x6bf827);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf828:L6bf828:{c.instructions+=1;NFSU2_TR(0x6bf828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf82dull));
TAIL_STATIC(0x69e936u,69e);
}
B6bf82d:L6bf82d:{c.instructions+=4;NFSU2_TR(0x6bf82d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bf82f:{NFSU2_TR(0x6bf82f);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bf832:{NFSU2_TR(0x6bf832);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bf833:{NFSU2_TR(0x6bf833);
{goto L6bf98f;}
}
B6bf838:L6bf838:{c.instructions+=2;NFSU2_TR(0x6bf838);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf83c:{NFSU2_TR(0x6bf83c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf814u);}goto L6bf814;}}
}
B6bf83e:L6bf83e:{c.instructions+=2;NFSU2_TR(0x6bf83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf841:{NFSU2_TR(0x6bf841);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bf844:L6bf844:{c.instructions+=6;NFSU2_TR(0x6bf844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf847:{NFSU2_TR(0x6bf847);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bf84a:{NFSU2_TR(0x6bf84a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf84b:{NFSU2_TR(0x6bf84b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bf84e:{NFSU2_TR(0x6bf84e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bf851:{NFSU2_TR(0x6bf851);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf7e7u);}goto L6bf7e7;}}
}
B6bf853:L6bf853:{c.instructions+=4;NFSU2_TR(0x6bf853);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bf855:{NFSU2_TR(0x6bf855);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bf857:{NFSU2_TR(0x6bf857);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf85a:{NFSU2_TR(0x6bf85a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf897;}}
}
B6bf85c:L6bf85c:{c.instructions+=5;NFSU2_TR(0x6bf85c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf860:{NFSU2_TR(0x6bf860);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bf864:{NFSU2_TR(0x6bf864);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf867:{NFSU2_TR(0x6bf867);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bf86a:{NFSU2_TR(0x6bf86a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf872;}}
}
B6bf86c:L6bf86c:{c.instructions+=2;NFSU2_TR(0x6bf86c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf870:{NFSU2_TR(0x6bf870);
if(r1(R+518)){{goto L6bf885;}}
}
B6bf872:L6bf872:{c.instructions+=2;NFSU2_TR(0x6bf872);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf876:{NFSU2_TR(0x6bf876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf87e;}}
}
B6bf878:L6bf878:{c.instructions+=2;NFSU2_TR(0x6bf878);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf87c:{NFSU2_TR(0x6bf87c);
if(r1(R+518)){{goto L6bf885;}}
}
B6bf87e:L6bf87e:{c.instructions+=3;NFSU2_TR(0x6bf87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf881:{NFSU2_TR(0x6bf881);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bf884:{NFSU2_TR(0x6bf884);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bf885:L6bf885:{c.instructions+=2;NFSU2_TR(0x6bf885);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf888:{NFSU2_TR(0x6bf888);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bf952;}}
}
B6bf88e:L6bf88e:{c.instructions+=4;NFSU2_TR(0x6bf88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bf891:{NFSU2_TR(0x6bf891);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bf892:{NFSU2_TR(0x6bf892);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bf895:{NFSU2_TR(0x6bf895);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf85cu);}goto L6bf85c;}}
}
B6bf897:L6bf897:{c.instructions+=4;NFSU2_TR(0x6bf897);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf89a:{NFSU2_TR(0x6bf89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf89e:{NFSU2_TR(0x6bf89e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf8a0:{NFSU2_TR(0x6bf8a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf915;}}
}
B6bf8a2:L6bf8a2:{c.instructions+=1;NFSU2_TR(0x6bf8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf8a9:L6bf8a9:{c.instructions+=4;NFSU2_TR(0x6bf8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf8ac:{NFSU2_TR(0x6bf8ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6bf8ae:{NFSU2_TR(0x6bf8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf8b1:{NFSU2_TR(0x6bf8b1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bf907;}}
}
B6bf8b3:L6bf8b3:{c.instructions+=12;NFSU2_TR(0x6bf8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf8b6:{NFSU2_TR(0x6bf8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf8b9:{NFSU2_TR(0x6bf8b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bf8bc:{NFSU2_TR(0x6bf8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf8bf:{NFSU2_TR(0x6bf8bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bf8c2:{NFSU2_TR(0x6bf8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf8c5:{NFSU2_TR(0x6bf8c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bf8c8:{NFSU2_TR(0x6bf8c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf8cb:{NFSU2_TR(0x6bf8cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bf8ce:{NFSU2_TR(0x6bf8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf8d1:{NFSU2_TR(0x6bf8d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf8d4:{NFSU2_TR(0x6bf8d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf8f4;}}
}
B6bf8d6:L6bf8d6:{c.instructions+=11;NFSU2_TR(0x6bf8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf8d9:{NFSU2_TR(0x6bf8d9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6bf8db:{NFSU2_TR(0x6bf8db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6bf8dd:{NFSU2_TR(0x6bf8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bf8e0:{NFSU2_TR(0x6bf8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bf8e3:{NFSU2_TR(0x6bf8e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf8e6:{NFSU2_TR(0x6bf8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6bf8e8:{NFSU2_TR(0x6bf8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf8eb:{NFSU2_TR(0x6bf8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf8ee:{NFSU2_TR(0x6bf8ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bf8f1:{NFSU2_TR(0x6bf8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bf8f4:L6bf8f4:{c.instructions+=3;NFSU2_TR(0x6bf8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf8f7:{NFSU2_TR(0x6bf8f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf8fa:{NFSU2_TR(0x6bf8fa);
if(r1(R+518)){{goto L6bf96e;}}
}
B6bf8fc:L6bf8fc:{c.instructions+=4;NFSU2_TR(0x6bf8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf8ff:{NFSU2_TR(0x6bf8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf902:{NFSU2_TR(0x6bf902);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bf905:{NFSU2_TR(0x6bf905);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf8b3u);}goto L6bf8b3;}}
}
B6bf907:L6bf907:{c.instructions+=5;NFSU2_TR(0x6bf907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf90a:{NFSU2_TR(0x6bf90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf90d:{NFSU2_TR(0x6bf90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bf910:{NFSU2_TR(0x6bf910);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6bf913:{NFSU2_TR(0x6bf913);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf8a9u);}goto L6bf8a9;}}
}
B6bf915:L6bf915:{c.instructions+=4;NFSU2_TR(0x6bf915);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bf917:{NFSU2_TR(0x6bf917);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bf919:{NFSU2_TR(0x6bf919);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf91c:{NFSU2_TR(0x6bf91c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bf935;}}
}
B6bf91e:L6bf91e:{c.instructions+=3;NFSU2_TR(0x6bf91e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bf922:{NFSU2_TR(0x6bf922);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf925:{NFSU2_TR(0x6bf925);
if(r1(R+518)){{goto L6bf92f;}}
}
B6bf927:L6bf927:{c.instructions+=3;NFSU2_TR(0x6bf927);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf92a:{NFSU2_TR(0x6bf92a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bf92d:{NFSU2_TR(0x6bf92d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bf92f:L6bf92f:{c.instructions+=3;NFSU2_TR(0x6bf92f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bf930:{NFSU2_TR(0x6bf930);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bf933:{NFSU2_TR(0x6bf933);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf91eu);}goto L6bf91e;}}
}
B6bf935:L6bf935:{c.instructions+=4;NFSU2_TR(0x6bf935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf938:{NFSU2_TR(0x6bf938);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf93a:{NFSU2_TR(0x6bf93a);
w4(R+28,u32(0x10000002ull));
}
B6bf93f:{NFSU2_TR(0x6bf93f);
if(r1(R+518)){{goto L6bf9ca;}}
}
B6bf945:L6bf945:{c.instructions+=3;NFSU2_TR(0x6bf945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf947:{NFSU2_TR(0x6bf947);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf94c:{NFSU2_TR(0x6bf94c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf99f;}}
}
B6bf94e:L6bf94e:{c.instructions+=2;NFSU2_TR(0x6bf94e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bf950:{NFSU2_TR(0x6bf950);
{goto L6bf9ca;}
}
B6bf952:L6bf952:{c.instructions+=7;NFSU2_TR(0x6bf952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf955:{NFSU2_TR(0x6bf955);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf95b:{NFSU2_TR(0x6bf95b);
u8 U[4];
w4(U+0,u32(0x7bd2ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf960:{NFSU2_TR(0x6bf960);
u8 U[4];
w4(U+0,u32(0x12daull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf965:{NFSU2_TR(0x6bf965);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf968:{NFSU2_TR(0x6bf968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf969:{NFSU2_TR(0x6bf969);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf828u);}goto L6bf828;}
}
B6bf96e:L6bf96e:{c.instructions+=6;NFSU2_TR(0x6bf96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf974:{NFSU2_TR(0x6bf974);
u8 U[4];
w4(U+0,u32(0x7bd29cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf979:{NFSU2_TR(0x6bf979);
u8 U[4];
w4(U+0,u32(0x12dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf97e:{NFSU2_TR(0x6bf97e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bf981:{NFSU2_TR(0x6bf981);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf982:{NFSU2_TR(0x6bf982);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf987ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bf987:L6bf987:{c.instructions+=2;NFSU2_TR(0x6bf987);
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
B6bf98a:{NFSU2_TR(0x6bf98a);
w4(R+28,u32(0x80004005ull));
}
B6bf98f:L6bf98f:{c.instructions+=3;NFSU2_TR(0x6bf98f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bf991:{NFSU2_TR(0x6bf991);
__builtin_memmove((R+4),(R+24),4);
}
B6bf993:{NFSU2_TR(0x6bf993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bf998ull));
TAIL_STATIC(0x6739efu,673);
}
B6bf998:L6bf998:{c.instructions+=2;NFSU2_TR(0x6bf998);
__builtin_memmove((R+0),(R+28),4);
}
B6bf99a:{NFSU2_TR(0x6bf99a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf77du);}goto L6bf77d;}
}
B6bf99f:L6bf99f:{c.instructions+=2;NFSU2_TR(0x6bf99f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf9a1:{NFSU2_TR(0x6bf9a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9ca;}}
}
B6bf9a3:L6bf9a3:{c.instructions+=4;NFSU2_TR(0x6bf9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf9a6:{NFSU2_TR(0x6bf9a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bf9a8:{NFSU2_TR(0x6bf9a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf9ab:{NFSU2_TR(0x6bf9ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9b8;}}
}
B6bf9ad:L6bf9ad:{c.instructions+=3;NFSU2_TR(0x6bf9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf9b0:{NFSU2_TR(0x6bf9b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf9b3:{NFSU2_TR(0x6bf9b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9b8;}}
}
B6bf9b5:L6bf9b5:{c.instructions+=1;NFSU2_TR(0x6bf9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6bf9b8:L6bf9b8:{c.instructions+=3;NFSU2_TR(0x6bf9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf9bb:{NFSU2_TR(0x6bf9bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf9be:{NFSU2_TR(0x6bf9be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9ca;}}
}
B6bf9c0:L6bf9c0:{c.instructions+=3;NFSU2_TR(0x6bf9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf9c2:{NFSU2_TR(0x6bf9c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf9c5:{NFSU2_TR(0x6bf9c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9ca;}}
}
B6bf9c7:L6bf9c7:{c.instructions+=1;NFSU2_TR(0x6bf9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6bf9ca:L6bf9ca:{c.instructions+=3;NFSU2_TR(0x6bf9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bf9cd:{NFSU2_TR(0x6bf9cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf9cf:{NFSU2_TR(0x6bf9cf);
if(r1(R+518)){{goto L6bfa02;}}
}
B6bf9d1:L6bf9d1:{c.instructions+=3;NFSU2_TR(0x6bf9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bf9d3:{NFSU2_TR(0x6bf9d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bf9d8:{NFSU2_TR(0x6bf9d8);
if(r1(R+518)){{goto L6bf9ff;}}
}
B6bf9da:L6bf9da:{c.instructions+=2;NFSU2_TR(0x6bf9da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bf9dc:{NFSU2_TR(0x6bf9dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfa02;}}
}
B6bf9de:L6bf9de:{c.instructions+=4;NFSU2_TR(0x6bf9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bf9e1:{NFSU2_TR(0x6bf9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf9e4:{NFSU2_TR(0x6bf9e4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf9e6:{NFSU2_TR(0x6bf9e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9f3;}}
}
B6bf9e8:L6bf9e8:{c.instructions+=3;NFSU2_TR(0x6bf9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bf9eb:{NFSU2_TR(0x6bf9eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf9ee:{NFSU2_TR(0x6bf9ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bf9f3;}}
}
B6bf9f0:L6bf9f0:{c.instructions+=1;NFSU2_TR(0x6bf9f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6bf9f3:L6bf9f3:{c.instructions+=2;NFSU2_TR(0x6bf9f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bf9f6:{NFSU2_TR(0x6bf9f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfa02;}}
}
B6bf9f8:L6bf9f8:{c.instructions+=3;NFSU2_TR(0x6bf9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bf9fb:{NFSU2_TR(0x6bf9fb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bf9fd:{NFSU2_TR(0x6bf9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfa02;}}
}
B6bf9ff:L6bf9ff:{c.instructions+=1;NFSU2_TR(0x6bf9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6bfa02:L6bfa02:{c.instructions+=6;NFSU2_TR(0x6bfa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bfa05:{NFSU2_TR(0x6bfa05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfa08:{NFSU2_TR(0x6bfa08);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6bfa0b:{NFSU2_TR(0x6bfa0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bfa0e:{NFSU2_TR(0x6bfa0e);
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
B6bfa10:{NFSU2_TR(0x6bfa10);
if(r1(R+518)){{goto L6bfa19;}}
}
B6bfa12:L6bfa12:{c.instructions+=2;NFSU2_TR(0x6bfa12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa14:{NFSU2_TR(0x6bfa14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfa19ull));
TAIL_STATIC(0x6739efu,673);
}
B6bfa19:L6bfa19:{c.instructions+=4;NFSU2_TR(0x6bfa19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfa1c:{NFSU2_TR(0x6bfa1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bfa1f:{NFSU2_TR(0x6bfa1f);
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
B6bfa21:{NFSU2_TR(0x6bfa21);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf77du);}goto L6bf77d;}
}
B6bfa26:L6bfa26:{c.instructions+=13;NFSU2_TR(0x6bfa26);
__builtin_memmove((R+28),(R+28),4);
}
B6bfa28:{NFSU2_TR(0x6bfa28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa29:{NFSU2_TR(0x6bfa29);
__builtin_memmove((R+20),(R+16),4);
}
B6bfa2b:{NFSU2_TR(0x6bfa2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa2c:{NFSU2_TR(0x6bfa2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa2d:{NFSU2_TR(0x6bfa2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa2e:{NFSU2_TR(0x6bfa2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa2f:{NFSU2_TR(0x6bfa2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfa30:{NFSU2_TR(0x6bfa30);
__builtin_memmove((R+24),(R+4),4);
}
B6bfa32:{NFSU2_TR(0x6bfa32);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfa34:{NFSU2_TR(0x6bfa34);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfa37:{NFSU2_TR(0x6bfa37);
w4(R+12,u32(0xfff00000ull));
}
B6bfa3c:{NFSU2_TR(0x6bfa3c);
if(r1(R+518)){{goto L6bfa9a;}}
}
B6bfa3e:L6bfa3e:{c.instructions+=3;NFSU2_TR(0x6bfa3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfa41:{NFSU2_TR(0x6bfa41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfa47:{NFSU2_TR(0x6bfa47);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfa9a;}}
}
B6bfa49:L6bfa49:{c.instructions+=8;NFSU2_TR(0x6bfa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfa4f:{NFSU2_TR(0x6bfa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfa52:{NFSU2_TR(0x6bfa52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfa55:{NFSU2_TR(0x6bfa55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfa5b:{NFSU2_TR(0x6bfa5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfa5d:{NFSU2_TR(0x6bfa5d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6bfa5f:{NFSU2_TR(0x6bfa5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfa64:{NFSU2_TR(0x6bfa64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfa7e;}}
}
B6bfa66:L6bfa66:{c.instructions+=2;NFSU2_TR(0x6bfa66);
__builtin_memmove((R+4),(R+24),4);
}
B6bfa68:{NFSU2_TR(0x6bfa68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfa6dull));
TAIL_STATIC(0x6c2e81u,6c2);
}
B6bfa6d:L6bfa6d:{c.instructions+=2;NFSU2_TR(0x6bfa6d);
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
B6bfa6f:{NFSU2_TR(0x6bfa6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfa75:L6bfa75:{c.instructions+=4;NFSU2_TR(0x6bfa75);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bfa77:{NFSU2_TR(0x6bfa77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfa79:{NFSU2_TR(0x6bfa79);
__builtin_memmove((R+4),(R+518),1);
}
B6bfa7c:{NFSU2_TR(0x6bfa7c);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6bfa7e:L6bfa7e:{c.instructions+=4;NFSU2_TR(0x6bfa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfa84:{NFSU2_TR(0x6bfa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfa8a:{NFSU2_TR(0x6bfa8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bfa8d:{NFSU2_TR(0x6bfa8d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfa49u);}goto L6bfa49;}}
}
B6bfa8f:L6bfa8f:{c.instructions+=2;NFSU2_TR(0x6bfa8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfa91:{NFSU2_TR(0x6bfa91);
if(r1(R+518)){{goto L6bfa9a;}}
}
B6bfa93:L6bfa93:{c.instructions+=2;NFSU2_TR(0x6bfa93);
__builtin_memmove((R+4),(R+24),4);
}
B6bfa95:{NFSU2_TR(0x6bfa95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfa9aull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bfa9a:L6bfa9a:{c.instructions+=2;NFSU2_TR(0x6bfa9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bfaa1:{NFSU2_TR(0x6bfaa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfb6d;}}
}
B6bfaa7:L6bfaa7:{c.instructions+=3;NFSU2_TR(0x6bfaa7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfaa9:{NFSU2_TR(0x6bfaa9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfaac:{NFSU2_TR(0x6bfaac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfad8;}}
}
B6bfaae:L6bfaae:{c.instructions+=6;NFSU2_TR(0x6bfaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfab1:{NFSU2_TR(0x6bfab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfab7:{NFSU2_TR(0x6bfab7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfaba:{NFSU2_TR(0x6bfaba);
__builtin_memmove((R+4),(R+24),4);
}
B6bfabc:{NFSU2_TR(0x6bfabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfac2:{NFSU2_TR(0x6bfac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfac7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf3a4u);}goto L6bf3a4;}
}
B6bfac7:L6bfac7:{c.instructions+=2;NFSU2_TR(0x6bfac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfac9:{NFSU2_TR(0x6bfac9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfad2;}}
}
B6bfacb:L6bfacb:{c.instructions+=2;NFSU2_TR(0x6bfacb);
__builtin_memmove((R+4),(R+24),4);
}
B6bfacd:{NFSU2_TR(0x6bfacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfad2ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bfad2:L6bfad2:{c.instructions+=3;NFSU2_TR(0x6bfad2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bfad3:{NFSU2_TR(0x6bfad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bfad6:{NFSU2_TR(0x6bfad6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfaaeu);}goto L6bfaae;}}
}
B6bfad8:L6bfad8:{c.instructions+=3;NFSU2_TR(0x6bfad8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfada:{NFSU2_TR(0x6bfada);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfadd:{NFSU2_TR(0x6bfadd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfb11;}}
}
B6bfadf:L6bfadf:{c.instructions+=8;NFSU2_TR(0x6bfadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfae2:{NFSU2_TR(0x6bfae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfae8:{NFSU2_TR(0x6bfae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfaeb:{NFSU2_TR(0x6bfaeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfaf1:{NFSU2_TR(0x6bfaf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfaf3:{NFSU2_TR(0x6bfaf3);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6bfaf5:{NFSU2_TR(0x6bfaf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfafa:{NFSU2_TR(0x6bfafa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfb0b;}}
}
B6bfafc:L6bfafc:{c.instructions+=2;NFSU2_TR(0x6bfafc);
__builtin_memmove((R+4),(R+24),4);
}
B6bfafe:{NFSU2_TR(0x6bfafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfb03ull));
TAIL_STATIC(0x6be40cu,6be);
}
B6bfb03:L6bfb03:{c.instructions+=2;NFSU2_TR(0x6bfb03);
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
B6bfb05:{NFSU2_TR(0x6bfb05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfb0b:L6bfb0b:{c.instructions+=3;NFSU2_TR(0x6bfb0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bfb0c:{NFSU2_TR(0x6bfb0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bfb0f:{NFSU2_TR(0x6bfb0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfadfu);}goto L6bfadf;}}
}
B6bfb11:L6bfb11:{c.instructions+=2;NFSU2_TR(0x6bfb11);
__builtin_memmove((R+4),(R+24),4);
}
B6bfb13:{NFSU2_TR(0x6bfb13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfb18ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bfb18:L6bfb18:{c.instructions+=3;NFSU2_TR(0x6bfb18);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfb1a:{NFSU2_TR(0x6bfb1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfb1d:{NFSU2_TR(0x6bfb1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfb6d;}}
}
B6bfb1f:L6bfb1f:{c.instructions+=8;NFSU2_TR(0x6bfb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfb22:{NFSU2_TR(0x6bfb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfb28:{NFSU2_TR(0x6bfb28);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfb2b:{NFSU2_TR(0x6bfb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfb31:{NFSU2_TR(0x6bfb31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfb33:{NFSU2_TR(0x6bfb33);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6bfb35:{NFSU2_TR(0x6bfb35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfb3a:{NFSU2_TR(0x6bfb3a);
if(r1(R+518)){{goto L6bfb58;}}
}
B6bfb3c:L6bfb3c:{c.instructions+=2;NFSU2_TR(0x6bfb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfb41:{NFSU2_TR(0x6bfb41);
if(r1(R+518)){{goto L6bfb58;}}
}
B6bfb43:L6bfb43:{c.instructions+=2;NFSU2_TR(0x6bfb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfb48:{NFSU2_TR(0x6bfb48);
if(r1(R+518)){{goto L6bfb58;}}
}
B6bfb4a:L6bfb4a:{c.instructions+=2;NFSU2_TR(0x6bfb4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfb4f:{NFSU2_TR(0x6bfb4f);
if(r1(R+518)){{goto L6bfb58;}}
}
B6bfb51:L6bfb51:{c.instructions+=2;NFSU2_TR(0x6bfb51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfb56:{NFSU2_TR(0x6bfb56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfb67;}}
}
B6bfb58:L6bfb58:{c.instructions+=2;NFSU2_TR(0x6bfb58);
__builtin_memmove((R+4),(R+24),4);
}
B6bfb5a:{NFSU2_TR(0x6bfb5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfb5full));
TAIL_STATIC(0x6c62ddu,6c6);
}
B6bfb5f:L6bfb5f:{c.instructions+=2;NFSU2_TR(0x6bfb5f);
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
B6bfb61:{NFSU2_TR(0x6bfb61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfb67:L6bfb67:{c.instructions+=3;NFSU2_TR(0x6bfb67);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bfb68:{NFSU2_TR(0x6bfb68);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bfb6b:{NFSU2_TR(0x6bfb6b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfb1fu);}goto L6bfb1f;}}
}
B6bfb6d:L6bfb6d:{c.instructions+=2;NFSU2_TR(0x6bfb6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfb71:{NFSU2_TR(0x6bfb71);
if(r1(R+518)){{goto L6bfc77;}}
}
B6bfb77:L6bfb77:{c.instructions+=1;NFSU2_TR(0x6bfb77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfb7b:L6bfb7b:{c.instructions+=2;NFSU2_TR(0x6bfb7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B6bfb7f:{NFSU2_TR(0x6bfb7f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bfbf7;}}
}
B6bfb81:L6bfb81:{c.instructions+=5;NFSU2_TR(0x6bfb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfb84:{NFSU2_TR(0x6bfb84);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfb86:{NFSU2_TR(0x6bfb86);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfb88:{NFSU2_TR(0x6bfb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfb8f:{NFSU2_TR(0x6bfb8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfbd5;}}
}
B6bfb91:L6bfb91:{c.instructions+=5;NFSU2_TR(0x6bfb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfb94:{NFSU2_TR(0x6bfb94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfb97:{NFSU2_TR(0x6bfb97);
__builtin_memmove((R+4),(R+24),4);
}
B6bfb99:{NFSU2_TR(0x6bfb99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfb9f:{NFSU2_TR(0x6bfb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfba4ull));
TAIL_STATIC(0x6c3337u,6c3);
}
B6bfba4:L6bfba4:{c.instructions+=2;NFSU2_TR(0x6bfba4);
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
B6bfba6:{NFSU2_TR(0x6bfba6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfbac:L6bfbac:{c.instructions+=1;NFSU2_TR(0x6bfbac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfbb2;}}
}
B6bfbae:L6bfbae:{c.instructions+=1;NFSU2_TR(0x6bfbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfbb2:L6bfbb2:{c.instructions+=3;NFSU2_TR(0x6bfbb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bfbb8:{NFSU2_TR(0x6bfbb8);
__builtin_memmove((R+4),(R+24),4);
}
B6bfbba:{NFSU2_TR(0x6bfbba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfbbfull));
TAIL_STATIC(0x699d92u,699);
}
B6bfbbf:L6bfbbf:{c.instructions+=2;NFSU2_TR(0x6bfbbf);
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
B6bfbc1:{NFSU2_TR(0x6bfbc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfbc7:L6bfbc7:{c.instructions+=5;NFSU2_TR(0x6bfbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfbcd:{NFSU2_TR(0x6bfbcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bfbd0:{NFSU2_TR(0x6bfbd0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bfbd1:{NFSU2_TR(0x6bfbd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6bfbd3:{NFSU2_TR(0x6bfbd3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfb91u);}goto L6bfb91;}}
}
B6bfbd5:L6bfbd5:{c.instructions+=2;NFSU2_TR(0x6bfbd5);
__builtin_memmove((R+4),(R+24),4);
}
B6bfbd7:{NFSU2_TR(0x6bfbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfbdcull));
TAIL_STATIC(0x69a74eu,69a);
}
B6bfbdc:L6bfbdc:{c.instructions+=2;NFSU2_TR(0x6bfbdc);
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
B6bfbde:{NFSU2_TR(0x6bfbde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfbe4:L6bfbe4:{c.instructions+=3;NFSU2_TR(0x6bfbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfbe7:{NFSU2_TR(0x6bfbe7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfbeb:{NFSU2_TR(0x6bfbeb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfb7bu);}goto L6bfb7b;}}
}
B6bfbed:L6bfbed:{c.instructions+=2;NFSU2_TR(0x6bfbed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B6bfbf1:{NFSU2_TR(0x6bfbf1);
if(r1(R+512)){{goto L6bfc77;}}
}
B6bfbf7:L6bfbf7:{c.instructions+=5;NFSU2_TR(0x6bfbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfbfa:{NFSU2_TR(0x6bfbfa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfbfc:{NFSU2_TR(0x6bfbfc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfbfe:{NFSU2_TR(0x6bfbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfc05:{NFSU2_TR(0x6bfc05);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfc5f;}}
}
B6bfc07:L6bfc07:{c.instructions+=5;NFSU2_TR(0x6bfc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfc0a:{NFSU2_TR(0x6bfc0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfc0d:{NFSU2_TR(0x6bfc0d);
__builtin_memmove((R+4),(R+24),4);
}
B6bfc0f:{NFSU2_TR(0x6bfc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfc15:{NFSU2_TR(0x6bfc15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc1aull));
TAIL_STATIC(0x6c3337u,6c3);
}
B6bfc1a:L6bfc1a:{c.instructions+=2;NFSU2_TR(0x6bfc1a);
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
B6bfc1c:{NFSU2_TR(0x6bfc1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfc1e:L6bfc1e:{c.instructions+=1;NFSU2_TR(0x6bfc1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfc40;}}
}
B6bfc20:L6bfc20:{c.instructions+=6;NFSU2_TR(0x6bfc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfc26:{NFSU2_TR(0x6bfc26);
u8 U[4];
w4(U+0,u32(0x7bb17cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfc2b:{NFSU2_TR(0x6bfc2b);
u8 U[4];
w4(U+0,u32(0x11c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfc30:{NFSU2_TR(0x6bfc30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bfc33:{NFSU2_TR(0x6bfc33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfc34:{NFSU2_TR(0x6bfc34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc39ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bfc39:L6bfc39:{c.instructions+=2;NFSU2_TR(0x6bfc39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bfc3c:{NFSU2_TR(0x6bfc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfc40:L6bfc40:{c.instructions+=3;NFSU2_TR(0x6bfc40);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bfc46:{NFSU2_TR(0x6bfc46);
__builtin_memmove((R+4),(R+24),4);
}
B6bfc48:{NFSU2_TR(0x6bfc48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc4dull));
TAIL_STATIC(0x699d92u,699);
}
B6bfc4d:L6bfc4d:{c.instructions+=2;NFSU2_TR(0x6bfc4d);
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
B6bfc4f:{NFSU2_TR(0x6bfc4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfc51:L6bfc51:{c.instructions+=5;NFSU2_TR(0x6bfc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfc57:{NFSU2_TR(0x6bfc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bfc5a:{NFSU2_TR(0x6bfc5a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bfc5b:{NFSU2_TR(0x6bfc5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6bfc5d:{NFSU2_TR(0x6bfc5d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfc07u);}goto L6bfc07;}}
}
B6bfc5f:L6bfc5f:{c.instructions+=2;NFSU2_TR(0x6bfc5f);
__builtin_memmove((R+4),(R+24),4);
}
B6bfc61:{NFSU2_TR(0x6bfc61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc66ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6bfc66:L6bfc66:{c.instructions+=2;NFSU2_TR(0x6bfc66);
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
B6bfc68:{NFSU2_TR(0x6bfc68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfc6a:L6bfc6a:{c.instructions+=2;NFSU2_TR(0x6bfc6a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6bfc6e:{NFSU2_TR(0x6bfc6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfc77;}}
}
B6bfc70:L6bfc70:{c.instructions+=2;NFSU2_TR(0x6bfc70);
w4(R+0,u32(0x80004005ull));
}
B6bfc75:{NFSU2_TR(0x6bfc75);
{goto L6bfc9c;}
}
B6bfc77:L6bfc77:{c.instructions+=2;NFSU2_TR(0x6bfc77);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfc7b:{NFSU2_TR(0x6bfc7b);
if(r1(R+518)){{goto L6bfc9a;}}
}
B6bfc7d:L6bfc7d:{c.instructions+=2;NFSU2_TR(0x6bfc7d);
__builtin_memmove((R+4),(R+24),4);
}
B6bfc7f:{NFSU2_TR(0x6bfc7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc84ull));
TAIL_STATIC(0x6cf84fu,6cf);
}
B6bfc84:L6bfc84:{c.instructions+=2;NFSU2_TR(0x6bfc84);
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
B6bfc86:{NFSU2_TR(0x6bfc86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfc88:L6bfc88:{c.instructions+=2;NFSU2_TR(0x6bfc88);
__builtin_memmove((R+4),(R+24),4);
}
B6bfc8a:{NFSU2_TR(0x6bfc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc8full));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bfc8f:L6bfc8f:{c.instructions+=2;NFSU2_TR(0x6bfc8f);
__builtin_memmove((R+4),(R+24),4);
}
B6bfc91:{NFSU2_TR(0x6bfc91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfc96ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6bfc96:L6bfc96:{c.instructions+=2;NFSU2_TR(0x6bfc96);
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
B6bfc98:{NFSU2_TR(0x6bfc98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfc9c;}}
}
B6bfc9a:L6bfc9a:{c.instructions+=1;NFSU2_TR(0x6bfc9a);
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
B6bfc9c:L6bfc9c:{c.instructions+=5;NFSU2_TR(0x6bfc9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bfc9d:{NFSU2_TR(0x6bfc9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bfc9e:{NFSU2_TR(0x6bfc9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bfc9f:{NFSU2_TR(0x6bfc9f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bfca0:{NFSU2_TR(0x6bfca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bfca1:L6bfca1:{c.instructions+=10;NFSU2_TR(0x6bfca1);
__builtin_memmove((R+28),(R+28),4);
}
B6bfca3:{NFSU2_TR(0x6bfca3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfca4:{NFSU2_TR(0x6bfca4);
__builtin_memmove((R+20),(R+16),4);
}
B6bfca6:{NFSU2_TR(0x6bfca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xacull))));
}
B6bfcac:{NFSU2_TR(0x6bfcac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfcad:{NFSU2_TR(0x6bfcad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfcb0:{NFSU2_TR(0x6bfcb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfcb2:{NFSU2_TR(0x6bfcb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfcb3:{NFSU2_TR(0x6bfcb3);
__builtin_memmove((R+24),(R+4),4);
}
B6bfcb5:{NFSU2_TR(0x6bfcb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfcbf;}}
}
B6bfcb7:L6bfcb7:{c.instructions+=3;NFSU2_TR(0x6bfcb7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bfcb9:{NFSU2_TR(0x6bfcb9);
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
B6bfcba:{NFSU2_TR(0x6bfcba);
{goto L6bfe73;}
}
B6bfcbf:L6bfcbf:{c.instructions+=4;NFSU2_TR(0x6bfcbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfcc1:{NFSU2_TR(0x6bfcc1);
__builtin_memmove((R+4),(R+0),4);
}
B6bfcc3:{NFSU2_TR(0x6bfcc3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bfcc9:{NFSU2_TR(0x6bfcc9);
if(r1(R+518)){{goto L6bfcd3;}}
}
B6bfccb:L6bfccb:{c.instructions+=2;NFSU2_TR(0x6bfccb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bfcd1:{NFSU2_TR(0x6bfcd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfcda;}}
}
B6bfcd3:L6bfcd3:{c.instructions+=2;NFSU2_TR(0x6bfcd3);
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
B6bfcd5:{NFSU2_TR(0x6bfcd5);
{goto L6bfe73;}
}
B6bfcda:L6bfcda:{c.instructions+=9;NFSU2_TR(0x6bfcda);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bfcdf:{NFSU2_TR(0x6bfcdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfce0:{NFSU2_TR(0x6bfce0);
__builtin_memmove((R+28),(R+0),4);
}
B6bfce2:{NFSU2_TR(0x6bfce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfce5:{NFSU2_TR(0x6bfce5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bfce7:{NFSU2_TR(0x6bfce7);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bfce7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6bfce7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6bfce9:{NFSU2_TR(0x6bfce9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bfcef:{NFSU2_TR(0x6bfcef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfcf2:{NFSU2_TR(0x6bfcf2);
if(r1(R+518)){{goto L6bfd04;}}
}
B6bfcf4:L6bfcf4:{c.instructions+=2;NFSU2_TR(0x6bfcf4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bfcfa:{NFSU2_TR(0x6bfcfa);
if(r1(R+518)){{goto L6bfd04;}}
}
B6bfcfc:L6bfcfc:{c.instructions+=2;NFSU2_TR(0x6bfcfc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bfd02:{NFSU2_TR(0x6bfd02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfd0b;}}
}
B6bfd04:L6bfd04:{c.instructions+=1;NFSU2_TR(0x6bfd04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfd0b:L6bfd0b:{c.instructions+=2;NFSU2_TR(0x6bfd0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfd0f:{NFSU2_TR(0x6bfd0f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfe70;}}
}
B6bfd15:L6bfd15:{c.instructions+=17;NFSU2_TR(0x6bfd15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfd1b:{NFSU2_TR(0x6bfd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfd21:{NFSU2_TR(0x6bfd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bfd24:{NFSU2_TR(0x6bfd24);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bfd27:{NFSU2_TR(0x6bfd27);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bfd2c:{NFSU2_TR(0x6bfd2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bfd2f:{NFSU2_TR(0x6bfd2f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bfd34:{NFSU2_TR(0x6bfd34);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bfd37:{NFSU2_TR(0x6bfd37);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6bfd3c:{NFSU2_TR(0x6bfd3c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bfd47:{NFSU2_TR(0x6bfd47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bfd49:{NFSU2_TR(0x6bfd49);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfd4c:{NFSU2_TR(0x6bfd4c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bfd57:{NFSU2_TR(0x6bfd57);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bfd62:{NFSU2_TR(0x6bfd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfd65:{NFSU2_TR(0x6bfd65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfd68:{NFSU2_TR(0x6bfd68);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfe70;}}
}
B6bfd6e:L6bfd6e:{c.instructions+=4;NFSU2_TR(0x6bfd6e);
__builtin_memmove((R+4),(R+28),4);
}
B6bfd70:{NFSU2_TR(0x6bfd70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bfd73:{NFSU2_TR(0x6bfd73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfd76:{NFSU2_TR(0x6bfd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfd79:L6bfd79:{c.instructions+=11;NFSU2_TR(0x6bfd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfd7c:{NFSU2_TR(0x6bfd7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfd7f:{NFSU2_TR(0x6bfd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfd82:{NFSU2_TR(0x6bfd82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bfd85:{NFSU2_TR(0x6bfd85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfd88:{NFSU2_TR(0x6bfd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfd8b:{NFSU2_TR(0x6bfd8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfd8e:{NFSU2_TR(0x6bfd8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfd91:{NFSU2_TR(0x6bfd91);
__builtin_memmove((R+4),(R+0),4);
}
B6bfd93:{NFSU2_TR(0x6bfd93);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x200ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bfd99:{NFSU2_TR(0x6bfd99);
if(r1(R+518)){{goto L6bfda4;}}
}
B6bfd9b:L6bfd9b:{c.instructions+=2;NFSU2_TR(0x6bfd9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6bfd9d:{NFSU2_TR(0x6bfd9d);
if(r1(R+519)){{goto L6bfda8;}}
}
B6bfd9f:L6bfd9f:{c.instructions+=2;NFSU2_TR(0x6bfd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfda2:{NFSU2_TR(0x6bfda2);
{goto L6bfdd7;}
}
B6bfda4:L6bfda4:{c.instructions+=2;NFSU2_TR(0x6bfda4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6bfda6:{NFSU2_TR(0x6bfda6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6bfdb0;}}
}
B6bfda8:L6bfda8:{c.instructions+=2;NFSU2_TR(0x6bfda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfdae:{NFSU2_TR(0x6bfdae);
{goto L6bfdd7;}
}
B6bfdb0:L6bfdb0:{c.instructions+=2;NFSU2_TR(0x6bfdb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bfdb2:{NFSU2_TR(0x6bfdb2);
if(r1(R+518)){{goto L6bfdd1;}}
}
B6bfdb4:L6bfdb4:{c.instructions+=2;NFSU2_TR(0x6bfdb4);
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
B6bfdb6:{NFSU2_TR(0x6bfdb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfdd1;}}
}
B6bfdb8:L6bfdb8:{c.instructions+=4;NFSU2_TR(0x6bfdb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bfdbb:{NFSU2_TR(0x6bfdbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfdbd:{NFSU2_TR(0x6bfdbd);
__builtin_memmove((R+4),(R+24),4);
}
B6bfdbf:{NFSU2_TR(0x6bfdbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfdc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bfdc2:L6bfdc2:{c.instructions+=2;NFSU2_TR(0x6bfdc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfdc7:{NFSU2_TR(0x6bfdc7);
if(r1(R+518)){{goto L6bfdd1;}}
}
B6bfdc9:L6bfdc9:{c.instructions+=2;NFSU2_TR(0x6bfdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfdcf:{NFSU2_TR(0x6bfdcf);
{goto L6bfdd7;}
}
B6bfdd1:L6bfdd1:{c.instructions+=1;NFSU2_TR(0x6bfdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfdd7:L6bfdd7:{c.instructions+=4;NFSU2_TR(0x6bfdd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfddb:{NFSU2_TR(0x6bfddb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfddf:{NFSU2_TR(0x6bfddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfde2:{NFSU2_TR(0x6bfde2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfe18;}}
}
B6bfde4:L6bfde4:{c.instructions+=2;NFSU2_TR(0x6bfde4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bfde7:{NFSU2_TR(0x6bfde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfdea:L6bfdea:{c.instructions+=5;NFSU2_TR(0x6bfdea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfdec:{NFSU2_TR(0x6bfdec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfdef:{NFSU2_TR(0x6bfdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfdf2:{NFSU2_TR(0x6bfdf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfdf5:{NFSU2_TR(0x6bfdf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfe07;}}
}
B6bfdf7:L6bfdf7:{c.instructions+=3;NFSU2_TR(0x6bfdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfdfa:{NFSU2_TR(0x6bfdfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfdfd:{NFSU2_TR(0x6bfdfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfe07;}}
}
B6bfdff:L6bfdff:{c.instructions+=3;NFSU2_TR(0x6bfdff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfe02:{NFSU2_TR(0x6bfe02);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfe05:{NFSU2_TR(0x6bfe05);
if(r1(R+518)){{goto L6bfe15;}}
}
B6bfe07:L6bfe07:{c.instructions+=5;NFSU2_TR(0x6bfe07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfe0a:{NFSU2_TR(0x6bfe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe0d:{NFSU2_TR(0x6bfe0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6bfe10:{NFSU2_TR(0x6bfe10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bfe13:{NFSU2_TR(0x6bfe13);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfdeau);}goto L6bfdea;}}
}
B6bfe15:L6bfe15:{c.instructions+=1;NFSU2_TR(0x6bfe15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bfe18:L6bfe18:{c.instructions+=3;NFSU2_TR(0x6bfe18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bfe1b:{NFSU2_TR(0x6bfe1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfe1e:{NFSU2_TR(0x6bfe1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfe37;}}
}
B6bfe20:L6bfe20:{c.instructions+=7;NFSU2_TR(0x6bfe20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bfe23:{NFSU2_TR(0x6bfe23);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bfe26:{NFSU2_TR(0x6bfe26);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6bfe2a:{NFSU2_TR(0x6bfe2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bfe2c:{NFSU2_TR(0x6bfe2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bfe2e:{NFSU2_TR(0x6bfe2e);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6bfe35:{NFSU2_TR(0x6bfe35);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bfe79;}}
}
B6bfe37:L6bfe37:{c.instructions+=4;NFSU2_TR(0x6bfe37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe3d:{NFSU2_TR(0x6bfe3d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bfe42:{NFSU2_TR(0x6bfe42);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6bfe47:{NFSU2_TR(0x6bfe47);
if(r1(R+512)){{goto L6bfe5a;}}
}
B6bfe49:L6bfe49:{c.instructions+=3;NFSU2_TR(0x6bfe49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe4c:{NFSU2_TR(0x6bfe4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfe4f:{NFSU2_TR(0x6bfe4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfe5a;}}
}
B6bfe51:L6bfe51:{c.instructions+=3;NFSU2_TR(0x6bfe51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bfe54:{NFSU2_TR(0x6bfe54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfe58:{NFSU2_TR(0x6bfe58);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6bfe79;}}
}
B6bfe5a:L6bfe5a:{c.instructions+=7;NFSU2_TR(0x6bfe5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe5d:{NFSU2_TR(0x6bfe5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6bfe60:{NFSU2_TR(0x6bfe60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bfe61:{NFSU2_TR(0x6bfe61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bfe64:{NFSU2_TR(0x6bfe64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfe67:{NFSU2_TR(0x6bfe67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfe6a:{NFSU2_TR(0x6bfe6a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfd79u);}goto L6bfd79;}}
}
B6bfe70:L6bfe70:{c.instructions+=1;NFSU2_TR(0x6bfe70);
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
B6bfe72:L6bfe72:{c.instructions+=1;NFSU2_TR(0x6bfe72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bfe73:L6bfe73:{c.instructions+=4;NFSU2_TR(0x6bfe73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bfe74:{NFSU2_TR(0x6bfe74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bfe75:{NFSU2_TR(0x6bfe75);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bfe76:{NFSU2_TR(0x6bfe76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bfe79:L6bfe79:{c.instructions+=3;NFSU2_TR(0x6bfe79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe7c:{NFSU2_TR(0x6bfe7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfe7e:{NFSU2_TR(0x6bfe7e);
if(r1(R+518)){{goto L6bfe82;}}
}
B6bfe80:L6bfe80:{c.instructions+=1;NFSU2_TR(0x6bfe80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bfe82:L6bfe82:{c.instructions+=3;NFSU2_TR(0x6bfe82);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bfe84:{NFSU2_TR(0x6bfe84);
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
B6bfe85:{NFSU2_TR(0x6bfe85);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfe72u);}goto L6bfe72;}
}
B6bfe87:L6bfe87:{c.instructions+=4;NFSU2_TR(0x6bfe87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe8d:{NFSU2_TR(0x6bfe8d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6bfe92:{NFSU2_TR(0x6bfe92);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6bfe97:{NFSU2_TR(0x6bfe97);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bfea7;}}
}
B6bfe99:L6bfe99:{c.instructions+=3;NFSU2_TR(0x6bfe99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfe9f:{NFSU2_TR(0x6bfe9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6bfea5:{NFSU2_TR(0x6bfea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfeaa;}}
}
B6bfea7:L6bfea7:{c.instructions+=2;NFSU2_TR(0x6bfea7);
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
B6bfea9:{NFSU2_TR(0x6bfea9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bfeaa:L6bfeaa:{c.instructions+=7;NFSU2_TR(0x6bfeaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfeab:{NFSU2_TR(0x6bfeab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfeac:{NFSU2_TR(0x6bfeac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfead:{NFSU2_TR(0x6bfead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bfeb0:{NFSU2_TR(0x6bfeb0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bfeb2:{NFSU2_TR(0x6bfeb2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bfeb4:{NFSU2_TR(0x6bfeb4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bfedd;}}
}
B6bfeb6:L6bfeb6:{c.instructions+=2;NFSU2_TR(0x6bfeb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6bfeb9:{NFSU2_TR(0x6bfeb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfebc:L6bfebc:{c.instructions+=4;NFSU2_TR(0x6bfebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bfebe:{NFSU2_TR(0x6bfebe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bfec1:{NFSU2_TR(0x6bfec1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfec5:{NFSU2_TR(0x6bfec5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bfed1;}}
}
B6bfec7:L6bfec7:{c.instructions+=4;NFSU2_TR(0x6bfec7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bfec8:{NFSU2_TR(0x6bfec8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bfecb:{NFSU2_TR(0x6bfecb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6bfecd:{NFSU2_TR(0x6bfecd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfebcu);}goto L6bfebc;}}
}
B6bfecf:L6bfecf:{c.instructions+=1;NFSU2_TR(0x6bfecf);
{goto L6bfedd;}
}
B6bfed1:L6bfed1:{c.instructions+=2;NFSU2_TR(0x6bfed1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bfed4:{NFSU2_TR(0x6bfed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfed9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf27au);}goto L6bf27a;}
}
B6bfed9:L6bfed9:{c.instructions+=2;NFSU2_TR(0x6bfed9);
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
B6bfedb:{NFSU2_TR(0x6bfedb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bfedf;}}
}
B6bfedd:L6bfedd:{c.instructions+=1;NFSU2_TR(0x6bfedd);
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
B6bfedf:L6bfedf:{c.instructions+=4;NFSU2_TR(0x6bfedf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bfee0:{NFSU2_TR(0x6bfee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bfee1:{NFSU2_TR(0x6bfee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bfee2:{NFSU2_TR(0x6bfee2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bfee3:L6bfee3:{c.instructions+=8;NFSU2_TR(0x6bfee3);
__builtin_memmove((R+28),(R+28),4);
}
B6bfee5:{NFSU2_TR(0x6bfee5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfee6:{NFSU2_TR(0x6bfee6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfee7:{NFSU2_TR(0x6bfee7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bfee8:{NFSU2_TR(0x6bfee8);
__builtin_memmove((R+24),(R+4),4);
}
B6bfeea:{NFSU2_TR(0x6bfeea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bfeec:{NFSU2_TR(0x6bfeec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bfeef:{NFSU2_TR(0x6bfeef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bff10;}}
}
B6bfef1:L6bfef1:{c.instructions+=6;NFSU2_TR(0x6bfef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bfef4:{NFSU2_TR(0x6bfef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bfefa:{NFSU2_TR(0x6bfefa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bfefd:{NFSU2_TR(0x6bfefd);
__builtin_memmove((R+4),(R+24),4);
}
B6bfeff:{NFSU2_TR(0x6bfeff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bff05:{NFSU2_TR(0x6bff05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bff0aull));
TAIL_STATIC(0x6c3285u,6c3);
}
B6bff0a:L6bff0a:{c.instructions+=3;NFSU2_TR(0x6bff0a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bff0b:{NFSU2_TR(0x6bff0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bff0e:{NFSU2_TR(0x6bff0e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfef1u);}goto L6bfef1;}}
}
B6bff10:L6bff10:{c.instructions+=3;NFSU2_TR(0x6bff10);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bff12:{NFSU2_TR(0x6bff12);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bff15:{NFSU2_TR(0x6bff15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c0330u,6c0);}
}
B6bff1b:L6bff1b:{c.instructions+=8;NFSU2_TR(0x6bff1b);
w4(R+12,u32(0x70600000ull));
}
B6bff20:{NFSU2_TR(0x6bff20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bff23:{NFSU2_TR(0x6bff23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bff29:{NFSU2_TR(0x6bff29);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bff2c:{NFSU2_TR(0x6bff2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bff32:{NFSU2_TR(0x6bff32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bff35:{NFSU2_TR(0x6bff35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bff37:{NFSU2_TR(0x6bff37);
if(r1(R+518)){{goto L6bff48;}}
}
B6bff39:L6bff39:{c.instructions+=2;NFSU2_TR(0x6bff39);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bff3d:{NFSU2_TR(0x6bff3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bff48;}}
}
B6bff3f:L6bff3f:{c.instructions+=2;NFSU2_TR(0x6bff3f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6bff42:{NFSU2_TR(0x6bff42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bff48:L6bff48:{c.instructions+=2;NFSU2_TR(0x6bff48);
__builtin_memmove((R+4),(R+24),4);
}
B6bff4a:{NFSU2_TR(0x6bff4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bff4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bfe87u);}goto L6bfe87;}
}
B6bff4f:L6bff4f:{c.instructions+=2;NFSU2_TR(0x6bff4f);
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
B6bff51:{NFSU2_TR(0x6bff51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c0332u,6c0);}
}
B6bff57:L6bff57:{c.instructions+=5;NFSU2_TR(0x6bff57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bff5d:{NFSU2_TR(0x6bff5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bff5f:{NFSU2_TR(0x6bff5f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bff64:{NFSU2_TR(0x6bff64);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bff66:{NFSU2_TR(0x6bff66);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6c0191u,6c0);}
}
B6bff6c:L6bff6c:{c.instructions+=1;NFSU2_TR(0x6bff6c);
if(r1(R+518)){TAIL_STATIC(0x6c0155u,6c0);}
}
B6bff72:L6bff72:{c.instructions+=3;NFSU2_TR(0x6bff72);
w4(R+4,u32(0x20300000ull));
}
B6bff77:{NFSU2_TR(0x6bff77);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bff79:{NFSU2_TR(0x6bff79);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6c0097u,6c0);}
}
B6bff7f:L6bff7f:{c.instructions+=1;NFSU2_TR(0x6bff7f);
if(r1(R+518)){TAIL_STATIC(0x6c008bu,6c0);}
}
B6bff85:L6bff85:{c.instructions+=3;NFSU2_TR(0x6bff85);
w4(R+4,u32(0x10700000ull));
}
B6bff8a:{NFSU2_TR(0x6bff8a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bff8c:{NFSU2_TR(0x6bff8c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6c001eu,6c0);}
}
B6bff92:L6bff92:{c.instructions+=1;NFSU2_TR(0x6bff92);
if(r1(R+518)){TAIL_STATIC(0x6c0012u,6c0);}
}
B6bff94:L6bff94:{c.instructions+=2;NFSU2_TR(0x6bff94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bff96:{NFSU2_TR(0x6bff96);
if(r1(R+518)){TAIL_STATIC(0x6c0006u,6c0);}
}
B6bff98:L6bff98:{c.instructions+=2;NFSU2_TR(0x6bff98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bff9d:{NFSU2_TR(0x6bff9d);
if(r1(R+518)){TAIL_STATIC(0x6c007fu,6c0);}
}
B6bffa3:L6bffa3:{c.instructions+=2;NFSU2_TR(0x6bffa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bffa8:{NFSU2_TR(0x6bffa8);
if(r1(R+518)){{goto L6bfffa;}}
}
B6bffaa:L6bffaa:{c.instructions+=2;NFSU2_TR(0x6bffaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bffaf:{NFSU2_TR(0x6bffaf);
if(r1(R+518)){{goto L6bffee;}}
}
B6bffb1:L6bffb1:{c.instructions+=2;NFSU2_TR(0x6bffb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bffb6:{NFSU2_TR(0x6bffb6);
if(r1(R+518)){{goto L6bffe2;}}
}
B6bffb8:L6bffb8:{c.instructions+=2;NFSU2_TR(0x6bffb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bffbd:{NFSU2_TR(0x6bffbd);
if(r1(R+518)){{goto L6bffd6;}}
}
B6bffbf:L6bffbf:{c.instructions+=2;NFSU2_TR(0x6bffbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bffc4:{NFSU2_TR(0x6bffc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c0336u,6c0);}
}
B6bffca:L6bffca:{c.instructions+=2;NFSU2_TR(0x6bffca);
__builtin_memmove((R+4),(R+24),4);
}
B6bffcc:{NFSU2_TR(0x6bffcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bffd1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bf070u);}goto L6bf070;}
}
B6bffd1:L6bffd1:{c.instructions+=1;NFSU2_TR(0x6bffd1);
TAIL_STATIC(0x6c031fu,6c0);
}
B6bffd6:L6bffd6:{c.instructions+=2;NFSU2_TR(0x6bffd6);
__builtin_memmove((R+4),(R+24),4);
}
B6bffd8:{NFSU2_TR(0x6bffd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bffddull));
TAIL_STATIC(0x6bee39u,6be);
}
B6bffdd:L6bffdd:{c.instructions+=1;NFSU2_TR(0x6bffdd);
TAIL_STATIC(0x6c031fu,6c0);
}
B6bffe2:L6bffe2:{c.instructions+=2;NFSU2_TR(0x6bffe2);
__builtin_memmove((R+4),(R+24),4);
}
B6bffe4:{NFSU2_TR(0x6bffe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bffe9ull));
TAIL_STATIC(0x6d37dau,6d3);
}
B6bffe9:L6bffe9:{c.instructions+=1;NFSU2_TR(0x6bffe9);
TAIL_STATIC(0x6c031fu,6c0);
}
B6bffee:L6bffee:{c.instructions+=2;NFSU2_TR(0x6bffee);
__builtin_memmove((R+4),(R+24),4);
}
B6bfff0:{NFSU2_TR(0x6bfff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bfff5ull));
TAIL_STATIC(0x6d37bcu,6d3);
}
B6bfff5:L6bfff5:{c.instructions+=1;NFSU2_TR(0x6bfff5);
TAIL_STATIC(0x6c031fu,6c0);
}
B6bfffa:L6bfffa:{c.instructions+=2;NFSU2_TR(0x6bfffa);
__builtin_memmove((R+4),(R+24),4);
}
B6bfffc:{NFSU2_TR(0x6bfffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c0001ull));
TAIL_STATIC(0x6d2c79u,6d2);
}
XIT:NFSU2_TR_EXIT(0x6bf,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
