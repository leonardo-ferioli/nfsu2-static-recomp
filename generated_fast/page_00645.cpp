#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_646(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x645,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x645,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_645(u8* __restrict R,Cpu& c);
u32 page_645(Cpu& c){return body_645(c.regs.data(),c);}
__attribute__((noinline)) u32 body_645(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x645001:goto L645001;
case 0x645002:c.instructions+=5;goto B645002;
case 0x645003:c.instructions+=4;goto B645003;
case 0x645004:c.instructions+=3;goto B645004;
case 0x645005:c.instructions+=2;goto B645005;
case 0x645007:c.instructions+=1;goto B645007;
case 0x645009:goto L645009;
case 0x64500b:c.instructions+=1;goto B64500b;
case 0x64500d:goto L64500d;
case 0x64500f:c.instructions+=1;goto B64500f;
case 0x645012:goto L645012;
case 0x645014:c.instructions+=1;goto B645014;
case 0x64501a:goto L64501a;
case 0x64501d:c.instructions+=5;goto B64501d;
case 0x64501f:c.instructions+=4;goto B64501f;
case 0x645022:c.instructions+=3;goto B645022;
case 0x645025:c.instructions+=2;goto B645025;
case 0x645028:c.instructions+=1;goto B645028;
case 0x64502a:goto L64502a;
case 0x64502c:c.instructions+=1;goto B64502c;
case 0x64502e:goto L64502e;
case 0x645031:c.instructions+=3;goto B645031;
case 0x645033:c.instructions+=2;goto B645033;
case 0x645036:c.instructions+=1;goto B645036;
case 0x645038:goto L645038;
case 0x64503a:c.instructions+=1;goto B64503a;
case 0x645040:goto L645040;
case 0x645042:c.instructions+=1;goto B645042;
case 0x645048:goto L645048;
case 0x64504b:c.instructions+=2;goto B64504b;
case 0x64504e:c.instructions+=1;goto B64504e;
case 0x645053:goto L645053;
case 0x645055:c.instructions+=1;goto B645055;
case 0x645057:goto L645057;
case 0x64505a:c.instructions+=2;goto B64505a;
case 0x64505d:c.instructions+=1;goto B64505d;
case 0x64505f:goto L64505f;
case 0x645062:c.instructions+=1;goto B645062;
case 0x645064:goto L645064;
case 0x645067:c.instructions+=1;goto B645067;
case 0x645069:goto L645069;
case 0x64506b:c.instructions+=1;goto B64506b;
case 0x64506d:goto L64506d;
case 0x645070:c.instructions+=1;goto B645070;
case 0x645072:goto L645072;
case 0x645078:goto L645078;
case 0x64507b:c.instructions+=1;goto B64507b;
case 0x645081:goto L645081;
case 0x645084:c.instructions+=5;goto B645084;
case 0x645087:c.instructions+=4;goto B645087;
case 0x645089:c.instructions+=3;goto B645089;
case 0x64508b:c.instructions+=2;goto B64508b;
case 0x64508c:c.instructions+=1;goto B64508c;
case 0x645091:goto L645091;
case 0x645094:c.instructions+=2;goto B645094;
case 0x645097:c.instructions+=1;goto B645097;
case 0x645099:goto L645099;
case 0x64509c:c.instructions+=2;goto B64509c;
case 0x64509f:c.instructions+=1;goto B64509f;
case 0x6450a1:goto L6450a1;
case 0x6450a4:c.instructions+=2;goto B6450a4;
case 0x6450a7:c.instructions+=1;goto B6450a7;
case 0x6450a9:goto L6450a9;
case 0x6450ac:c.instructions+=2;goto B6450ac;
case 0x6450af:c.instructions+=1;goto B6450af;
case 0x6450b5:goto L6450b5;
case 0x6450b7:c.instructions+=1;goto B6450b7;
case 0x6450bd:goto L6450bd;
case 0x6450bf:c.instructions+=1;goto B6450bf;
case 0x6450c5:goto L6450c5;
case 0x6450c7:c.instructions+=2;goto B6450c7;
case 0x6450c8:c.instructions+=1;goto B6450c8;
case 0x6450cd:goto L6450cd;
case 0x6450d0:c.instructions+=5;goto B6450d0;
case 0x6450d3:c.instructions+=4;goto B6450d3;
case 0x6450d5:c.instructions+=3;goto B6450d5;
case 0x6450d7:c.instructions+=2;goto B6450d7;
case 0x6450da:c.instructions+=1;goto B6450da;
case 0x6450dc:goto L6450dc;
case 0x6450e1:goto L6450e1;
case 0x6450e4:c.instructions+=1;goto B6450e4;
case 0x6450e6:goto L6450e6;
case 0x6450ec:goto L6450ec;
case 0x6450ef:c.instructions+=1;goto B6450ef;
case 0x6450f5:goto L6450f5;
case 0x6450f8:c.instructions+=1;goto B6450f8;
case 0x6450fb:goto L6450fb;
case 0x6450fd:c.instructions+=3;goto B6450fd;
case 0x6450ff:c.instructions+=2;goto B6450ff;
case 0x645101:c.instructions+=1;goto B645101;
case 0x645107:goto L645107;
case 0x645109:c.instructions+=1;goto B645109;
case 0x64510b:goto L64510b;
case 0x64510e:c.instructions+=3;goto B64510e;
case 0x645110:c.instructions+=2;goto B645110;
case 0x645113:c.instructions+=1;goto B645113;
case 0x645119:goto L645119;
case 0x64511a:c.instructions+=5;goto B64511a;
case 0x64511b:c.instructions+=4;goto B64511b;
case 0x64511c:c.instructions+=3;goto B64511c;
case 0x64511d:c.instructions+=2;goto B64511d;
case 0x64511f:c.instructions+=1;goto B64511f;
case 0x645121:goto L645121;
case 0x645123:c.instructions+=1;goto B645123;
case 0x645128:goto L645128;
case 0x64512b:c.instructions+=4;goto B64512b;
case 0x64512f:c.instructions+=3;goto B64512f;
case 0x645131:c.instructions+=2;goto B645131;
case 0x645138:c.instructions+=1;goto B645138;
case 0x64513a:goto L64513a;
case 0x64513d:c.instructions+=1;goto B64513d;
case 0x645140:goto L645140;
case 0x645142:c.instructions+=3;goto B645142;
case 0x645144:c.instructions+=2;goto B645144;
case 0x645146:c.instructions+=1;goto B645146;
case 0x645148:goto L645148;
case 0x64514a:c.instructions+=1;goto B64514a;
case 0x64514c:goto L64514c;
case 0x64514f:c.instructions+=3;goto B64514f;
case 0x645151:c.instructions+=2;goto B645151;
case 0x645154:c.instructions+=1;goto B645154;
case 0x645156:goto L645156;
case 0x645157:c.instructions+=5;goto B645157;
case 0x645158:c.instructions+=4;goto B645158;
case 0x645159:c.instructions+=3;goto B645159;
case 0x64515a:c.instructions+=2;goto B64515a;
case 0x64515c:c.instructions+=1;goto B64515c;
case 0x64515e:goto L64515e;
case 0x645160:c.instructions+=1;goto B645160;
case 0x645162:goto L645162;
case 0x645164:c.instructions+=1;goto B645164;
case 0x645167:goto L645167;
case 0x645169:c.instructions+=1;goto B645169;
case 0x64516b:goto L64516b;
case 0x64516e:c.instructions+=3;goto B64516e;
case 0x645171:c.instructions+=2;goto B645171;
case 0x645173:c.instructions+=1;goto B645173;
case 0x645175:goto L645175;
case 0x645177:goto L645177;
case 0x64517e:goto L64517e;
case 0x645181:goto L645181;
case 0x645184:c.instructions+=1;goto B645184;
case 0x645186:goto L645186;
case 0x645189:c.instructions+=1;goto B645189;
case 0x64518c:goto L64518c;
case 0x64518e:c.instructions+=3;goto B64518e;
case 0x645190:c.instructions+=2;goto B645190;
case 0x645192:c.instructions+=1;goto B645192;
case 0x645194:goto L645194;
case 0x645196:c.instructions+=1;goto B645196;
case 0x645198:goto L645198;
case 0x64519b:c.instructions+=3;goto B64519b;
case 0x64519d:c.instructions+=2;goto B64519d;
case 0x6451a0:c.instructions+=1;goto B6451a0;
case 0x6451a2:goto L6451a2;
case 0x6451a3:c.instructions+=5;goto B6451a3;
case 0x6451a4:c.instructions+=4;goto B6451a4;
case 0x6451a5:c.instructions+=3;goto B6451a5;
case 0x6451a6:c.instructions+=2;goto B6451a6;
case 0x6451a8:c.instructions+=1;goto B6451a8;
case 0x6451aa:goto L6451aa;
case 0x6451ac:c.instructions+=1;goto B6451ac;
case 0x6451ae:goto L6451ae;
case 0x6451b0:c.instructions+=1;goto B6451b0;
case 0x6451b3:goto L6451b3;
case 0x6451b5:c.instructions+=2;goto B6451b5;
case 0x6451b8:c.instructions+=1;goto B6451b8;
case 0x6451ba:goto L6451ba;
case 0x6451bd:goto L6451bd;
case 0x6451c0:c.instructions+=2;goto B6451c0;
case 0x6451c2:c.instructions+=1;goto B6451c2;
case 0x6451c4:goto L6451c4;
case 0x6451c6:goto L6451c6;
case 0x6451cd:goto L6451cd;
case 0x6451d1:c.instructions+=1;goto B6451d1;
case 0x6451d3:goto L6451d3;
case 0x6451d5:c.instructions+=3;goto B6451d5;
case 0x6451d8:c.instructions+=2;goto B6451d8;
case 0x6451db:c.instructions+=1;goto B6451db;
case 0x6451dd:goto L6451dd;
case 0x6451e0:c.instructions+=1;goto B6451e0;
case 0x6451e3:goto L6451e3;
case 0x6451e5:c.instructions+=3;goto B6451e5;
case 0x6451e7:c.instructions+=2;goto B6451e7;
case 0x6451e9:c.instructions+=1;goto B6451e9;
case 0x6451eb:goto L6451eb;
case 0x6451ed:c.instructions+=1;goto B6451ed;
case 0x6451f3:goto L6451f3;
case 0x6451f6:c.instructions+=3;goto B6451f6;
case 0x6451f8:c.instructions+=2;goto B6451f8;
case 0x6451fb:c.instructions+=1;goto B6451fb;
case 0x6451fd:goto L6451fd;
case 0x6451fe:c.instructions+=5;goto B6451fe;
case 0x6451ff:c.instructions+=4;goto B6451ff;
case 0x645200:c.instructions+=3;goto B645200;
case 0x645201:c.instructions+=2;goto B645201;
case 0x645203:c.instructions+=1;goto B645203;
case 0x645205:goto L645205;
case 0x64520a:goto L64520a;
case 0x64520c:c.instructions+=1;goto B64520c;
case 0x64520f:goto L64520f;
case 0x645211:c.instructions+=4;goto B645211;
case 0x645213:c.instructions+=3;goto B645213;
case 0x645216:c.instructions+=2;goto B645216;
case 0x645218:c.instructions+=1;goto B645218;
case 0x64521b:goto L64521b;
case 0x64521d:c.instructions+=1;goto B64521d;
case 0x645223:goto L645223;
case 0x645226:c.instructions+=1;goto B645226;
case 0x645229:goto L645229;
case 0x64522b:c.instructions+=2;goto B64522b;
case 0x64522e:c.instructions+=1;goto B64522e;
case 0x645234:goto L645234;
case 0x645239:goto L645239;
case 0x64523b:goto L64523b;
case 0x64523c:c.instructions+=4;goto B64523c;
case 0x64523d:c.instructions+=3;goto B64523d;
case 0x64523e:c.instructions+=2;goto B64523e;
case 0x64523f:c.instructions+=1;goto B64523f;
case 0x645242:goto L645242;
case 0x645244:c.instructions+=8;goto B645244;
case 0x645245:c.instructions+=7;goto B645245;
case 0x645247:c.instructions+=6;goto B645247;
case 0x645248:c.instructions+=5;goto B645248;
case 0x645249:c.instructions+=4;goto B645249;
case 0x64524a:c.instructions+=3;goto B64524a;
case 0x64524d:c.instructions+=2;goto B64524d;
case 0x64524f:c.instructions+=1;goto B64524f;
case 0x645254:goto L645254;
case 0x645258:c.instructions+=1;goto B645258;
case 0x64525a:goto L64525a;
case 0x64525c:c.instructions+=1;goto B64525c;
case 0x64525f:goto L64525f;
case 0x645261:c.instructions+=3;goto B645261;
case 0x645263:c.instructions+=2;goto B645263;
case 0x645265:c.instructions+=1;goto B645265;
case 0x645267:goto L645267;
case 0x645269:c.instructions+=1;goto B645269;
case 0x64526b:goto L64526b;
case 0x64526e:c.instructions+=3;goto B64526e;
case 0x645270:c.instructions+=2;goto B645270;
case 0x645273:c.instructions+=1;goto B645273;
case 0x645275:goto L645275;
case 0x645276:c.instructions+=5;goto B645276;
case 0x645277:c.instructions+=4;goto B645277;
case 0x645278:c.instructions+=3;goto B645278;
case 0x645279:c.instructions+=2;goto B645279;
case 0x64527b:c.instructions+=1;goto B64527b;
case 0x64527d:goto L64527d;
case 0x64527f:c.instructions+=1;goto B64527f;
case 0x645281:goto L645281;
case 0x645283:c.instructions+=1;goto B645283;
case 0x645286:goto L645286;
case 0x645288:c.instructions+=1;goto B645288;
case 0x64528a:goto L64528a;
case 0x64528c:goto L64528c;
case 0x64528f:goto L64528f;
case 0x645291:c.instructions+=1;goto B645291;
case 0x645293:goto L645293;
case 0x645295:c.instructions+=1;goto B645295;
case 0x645297:goto L645297;
case 0x64529b:c.instructions+=1;goto B64529b;
case 0x64529d:goto L64529d;
case 0x64529f:c.instructions+=2;goto B64529f;
case 0x6452a0:c.instructions+=1;goto B6452a0;
case 0x6452a2:goto L6452a2;
case 0x6452a5:c.instructions+=2;goto B6452a5;
case 0x6452ac:c.instructions+=1;goto B6452ac;
case 0x6452ae:goto L6452ae;
case 0x6452b2:c.instructions+=1;goto B6452b2;
case 0x6452b4:goto L6452b4;
case 0x6452b7:c.instructions+=2;goto B6452b7;
case 0x6452b9:c.instructions+=1;goto B6452b9;
case 0x6452be:goto L6452be;
case 0x6452c0:c.instructions+=1;goto B6452c0;
case 0x6452c2:goto L6452c2;
case 0x6452c5:goto L6452c5;
case 0x6452c7:c.instructions+=1;goto B6452c7;
case 0x6452c9:goto L6452c9;
case 0x6452cd:c.instructions+=3;goto B6452cd;
case 0x6452cf:c.instructions+=2;goto B6452cf;
case 0x6452d1:c.instructions+=1;goto B6452d1;
case 0x6452d4:goto L6452d4;
case 0x6452d5:c.instructions+=4;goto B6452d5;
case 0x6452d6:c.instructions+=3;goto B6452d6;
case 0x6452d7:c.instructions+=2;goto B6452d7;
case 0x6452d8:c.instructions+=1;goto B6452d8;
case 0x6452db:goto L6452db;
case 0x6452dd:c.instructions+=6;goto B6452dd;
case 0x6452de:c.instructions+=5;goto B6452de;
case 0x6452e0:c.instructions+=4;goto B6452e0;
case 0x6452e1:c.instructions+=3;goto B6452e1;
case 0x6452e4:c.instructions+=2;goto B6452e4;
case 0x6452e6:c.instructions+=1;goto B6452e6;
case 0x6452eb:goto L6452eb;
case 0x6452ed:c.instructions+=1;goto B6452ed;
case 0x6452ef:goto L6452ef;
case 0x6452f1:c.instructions+=1;goto B6452f1;
case 0x6452f3:goto L6452f3;
case 0x6452f4:c.instructions+=3;goto B6452f4;
case 0x6452f7:c.instructions+=2;goto B6452f7;
case 0x6452f9:c.instructions+=1;goto B6452f9;
case 0x6452fe:goto L6452fe;
case 0x645302:c.instructions+=1;goto B645302;
case 0x645304:goto L645304;
case 0x645306:c.instructions+=1;goto B645306;
case 0x645309:goto L645309;
case 0x64530b:c.instructions+=3;goto B64530b;
case 0x64530d:c.instructions+=2;goto B64530d;
case 0x64530f:c.instructions+=1;goto B64530f;
case 0x645311:goto L645311;
case 0x645313:c.instructions+=1;goto B645313;
case 0x645315:goto L645315;
case 0x645318:c.instructions+=3;goto B645318;
case 0x64531a:c.instructions+=2;goto B64531a;
case 0x64531d:c.instructions+=1;goto B64531d;
case 0x64531f:goto L64531f;
case 0x645320:c.instructions+=5;goto B645320;
case 0x645321:c.instructions+=4;goto B645321;
case 0x645322:c.instructions+=3;goto B645322;
case 0x645323:c.instructions+=2;goto B645323;
case 0x645325:c.instructions+=1;goto B645325;
case 0x645327:goto L645327;
case 0x645329:c.instructions+=1;goto B645329;
case 0x64532b:goto L64532b;
case 0x64532d:c.instructions+=1;goto B64532d;
case 0x645330:goto L645330;
case 0x645332:c.instructions+=1;goto B645332;
case 0x645334:goto L645334;
case 0x645336:goto L645336;
case 0x645339:goto L645339;
case 0x64533b:c.instructions+=1;goto B64533b;
case 0x64533d:goto L64533d;
case 0x64533f:goto L64533f;
case 0x645340:goto L645340;
case 0x645341:c.instructions+=2;goto B645341;
case 0x645342:c.instructions+=1;goto B645342;
case 0x645345:goto L645345;
case 0x645348:c.instructions+=2;goto B645348;
case 0x64534a:c.instructions+=1;goto B64534a;
case 0x64534c:goto L64534c;
case 0x64534f:c.instructions+=1;goto B64534f;
case 0x645351:goto L645351;
case 0x645354:c.instructions+=2;goto B645354;
case 0x645356:c.instructions+=1;goto B645356;
case 0x645358:goto L645358;
case 0x64535b:c.instructions+=1;goto B64535b;
case 0x64535d:goto L64535d;
case 0x64535f:c.instructions+=2;goto B64535f;
case 0x645360:c.instructions+=1;goto B645360;
case 0x645362:goto L645362;
case 0x645364:c.instructions+=6;goto B645364;
case 0x645365:c.instructions+=5;goto B645365;
case 0x645367:c.instructions+=4;goto B645367;
case 0x64536d:c.instructions+=3;goto B64536d;
case 0x64536f:c.instructions+=2;goto B64536f;
case 0x645372:c.instructions+=1;goto B645372;
case 0x645377:goto L645377;
case 0x645378:c.instructions+=1;goto B645378;
case 0x64537b:goto L64537b;
case 0x64537d:c.instructions+=9;goto B64537d;
case 0x64537e:c.instructions+=8;goto B64537e;
case 0x645380:c.instructions+=7;goto B645380;
case 0x645383:c.instructions+=6;goto B645383;
case 0x645384:c.instructions+=5;goto B645384;
case 0x645386:c.instructions+=4;goto B645386;
case 0x645388:c.instructions+=3;goto B645388;
case 0x64538a:c.instructions+=2;goto B64538a;
case 0x64538c:c.instructions+=1;goto B64538c;
case 0x64538e:goto L64538e;
case 0x64538f:c.instructions+=4;goto B64538f;
case 0x645390:c.instructions+=3;goto B645390;
case 0x645393:c.instructions+=2;goto B645393;
case 0x645396:c.instructions+=1;goto B645396;
case 0x645399:goto L645399;
case 0x64539c:c.instructions+=1;goto B64539c;
case 0x64539e:goto L64539e;
case 0x6453a0:c.instructions+=1;goto B6453a0;
case 0x6453a2:goto L6453a2;
case 0x6453a6:goto L6453a6;
case 0x6453a7:c.instructions+=2;goto B6453a7;
case 0x6453a9:c.instructions+=1;goto B6453a9;
case 0x6453ab:goto L6453ab;
case 0x6453ad:c.instructions+=3;goto B6453ad;
case 0x6453af:c.instructions+=2;goto B6453af;
case 0x6453b2:c.instructions+=1;goto B6453b2;
case 0x6453b4:goto L6453b4;
case 0x6453b6:c.instructions+=2;goto B6453b6;
case 0x6453b8:c.instructions+=1;goto B6453b8;
case 0x6453ba:goto L6453ba;
case 0x6453bd:c.instructions+=1;goto B6453bd;
case 0x6453bf:goto L6453bf;
case 0x6453c1:c.instructions+=1;goto B6453c1;
case 0x6453c3:goto L6453c3;
case 0x6453c7:goto L6453c7;
case 0x6453c9:c.instructions+=2;goto B6453c9;
case 0x6453ca:c.instructions+=1;goto B6453ca;
case 0x6453cb:goto L6453cb;
case 0x6453cd:c.instructions+=1;goto B6453cd;
case 0x6453cf:goto L6453cf;
case 0x6453d1:c.instructions+=1;goto B6453d1;
case 0x6453d4:goto L6453d4;
case 0x6453d5:c.instructions+=3;goto B6453d5;
case 0x6453d6:c.instructions+=2;goto B6453d6;
case 0x6453d9:c.instructions+=1;goto B6453d9;
case 0x6453db:goto L6453db;
case 0x6453dc:c.instructions+=1;goto B6453dc;
case 0x6453dd:goto L6453dd;
case 0x6453de:c.instructions+=2;goto B6453de;
case 0x6453df:c.instructions+=1;goto B6453df;
case 0x6453e2:goto L6453e2;
case 0x6453e4:c.instructions+=7;goto B6453e4;
case 0x6453e5:c.instructions+=6;goto B6453e5;
case 0x6453e7:c.instructions+=5;goto B6453e7;
case 0x6453ea:c.instructions+=4;goto B6453ea;
case 0x6453ec:c.instructions+=3;goto B6453ec;
case 0x6453ed:c.instructions+=2;goto B6453ed;
case 0x6453ef:c.instructions+=1;goto B6453ef;
case 0x6453f1:goto L6453f1;
case 0x6453f4:c.instructions+=1;goto B6453f4;
case 0x6453f6:goto L6453f6;
case 0x6453fb:c.instructions+=6;goto B6453fb;
case 0x6453fc:c.instructions+=5;goto B6453fc;
case 0x645402:c.instructions+=4;goto B645402;
case 0x645403:c.instructions+=3;goto B645403;
case 0x645406:c.instructions+=2;goto B645406;
case 0x645407:c.instructions+=1;goto B645407;
case 0x64540c:goto L64540c;
case 0x64540f:c.instructions+=1;goto B64540f;
case 0x645416:goto L645416;
case 0x645418:goto L645418;
case 0x645419:c.instructions+=2;goto B645419;
case 0x64541a:c.instructions+=1;goto B64541a;
case 0x64541d:goto L64541d;
case 0x64541f:c.instructions+=4;goto B64541f;
case 0x645420:c.instructions+=3;goto B645420;
case 0x645423:c.instructions+=2;goto B645423;
case 0x645425:c.instructions+=1;goto B645425;
case 0x645427:goto L645427;
case 0x645429:c.instructions+=1;goto B645429;
case 0x64542e:goto L64542e;
case 0x64542f:c.instructions+=1;goto B64542f;
case 0x645434:goto L645434;
case 0x645435:goto L645435;
case 0x645436:c.instructions+=1;goto B645436;
case 0x645437:goto L645437;
case 0x645439:c.instructions+=5;goto B645439;
case 0x64543a:c.instructions+=4;goto B64543a;
case 0x64543c:c.instructions+=3;goto B64543c;
case 0x64543d:c.instructions+=2;goto B64543d;
case 0x64543f:c.instructions+=1;goto B64543f;
case 0x645444:goto L645444;
case 0x645448:c.instructions+=1;goto B645448;
case 0x64544a:goto L64544a;
case 0x64544b:c.instructions+=1;goto B64544b;
case 0x645450:goto L645450;
case 0x645451:goto L645451;
case 0x645453:c.instructions+=3;goto B645453;
case 0x645454:c.instructions+=2;goto B645454;
case 0x645455:c.instructions+=1;goto B645455;
case 0x645458:goto L645458;
case 0x64545a:c.instructions+=3;goto B64545a;
case 0x64545b:c.instructions+=2;goto B64545b;
case 0x64545d:c.instructions+=1;goto B64545d;
case 0x645462:goto L645462;
case 0x64546c:c.instructions+=5;goto B64546c;
case 0x645471:c.instructions+=4;goto B645471;
case 0x645477:c.instructions+=3;goto B645477;
case 0x64547d:c.instructions+=2;goto B64547d;
case 0x64547e:c.instructions+=1;goto B64547e;
case 0x64547f:goto L64547f;
case 0x645485:c.instructions+=3;goto B645485;
case 0x64548a:c.instructions+=2;goto B64548a;
case 0x645491:c.instructions+=1;goto B645491;
case 0x645496:goto L645496;
case 0x645498:c.instructions+=6;goto B645498;
case 0x645499:c.instructions+=5;goto B645499;
case 0x64549b:c.instructions+=4;goto B64549b;
case 0x64549c:c.instructions+=3;goto B64549c;
case 0x64549f:c.instructions+=2;goto B64549f;
case 0x6454a1:c.instructions+=1;goto B6454a1;
case 0x6454a6:goto L6454a6;
case 0x6454aa:c.instructions+=2;goto B6454aa;
case 0x6454ad:c.instructions+=1;goto B6454ad;
case 0x6454af:goto L6454af;
case 0x6454b0:c.instructions+=1;goto B6454b0;
case 0x6454b1:goto L6454b1;
case 0x6454b3:c.instructions+=2;goto B6454b3;
case 0x6454b5:c.instructions+=1;goto B6454b5;
case 0x6454b8:goto L6454b8;
case 0x6454ba:c.instructions+=3;goto B6454ba;
case 0x6454bc:c.instructions+=2;goto B6454bc;
case 0x6454be:c.instructions+=1;goto B6454be;
case 0x6454c0:goto L6454c0;
case 0x6454c2:c.instructions+=1;goto B6454c2;
case 0x6454c4:goto L6454c4;
case 0x6454c7:c.instructions+=3;goto B6454c7;
case 0x6454c9:c.instructions+=2;goto B6454c9;
case 0x6454cc:c.instructions+=1;goto B6454cc;
case 0x6454ce:goto L6454ce;
case 0x6454cf:c.instructions+=5;goto B6454cf;
case 0x6454d0:c.instructions+=4;goto B6454d0;
case 0x6454d1:c.instructions+=3;goto B6454d1;
case 0x6454d2:c.instructions+=2;goto B6454d2;
case 0x6454d4:c.instructions+=1;goto B6454d4;
case 0x6454d6:goto L6454d6;
case 0x6454d8:c.instructions+=1;goto B6454d8;
case 0x6454da:goto L6454da;
case 0x6454dc:c.instructions+=1;goto B6454dc;
case 0x6454df:goto L6454df;
case 0x6454e1:c.instructions+=1;goto B6454e1;
case 0x6454e3:goto L6454e3;
case 0x6454e5:goto L6454e5;
case 0x6454e8:c.instructions+=2;goto B6454e8;
case 0x6454eb:c.instructions+=1;goto B6454eb;
case 0x6454ed:goto L6454ed;
case 0x6454ef:goto L6454ef;
case 0x6454f1:c.instructions+=5;goto B6454f1;
case 0x6454f4:c.instructions+=4;goto B6454f4;
case 0x6454f6:c.instructions+=3;goto B6454f6;
case 0x6454fa:c.instructions+=2;goto B6454fa;
case 0x6454fc:c.instructions+=1;goto B6454fc;
case 0x645501:goto L645501;
case 0x645502:c.instructions+=1;goto B645502;
case 0x645503:goto L645503;
case 0x645505:c.instructions+=3;goto B645505;
case 0x645506:c.instructions+=2;goto B645506;
case 0x645507:c.instructions+=1;goto B645507;
case 0x64550a:goto L64550a;
case 0x64550c:c.instructions+=12;goto B64550c;
case 0x64550d:c.instructions+=11;goto B64550d;
case 0x64550f:c.instructions+=10;goto B64550f;
case 0x645510:c.instructions+=9;goto B645510;
case 0x645511:c.instructions+=8;goto B645511;
case 0x645512:c.instructions+=7;goto B645512;
case 0x645514:c.instructions+=6;goto B645514;
case 0x64551a:c.instructions+=5;goto B64551a;
case 0x64551b:c.instructions+=4;goto B64551b;
case 0x645521:c.instructions+=3;goto B645521;
case 0x645522:c.instructions+=2;goto B645522;
case 0x645528:c.instructions+=1;goto B645528;
case 0x64552d:goto L64552d;
case 0x64552f:c.instructions+=1;goto B64552f;
case 0x645531:goto L645531;
case 0x645533:c.instructions+=3;goto B645533;
case 0x645536:c.instructions+=2;goto B645536;
case 0x645539:c.instructions+=1;goto B645539;
case 0x64553b:goto L64553b;
case 0x645541:c.instructions+=5;goto B645541;
case 0x645543:c.instructions+=4;goto B645543;
case 0x645548:c.instructions+=3;goto B645548;
case 0x64554a:c.instructions+=2;goto B64554a;
case 0x64554b:c.instructions+=1;goto B64554b;
case 0x64554d:goto L64554d;
case 0x64554f:goto L64554f;
case 0x645551:goto L645551;
case 0x645553:c.instructions+=1;goto B645553;
case 0x645558:goto L645558;
case 0x64555a:goto L64555a;
case 0x64555c:c.instructions+=4;goto B64555c;
case 0x645561:c.instructions+=3;goto B645561;
case 0x645563:c.instructions+=2;goto B645563;
case 0x645564:c.instructions+=1;goto B645564;
case 0x645566:goto L645566;
case 0x645568:goto L645568;
case 0x64556a:goto L64556a;
case 0x64556c:c.instructions+=1;goto B64556c;
case 0x645571:goto L645571;
case 0x645573:goto L645573;
case 0x645575:c.instructions+=4;goto B645575;
case 0x645577:c.instructions+=3;goto B645577;
case 0x64557c:c.instructions+=2;goto B64557c;
case 0x64557d:c.instructions+=1;goto B64557d;
case 0x64557f:goto L64557f;
case 0x645581:goto L645581;
case 0x645583:goto L645583;
case 0x645585:c.instructions+=1;goto B645585;
case 0x64558a:goto L64558a;
case 0x64558c:goto L64558c;
case 0x645590:c.instructions+=1;goto B645590;
case 0x645592:goto L645592;
case 0x645596:c.instructions+=1;goto B645596;
case 0x645598:goto L645598;
case 0x64559e:c.instructions+=1;goto B64559e;
case 0x6455a3:goto L6455a3;
case 0x6455a5:goto L6455a5;
case 0x6455ac:goto L6455ac;
case 0x6455ad:c.instructions+=4;goto B6455ad;
case 0x6455ae:c.instructions+=3;goto B6455ae;
case 0x6455af:c.instructions+=2;goto B6455af;
case 0x6455b0:c.instructions+=1;goto B6455b0;
case 0x6455b1:goto L6455b1;
case 0x6455b3:c.instructions+=10;goto B6455b3;
case 0x6455b4:c.instructions+=9;goto B6455b4;
case 0x6455b6:c.instructions+=8;goto B6455b6;
case 0x6455b7:c.instructions+=7;goto B6455b7;
case 0x6455b8:c.instructions+=6;goto B6455b8;
case 0x6455b9:c.instructions+=5;goto B6455b9;
case 0x6455bc:c.instructions+=4;goto B6455bc;
case 0x6455be:c.instructions+=3;goto B6455be;
case 0x6455c0:c.instructions+=2;goto B6455c0;
case 0x6455c3:c.instructions+=1;goto B6455c3;
case 0x6455c8:goto L6455c8;
case 0x6455cc:c.instructions+=2;goto B6455cc;
case 0x6455cf:c.instructions+=1;goto B6455cf;
case 0x6455d5:goto L6455d5;
case 0x6455d6:goto L6455d6;
case 0x6455d8:c.instructions+=2;goto B6455d8;
case 0x6455da:c.instructions+=1;goto B6455da;
case 0x6455dc:goto L6455dc;
case 0x6455de:c.instructions+=3;goto B6455de;
case 0x6455e0:c.instructions+=2;goto B6455e0;
case 0x6455e2:c.instructions+=1;goto B6455e2;
case 0x6455e4:goto L6455e4;
case 0x6455e6:c.instructions+=1;goto B6455e6;
case 0x6455e8:goto L6455e8;
case 0x6455eb:c.instructions+=3;goto B6455eb;
case 0x6455ed:c.instructions+=2;goto B6455ed;
case 0x6455f0:c.instructions+=1;goto B6455f0;
case 0x6455f2:goto L6455f2;
case 0x6455f3:c.instructions+=5;goto B6455f3;
case 0x6455f4:c.instructions+=4;goto B6455f4;
case 0x6455f5:c.instructions+=3;goto B6455f5;
case 0x6455f6:c.instructions+=2;goto B6455f6;
case 0x6455f8:c.instructions+=1;goto B6455f8;
case 0x6455fa:goto L6455fa;
case 0x6455fc:c.instructions+=1;goto B6455fc;
case 0x6455fe:goto L6455fe;
case 0x645600:c.instructions+=1;goto B645600;
case 0x645603:goto L645603;
case 0x645605:c.instructions+=2;goto B645605;
case 0x645608:c.instructions+=1;goto B645608;
case 0x64560a:goto L64560a;
case 0x64560c:goto L64560c;
case 0x64560f:c.instructions+=2;goto B64560f;
case 0x645612:c.instructions+=1;goto B645612;
case 0x645614:goto L645614;
case 0x645616:goto L645616;
case 0x645619:c.instructions+=4;goto B645619;
case 0x64561a:c.instructions+=3;goto B64561a;
case 0x64561c:c.instructions+=2;goto B64561c;
case 0x64561e:c.instructions+=1;goto B64561e;
case 0x645623:goto L645623;
case 0x645625:c.instructions+=1;goto B645625;
case 0x645627:goto L645627;
case 0x645629:c.instructions+=7;goto B645629;
case 0x64562f:c.instructions+=6;goto B64562f;
case 0x645634:c.instructions+=5;goto B645634;
case 0x645639:c.instructions+=4;goto B645639;
case 0x64563a:c.instructions+=3;goto B64563a;
case 0x64563d:c.instructions+=2;goto B64563d;
case 0x64563e:c.instructions+=1;goto B64563e;
case 0x645643:goto L645643;
case 0x645646:goto L645646;
case 0x645648:c.instructions+=5;goto B645648;
case 0x64564b:c.instructions+=4;goto B64564b;
case 0x64564d:c.instructions+=3;goto B64564d;
case 0x645651:c.instructions+=2;goto B645651;
case 0x645653:c.instructions+=1;goto B645653;
case 0x645658:goto L645658;
case 0x645659:goto L645659;
case 0x64565b:c.instructions+=7;goto B64565b;
case 0x64565e:c.instructions+=6;goto B64565e;
case 0x645660:c.instructions+=5;goto B645660;
case 0x645661:c.instructions+=4;goto B645661;
case 0x645663:c.instructions+=3;goto B645663;
case 0x645664:c.instructions+=2;goto B645664;
case 0x645665:c.instructions+=1;goto B645665;
case 0x645668:goto L645668;
case 0x64566a:c.instructions+=12;goto B64566a;
case 0x64566b:c.instructions+=11;goto B64566b;
case 0x64566d:c.instructions+=10;goto B64566d;
case 0x64566e:c.instructions+=9;goto B64566e;
case 0x64566f:c.instructions+=8;goto B64566f;
case 0x645670:c.instructions+=7;goto B645670;
case 0x645671:c.instructions+=6;goto B645671;
case 0x645674:c.instructions+=5;goto B645674;
case 0x645676:c.instructions+=4;goto B645676;
case 0x645678:c.instructions+=3;goto B645678;
case 0x64567d:c.instructions+=2;goto B64567d;
case 0x64567e:c.instructions+=1;goto B64567e;
case 0x645680:goto L645680;
case 0x645682:goto L645682;
case 0x645684:goto L645684;
case 0x64568a:c.instructions+=1;goto B64568a;
case 0x64568c:goto L64568c;
case 0x64568f:c.instructions+=6;goto B64568f;
case 0x645690:c.instructions+=5;goto B645690;
case 0x645693:c.instructions+=4;goto B645693;
case 0x645694:c.instructions+=3;goto B645694;
case 0x645697:c.instructions+=2;goto B645697;
case 0x645699:c.instructions+=1;goto B645699;
case 0x64569e:goto L64569e;
case 0x6456a0:c.instructions+=1;goto B6456a0;
case 0x6456a2:goto L6456a2;
case 0x6456a6:c.instructions+=1;goto B6456a6;
case 0x6456a8:goto L6456a8;
case 0x6456ad:c.instructions+=6;goto B6456ad;
case 0x6456b3:c.instructions+=5;goto B6456b3;
case 0x6456b8:c.instructions+=4;goto B6456b8;
case 0x6456b9:c.instructions+=3;goto B6456b9;
case 0x6456bc:c.instructions+=2;goto B6456bc;
case 0x6456bd:c.instructions+=1;goto B6456bd;
case 0x6456c2:goto L6456c2;
case 0x6456c4:c.instructions+=3;goto B6456c4;
case 0x6456c7:c.instructions+=2;goto B6456c7;
case 0x6456c8:c.instructions+=1;goto B6456c8;
case 0x6456ca:goto L6456ca;
case 0x6456cd:c.instructions+=2;goto B6456cd;
case 0x6456cf:c.instructions+=1;goto B6456cf;
case 0x6456d1:goto L6456d1;
case 0x6456d5:c.instructions+=1;goto B6456d5;
case 0x6456d7:goto L6456d7;
case 0x6456da:c.instructions+=2;goto B6456da;
case 0x6456dd:c.instructions+=1;goto B6456dd;
case 0x6456df:goto L6456df;
case 0x6456e2:c.instructions+=1;goto B6456e2;
case 0x6456e4:goto L6456e4;
case 0x6456e7:c.instructions+=1;goto B6456e7;
case 0x6456e9:goto L6456e9;
case 0x6456ee:c.instructions+=6;goto B6456ee;
case 0x6456f4:c.instructions+=5;goto B6456f4;
case 0x6456f9:c.instructions+=4;goto B6456f9;
case 0x6456fa:c.instructions+=3;goto B6456fa;
case 0x6456fd:c.instructions+=2;goto B6456fd;
case 0x6456fe:c.instructions+=1;goto B6456fe;
case 0x645703:goto L645703;
case 0x645706:goto L645706;
case 0x645708:goto L645708;
case 0x645709:c.instructions+=4;goto B645709;
case 0x64570a:c.instructions+=3;goto B64570a;
case 0x64570b:c.instructions+=2;goto B64570b;
case 0x64570c:c.instructions+=1;goto B64570c;
case 0x64570f:goto L64570f;
case 0x645711:c.instructions+=12;goto B645711;
case 0x645712:c.instructions+=11;goto B645712;
case 0x645714:c.instructions+=10;goto B645714;
case 0x645717:c.instructions+=9;goto B645717;
case 0x64571b:c.instructions+=8;goto B64571b;
case 0x64571f:c.instructions+=7;goto B64571f;
case 0x645723:c.instructions+=6;goto B645723;
case 0x645724:c.instructions+=5;goto B645724;
case 0x645725:c.instructions+=4;goto B645725;
case 0x645727:c.instructions+=3;goto B645727;
case 0x645728:c.instructions+=2;goto B645728;
case 0x64572b:c.instructions+=1;goto B64572b;
case 0x64572d:goto L64572d;
case 0x645730:c.instructions+=3;goto B645730;
case 0x645732:c.instructions+=2;goto B645732;
case 0x645735:c.instructions+=1;goto B645735;
case 0x645737:goto L645737;
case 0x645739:c.instructions+=1;goto B645739;
case 0x64573e:goto L64573e;
case 0x645740:c.instructions+=1;goto B645740;
case 0x645742:goto L645742;
case 0x645745:c.instructions+=3;goto B645745;
case 0x645746:c.instructions+=2;goto B645746;
case 0x645748:c.instructions+=1;goto B645748;
case 0x64574d:goto L64574d;
case 0x64574f:goto L64574f;
case 0x645751:goto L645751;
case 0x645753:c.instructions+=2;goto B645753;
case 0x645755:c.instructions+=1;goto B645755;
case 0x64575b:goto L64575b;
case 0x64575e:c.instructions+=3;goto B64575e;
case 0x645760:c.instructions+=2;goto B645760;
case 0x645763:c.instructions+=1;goto B645763;
case 0x645765:goto L645765;
case 0x645768:goto L645768;
case 0x64576b:c.instructions+=3;goto B64576b;
case 0x64576d:c.instructions+=2;goto B64576d;
case 0x645770:c.instructions+=1;goto B645770;
case 0x645773:goto L645773;
case 0x645775:c.instructions+=2;goto B645775;
case 0x645776:c.instructions+=1;goto B645776;
case 0x64577b:goto L64577b;
case 0x64577e:c.instructions+=2;goto B64577e;
case 0x645780:c.instructions+=1;goto B645780;
case 0x645782:goto L645782;
case 0x645787:c.instructions+=4;goto B645787;
case 0x645789:c.instructions+=3;goto B645789;
case 0x64578c:c.instructions+=2;goto B64578c;
case 0x64578d:c.instructions+=1;goto B64578d;
case 0x64578f:goto L64578f;
case 0x645791:goto L645791;
case 0x645794:c.instructions+=2;goto B645794;
case 0x645797:c.instructions+=1;goto B645797;
case 0x64579d:goto L64579d;
case 0x6457a0:c.instructions+=6;goto B6457a0;
case 0x6457a6:c.instructions+=5;goto B6457a6;
case 0x6457a8:c.instructions+=4;goto B6457a8;
case 0x6457ad:c.instructions+=3;goto B6457ad;
case 0x6457ae:c.instructions+=2;goto B6457ae;
case 0x6457b0:c.instructions+=1;goto B6457b0;
case 0x6457b3:goto L6457b3;
case 0x6457b5:goto L6457b5;
case 0x6457bb:goto L6457bb;
case 0x6457be:c.instructions+=4;goto B6457be;
case 0x6457c1:c.instructions+=3;goto B6457c1;
case 0x6457c4:c.instructions+=2;goto B6457c4;
case 0x6457c8:c.instructions+=1;goto B6457c8;
case 0x6457cd:goto L6457cd;
case 0x6457d3:c.instructions+=4;goto B6457d3;
case 0x6457d5:c.instructions+=3;goto B6457d5;
case 0x6457d8:c.instructions+=2;goto B6457d8;
case 0x6457da:c.instructions+=1;goto B6457da;
case 0x6457dc:goto L6457dc;
case 0x6457de:c.instructions+=2;goto B6457de;
case 0x6457e1:c.instructions+=1;goto B6457e1;
case 0x6457e3:goto L6457e3;
case 0x6457e6:c.instructions+=1;goto B6457e6;
case 0x6457e8:goto L6457e8;
case 0x6457eb:c.instructions+=1;goto B6457eb;
case 0x6457ed:goto L6457ed;
case 0x6457f3:c.instructions+=3;goto B6457f3;
case 0x6457f4:c.instructions+=2;goto B6457f4;
case 0x6457f7:c.instructions+=1;goto B6457f7;
case 0x6457f9:goto L6457f9;
case 0x6457fb:c.instructions+=1;goto B6457fb;
case 0x6457fd:goto L6457fd;
case 0x645800:c.instructions+=1;goto B645800;
case 0x645806:goto L645806;
case 0x645809:goto L645809;
case 0x64580f:c.instructions+=5;goto B64580f;
case 0x645810:c.instructions+=4;goto B645810;
case 0x645816:c.instructions+=3;goto B645816;
case 0x645818:c.instructions+=2;goto B645818;
case 0x64581b:c.instructions+=1;goto B64581b;
case 0x645820:goto L645820;
case 0x645822:c.instructions+=1;goto B645822;
case 0x645828:goto L645828;
case 0x64582b:c.instructions+=1;goto B64582b;
case 0x645831:goto L645831;
case 0x645834:c.instructions+=6;goto B645834;
case 0x64583a:c.instructions+=5;goto B64583a;
case 0x64583c:c.instructions+=4;goto B64583c;
case 0x645841:c.instructions+=3;goto B645841;
case 0x645842:c.instructions+=2;goto B645842;
case 0x645844:c.instructions+=1;goto B645844;
case 0x645847:goto L645847;
case 0x645849:goto L645849;
case 0x64584f:goto L64584f;
case 0x645852:goto L645852;
case 0x645856:c.instructions+=3;goto B645856;
case 0x645859:c.instructions+=2;goto B645859;
case 0x645860:c.instructions+=1;goto B645860;
case 0x645863:goto L645863;
case 0x645866:c.instructions+=3;goto B645866;
case 0x645868:c.instructions+=2;goto B645868;
case 0x64586b:c.instructions+=1;goto B64586b;
case 0x64586d:goto L64586d;
case 0x64586f:c.instructions+=2;goto B64586f;
case 0x645872:c.instructions+=1;goto B645872;
case 0x645873:goto L645873;
case 0x645875:goto L645875;
case 0x645878:c.instructions+=4;goto B645878;
case 0x64587b:c.instructions+=3;goto B64587b;
case 0x64587e:c.instructions+=2;goto B64587e;
case 0x645882:c.instructions+=1;goto B645882;
case 0x645884:goto L645884;
case 0x64588a:c.instructions+=3;goto B64588a;
case 0x64588b:c.instructions+=2;goto B64588b;
case 0x645891:c.instructions+=1;goto B645891;
case 0x645896:goto L645896;
case 0x645898:c.instructions+=1;goto B645898;
case 0x64589e:goto L64589e;
case 0x6458a1:goto L6458a1;
case 0x6458a4:c.instructions+=1;goto B6458a4;
case 0x6458aa:goto L6458aa;
case 0x6458ad:c.instructions+=2;goto B6458ad;
case 0x6458b0:c.instructions+=1;goto B6458b0;
case 0x6458b2:goto L6458b2;
case 0x6458b4:c.instructions+=1;goto B6458b4;
case 0x6458b9:goto L6458b9;
case 0x6458bb:c.instructions+=1;goto B6458bb;
case 0x6458bd:goto L6458bd;
case 0x6458c2:c.instructions+=4;goto B6458c2;
case 0x6458c4:c.instructions+=3;goto B6458c4;
case 0x6458c6:c.instructions+=2;goto B6458c6;
case 0x6458c8:c.instructions+=1;goto B6458c8;
case 0x6458cd:goto L6458cd;
case 0x6458cf:goto L6458cf;
case 0x6458d1:goto L6458d1;
case 0x6458d3:c.instructions+=2;goto B6458d3;
case 0x6458d5:c.instructions+=1;goto B6458d5;
case 0x6458db:goto L6458db;
case 0x6458de:c.instructions+=2;goto B6458de;
case 0x6458e1:c.instructions+=1;goto B6458e1;
case 0x6458e4:goto L6458e4;
case 0x6458e8:c.instructions+=1;goto B6458e8;
case 0x6458ea:goto L6458ea;
case 0x6458ed:c.instructions+=1;goto B6458ed;
case 0x6458ef:goto L6458ef;
case 0x6458f2:c.instructions+=3;goto B6458f2;
case 0x6458f4:c.instructions+=2;goto B6458f4;
case 0x6458f6:c.instructions+=1;goto B6458f6;
case 0x6458f8:goto L6458f8;
case 0x6458fa:c.instructions+=1;goto B6458fa;
case 0x6458fc:goto L6458fc;
case 0x645903:c.instructions+=1;goto B645903;
case 0x645905:goto L645905;
case 0x645907:c.instructions+=3;goto B645907;
case 0x64590a:c.instructions+=2;goto B64590a;
case 0x64590d:c.instructions+=1;goto B64590d;
case 0x64590f:goto L64590f;
case 0x645911:c.instructions+=1;goto B645911;
case 0x645916:goto L645916;
case 0x645918:c.instructions+=1;goto B645918;
case 0x64591a:goto L64591a;
case 0x64591b:c.instructions+=2;goto B64591b;
case 0x64591d:c.instructions+=1;goto B64591d;
case 0x645922:goto L645922;
case 0x645924:goto L645924;
case 0x645926:goto L645926;
case 0x645928:c.instructions+=3;goto B645928;
case 0x64592b:c.instructions+=2;goto B64592b;
case 0x64592d:c.instructions+=1;goto B64592d;
case 0x645933:goto L645933;
case 0x645936:c.instructions+=2;goto B645936;
case 0x645939:c.instructions+=1;goto B645939;
case 0x64593c:goto L64593c;
case 0x64593f:c.instructions+=1;goto B64593f;
case 0x645941:goto L645941;
case 0x645948:c.instructions+=1;goto B645948;
case 0x64594a:goto L64594a;
case 0x64594d:c.instructions+=3;goto B64594d;
case 0x645950:c.instructions+=2;goto B645950;
case 0x645953:c.instructions+=1;goto B645953;
case 0x645955:goto L645955;
case 0x645956:c.instructions+=1;goto B645956;
case 0x645958:goto L645958;
case 0x64595b:c.instructions+=1;goto B64595b;
case 0x64595d:goto L64595d;
case 0x64595e:c.instructions+=2;goto B64595e;
case 0x64595f:c.instructions+=1;goto B64595f;
case 0x645961:goto L645961;
case 0x645964:c.instructions+=1;goto B645964;
case 0x645966:goto L645966;
case 0x645967:c.instructions+=2;goto B645967;
case 0x645968:c.instructions+=1;goto B645968;
case 0x64596a:goto L64596a;
case 0x64596d:c.instructions+=1;goto B64596d;
case 0x64596f:goto L64596f;
case 0x645972:goto L645972;
case 0x645976:c.instructions+=1;goto B645976;
case 0x64597c:goto L64597c;
case 0x64597f:c.instructions+=2;goto B64597f;
case 0x645982:c.instructions+=1;goto B645982;
case 0x645984:goto L645984;
case 0x645986:c.instructions+=1;goto B645986;
case 0x645988:goto L645988;
case 0x64598b:c.instructions+=1;goto B64598b;
case 0x64598d:goto L64598d;
case 0x645990:c.instructions+=3;goto B645990;
case 0x645992:c.instructions+=2;goto B645992;
case 0x645995:c.instructions+=1;goto B645995;
case 0x645997:goto L645997;
case 0x645999:c.instructions+=1;goto B645999;
case 0x64599f:goto L64599f;
case 0x6459a1:c.instructions+=1;goto B6459a1;
case 0x6459a7:goto L6459a7;
case 0x6459aa:c.instructions+=8;goto B6459aa;
case 0x6459ad:c.instructions+=7;goto B6459ad;
case 0x6459b0:c.instructions+=6;goto B6459b0;
case 0x6459b2:c.instructions+=5;goto B6459b2;
case 0x6459b5:c.instructions+=4;goto B6459b5;
case 0x6459b8:c.instructions+=3;goto B6459b8;
case 0x6459bb:c.instructions+=2;goto B6459bb;
case 0x6459be:c.instructions+=1;goto B6459be;
case 0x6459c4:goto L6459c4;
case 0x6459c8:c.instructions+=4;goto B6459c8;
case 0x6459cb:c.instructions+=3;goto B6459cb;
case 0x6459ce:c.instructions+=2;goto B6459ce;
case 0x6459d1:c.instructions+=1;goto B6459d1;
case 0x6459d3:goto L6459d3;
case 0x6459d7:c.instructions+=1;goto B6459d7;
case 0x6459d9:goto L6459d9;
case 0x6459db:c.instructions+=4;goto B6459db;
case 0x6459dd:c.instructions+=3;goto B6459dd;
case 0x6459de:c.instructions+=2;goto B6459de;
case 0x6459e0:c.instructions+=1;goto B6459e0;
case 0x6459e2:goto L6459e2;
case 0x6459e4:c.instructions+=4;goto B6459e4;
case 0x6459e9:c.instructions+=3;goto B6459e9;
case 0x6459ec:c.instructions+=2;goto B6459ec;
case 0x6459ed:c.instructions+=1;goto B6459ed;
case 0x6459ef:goto L6459ef;
case 0x6459f1:goto L6459f1;
case 0x6459f3:goto L6459f3;
case 0x6459f6:c.instructions+=2;goto B6459f6;
case 0x6459f9:c.instructions+=1;goto B6459f9;
case 0x6459fe:goto L6459fe;
case 0x645a03:c.instructions+=5;goto B645a03;
case 0x645a08:c.instructions+=4;goto B645a08;
case 0x645a0b:c.instructions+=3;goto B645a0b;
case 0x645a0e:c.instructions+=2;goto B645a0e;
case 0x645a0f:c.instructions+=1;goto B645a0f;
case 0x645a14:goto L645a14;
case 0x645a17:c.instructions+=1;goto B645a17;
case 0x645a1c:goto L645a1c;
case 0x645a1e:c.instructions+=1;goto B645a1e;
case 0x645a20:goto L645a20;
case 0x645a22:c.instructions+=4;goto B645a22;
case 0x645a27:c.instructions+=3;goto B645a27;
case 0x645a2a:c.instructions+=2;goto B645a2a;
case 0x645a2b:c.instructions+=1;goto B645a2b;
case 0x645a2d:goto L645a2d;
case 0x645a2f:goto L645a2f;
case 0x645a31:goto L645a31;
case 0x645a34:c.instructions+=2;goto B645a34;
case 0x645a37:c.instructions+=1;goto B645a37;
case 0x645a3c:goto L645a3c;
case 0x645a3f:c.instructions+=1;goto B645a3f;
case 0x645a45:goto L645a45;
case 0x645a48:c.instructions+=2;goto B645a48;
case 0x645a4b:c.instructions+=1;goto B645a4b;
case 0x645a4e:goto L645a4e;
case 0x645a51:c.instructions+=1;goto B645a51;
case 0x645a54:goto L645a54;
case 0x645a56:c.instructions+=3;goto B645a56;
case 0x645a58:c.instructions+=2;goto B645a58;
case 0x645a5a:c.instructions+=1;goto B645a5a;
case 0x645a5c:goto L645a5c;
case 0x645a5e:c.instructions+=1;goto B645a5e;
case 0x645a60:goto L645a60;
case 0x645a63:c.instructions+=3;goto B645a63;
case 0x645a65:c.instructions+=2;goto B645a65;
case 0x645a68:c.instructions+=1;goto B645a68;
case 0x645a6a:goto L645a6a;
case 0x645a6b:c.instructions+=5;goto B645a6b;
case 0x645a6c:c.instructions+=4;goto B645a6c;
case 0x645a6d:c.instructions+=3;goto B645a6d;
case 0x645a6e:c.instructions+=2;goto B645a6e;
case 0x645a70:c.instructions+=1;goto B645a70;
case 0x645a72:goto L645a72;
case 0x645a74:c.instructions+=1;goto B645a74;
case 0x645a76:goto L645a76;
case 0x645a78:c.instructions+=1;goto B645a78;
case 0x645a7b:goto L645a7b;
case 0x645a7d:c.instructions+=1;goto B645a7d;
case 0x645a7f:goto L645a7f;
case 0x645a82:c.instructions+=5;goto B645a82;
case 0x645a85:c.instructions+=4;goto B645a85;
case 0x645a87:c.instructions+=3;goto B645a87;
case 0x645a8a:c.instructions+=2;goto B645a8a;
case 0x645a8d:c.instructions+=1;goto B645a8d;
case 0x645a8f:goto L645a8f;
case 0x645a91:c.instructions+=1;goto B645a91;
case 0x645a93:goto L645a93;
case 0x645a96:c.instructions+=2;goto B645a96;
case 0x645a99:c.instructions+=1;goto B645a99;
case 0x645a9b:goto L645a9b;
case 0x645a9d:c.instructions+=1;goto B645a9d;
case 0x645aa2:goto L645aa2;
case 0x645aa4:c.instructions+=1;goto B645aa4;
case 0x645aa6:goto L645aa6;
case 0x645aa9:c.instructions+=3;goto B645aa9;
case 0x645aaa:c.instructions+=2;goto B645aaa;
case 0x645aac:c.instructions+=1;goto B645aac;
case 0x645ab1:goto L645ab1;
case 0x645ab3:goto L645ab3;
case 0x645ab5:goto L645ab5;
case 0x645ab7:c.instructions+=3;goto B645ab7;
case 0x645aba:c.instructions+=2;goto B645aba;
case 0x645abc:c.instructions+=1;goto B645abc;
case 0x645ac2:goto L645ac2;
case 0x645ac5:c.instructions+=2;goto B645ac5;
case 0x645ac8:c.instructions+=1;goto B645ac8;
case 0x645acb:goto L645acb;
case 0x645acd:c.instructions+=1;goto B645acd;
case 0x645acf:goto L645acf;
case 0x645ad1:goto L645ad1;
case 0x645ad3:c.instructions+=1;goto B645ad3;
case 0x645ad8:goto L645ad8;
case 0x645ada:c.instructions+=1;goto B645ada;
case 0x645adc:goto L645adc;
case 0x645add:c.instructions+=2;goto B645add;
case 0x645adf:c.instructions+=1;goto B645adf;
case 0x645ae4:goto L645ae4;
case 0x645ae6:goto L645ae6;
case 0x645ae8:goto L645ae8;
case 0x645aea:c.instructions+=3;goto B645aea;
case 0x645aed:c.instructions+=2;goto B645aed;
case 0x645aef:c.instructions+=1;goto B645aef;
case 0x645af5:goto L645af5;
case 0x645af8:c.instructions+=1;goto B645af8;
case 0x645afb:goto L645afb;
case 0x645aff:c.instructions+=1;goto B645aff;
case 0x645b01:goto L645b01;
case 0x645b05:c.instructions+=1;goto B645b05;
case 0x645b0b:goto L645b0b;
case 0x645b0e:c.instructions+=5;goto B645b0e;
case 0x645b10:c.instructions+=4;goto B645b10;
case 0x645b12:c.instructions+=3;goto B645b12;
case 0x645b14:c.instructions+=2;goto B645b14;
case 0x645b15:c.instructions+=1;goto B645b15;
case 0x645b17:goto L645b17;
case 0x645b19:c.instructions+=1;goto B645b19;
case 0x645b1b:goto L645b1b;
case 0x645b1e:c.instructions+=1;goto B645b1e;
case 0x645b20:goto L645b20;
case 0x645b21:goto L645b21;
case 0x645b24:c.instructions+=4;goto B645b24;
case 0x645b26:c.instructions+=3;goto B645b26;
case 0x645b29:c.instructions+=2;goto B645b29;
case 0x645b2c:c.instructions+=1;goto B645b2c;
case 0x645b31:goto L645b31;
case 0x645b33:c.instructions+=3;goto B645b33;
case 0x645b36:c.instructions+=2;goto B645b36;
case 0x645b39:c.instructions+=1;goto B645b39;
case 0x645b3c:goto L645b3c;
case 0x645b3e:c.instructions+=1;goto B645b3e;
case 0x645b40:goto L645b40;
case 0x645b43:c.instructions+=4;goto B645b43;
case 0x645b45:c.instructions+=3;goto B645b45;
case 0x645b46:c.instructions+=2;goto B645b46;
case 0x645b47:c.instructions+=1;goto B645b47;
case 0x645b4c:goto L645b4c;
case 0x645b4e:c.instructions+=2;goto B645b4e;
case 0x645b50:c.instructions+=1;goto B645b50;
case 0x645b56:goto L645b56;
case 0x645b59:c.instructions+=11;goto B645b59;
case 0x645b5b:c.instructions+=10;goto B645b5b;
case 0x645b5e:c.instructions+=9;goto B645b5e;
case 0x645b65:c.instructions+=8;goto B645b65;
case 0x645b68:c.instructions+=7;goto B645b68;
case 0x645b6a:c.instructions+=6;goto B645b6a;
case 0x645b6d:c.instructions+=5;goto B645b6d;
case 0x645b70:c.instructions+=4;goto B645b70;
case 0x645b72:c.instructions+=3;goto B645b72;
case 0x645b74:c.instructions+=2;goto B645b74;
case 0x645b76:c.instructions+=1;goto B645b76;
case 0x645b78:goto L645b78;
case 0x645b7a:c.instructions+=1;goto B645b7a;
case 0x645b7c:goto L645b7c;
case 0x645b7f:c.instructions+=1;goto B645b7f;
case 0x645b81:goto L645b81;
case 0x645b84:c.instructions+=2;goto B645b84;
case 0x645b87:c.instructions+=1;goto B645b87;
case 0x645b8b:goto L645b8b;
case 0x645b8e:c.instructions+=6;goto B645b8e;
case 0x645b91:c.instructions+=5;goto B645b91;
case 0x645b93:c.instructions+=4;goto B645b93;
case 0x645b94:c.instructions+=3;goto B645b94;
case 0x645b97:c.instructions+=2;goto B645b97;
case 0x645b9a:c.instructions+=1;goto B645b9a;
case 0x645b9f:goto L645b9f;
case 0x645ba2:c.instructions+=5;goto B645ba2;
case 0x645ba5:c.instructions+=4;goto B645ba5;
case 0x645ba8:c.instructions+=3;goto B645ba8;
case 0x645bab:c.instructions+=2;goto B645bab;
case 0x645bad:c.instructions+=1;goto B645bad;
case 0x645baf:goto L645baf;
case 0x645bb2:c.instructions+=3;goto B645bb2;
case 0x645bb5:c.instructions+=2;goto B645bb5;
case 0x645bb8:c.instructions+=1;goto B645bb8;
case 0x645bbd:goto L645bbd;
case 0x645bc0:c.instructions+=11;goto B645bc0;
case 0x645bc3:c.instructions+=10;goto B645bc3;
case 0x645bc4:c.instructions+=9;goto B645bc4;
case 0x645bc7:c.instructions+=8;goto B645bc7;
case 0x645bc8:c.instructions+=7;goto B645bc8;
case 0x645bcb:c.instructions+=6;goto B645bcb;
case 0x645bcc:c.instructions+=5;goto B645bcc;
case 0x645bcf:c.instructions+=4;goto B645bcf;
case 0x645bd2:c.instructions+=3;goto B645bd2;
case 0x645bd3:c.instructions+=2;goto B645bd3;
case 0x645bd4:c.instructions+=1;goto B645bd4;
case 0x645bd9:goto L645bd9;
case 0x645bdb:c.instructions+=2;goto B645bdb;
case 0x645bde:c.instructions+=1;goto B645bde;
case 0x645be4:goto L645be4;
case 0x645be7:c.instructions+=3;goto B645be7;
case 0x645be8:c.instructions+=2;goto B645be8;
case 0x645bee:c.instructions+=1;goto B645bee;
case 0x645bf3:goto L645bf3;
case 0x645bf5:c.instructions+=1;goto B645bf5;
case 0x645bfb:goto L645bfb;
case 0x645bfd:c.instructions+=1;goto B645bfd;
case 0x645c02:goto L645c02;
case 0x645c04:c.instructions+=1;goto B645c04;
case 0x645c06:goto L645c06;
case 0x645c09:c.instructions+=3;goto B645c09;
case 0x645c0a:c.instructions+=2;goto B645c0a;
case 0x645c0c:c.instructions+=1;goto B645c0c;
case 0x645c11:goto L645c11;
case 0x645c13:goto L645c13;
case 0x645c15:goto L645c15;
case 0x645c17:c.instructions+=4;goto B645c17;
case 0x645c1a:c.instructions+=3;goto B645c1a;
case 0x645c1c:c.instructions+=2;goto B645c1c;
case 0x645c1f:c.instructions+=1;goto B645c1f;
case 0x645c25:goto L645c25;
case 0x645c29:c.instructions+=4;goto B645c29;
case 0x645c2d:c.instructions+=3;goto B645c2d;
case 0x645c30:c.instructions+=2;goto B645c30;
case 0x645c33:c.instructions+=1;goto B645c33;
case 0x645c38:goto L645c38;
case 0x645c3b:c.instructions+=4;goto B645c3b;
case 0x645c3e:c.instructions+=3;goto B645c3e;
case 0x645c40:c.instructions+=2;goto B645c40;
case 0x645c43:c.instructions+=1;goto B645c43;
case 0x645c49:goto L645c49;
case 0x645c4c:c.instructions+=1;goto B645c4c;
case 0x645c4e:goto L645c4e;
case 0x645c51:c.instructions+=3;goto B645c51;
case 0x645c54:c.instructions+=2;goto B645c54;
case 0x645c57:c.instructions+=1;goto B645c57;
case 0x645c5d:goto L645c5d;
case 0x645c60:c.instructions+=5;goto B645c60;
case 0x645c62:c.instructions+=4;goto B645c62;
case 0x645c65:c.instructions+=3;goto B645c65;
case 0x645c67:c.instructions+=2;goto B645c67;
case 0x645c6a:c.instructions+=1;goto B645c6a;
case 0x645c6c:goto L645c6c;
case 0x645c6f:c.instructions+=2;goto B645c6f;
case 0x645c72:c.instructions+=1;goto B645c72;
case 0x645c74:goto L645c74;
case 0x645c78:goto L645c78;
case 0x645c7a:c.instructions+=12;goto B645c7a;
case 0x645c7c:c.instructions+=11;goto B645c7c;
case 0x645c7e:c.instructions+=10;goto B645c7e;
case 0x645c81:c.instructions+=9;goto B645c81;
case 0x645c83:c.instructions+=8;goto B645c83;
case 0x645c86:c.instructions+=7;goto B645c86;
case 0x645c88:c.instructions+=6;goto B645c88;
case 0x645c8a:c.instructions+=5;goto B645c8a;
case 0x645c8c:c.instructions+=4;goto B645c8c;
case 0x645c8f:c.instructions+=3;goto B645c8f;
case 0x645c91:c.instructions+=2;goto B645c91;
case 0x645c93:c.instructions+=1;goto B645c93;
case 0x645c99:goto L645c99;
case 0x645c9b:c.instructions+=1;goto B645c9b;
case 0x645ca1:goto L645ca1;
case 0x645ca4:c.instructions+=1;goto B645ca4;
case 0x645caa:goto L645caa;
case 0x645cad:c.instructions+=4;goto B645cad;
case 0x645caf:c.instructions+=3;goto B645caf;
case 0x645cb4:c.instructions+=2;goto B645cb4;
case 0x645cb5:c.instructions+=1;goto B645cb5;
case 0x645cb7:goto L645cb7;
case 0x645cb9:goto L645cb9;
case 0x645cbf:goto L645cbf;
case 0x645cc2:c.instructions+=8;goto B645cc2;
case 0x645cc5:c.instructions+=7;goto B645cc5;
case 0x645cc8:c.instructions+=6;goto B645cc8;
case 0x645ccb:c.instructions+=5;goto B645ccb;
case 0x645cce:c.instructions+=4;goto B645cce;
case 0x645cd0:c.instructions+=3;goto B645cd0;
case 0x645cd1:c.instructions+=2;goto B645cd1;
case 0x645cd4:c.instructions+=1;goto B645cd4;
case 0x645cd9:goto L645cd9;
case 0x645cdb:c.instructions+=2;goto B645cdb;
case 0x645cde:c.instructions+=1;goto B645cde;
case 0x645ce4:goto L645ce4;
case 0x645ce7:c.instructions+=5;goto B645ce7;
case 0x645cea:c.instructions+=4;goto B645cea;
case 0x645ced:c.instructions+=3;goto B645ced;
case 0x645cf0:c.instructions+=2;goto B645cf0;
case 0x645cf2:c.instructions+=1;goto B645cf2;
case 0x645cf5:goto L645cf5;
case 0x645cf7:goto L645cf7;
case 0x645cfa:c.instructions+=2;goto B645cfa;
case 0x645cfc:c.instructions+=1;goto B645cfc;
case 0x645cff:goto L645cff;
case 0x645d01:goto L645d01;
case 0x645d04:c.instructions+=5;goto B645d04;
case 0x645d07:c.instructions+=4;goto B645d07;
case 0x645d0a:c.instructions+=3;goto B645d0a;
case 0x645d0d:c.instructions+=2;goto B645d0d;
case 0x645d0f:c.instructions+=1;goto B645d0f;
case 0x645d12:goto L645d12;
case 0x645d14:goto L645d14;
case 0x645d16:c.instructions+=1;goto B645d16;
case 0x645d19:goto L645d19;
case 0x645d1b:goto L645d1b;
case 0x645d1e:c.instructions+=1;goto B645d1e;
case 0x645d23:goto L645d23;
case 0x645d26:c.instructions+=11;goto B645d26;
case 0x645d29:c.instructions+=10;goto B645d29;
case 0x645d2a:c.instructions+=9;goto B645d2a;
case 0x645d2b:c.instructions+=8;goto B645d2b;
case 0x645d2e:c.instructions+=7;goto B645d2e;
case 0x645d31:c.instructions+=6;goto B645d31;
case 0x645d34:c.instructions+=5;goto B645d34;
case 0x645d37:c.instructions+=4;goto B645d37;
case 0x645d3a:c.instructions+=3;goto B645d3a;
case 0x645d3d:c.instructions+=2;goto B645d3d;
case 0x645d40:c.instructions+=1;goto B645d40;
case 0x645d45:goto L645d45;
case 0x645d47:c.instructions+=2;goto B645d47;
case 0x645d4a:c.instructions+=1;goto B645d4a;
case 0x645d4c:goto L645d4c;
case 0x645d4f:c.instructions+=5;goto B645d4f;
case 0x645d52:c.instructions+=4;goto B645d52;
case 0x645d53:c.instructions+=3;goto B645d53;
case 0x645d56:c.instructions+=2;goto B645d56;
case 0x645d5c:c.instructions+=1;goto B645d5c;
case 0x645d61:goto L645d61;
case 0x645d63:c.instructions+=1;goto B645d63;
case 0x645d65:goto L645d65;
case 0x645d68:c.instructions+=5;goto B645d68;
case 0x645d6b:c.instructions+=4;goto B645d6b;
case 0x645d6e:c.instructions+=3;goto B645d6e;
case 0x645d72:c.instructions+=2;goto B645d72;
case 0x645d75:c.instructions+=1;goto B645d75;
case 0x645d7a:goto L645d7a;
case 0x645d7d:c.instructions+=5;goto B645d7d;
case 0x645d7f:c.instructions+=4;goto B645d7f;
case 0x645d82:c.instructions+=3;goto B645d82;
case 0x645d85:c.instructions+=2;goto B645d85;
case 0x645d88:c.instructions+=1;goto B645d88;
case 0x645d8e:goto L645d8e;
case 0x645d91:goto L645d91;
case 0x645d94:c.instructions+=5;goto B645d94;
case 0x645d97:c.instructions+=4;goto B645d97;
case 0x645d99:c.instructions+=3;goto B645d99;
case 0x645d9c:c.instructions+=2;goto B645d9c;
case 0x645d9f:c.instructions+=1;goto B645d9f;
case 0x645da4:goto L645da4;
case 0x645da7:goto L645da7;
case 0x645dac:goto L645dac;
case 0x645dae:goto L645dae;
case 0x645db1:c.instructions+=7;goto B645db1;
case 0x645db4:c.instructions+=6;goto B645db4;
case 0x645db7:c.instructions+=5;goto B645db7;
case 0x645dbc:c.instructions+=4;goto B645dbc;
case 0x645dc1:c.instructions+=3;goto B645dc1;
case 0x645dc2:c.instructions+=2;goto B645dc2;
case 0x645dc3:c.instructions+=1;goto B645dc3;
case 0x645dc8:goto L645dc8;
case 0x645dcb:goto L645dcb;
case 0x645dcd:goto L645dcd;
case 0x645dce:c.instructions+=4;goto B645dce;
case 0x645dcf:c.instructions+=3;goto B645dcf;
case 0x645dd0:c.instructions+=2;goto B645dd0;
case 0x645dd1:c.instructions+=1;goto B645dd1;
case 0x645dd4:goto L645dd4;
case 0x645dd6:c.instructions+=7;goto B645dd6;
case 0x645dd7:c.instructions+=6;goto B645dd7;
case 0x645dd8:c.instructions+=5;goto B645dd8;
case 0x645dd9:c.instructions+=4;goto B645dd9;
case 0x645dde:c.instructions+=3;goto B645dde;
case 0x645de3:c.instructions+=2;goto B645de3;
case 0x645de5:c.instructions+=1;goto B645de5;
case 0x645dea:goto L645dea;
case 0x645ded:c.instructions+=1;goto B645ded;
case 0x645df2:goto L645df2;
case 0x645df4:c.instructions+=3;goto B645df4;
case 0x645df6:c.instructions+=2;goto B645df6;
case 0x645dfc:c.instructions+=1;goto B645dfc;
case 0x645e01:goto L645e01;
case 0x645e03:c.instructions+=21;goto B645e03;
case 0x645e04:c.instructions+=20;goto B645e04;
case 0x645e06:c.instructions+=19;goto B645e06;
case 0x645e07:c.instructions+=18;goto B645e07;
case 0x645e09:c.instructions+=17;goto B645e09;
case 0x645e0c:c.instructions+=16;goto B645e0c;
case 0x645e0f:c.instructions+=15;goto B645e0f;
case 0x645e12:c.instructions+=14;goto B645e12;
case 0x645e15:c.instructions+=13;goto B645e15;
case 0x645e18:c.instructions+=12;goto B645e18;
case 0x645e1b:c.instructions+=11;goto B645e1b;
case 0x645e1e:c.instructions+=10;goto B645e1e;
case 0x645e21:c.instructions+=9;goto B645e21;
case 0x645e24:c.instructions+=8;goto B645e24;
case 0x645e27:c.instructions+=7;goto B645e27;
case 0x645e2a:c.instructions+=6;goto B645e2a;
case 0x645e2d:c.instructions+=5;goto B645e2d;
case 0x645e30:c.instructions+=4;goto B645e30;
case 0x645e36:c.instructions+=3;goto B645e36;
case 0x645e3c:c.instructions+=2;goto B645e3c;
case 0x645e3e:c.instructions+=1;goto B645e3e;
case 0x645e41:goto L645e41;
case 0x645e43:goto L645e43;
case 0x645e44:c.instructions+=2;goto B645e44;
case 0x645e4a:c.instructions+=1;goto B645e4a;
case 0x645e4b:goto L645e4b;
case 0x645e4d:goto L645e4d;
case 0x645e4f:c.instructions+=2;goto B645e4f;
case 0x645e55:c.instructions+=1;goto B645e55;
case 0x645e5a:goto L645e5a;
case 0x645e5b:c.instructions+=1;goto B645e5b;
case 0x645e60:goto L645e60;
case 0x645e63:c.instructions+=4;goto B645e63;
case 0x645e65:c.instructions+=3;goto B645e65;
case 0x645e6b:c.instructions+=2;goto B645e6b;
case 0x645e70:c.instructions+=1;goto B645e70;
case 0x645e72:goto L645e72;
case 0x645e74:c.instructions+=4;goto B645e74;
case 0x645e76:c.instructions+=3;goto B645e76;
case 0x645e78:c.instructions+=2;goto B645e78;
case 0x645e79:c.instructions+=1;goto B645e79;
case 0x645e7b:goto L645e7b;
case 0x645e7d:goto L645e7d;
case 0x645e7f:goto L645e7f;
case 0x645e81:goto L645e81;
case 0x645e82:c.instructions+=2;goto B645e82;
case 0x645e84:c.instructions+=1;goto B645e84;
case 0x645e89:goto L645e89;
case 0x645e8a:c.instructions+=2;goto B645e8a;
case 0x645e8b:c.instructions+=1;goto B645e8b;
case 0x645e8d:goto L645e8d;
case 0x645e8f:goto L645e8f;
case 0x645e90:c.instructions+=2;goto B645e90;
case 0x645e91:c.instructions+=1;goto B645e91;
case 0x645e96:goto L645e96;
case 0x645e9b:c.instructions+=3;goto B645e9b;
case 0x645e9d:c.instructions+=2;goto B645e9d;
case 0x645ea3:c.instructions+=1;goto B645ea3;
case 0x645ea8:goto L645ea8;
case 0x645ead:c.instructions+=2;goto B645ead;
case 0x645eae:c.instructions+=1;goto B645eae;
case 0x645eb3:goto L645eb3;
case 0x645eb6:c.instructions+=1;goto B645eb6;
case 0x645ebb:goto L645ebb;
case 0x645ebc:c.instructions+=4;goto B645ebc;
case 0x645ebd:c.instructions+=3;goto B645ebd;
case 0x645ebf:c.instructions+=2;goto B645ebf;
case 0x645ec0:c.instructions+=1;goto B645ec0;
case 0x645ec1:goto L645ec1;
case 0x645ec3:c.instructions+=5;goto B645ec3;
case 0x645ec4:c.instructions+=4;goto B645ec4;
case 0x645ec6:c.instructions+=3;goto B645ec6;
case 0x645ec9:c.instructions+=2;goto B645ec9;
case 0x645ecb:c.instructions+=1;goto B645ecb;
case 0x645ecd:goto L645ecd;
case 0x645ecf:c.instructions+=1;goto B645ecf;
case 0x645ed4:goto L645ed4;
case 0x645ed7:c.instructions+=2;goto B645ed7;
case 0x645ed9:c.instructions+=1;goto B645ed9;
case 0x645edb:goto L645edb;
case 0x645edd:c.instructions+=1;goto B645edd;
case 0x645ee2:goto L645ee2;
case 0x645ee8:c.instructions+=2;goto B645ee8;
case 0x645eea:c.instructions+=1;goto B645eea;
case 0x645eec:goto L645eec;
case 0x645eee:c.instructions+=1;goto B645eee;
case 0x645ef3:goto L645ef3;
case 0x645ef4:c.instructions+=4;goto B645ef4;
case 0x645ef5:c.instructions+=3;goto B645ef5;
case 0x645ef7:c.instructions+=2;goto B645ef7;
case 0x645efa:c.instructions+=1;goto B645efa;
case 0x645efb:goto L645efb;
case 0x645efd:c.instructions+=2;goto B645efd;
case 0x645eff:c.instructions+=1;goto B645eff;
case 0x645f01:goto L645f01;
case 0x645f03:c.instructions+=1;goto B645f03;
case 0x645f08:goto L645f08;
case 0x645f0b:c.instructions+=2;goto B645f0b;
case 0x645f0c:c.instructions+=1;goto B645f0c;
case 0x645f0e:goto L645f0e;
case 0x645f14:c.instructions+=2;goto B645f14;
case 0x645f16:c.instructions+=1;goto B645f16;
case 0x645f18:goto L645f18;
case 0x645f1a:c.instructions+=4;goto B645f1a;
case 0x645f1f:c.instructions+=3;goto B645f1f;
case 0x645f21:c.instructions+=2;goto B645f21;
case 0x645f22:c.instructions+=1;goto B645f22;
case 0x645f24:goto L645f24;
case 0x645f26:goto L645f26;
case 0x645f28:goto L645f28;
case 0x645f29:c.instructions+=2;goto B645f29;
case 0x645f2b:c.instructions+=1;goto B645f2b;
case 0x645f30:goto L645f30;
case 0x645f31:c.instructions+=1;goto B645f31;
case 0x645f32:goto L645f32;
case 0x645f38:c.instructions+=4;goto B645f38;
case 0x645f3a:c.instructions+=3;goto B645f3a;
case 0x645f3b:c.instructions+=2;goto B645f3b;
case 0x645f3c:c.instructions+=1;goto B645f3c;
case 0x645f3e:goto L645f3e;
case 0x645f3f:c.instructions+=1;goto B645f3f;
case 0x645f44:goto L645f44;
case 0x645f45:goto L645f45;
case 0x645f4a:c.instructions+=2;goto B645f4a;
case 0x645f50:c.instructions+=1;goto B645f50;
case 0x645f55:goto L645f55;
case 0x645f5c:c.instructions+=3;goto B645f5c;
case 0x645f5d:c.instructions+=2;goto B645f5d;
case 0x645f5e:c.instructions+=1;goto B645f5e;
case 0x645f60:goto L645f60;
case 0x645f62:c.instructions+=1;goto B645f62;
case 0x645f67:goto L645f67;
case 0x645f6a:c.instructions+=1;goto B645f6a;
case 0x645f6f:goto L645f6f;
case 0x645f71:c.instructions+=2;goto B645f71;
case 0x645f72:c.instructions+=1;goto B645f72;
case 0x645f77:goto L645f77;
case 0x645f79:c.instructions+=10;goto B645f79;
case 0x645f7a:c.instructions+=9;goto B645f7a;
case 0x645f7c:c.instructions+=8;goto B645f7c;
case 0x645f7f:c.instructions+=7;goto B645f7f;
case 0x645f80:c.instructions+=6;goto B645f80;
case 0x645f82:c.instructions+=5;goto B645f82;
case 0x645f84:c.instructions+=4;goto B645f84;
case 0x645f87:c.instructions+=3;goto B645f87;
case 0x645f88:c.instructions+=2;goto B645f88;
case 0x645f89:c.instructions+=1;goto B645f89;
case 0x645f8f:goto L645f8f;
case 0x645f92:c.instructions+=1;goto B645f92;
case 0x645f98:goto L645f98;
case 0x645f9b:c.instructions+=2;goto B645f9b;
case 0x645f9d:c.instructions+=1;goto B645f9d;
case 0x645f9f:goto L645f9f;
case 0x645fa1:c.instructions+=3;goto B645fa1;
case 0x645fa7:c.instructions+=2;goto B645fa7;
case 0x645faa:c.instructions+=1;goto B645faa;
case 0x645fab:goto L645fab;
case 0x645fad:goto L645fad;
case 0x645fb0:c.instructions+=3;goto B645fb0;
case 0x645fb3:c.instructions+=2;goto B645fb3;
case 0x645fb6:c.instructions+=1;goto B645fb6;
case 0x645fb8:goto L645fb8;
case 0x645fbe:c.instructions+=6;goto B645fbe;
case 0x645fc4:c.instructions+=5;goto B645fc4;
case 0x645fc5:c.instructions+=4;goto B645fc5;
case 0x645fcb:c.instructions+=3;goto B645fcb;
case 0x645fce:c.instructions+=2;goto B645fce;
case 0x645fcf:c.instructions+=1;goto B645fcf;
case 0x645fd4:goto L645fd4;
case 0x645fd6:c.instructions+=1;goto B645fd6;
case 0x645fdc:goto L645fdc;
case 0x645fe2:c.instructions+=4;goto B645fe2;
case 0x645fe4:c.instructions+=3;goto B645fe4;
case 0x645fe5:c.instructions+=2;goto B645fe5;
case 0x645fe7:c.instructions+=1;goto B645fe7;
case 0x645fed:goto L645fed;
case 0x645ff3:goto L645ff3;
case 0x645ff6:c.instructions+=1;goto B645ff6;
case 0x645ffc:goto L645ffc;
case 0x645fff:c.instructions+=1;goto B645fff;
default:missing_instruction(c.pc);}
B645001:L645001:{c.instructions+=6;NFSU2_TR(0x645001);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B645002:{NFSU2_TR(0x645002);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B645003:{NFSU2_TR(0x645003);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645004:{NFSU2_TR(0x645004);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645005:{NFSU2_TR(0x645005);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645007:{NFSU2_TR(0x645007);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x644febu,644);}
}
B645009:L645009:{c.instructions+=2;NFSU2_TR(0x645009);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64500b:{NFSU2_TR(0x64500b);
{goto L645012;}
}
B64500d:L64500d:{c.instructions+=2;NFSU2_TR(0x64500d);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64500f:{NFSU2_TR(0x64500f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645012:L645012:{c.instructions+=2;NFSU2_TR(0x645012);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645014:{NFSU2_TR(0x645014);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645239;}}
}
B64501a:L64501a:{c.instructions+=6;NFSU2_TR(0x64501a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64501d:{NFSU2_TR(0x64501d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64501f:{NFSU2_TR(0x64501f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645022:{NFSU2_TR(0x645022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645025:{NFSU2_TR(0x645025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645028:{NFSU2_TR(0x645028);
if(r1(R+518)){{goto L645040;}}
}
B64502a:L64502a:{c.instructions+=2;NFSU2_TR(0x64502a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64502c:{NFSU2_TR(0x64502c);
if(r1(R+518)){{goto L645038;}}
}
B64502e:L64502e:{c.instructions+=4;NFSU2_TR(0x64502e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645031:{NFSU2_TR(0x645031);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645033:{NFSU2_TR(0x645033);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645036:{NFSU2_TR(0x645036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64502au);}goto L64502a;}}
}
B645038:L645038:{c.instructions+=2;NFSU2_TR(0x645038);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64503a:{NFSU2_TR(0x64503a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645239;}}
}
B645040:L645040:{c.instructions+=2;NFSU2_TR(0x645040);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645042:{NFSU2_TR(0x645042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645239;}}
}
B645048:L645048:{c.instructions+=3;NFSU2_TR(0x645048);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64504b:{NFSU2_TR(0x64504b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64504e:{NFSU2_TR(0x64504e);
{goto L645229;}
}
B645053:L645053:{c.instructions+=2;NFSU2_TR(0x645053);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645055:{NFSU2_TR(0x645055);
if(r1(R+518)){{goto L6450b5;}}
}
B645057:L645057:{c.instructions+=3;NFSU2_TR(0x645057);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64505a:{NFSU2_TR(0x64505a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64505d:{NFSU2_TR(0x64505d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6450b5;}}
}
B64505f:L64505f:{c.instructions+=2;NFSU2_TR(0x64505f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645062:{NFSU2_TR(0x645062);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6450e1;}}
}
B645064:L645064:{c.instructions+=2;NFSU2_TR(0x645064);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B645067:{NFSU2_TR(0x645067);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6450cd;}}
}
B645069:L645069:{c.instructions+=2;NFSU2_TR(0x645069);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64506b:{NFSU2_TR(0x64506b);
if(r1(R+518)){{goto L645081;}}
}
B64506d:L64506d:{c.instructions+=2;NFSU2_TR(0x64506d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645070:{NFSU2_TR(0x645070);
if(r1(R+518)){{goto L645091;}}
}
B645072:L645072:{c.instructions+=1;NFSU2_TR(0x645072);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L645223;}}
}
B645078:L645078:{c.instructions+=2;NFSU2_TR(0x645078);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64507b:{NFSU2_TR(0x64507b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L645223;}}
}
B645081:L645081:{c.instructions+=6;NFSU2_TR(0x645081);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645084:{NFSU2_TR(0x645084);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B645087:{NFSU2_TR(0x645087);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B645089:{NFSU2_TR(0x645089);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64508b:{NFSU2_TR(0x64508b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64508c:{NFSU2_TR(0x64508c);
{goto L64521b;}
}
B645091:L645091:{c.instructions+=3;NFSU2_TR(0x645091);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B645094:{NFSU2_TR(0x645094);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645097:{NFSU2_TR(0x645097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6450b5;}}
}
B645099:L645099:{c.instructions+=3;NFSU2_TR(0x645099);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B64509c:{NFSU2_TR(0x64509c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B64509f:{NFSU2_TR(0x64509f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6450b5;}}
}
B6450a1:L6450a1:{c.instructions+=3;NFSU2_TR(0x6450a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6450a4:{NFSU2_TR(0x6450a4);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6450a7:{NFSU2_TR(0x6450a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6450b5;}}
}
B6450a9:L6450a9:{c.instructions+=3;NFSU2_TR(0x6450a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6450ac:{NFSU2_TR(0x6450ac);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6450af:{NFSU2_TR(0x6450af);
if(r1(R+518)){{goto L645223;}}
}
B6450b5:L6450b5:{c.instructions+=2;NFSU2_TR(0x6450b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6450b7:{NFSU2_TR(0x6450b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645239;}}
}
B6450bd:L6450bd:{c.instructions+=2;NFSU2_TR(0x6450bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6450bf:{NFSU2_TR(0x6450bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645239;}}
}
B6450c5:L6450c5:{c.instructions+=3;NFSU2_TR(0x6450c5);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6450c7:{NFSU2_TR(0x6450c7);
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
B6450c8:{NFSU2_TR(0x6450c8);
{goto L64523b;}
}
B6450cd:L6450cd:{c.instructions+=6;NFSU2_TR(0x6450cd);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6450d0:{NFSU2_TR(0x6450d0);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6450d3:{NFSU2_TR(0x6450d3);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6450d5:{NFSU2_TR(0x6450d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6450d7:{NFSU2_TR(0x6450d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6450da:{NFSU2_TR(0x6450da);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6450b5u);}goto L6450b5;}}
}
B6450dc:L6450dc:{c.instructions+=1;NFSU2_TR(0x6450dc);
{goto L645223;}
}
B6450e1:L6450e1:{c.instructions+=2;NFSU2_TR(0x6450e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6450e4:{NFSU2_TR(0x6450e4);
if(r1(R+518)){{goto L645128;}}
}
B6450e6:L6450e6:{c.instructions+=1;NFSU2_TR(0x6450e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L645223;}}
}
B6450ec:L6450ec:{c.instructions+=2;NFSU2_TR(0x6450ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6450ef:{NFSU2_TR(0x6450ef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L645223;}}
}
B6450f5:L6450f5:{c.instructions+=2;NFSU2_TR(0x6450f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6450f8:{NFSU2_TR(0x6450f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6450fb:L6450fb:{c.instructions+=4;NFSU2_TR(0x6450fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6450fd:{NFSU2_TR(0x6450fd);
__builtin_memmove((R+4),(R+12),1);
}
B6450ff:{NFSU2_TR(0x6450ff);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B645101:{NFSU2_TR(0x645101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64520a;}}
}
B645107:L645107:{c.instructions+=2;NFSU2_TR(0x645107);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645109:{NFSU2_TR(0x645109);
if(r1(R+518)){{goto L645121;}}
}
B64510b:L64510b:{c.instructions+=4;NFSU2_TR(0x64510b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64510e:{NFSU2_TR(0x64510e);
__builtin_memmove((R+4),(R+12),1);
}
B645110:{NFSU2_TR(0x645110);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645113:{NFSU2_TR(0x645113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64520a;}}
}
B645119:L645119:{c.instructions+=6;NFSU2_TR(0x645119);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64511a:{NFSU2_TR(0x64511a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64511b:{NFSU2_TR(0x64511b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64511c:{NFSU2_TR(0x64511c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64511d:{NFSU2_TR(0x64511d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64511f:{NFSU2_TR(0x64511f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6450fbu);}goto L6450fb;}}
}
B645121:L645121:{c.instructions+=2;NFSU2_TR(0x645121);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645123:{NFSU2_TR(0x645123);
{goto L64520f;}
}
B645128:L645128:{c.instructions+=5;NFSU2_TR(0x645128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64512b:{NFSU2_TR(0x64512b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64512f:{NFSU2_TR(0x64512f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645131:{NFSU2_TR(0x645131);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B645138:{NFSU2_TR(0x645138);
if(r1(R+518)){{goto L645181;}}
}
B64513a:L64513a:{c.instructions+=2;NFSU2_TR(0x64513a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64513d:{NFSU2_TR(0x64513d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645140:L645140:{c.instructions+=4;NFSU2_TR(0x645140);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B645142:{NFSU2_TR(0x645142);
__builtin_memmove((R+4),(R+12),1);
}
B645144:{NFSU2_TR(0x645144);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B645146:{NFSU2_TR(0x645146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645162;}}
}
B645148:L645148:{c.instructions+=2;NFSU2_TR(0x645148);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64514a:{NFSU2_TR(0x64514a);
if(r1(R+518)){{goto L64515e;}}
}
B64514c:L64514c:{c.instructions+=4;NFSU2_TR(0x64514c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64514f:{NFSU2_TR(0x64514f);
__builtin_memmove((R+4),(R+12),1);
}
B645151:{NFSU2_TR(0x645151);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645154:{NFSU2_TR(0x645154);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645162;}}
}
B645156:L645156:{c.instructions+=6;NFSU2_TR(0x645156);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645157:{NFSU2_TR(0x645157);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645158:{NFSU2_TR(0x645158);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B645159:{NFSU2_TR(0x645159);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64515a:{NFSU2_TR(0x64515a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64515c:{NFSU2_TR(0x64515c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645140u);}goto L645140;}}
}
B64515e:L64515e:{c.instructions+=2;NFSU2_TR(0x64515e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645160:{NFSU2_TR(0x645160);
{goto L645167;}
}
B645162:L645162:{c.instructions+=2;NFSU2_TR(0x645162);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645164:{NFSU2_TR(0x645164);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645167:L645167:{c.instructions+=2;NFSU2_TR(0x645167);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645169:{NFSU2_TR(0x645169);
if(r1(R+518)){{goto L645177;}}
}
B64516b:L64516b:{c.instructions+=4;NFSU2_TR(0x64516b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64516e:{NFSU2_TR(0x64516e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645171:{NFSU2_TR(0x645171);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645173:{NFSU2_TR(0x645173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64513au);}goto L64513a;}}
}
B645175:L645175:{c.instructions+=1;NFSU2_TR(0x645175);
{goto L64517e;}
}
B645177:L645177:{c.instructions+=1;NFSU2_TR(0x645177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64517e:L64517e:{c.instructions+=1;NFSU2_TR(0x64517e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645181:L645181:{c.instructions+=2;NFSU2_TR(0x645181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645184:{NFSU2_TR(0x645184);
{goto L6451bd;}
}
B645186:L645186:{c.instructions+=2;NFSU2_TR(0x645186);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645189:{NFSU2_TR(0x645189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64518c:L64518c:{c.instructions+=4;NFSU2_TR(0x64518c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B64518e:{NFSU2_TR(0x64518e);
__builtin_memmove((R+4),(R+12),1);
}
B645190:{NFSU2_TR(0x645190);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B645192:{NFSU2_TR(0x645192);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6451ae;}}
}
B645194:L645194:{c.instructions+=2;NFSU2_TR(0x645194);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645196:{NFSU2_TR(0x645196);
if(r1(R+518)){{goto L6451aa;}}
}
B645198:L645198:{c.instructions+=4;NFSU2_TR(0x645198);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B64519b:{NFSU2_TR(0x64519b);
__builtin_memmove((R+4),(R+12),1);
}
B64519d:{NFSU2_TR(0x64519d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6451a0:{NFSU2_TR(0x6451a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6451ae;}}
}
B6451a2:L6451a2:{c.instructions+=6;NFSU2_TR(0x6451a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6451a3:{NFSU2_TR(0x6451a3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6451a4:{NFSU2_TR(0x6451a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6451a5:{NFSU2_TR(0x6451a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6451a6:{NFSU2_TR(0x6451a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6451a8:{NFSU2_TR(0x6451a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64518cu);}goto L64518c;}}
}
B6451aa:L6451aa:{c.instructions+=2;NFSU2_TR(0x6451aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6451ac:{NFSU2_TR(0x6451ac);
{goto L6451b3;}
}
B6451ae:L6451ae:{c.instructions+=2;NFSU2_TR(0x6451ae);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6451b0:{NFSU2_TR(0x6451b0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6451b3:L6451b3:{c.instructions+=3;NFSU2_TR(0x6451b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6451b5:{NFSU2_TR(0x6451b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6451b8:{NFSU2_TR(0x6451b8);
if(r1(R+518)){{goto L6451c6;}}
}
B6451ba:L6451ba:{c.instructions+=1;NFSU2_TR(0x6451ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6451bd:L6451bd:{c.instructions+=3;NFSU2_TR(0x6451bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6451c0:{NFSU2_TR(0x6451c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6451c2:{NFSU2_TR(0x6451c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645186u);}goto L645186;}}
}
B6451c4:L6451c4:{c.instructions+=1;NFSU2_TR(0x6451c4);
{goto L6451cd;}
}
B6451c6:L6451c6:{c.instructions+=1;NFSU2_TR(0x6451c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6451cd:L6451cd:{c.instructions+=2;NFSU2_TR(0x6451cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6451d1:{NFSU2_TR(0x6451d1);
if(r1(R+518)){{goto L6451dd;}}
}
B6451d3:L6451d3:{c.instructions+=4;NFSU2_TR(0x6451d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6451d5:{NFSU2_TR(0x6451d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6451d8:{NFSU2_TR(0x6451d8);
__builtin_memmove((R+0),(R+518),1);
}
B6451db:{NFSU2_TR(0x6451db);
{goto L64521b;}
}
B6451dd:L6451dd:{c.instructions+=2;NFSU2_TR(0x6451dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6451e0:{NFSU2_TR(0x6451e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6451e3:L6451e3:{c.instructions+=4;NFSU2_TR(0x6451e3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6451e5:{NFSU2_TR(0x6451e5);
__builtin_memmove((R+4),(R+12),1);
}
B6451e7:{NFSU2_TR(0x6451e7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6451e9:{NFSU2_TR(0x6451e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64520a;}}
}
B6451eb:L6451eb:{c.instructions+=2;NFSU2_TR(0x6451eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6451ed:{NFSU2_TR(0x6451ed);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645121u);}goto L645121;}}
}
B6451f3:L6451f3:{c.instructions+=4;NFSU2_TR(0x6451f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6451f6:{NFSU2_TR(0x6451f6);
__builtin_memmove((R+4),(R+12),1);
}
B6451f8:{NFSU2_TR(0x6451f8);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6451fb:{NFSU2_TR(0x6451fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64520a;}}
}
B6451fd:L6451fd:{c.instructions+=6;NFSU2_TR(0x6451fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6451fe:{NFSU2_TR(0x6451fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6451ff:{NFSU2_TR(0x6451ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645200:{NFSU2_TR(0x645200);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645201:{NFSU2_TR(0x645201);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645203:{NFSU2_TR(0x645203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6451e3u);}goto L6451e3;}}
}
B645205:L645205:{c.instructions+=1;NFSU2_TR(0x645205);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645121u);}goto L645121;}
}
B64520a:L64520a:{c.instructions+=2;NFSU2_TR(0x64520a);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64520c:{NFSU2_TR(0x64520c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64520f:L64520f:{c.instructions+=5;NFSU2_TR(0x64520f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B645211:{NFSU2_TR(0x645211);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645213:{NFSU2_TR(0x645213);
__builtin_memmove((R+4),(R+518),1);
}
B645216:{NFSU2_TR(0x645216);
__builtin_memmove((R+0),(R+4),4);
}
B645218:{NFSU2_TR(0x645218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64521b:L64521b:{c.instructions+=2;NFSU2_TR(0x64521b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64521d:{NFSU2_TR(0x64521d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6450b5u);}goto L6450b5;}}
}
B645223:L645223:{c.instructions+=2;NFSU2_TR(0x645223);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B645226:{NFSU2_TR(0x645226);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645229:L645229:{c.instructions+=3;NFSU2_TR(0x645229);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64522b:{NFSU2_TR(0x64522b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64522e:{NFSU2_TR(0x64522e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645053u);}goto L645053;}}
}
B645234:L645234:{c.instructions+=1;NFSU2_TR(0x645234);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6450bdu);}goto L6450bd;}
}
B645239:L645239:{c.instructions+=1;NFSU2_TR(0x645239);
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
B64523b:L64523b:{c.instructions+=5;NFSU2_TR(0x64523b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64523c:{NFSU2_TR(0x64523c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64523d:{NFSU2_TR(0x64523d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64523e:{NFSU2_TR(0x64523e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64523f:{NFSU2_TR(0x64523f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645242:L645242:{c.instructions+=9;NFSU2_TR(0x645242);
__builtin_memmove((R+28),(R+28),4);
}
B645244:{NFSU2_TR(0x645244);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645245:{NFSU2_TR(0x645245);
__builtin_memmove((R+20),(R+16),4);
}
B645247:{NFSU2_TR(0x645247);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645248:{NFSU2_TR(0x645248);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645249:{NFSU2_TR(0x645249);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64524a:{NFSU2_TR(0x64524a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64524d:{NFSU2_TR(0x64524d);
__builtin_memmove((R+12),(R+4),4);
}
B64524f:{NFSU2_TR(0x64524f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645254ull));
TAIL_STATIC(0x644f9fu,644);
}
B645254:L645254:{c.instructions+=2;NFSU2_TR(0x645254);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B645258:{NFSU2_TR(0x645258);
{goto L64528f;}
}
B64525a:L64525a:{c.instructions+=2;NFSU2_TR(0x64525a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64525c:{NFSU2_TR(0x64525c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64525f:L64525f:{c.instructions+=4;NFSU2_TR(0x64525f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B645261:{NFSU2_TR(0x645261);
__builtin_memmove((R+4),(R+8),1);
}
B645263:{NFSU2_TR(0x645263);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B645265:{NFSU2_TR(0x645265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645281;}}
}
B645267:L645267:{c.instructions+=2;NFSU2_TR(0x645267);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645269:{NFSU2_TR(0x645269);
if(r1(R+518)){{goto L64527d;}}
}
B64526b:L64526b:{c.instructions+=4;NFSU2_TR(0x64526b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B64526e:{NFSU2_TR(0x64526e);
__builtin_memmove((R+4),(R+8),1);
}
B645270:{NFSU2_TR(0x645270);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645273:{NFSU2_TR(0x645273);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645281;}}
}
B645275:L645275:{c.instructions+=6;NFSU2_TR(0x645275);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645276:{NFSU2_TR(0x645276);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645277:{NFSU2_TR(0x645277);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B645278:{NFSU2_TR(0x645278);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B645279:{NFSU2_TR(0x645279);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64527b:{NFSU2_TR(0x64527b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64525fu);}goto L64525f;}}
}
B64527d:L64527d:{c.instructions+=2;NFSU2_TR(0x64527d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64527f:{NFSU2_TR(0x64527f);
{goto L645286;}
}
B645281:L645281:{c.instructions+=2;NFSU2_TR(0x645281);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645283:{NFSU2_TR(0x645283);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645286:L645286:{c.instructions+=2;NFSU2_TR(0x645286);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645288:{NFSU2_TR(0x645288);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645293;}}
}
B64528a:L64528a:{c.instructions+=1;NFSU2_TR(0x64528a);
if(r1(R+518)){{goto L645297;}}
}
B64528c:L64528c:{c.instructions+=1;NFSU2_TR(0x64528c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64528f:L64528f:{c.instructions+=2;NFSU2_TR(0x64528f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645291:{NFSU2_TR(0x645291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64525au);}goto L64525a;}}
}
B645293:L645293:{c.instructions+=2;NFSU2_TR(0x645293);
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
B645295:{NFSU2_TR(0x645295);
{goto L6452d4;}
}
B645297:L645297:{c.instructions+=2;NFSU2_TR(0x645297);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64529b:{NFSU2_TR(0x64529b);
if(r1(R+518)){{goto L6452a2;}}
}
B64529d:L64529d:{c.instructions+=3;NFSU2_TR(0x64529d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64529f:{NFSU2_TR(0x64529f);
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
B6452a0:{NFSU2_TR(0x6452a0);
{goto L6452d4;}
}
B6452a2:L6452a2:{c.instructions+=3;NFSU2_TR(0x6452a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6452a5:{NFSU2_TR(0x6452a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6452ac:{NFSU2_TR(0x6452ac);
{goto L6452c5;}
}
B6452ae:L6452ae:{c.instructions+=2;NFSU2_TR(0x6452ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6452b2:{NFSU2_TR(0x6452b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6452c2;}}
}
B6452b4:L6452b4:{c.instructions+=3;NFSU2_TR(0x6452b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6452b7:{NFSU2_TR(0x6452b7);
__builtin_memmove((R+4),(R+12),4);
}
B6452b9:{NFSU2_TR(0x6452b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6452beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645242u);}goto L645242;}
}
B6452be:L6452be:{c.instructions+=2;NFSU2_TR(0x6452be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6452c0:{NFSU2_TR(0x6452c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6452c9;}}
}
B6452c2:L6452c2:{c.instructions+=1;NFSU2_TR(0x6452c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6452c5:L6452c5:{c.instructions+=2;NFSU2_TR(0x6452c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6452c7:{NFSU2_TR(0x6452c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6452aeu);}goto L6452ae;}}
}
B6452c9:L6452c9:{c.instructions+=4;NFSU2_TR(0x6452c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6452cd:{NFSU2_TR(0x6452cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6452cf:{NFSU2_TR(0x6452cf);
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
B6452d1:{NFSU2_TR(0x6452d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6452d4:L6452d4:{c.instructions+=5;NFSU2_TR(0x6452d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6452d5:{NFSU2_TR(0x6452d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6452d6:{NFSU2_TR(0x6452d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6452d7:{NFSU2_TR(0x6452d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6452d8:{NFSU2_TR(0x6452d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6452db:L6452db:{c.instructions+=7;NFSU2_TR(0x6452db);
__builtin_memmove((R+28),(R+28),4);
}
B6452dd:{NFSU2_TR(0x6452dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6452de:{NFSU2_TR(0x6452de);
__builtin_memmove((R+20),(R+16),4);
}
B6452e0:{NFSU2_TR(0x6452e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6452e1:{NFSU2_TR(0x6452e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6452e4:{NFSU2_TR(0x6452e4);
__builtin_memmove((R+24),(R+4),4);
}
B6452e6:{NFSU2_TR(0x6452e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6452ebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645242u);}goto L645242;}
}
B6452eb:L6452eb:{c.instructions+=2;NFSU2_TR(0x6452eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6452ed:{NFSU2_TR(0x6452ed);
if(r1(R+518)){{goto L6452f3;}}
}
B6452ef:L6452ef:{c.instructions+=2;NFSU2_TR(0x6452ef);
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
B6452f1:{NFSU2_TR(0x6452f1);
{goto L645340;}
}
B6452f3:L6452f3:{c.instructions+=4;NFSU2_TR(0x6452f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6452f4:{NFSU2_TR(0x6452f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6452f7:{NFSU2_TR(0x6452f7);
__builtin_memmove((R+4),(R+24),4);
}
B6452f9:{NFSU2_TR(0x6452f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6452feull));
TAIL_STATIC(0x644f9fu,644);
}
B6452fe:L6452fe:{c.instructions+=2;NFSU2_TR(0x6452fe);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B645302:{NFSU2_TR(0x645302);
{goto L645339;}
}
B645304:L645304:{c.instructions+=2;NFSU2_TR(0x645304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B645306:{NFSU2_TR(0x645306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645309:L645309:{c.instructions+=4;NFSU2_TR(0x645309);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B64530b:{NFSU2_TR(0x64530b);
__builtin_memmove((R+0),(R+8),1);
}
B64530d:{NFSU2_TR(0x64530d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64530f:{NFSU2_TR(0x64530f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64532b;}}
}
B645311:L645311:{c.instructions+=2;NFSU2_TR(0x645311);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645313:{NFSU2_TR(0x645313);
if(r1(R+518)){{goto L645327;}}
}
B645315:L645315:{c.instructions+=4;NFSU2_TR(0x645315);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B645318:{NFSU2_TR(0x645318);
__builtin_memmove((R+0),(R+8),1);
}
B64531a:{NFSU2_TR(0x64531a);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B64531d:{NFSU2_TR(0x64531d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64532b;}}
}
B64531f:L64531f:{c.instructions+=6;NFSU2_TR(0x64531f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645320:{NFSU2_TR(0x645320);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645321:{NFSU2_TR(0x645321);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B645322:{NFSU2_TR(0x645322);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B645323:{NFSU2_TR(0x645323);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645325:{NFSU2_TR(0x645325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645309u);}goto L645309;}}
}
B645327:L645327:{c.instructions+=2;NFSU2_TR(0x645327);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645329:{NFSU2_TR(0x645329);
{goto L645330;}
}
B64532b:L64532b:{c.instructions+=2;NFSU2_TR(0x64532b);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64532d:{NFSU2_TR(0x64532d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645330:L645330:{c.instructions+=2;NFSU2_TR(0x645330);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645332:{NFSU2_TR(0x645332);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64533d;}}
}
B645334:L645334:{c.instructions+=1;NFSU2_TR(0x645334);
if(r1(R+518)){{goto L645345;}}
}
B645336:L645336:{c.instructions+=1;NFSU2_TR(0x645336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645339:L645339:{c.instructions+=2;NFSU2_TR(0x645339);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64533b:{NFSU2_TR(0x64533b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645304u);}goto L645304;}}
}
B64533d:L64533d:{c.instructions+=1;NFSU2_TR(0x64533d);
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
B64533f:L64533f:{c.instructions+=1;NFSU2_TR(0x64533f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645340:L645340:{c.instructions+=3;NFSU2_TR(0x645340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645341:{NFSU2_TR(0x645341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B645342:{NFSU2_TR(0x645342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645345:L645345:{c.instructions+=3;NFSU2_TR(0x645345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645348:{NFSU2_TR(0x645348);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64534a:{NFSU2_TR(0x64534a);
if(r1(R+518)){{goto L645351;}}
}
B64534c:L64534c:{c.instructions+=2;NFSU2_TR(0x64534c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64534f:{NFSU2_TR(0x64534f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B645351:L645351:{c.instructions+=3;NFSU2_TR(0x645351);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645354:{NFSU2_TR(0x645354);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645356:{NFSU2_TR(0x645356);
if(r1(R+518)){{goto L64535d;}}
}
B645358:L645358:{c.instructions+=2;NFSU2_TR(0x645358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64535b:{NFSU2_TR(0x64535b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64535d:L64535d:{c.instructions+=3;NFSU2_TR(0x64535d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64535f:{NFSU2_TR(0x64535f);
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
B645360:{NFSU2_TR(0x645360);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64533fu);}goto L64533f;}
}
B645362:L645362:{c.instructions+=7;NFSU2_TR(0x645362);
__builtin_memmove((R+28),(R+28),4);
}
B645364:{NFSU2_TR(0x645364);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645365:{NFSU2_TR(0x645365);
__builtin_memmove((R+20),(R+16),4);
}
B645367:{NFSU2_TR(0x645367);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B64536d:{NFSU2_TR(0x64536d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64536f:{NFSU2_TR(0x64536f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645372:{NFSU2_TR(0x645372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645377ull));
TAIL_STATIC(0x671ccbu,671);
}
B645377:L645377:{c.instructions+=2;NFSU2_TR(0x645377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B645378:{NFSU2_TR(0x645378);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64537b:L64537b:{c.instructions+=10;NFSU2_TR(0x64537b);
__builtin_memmove((R+28),(R+28),4);
}
B64537d:{NFSU2_TR(0x64537d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64537e:{NFSU2_TR(0x64537e);
__builtin_memmove((R+20),(R+16),4);
}
B645380:{NFSU2_TR(0x645380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645383:{NFSU2_TR(0x645383);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645384:{NFSU2_TR(0x645384);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645386:{NFSU2_TR(0x645386);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B645388:{NFSU2_TR(0x645388);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64538a:{NFSU2_TR(0x64538a);
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
B64538c:{NFSU2_TR(0x64538c);
if(r1(R+518)){{goto L6453dd;}}
}
B64538e:L64538e:{c.instructions+=5;NFSU2_TR(0x64538e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64538f:{NFSU2_TR(0x64538f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645390:{NFSU2_TR(0x645390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645393:{NFSU2_TR(0x645393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645396:{NFSU2_TR(0x645396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645399:L645399:{c.instructions+=2;NFSU2_TR(0x645399);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64539c:{NFSU2_TR(0x64539c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6453b4;}}
}
B64539e:L64539e:{c.instructions+=2;NFSU2_TR(0x64539e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6453a0:{NFSU2_TR(0x6453a0);
if(r1(R+518)){{goto L6453a6;}}
}
B6453a2:L6453a2:{c.instructions+=1;NFSU2_TR(0x6453a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x5cull));
s1(u32(r4(U+4)),r1(U+8));
}
B6453a6:L6453a6:{c.instructions+=3;NFSU2_TR(0x6453a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6453a7:{NFSU2_TR(0x6453a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6453a9:{NFSU2_TR(0x6453a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6453b4;}}
}
B6453ab:L6453ab:{c.instructions+=4;NFSU2_TR(0x6453ab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6453ad:{NFSU2_TR(0x6453ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6453af:{NFSU2_TR(0x6453af);
__builtin_memmove((R+12),(R+518),1);
}
B6453b2:{NFSU2_TR(0x6453b2);
__builtin_memmove((R+8),(R+12),4);
}
B6453b4:L6453b4:{c.instructions+=3;NFSU2_TR(0x6453b4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6453b6:{NFSU2_TR(0x6453b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6453b8:{NFSU2_TR(0x6453b8);
if(r1(R+518)){{goto L6453cb;}}
}
B6453ba:L6453ba:{c.instructions+=2;NFSU2_TR(0x6453ba);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6453bd:{NFSU2_TR(0x6453bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6453cb;}}
}
B6453bf:L6453bf:{c.instructions+=2;NFSU2_TR(0x6453bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6453c1:{NFSU2_TR(0x6453c1);
if(r1(R+518)){{goto L6453c7;}}
}
B6453c3:L6453c3:{c.instructions+=1;NFSU2_TR(0x6453c3);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x5cull));
s1(u32(r4(U+4)),r1(U+8));
}
B6453c7:L6453c7:{c.instructions+=3;NFSU2_TR(0x6453c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6453c9:{NFSU2_TR(0x6453c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6453ca:{NFSU2_TR(0x6453ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6453cb:L6453cb:{c.instructions+=2;NFSU2_TR(0x6453cb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6453cd:{NFSU2_TR(0x6453cd);
if(r1(R+518)){{goto L6453d4;}}
}
B6453cf:L6453cf:{c.instructions+=2;NFSU2_TR(0x6453cf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6453d1:{NFSU2_TR(0x6453d1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6453d4:L6453d4:{c.instructions+=4;NFSU2_TR(0x6453d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6453d5:{NFSU2_TR(0x6453d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6453d6:{NFSU2_TR(0x6453d6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6453d9:{NFSU2_TR(0x6453d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645399u);}goto L645399;}}
}
B6453db:L6453db:{c.instructions+=2;NFSU2_TR(0x6453db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6453dc:{NFSU2_TR(0x6453dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6453dd:L6453dd:{c.instructions+=3;NFSU2_TR(0x6453dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6453de:{NFSU2_TR(0x6453de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6453df:{NFSU2_TR(0x6453df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6453e2:L6453e2:{c.instructions+=8;NFSU2_TR(0x6453e2);
__builtin_memmove((R+28),(R+28),4);
}
B6453e4:{NFSU2_TR(0x6453e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6453e5:{NFSU2_TR(0x6453e5);
__builtin_memmove((R+20),(R+16),4);
}
B6453e7:{NFSU2_TR(0x6453e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6453ea:{NFSU2_TR(0x6453ea);
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
B6453ec:{NFSU2_TR(0x6453ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6453ed:{NFSU2_TR(0x6453ed);
__builtin_memmove((R+24),(R+4),4);
}
B6453ef:{NFSU2_TR(0x6453ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645418;}}
}
B6453f1:L6453f1:{c.instructions+=2;NFSU2_TR(0x6453f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6453f4:{NFSU2_TR(0x6453f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645416;}}
}
B6453f6:L6453f6:{c.instructions+=7;NFSU2_TR(0x6453f6);
u8 U[4];
w4(U+0,u32(0x7ab89cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6453fb:{NFSU2_TR(0x6453fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6453fc:{NFSU2_TR(0x6453fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645402:{NFSU2_TR(0x645402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645403:{NFSU2_TR(0x645403);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645406:{NFSU2_TR(0x645406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645407:{NFSU2_TR(0x645407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64540cull));
TAIL_STATIC(0x64307cu,643);
}
B64540c:L64540c:{c.instructions+=2;NFSU2_TR(0x64540c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64540f:{NFSU2_TR(0x64540f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B645416:L645416:{c.instructions+=1;NFSU2_TR(0x645416);
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
B645418:L645418:{c.instructions+=3;NFSU2_TR(0x645418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645419:{NFSU2_TR(0x645419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64541a:{NFSU2_TR(0x64541a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64541d:L64541d:{c.instructions+=5;NFSU2_TR(0x64541d);
__builtin_memmove((R+28),(R+28),4);
}
B64541f:{NFSU2_TR(0x64541f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645420:{NFSU2_TR(0x645420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645423:{NFSU2_TR(0x645423);
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
B645425:{NFSU2_TR(0x645425);
if(r1(R+518)){{goto L645435;}}
}
B645427:L645427:{c.instructions+=2;NFSU2_TR(0x645427);
__builtin_memmove((R+4),(R+24),4);
}
B645429:{NFSU2_TR(0x645429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64542eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64541du);}goto L64541d;}
}
B64542e:L64542e:{c.instructions+=2;NFSU2_TR(0x64542e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64542f:{NFSU2_TR(0x64542f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645434ull));
TAIL_STATIC(0x575630u,575);
}
B645434:L645434:{c.instructions+=1;NFSU2_TR(0x645434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645435:L645435:{c.instructions+=2;NFSU2_TR(0x645435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645436:{NFSU2_TR(0x645436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645437:L645437:{c.instructions+=6;NFSU2_TR(0x645437);
__builtin_memmove((R+28),(R+28),4);
}
B645439:{NFSU2_TR(0x645439);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64543a:{NFSU2_TR(0x64543a);
__builtin_memmove((R+20),(R+16),4);
}
B64543c:{NFSU2_TR(0x64543c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64543d:{NFSU2_TR(0x64543d);
__builtin_memmove((R+24),(R+4),4);
}
B64543f:{NFSU2_TR(0x64543f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645444ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64541du);}goto L64541d;}
}
B645444:L645444:{c.instructions+=2;NFSU2_TR(0x645444);
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
B645448:{NFSU2_TR(0x645448);
if(r1(R+518)){{goto L645451;}}
}
B64544a:L64544a:{c.instructions+=2;NFSU2_TR(0x64544a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64544b:{NFSU2_TR(0x64544b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645450ull));
TAIL_STATIC(0x575630u,575);
}
B645450:L645450:{c.instructions+=1;NFSU2_TR(0x645450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645451:L645451:{c.instructions+=4;NFSU2_TR(0x645451);
__builtin_memmove((R+0),(R+24),4);
}
B645453:{NFSU2_TR(0x645453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645454:{NFSU2_TR(0x645454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B645455:{NFSU2_TR(0x645455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645458:L645458:{c.instructions+=4;NFSU2_TR(0x645458);
__builtin_memmove((R+28),(R+28),4);
}
B64545a:{NFSU2_TR(0x64545a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64545b:{NFSU2_TR(0x64545b);
__builtin_memmove((R+24),(R+4),4);
}
B64545d:{NFSU2_TR(0x64545d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645462ull));
TAIL_STATIC(0x643cc1u,643);
}
B645462:L645462:{c.instructions+=6;NFSU2_TR(0x645462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64546c:{NFSU2_TR(0x64546c);
__builtin_memmove((R+0),gp(0x8a5d00),4);
}
B645471:{NFSU2_TR(0x645471);
__builtin_memmove(gp(0x8a5d00),(R+24),4);
}
B645477:{NFSU2_TR(0x645477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64547d:{NFSU2_TR(0x64547d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64547e:{NFSU2_TR(0x64547e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64547f:L64547f:{c.instructions+=4;NFSU2_TR(0x64547f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645485:{NFSU2_TR(0x645485);
__builtin_memmove(gp(0x8a5d00),(R+0),4);
}
B64548a:{NFSU2_TR(0x64548a);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B645491:{NFSU2_TR(0x645491);
TAIL_STATIC(0x643d16u,643);
}
B645496:L645496:{c.instructions+=7;NFSU2_TR(0x645496);
__builtin_memmove((R+28),(R+28),4);
}
B645498:{NFSU2_TR(0x645498);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645499:{NFSU2_TR(0x645499);
__builtin_memmove((R+20),(R+16),4);
}
B64549b:{NFSU2_TR(0x64549b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64549c:{NFSU2_TR(0x64549c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64549f:{NFSU2_TR(0x64549f);
__builtin_memmove((R+24),(R+4),4);
}
B6454a1:{NFSU2_TR(0x6454a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6454a6ull));
TAIL_STATIC(0x644f9fu,644);
}
B6454a6:L6454a6:{c.instructions+=3;NFSU2_TR(0x6454a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6454aa:{NFSU2_TR(0x6454aa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6454ad:{NFSU2_TR(0x6454ad);
if(r1(R+518)){{goto L645503;}}
}
B6454af:L6454af:{c.instructions+=2;NFSU2_TR(0x6454af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6454b0:{NFSU2_TR(0x6454b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6454b1:L6454b1:{c.instructions+=3;NFSU2_TR(0x6454b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6454b3:{NFSU2_TR(0x6454b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6454b5:{NFSU2_TR(0x6454b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6454b8:L6454b8:{c.instructions+=4;NFSU2_TR(0x6454b8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6454ba:{NFSU2_TR(0x6454ba);
__builtin_memmove((R+8),(R+12),1);
}
B6454bc:{NFSU2_TR(0x6454bc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6454be:{NFSU2_TR(0x6454be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6454da;}}
}
B6454c0:L6454c0:{c.instructions+=2;NFSU2_TR(0x6454c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6454c2:{NFSU2_TR(0x6454c2);
if(r1(R+518)){{goto L6454d6;}}
}
B6454c4:L6454c4:{c.instructions+=4;NFSU2_TR(0x6454c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6454c7:{NFSU2_TR(0x6454c7);
__builtin_memmove((R+8),(R+12),1);
}
B6454c9:{NFSU2_TR(0x6454c9);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6454cc:{NFSU2_TR(0x6454cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6454da;}}
}
B6454ce:L6454ce:{c.instructions+=6;NFSU2_TR(0x6454ce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6454cf:{NFSU2_TR(0x6454cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6454d0:{NFSU2_TR(0x6454d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6454d1:{NFSU2_TR(0x6454d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6454d2:{NFSU2_TR(0x6454d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6454d4:{NFSU2_TR(0x6454d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6454b8u);}goto L6454b8;}}
}
B6454d6:L6454d6:{c.instructions+=2;NFSU2_TR(0x6454d6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6454d8:{NFSU2_TR(0x6454d8);
{goto L6454df;}
}
B6454da:L6454da:{c.instructions+=2;NFSU2_TR(0x6454da);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+8))<(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6454dc:{NFSU2_TR(0x6454dc);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(u32(0xffffffffull))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6454df:L6454df:{c.instructions+=2;NFSU2_TR(0x6454df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6454e1:{NFSU2_TR(0x6454e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645501;}}
}
B6454e3:L6454e3:{c.instructions+=1;NFSU2_TR(0x6454e3);
if(r1(R+518)){{goto L6454ef;}}
}
B6454e5:L6454e5:{c.instructions+=3;NFSU2_TR(0x6454e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6454e8:{NFSU2_TR(0x6454e8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6454eb:{NFSU2_TR(0x6454eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6454b1u);}goto L6454b1;}}
}
B6454ed:L6454ed:{c.instructions+=1;NFSU2_TR(0x6454ed);
{goto L645501;}
}
B6454ef:L6454ef:{c.instructions+=6;NFSU2_TR(0x6454ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6454f1:{NFSU2_TR(0x6454f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6454f4:{NFSU2_TR(0x6454f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6454f6:{NFSU2_TR(0x6454f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6454fa:{NFSU2_TR(0x6454fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6454fc:{NFSU2_TR(0x6454fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645501ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645437u);}goto L645437;}
}
B645501:L645501:{c.instructions+=2;NFSU2_TR(0x645501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645502:{NFSU2_TR(0x645502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B645503:L645503:{c.instructions+=4;NFSU2_TR(0x645503);
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
B645505:{NFSU2_TR(0x645505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645506:{NFSU2_TR(0x645506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B645507:{NFSU2_TR(0x645507);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64550a:L64550a:{c.instructions+=13;NFSU2_TR(0x64550a);
__builtin_memmove((R+28),(R+28),4);
}
B64550c:{NFSU2_TR(0x64550c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64550d:{NFSU2_TR(0x64550d);
__builtin_memmove((R+20),(R+16),4);
}
B64550f:{NFSU2_TR(0x64550f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645510:{NFSU2_TR(0x645510);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645511:{NFSU2_TR(0x645511);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645512:{NFSU2_TR(0x645512);
__builtin_memmove((R+12),(R+4),4);
}
B645514:{NFSU2_TR(0x645514);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64551a:{NFSU2_TR(0x64551a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64551b:{NFSU2_TR(0x64551b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645521:{NFSU2_TR(0x645521);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645522:{NFSU2_TR(0x645522);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645528:{NFSU2_TR(0x645528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64552dull));
TAIL_STATIC(0x643afeu,643);
}
B64552d:L64552d:{c.instructions+=2;NFSU2_TR(0x64552d);
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
B64552f:{NFSU2_TR(0x64552f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6455a5;}}
}
B645531:L645531:{c.instructions+=4;NFSU2_TR(0x645531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B645533:{NFSU2_TR(0x645533);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645536:{NFSU2_TR(0x645536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645539:{NFSU2_TR(0x645539);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64558c;}}
}
B64553b:L64553b:{c.instructions+=6;NFSU2_TR(0x64553b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645541:{NFSU2_TR(0x645541);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645543:{NFSU2_TR(0x645543);
w4(R+28,u32(0x7ab8c4ull));
}
B645548:{NFSU2_TR(0x645548);
__builtin_memmove((R+24),(R+0),4);
}
B64554a:{NFSU2_TR(0x64554a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64554b:{NFSU2_TR(0x64554b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64554d:L64554d:{c.instructions+=1;NFSU2_TR(0x64554d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64554f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64554du);}goto L64554d;}}
}
B64554f:L64554f:{c.instructions+=1;NFSU2_TR(0x64554f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64555a;}}
}
B645551:L645551:{c.instructions+=2;NFSU2_TR(0x645551);
__builtin_memmove((R+4),(R+12),4);
}
B645553:{NFSU2_TR(0x645553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645558ull));
TAIL_STATIC(0x64475fu,644);
}
B645558:L645558:{c.instructions+=1;NFSU2_TR(0x645558);
{goto L6455ac;}
}
B64555a:L64555a:{c.instructions+=5;NFSU2_TR(0x64555a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64555c:{NFSU2_TR(0x64555c);
w4(R+28,u32(0x7ab514ull));
}
B645561:{NFSU2_TR(0x645561);
__builtin_memmove((R+24),(R+0),4);
}
B645563:{NFSU2_TR(0x645563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645564:{NFSU2_TR(0x645564);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B645566:L645566:{c.instructions+=1;NFSU2_TR(0x645566);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645568;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645566u);}goto L645566;}}
}
B645568:L645568:{c.instructions+=1;NFSU2_TR(0x645568);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645573;}}
}
B64556a:L64556a:{c.instructions+=2;NFSU2_TR(0x64556a);
__builtin_memmove((R+4),(R+12),4);
}
B64556c:{NFSU2_TR(0x64556c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645571ull));
TAIL_STATIC(0x64489eu,644);
}
B645571:L645571:{c.instructions+=1;NFSU2_TR(0x645571);
{goto L6455ac;}
}
B645573:L645573:{c.instructions+=5;NFSU2_TR(0x645573);
__builtin_memmove((R+24),(R+0),4);
}
B645575:{NFSU2_TR(0x645575);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645577:{NFSU2_TR(0x645577);
w4(R+28,u32(0x7ab8c0ull));
}
B64557c:{NFSU2_TR(0x64557c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64557d:{NFSU2_TR(0x64557d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64557f:L64557f:{c.instructions+=1;NFSU2_TR(0x64557f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645581;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64557fu);}goto L64557f;}}
}
B645581:L645581:{c.instructions+=1;NFSU2_TR(0x645581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64558c;}}
}
B645583:L645583:{c.instructions+=2;NFSU2_TR(0x645583);
__builtin_memmove((R+4),(R+12),4);
}
B645585:{NFSU2_TR(0x645585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64558aull));
TAIL_STATIC(0x644c86u,644);
}
B64558a:L64558a:{c.instructions+=1;NFSU2_TR(0x64558a);
{goto L6455ac;}
}
B64558c:L64558c:{c.instructions+=2;NFSU2_TR(0x64558c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645590:{NFSU2_TR(0x645590);
if(r1(R+518)){{goto L6455a3;}}
}
B645592:L645592:{c.instructions+=2;NFSU2_TR(0x645592);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645596:{NFSU2_TR(0x645596);
if(r1(R+518)){{goto L6455a3;}}
}
B645598:L645598:{c.instructions+=2;NFSU2_TR(0x645598);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64559e:{NFSU2_TR(0x64559e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6455a3ull));
TAIL_STATIC(0x642bc7u,642);
}
B6455a3:L6455a3:{c.instructions+=1;NFSU2_TR(0x6455a3);
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
B6455a5:L6455a5:{c.instructions+=1;NFSU2_TR(0x6455a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6455ac:L6455ac:{c.instructions+=5;NFSU2_TR(0x6455ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6455ad:{NFSU2_TR(0x6455ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6455ae:{NFSU2_TR(0x6455ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6455af:{NFSU2_TR(0x6455af);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6455b0:{NFSU2_TR(0x6455b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6455b1:L6455b1:{c.instructions+=11;NFSU2_TR(0x6455b1);
__builtin_memmove((R+28),(R+28),4);
}
B6455b3:{NFSU2_TR(0x6455b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6455b4:{NFSU2_TR(0x6455b4);
__builtin_memmove((R+20),(R+16),4);
}
B6455b6:{NFSU2_TR(0x6455b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6455b7:{NFSU2_TR(0x6455b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6455b8:{NFSU2_TR(0x6455b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6455b9:{NFSU2_TR(0x6455b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6455bc:{NFSU2_TR(0x6455bc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6455be:{NFSU2_TR(0x6455be);
__builtin_memmove((R+24),(R+4),4);
}
B6455c0:{NFSU2_TR(0x6455c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6455c3:{NFSU2_TR(0x6455c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6455c8ull));
TAIL_STATIC(0x644f9fu,644);
}
B6455c8:L6455c8:{c.instructions+=3;NFSU2_TR(0x6455c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6455cc:{NFSU2_TR(0x6455cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6455cf:{NFSU2_TR(0x6455cf);
if(r1(R+518)){{goto L645659;}}
}
B6455d5:L6455d5:{c.instructions+=1;NFSU2_TR(0x6455d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6455d6:L6455d6:{c.instructions+=3;NFSU2_TR(0x6455d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6455d8:{NFSU2_TR(0x6455d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6455da:{NFSU2_TR(0x6455da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6455dc:L6455dc:{c.instructions+=4;NFSU2_TR(0x6455dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6455de:{NFSU2_TR(0x6455de);
__builtin_memmove((R+8),(R+12),1);
}
B6455e0:{NFSU2_TR(0x6455e0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6455e2:{NFSU2_TR(0x6455e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6455fe;}}
}
B6455e4:L6455e4:{c.instructions+=2;NFSU2_TR(0x6455e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6455e6:{NFSU2_TR(0x6455e6);
if(r1(R+518)){{goto L6455fa;}}
}
B6455e8:L6455e8:{c.instructions+=4;NFSU2_TR(0x6455e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6455eb:{NFSU2_TR(0x6455eb);
__builtin_memmove((R+8),(R+12),1);
}
B6455ed:{NFSU2_TR(0x6455ed);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6455f0:{NFSU2_TR(0x6455f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6455fe;}}
}
B6455f2:L6455f2:{c.instructions+=6;NFSU2_TR(0x6455f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6455f3:{NFSU2_TR(0x6455f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6455f4:{NFSU2_TR(0x6455f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6455f5:{NFSU2_TR(0x6455f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6455f6:{NFSU2_TR(0x6455f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6455f8:{NFSU2_TR(0x6455f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6455dcu);}goto L6455dc;}}
}
B6455fa:L6455fa:{c.instructions+=2;NFSU2_TR(0x6455fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6455fc:{NFSU2_TR(0x6455fc);
{goto L645603;}
}
B6455fe:L6455fe:{c.instructions+=2;NFSU2_TR(0x6455fe);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645600:{NFSU2_TR(0x645600);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645603:L645603:{c.instructions+=3;NFSU2_TR(0x645603);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645605:{NFSU2_TR(0x645605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645608:{NFSU2_TR(0x645608);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645658;}}
}
B64560a:L64560a:{c.instructions+=1;NFSU2_TR(0x64560a);
if(r1(R+518)){{goto L645616;}}
}
B64560c:L64560c:{c.instructions+=3;NFSU2_TR(0x64560c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B64560f:{NFSU2_TR(0x64560f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B645612:{NFSU2_TR(0x645612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6455d6u);}goto L6455d6;}}
}
B645614:L645614:{c.instructions+=1;NFSU2_TR(0x645614);
{goto L645658;}
}
B645616:L645616:{c.instructions+=5;NFSU2_TR(0x645616);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B645619:{NFSU2_TR(0x645619);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64561a:{NFSU2_TR(0x64561a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64561c:{NFSU2_TR(0x64561c);
__builtin_memmove((R+4),(R+12),4);
}
B64561e:{NFSU2_TR(0x64561e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645623ull));
TAIL_STATIC(0x644fd6u,644);
}
B645623:L645623:{c.instructions+=2;NFSU2_TR(0x645623);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645625:{NFSU2_TR(0x645625);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645646;}}
}
B645627:L645627:{c.instructions+=8;NFSU2_TR(0x645627);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B645629:{NFSU2_TR(0x645629);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64562f:{NFSU2_TR(0x64562f);
u8 U[4];
w4(U+0,u32(0x7ab8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645634:{NFSU2_TR(0x645634);
u8 U[4];
w4(U+0,u32(0x5efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645639:{NFSU2_TR(0x645639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64563a:{NFSU2_TR(0x64563a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B64563d:{NFSU2_TR(0x64563d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64563e:{NFSU2_TR(0x64563e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645643ull));
TAIL_STATIC(0x643143u,643);
}
B645643:L645643:{c.instructions+=1;NFSU2_TR(0x645643);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B645646:L645646:{c.instructions+=6;NFSU2_TR(0x645646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B645648:{NFSU2_TR(0x645648);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64564b:{NFSU2_TR(0x64564b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64564d:{NFSU2_TR(0x64564d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645651:{NFSU2_TR(0x645651);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645653:{NFSU2_TR(0x645653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645658ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645437u);}goto L645437;}
}
B645658:L645658:{c.instructions+=1;NFSU2_TR(0x645658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B645659:L645659:{c.instructions+=8;NFSU2_TR(0x645659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64565b:{NFSU2_TR(0x64565b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64565e:{NFSU2_TR(0x64565e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B645660:{NFSU2_TR(0x645660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645661:{NFSU2_TR(0x645661);
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
B645663:{NFSU2_TR(0x645663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645664:{NFSU2_TR(0x645664);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B645665:{NFSU2_TR(0x645665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645668:L645668:{c.instructions+=13;NFSU2_TR(0x645668);
__builtin_memmove((R+28),(R+28),4);
}
B64566a:{NFSU2_TR(0x64566a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64566b:{NFSU2_TR(0x64566b);
__builtin_memmove((R+20),(R+16),4);
}
B64566d:{NFSU2_TR(0x64566d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64566e:{NFSU2_TR(0x64566e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64566f:{NFSU2_TR(0x64566f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645670:{NFSU2_TR(0x645670);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645671:{NFSU2_TR(0x645671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645674:{NFSU2_TR(0x645674);
__builtin_memmove((R+12),(R+4),4);
}
B645676:{NFSU2_TR(0x645676);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645678:{NFSU2_TR(0x645678);
w4(R+24,u32(0x7ab964ull));
}
B64567d:{NFSU2_TR(0x64567d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64567e:{NFSU2_TR(0x64567e);
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
B645680:L645680:{c.instructions+=1;NFSU2_TR(0x645680);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645682;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645680u);}goto L645680;}}
}
B645682:L645682:{c.instructions+=1;NFSU2_TR(0x645682);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64568c;}}
}
B645684:L645684:{c.instructions+=2;NFSU2_TR(0x645684);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64568a:{NFSU2_TR(0x64568a);
{goto L645708;}
}
B64568c:L64568c:{c.instructions+=7;NFSU2_TR(0x64568c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64568f:{NFSU2_TR(0x64568f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645690:{NFSU2_TR(0x645690);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645693:{NFSU2_TR(0x645693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645694:{NFSU2_TR(0x645694);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645697:{NFSU2_TR(0x645697);
__builtin_memmove((R+4),(R+12),4);
}
B645699:{NFSU2_TR(0x645699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64569eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6452dbu);}goto L6452db;}
}
B64569e:L64569e:{c.instructions+=2;NFSU2_TR(0x64569e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6456a0:{NFSU2_TR(0x6456a0);
if(r1(R+518)){{goto L645706;}}
}
B6456a2:L6456a2:{c.instructions+=2;NFSU2_TR(0x6456a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6456a6:{NFSU2_TR(0x6456a6);
if(r1(R+518)){{goto L6456ca;}}
}
B6456a8:L6456a8:{c.instructions+=7;NFSU2_TR(0x6456a8);
u8 U[4];
w4(U+0,u32(0x7ab920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456ad:{NFSU2_TR(0x6456ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6456b3:{NFSU2_TR(0x6456b3);
u8 U[4];
w4(U+0,u32(0x5edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456b8:{NFSU2_TR(0x6456b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456b9:{NFSU2_TR(0x6456b9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B6456bc:{NFSU2_TR(0x6456bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456bd:{NFSU2_TR(0x6456bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6456c2ull));
TAIL_STATIC(0x64307cu,643);
}
B6456c2:L6456c2:{c.instructions+=4;NFSU2_TR(0x6456c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6456c4:{NFSU2_TR(0x6456c4);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6456c7:{NFSU2_TR(0x6456c7);
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
B6456c8:{NFSU2_TR(0x6456c8);
{goto L645708;}
}
B6456ca:L6456ca:{c.instructions+=3;NFSU2_TR(0x6456ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6456cd:{NFSU2_TR(0x6456cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6456cf:{NFSU2_TR(0x6456cf);
if(r1(R+518)){{goto L6456e9;}}
}
B6456d1:L6456d1:{c.instructions+=2;NFSU2_TR(0x6456d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6456d5:{NFSU2_TR(0x6456d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6456e9;}}
}
B6456d7:L6456d7:{c.instructions+=3;NFSU2_TR(0x6456d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6456da:{NFSU2_TR(0x6456da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6456dd:{NFSU2_TR(0x6456dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6456e9;}}
}
B6456df:L6456df:{c.instructions+=2;NFSU2_TR(0x6456df);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6456e2:{NFSU2_TR(0x6456e2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6456e9;}}
}
B6456e4:L6456e4:{c.instructions+=2;NFSU2_TR(0x6456e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6456e7:{NFSU2_TR(0x6456e7);
{goto L645708;}
}
B6456e9:L6456e9:{c.instructions+=7;NFSU2_TR(0x6456e9);
u8 U[4];
w4(U+0,u32(0x7ab8ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456ee:{NFSU2_TR(0x6456ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6456f4:{NFSU2_TR(0x6456f4);
u8 U[4];
w4(U+0,u32(0x5eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456f9:{NFSU2_TR(0x6456f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456fa:{NFSU2_TR(0x6456fa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B6456fd:{NFSU2_TR(0x6456fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6456fe:{NFSU2_TR(0x6456fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645703ull));
TAIL_STATIC(0x64307cu,643);
}
B645703:L645703:{c.instructions+=1;NFSU2_TR(0x645703);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B645706:L645706:{c.instructions+=1;NFSU2_TR(0x645706);
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
B645708:L645708:{c.instructions+=5;NFSU2_TR(0x645708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645709:{NFSU2_TR(0x645709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64570a:{NFSU2_TR(0x64570a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64570b:{NFSU2_TR(0x64570b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64570c:{NFSU2_TR(0x64570c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64570f:L64570f:{c.instructions+=13;NFSU2_TR(0x64570f);
__builtin_memmove((R+28),(R+28),4);
}
B645711:{NFSU2_TR(0x645711);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645712:{NFSU2_TR(0x645712);
__builtin_memmove((R+20),(R+16),4);
}
B645714:{NFSU2_TR(0x645714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B645717:{NFSU2_TR(0x645717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64571b:{NFSU2_TR(0x64571b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64571f:{NFSU2_TR(0x64571f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645723:{NFSU2_TR(0x645723);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645724:{NFSU2_TR(0x645724);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645725:{NFSU2_TR(0x645725);
__builtin_memmove((R+0),(R+4),4);
}
B645727:{NFSU2_TR(0x645727);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645728:{NFSU2_TR(0x645728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64572b:{NFSU2_TR(0x64572b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64577b;}}
}
B64572d:L64572d:{c.instructions+=4;NFSU2_TR(0x64572d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645730:{NFSU2_TR(0x645730);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645732:{NFSU2_TR(0x645732);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645735:{NFSU2_TR(0x645735);
if(r1(R+518)){{goto L645768;}}
}
B645737:L645737:{c.instructions+=2;NFSU2_TR(0x645737);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645739:{NFSU2_TR(0x645739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64573eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645362u);}goto L645362;}
}
B64573e:L64573e:{c.instructions+=2;NFSU2_TR(0x64573e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645740:{NFSU2_TR(0x645740);
if(r1(R+518)){{goto L64574f;}}
}
B645742:L645742:{c.instructions+=4;NFSU2_TR(0x645742);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645745:{NFSU2_TR(0x645745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645746:{NFSU2_TR(0x645746);
__builtin_memmove((R+4),(R+0),4);
}
B645748:{NFSU2_TR(0x645748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64574dull));
TAIL_STATIC(0x67269fu,672);
}
B64574d:L64574d:{c.instructions+=1;NFSU2_TR(0x64574d);
{goto L645751;}
}
B64574f:L64574f:{c.instructions+=1;NFSU2_TR(0x64574f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645751:L645751:{c.instructions+=3;NFSU2_TR(0x645751);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645753:{NFSU2_TR(0x645753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B645755:{NFSU2_TR(0x645755);
if(r1(R+518)){{goto L645dcb;}}
}
B64575b:L64575b:{c.instructions+=4;NFSU2_TR(0x64575b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64575e:{NFSU2_TR(0x64575e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645760:{NFSU2_TR(0x645760);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B645763:{NFSU2_TR(0x645763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645737u);}goto L645737;}}
}
B645765:L645765:{c.instructions+=1;NFSU2_TR(0x645765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645768:L645768:{c.instructions+=4;NFSU2_TR(0x645768);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64576b:{NFSU2_TR(0x64576b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64576d:{NFSU2_TR(0x64576d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645770:{NFSU2_TR(0x645770);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645773:L645773:{c.instructions+=3;NFSU2_TR(0x645773);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645775:{NFSU2_TR(0x645775);
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
B645776:{NFSU2_TR(0x645776);
{goto L645dcd;}
}
B64577b:L64577b:{c.instructions+=3;NFSU2_TR(0x64577b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64577e:{NFSU2_TR(0x64577e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645780:{NFSU2_TR(0x645780);
if(r1(R+518)){{goto L6457cd;}}
}
B645782:L645782:{c.instructions+=5;NFSU2_TR(0x645782);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x278ull))));
}
B645787:{NFSU2_TR(0x645787);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645789:{NFSU2_TR(0x645789);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64578c:{NFSU2_TR(0x64578c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64578d:{NFSU2_TR(0x64578d);
__builtin_memmove((R+28),(R+0),4);
}
B64578f:L64578f:{c.instructions+=1;NFSU2_TR(0x64578f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L645791;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64578fu);}goto L64578f;}
}
B645791:L645791:{c.instructions+=3;NFSU2_TR(0x645791);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B645794:{NFSU2_TR(0x645794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645797:{NFSU2_TR(0x645797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dcb;}}
}
B64579d:L64579d:{c.instructions+=7;NFSU2_TR(0x64579d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6457a0:{NFSU2_TR(0x6457a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x280ull))));
}
B6457a6:{NFSU2_TR(0x6457a6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6457a8:{NFSU2_TR(0x6457a8);
w4(R+28,u32(0x7ab86cull));
}
B6457ad:{NFSU2_TR(0x6457ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6457ae:{NFSU2_TR(0x6457ae);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6457b0:{NFSU2_TR(0x6457b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6457b3:L6457b3:{c.instructions+=1;NFSU2_TR(0x6457b3);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6457b5;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6457b3u);}goto L6457b3;}}
}
B6457b5:L6457b5:{c.instructions+=1;NFSU2_TR(0x6457b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dcb;}}
}
B6457bb:L6457bb:{c.instructions+=5;NFSU2_TR(0x6457bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6457be:{NFSU2_TR(0x6457be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6457c1:{NFSU2_TR(0x6457c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6457c4:{NFSU2_TR(0x6457c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6457c8:{NFSU2_TR(0x6457c8);
{goto L645852;}
}
B6457cd:L6457cd:{c.instructions+=5;NFSU2_TR(0x6457cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6457d3:{NFSU2_TR(0x6457d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6457d5:{NFSU2_TR(0x6457d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6457d8:{NFSU2_TR(0x6457d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6457da:{NFSU2_TR(0x6457da);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L645809;}}
}
B6457dc:L6457dc:{c.instructions+=3;NFSU2_TR(0x6457dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6457de:{NFSU2_TR(0x6457de);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6457e1:{NFSU2_TR(0x6457e1);
if(r1(R+518)){{goto L6457ed;}}
}
B6457e3:L6457e3:{c.instructions+=2;NFSU2_TR(0x6457e3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x9ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B6457e6:{NFSU2_TR(0x6457e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6457f9;}}
}
B6457e8:L6457e8:{c.instructions+=2;NFSU2_TR(0x6457e8);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0xdull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xdull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6457eb:{NFSU2_TR(0x6457eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6457f9;}}
}
B6457ed:L6457ed:{c.instructions+=4;NFSU2_TR(0x6457ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6457f3:{NFSU2_TR(0x6457f3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6457f4:{NFSU2_TR(0x6457f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6457f7:{NFSU2_TR(0x6457f7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6457dcu);}goto L6457dc;}}
}
B6457f9:L6457f9:{c.instructions+=2;NFSU2_TR(0x6457f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6457fb:{NFSU2_TR(0x6457fb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L645809;}}
}
B6457fd:L6457fd:{c.instructions+=2;NFSU2_TR(0x6457fd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x28ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B645800:{NFSU2_TR(0x645800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dcb;}}
}
B645806:L645806:{c.instructions+=1;NFSU2_TR(0x645806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645809:L645809:{c.instructions+=6;NFSU2_TR(0x645809);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64580f:{NFSU2_TR(0x64580f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645810:{NFSU2_TR(0x645810);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645816:{NFSU2_TR(0x645816);
__builtin_memmove((R+4),(R+24),4);
}
B645818:{NFSU2_TR(0x645818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64581b:{NFSU2_TR(0x64581b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645820ull));
TAIL_STATIC(0x643afeu,643);
}
B645820:L645820:{c.instructions+=2;NFSU2_TR(0x645820);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B645822:{NFSU2_TR(0x645822);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645dcb;}}
}
B645828:L645828:{c.instructions+=2;NFSU2_TR(0x645828);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64582b:{NFSU2_TR(0x64582b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dcb;}}
}
B645831:L645831:{c.instructions+=7;NFSU2_TR(0x645831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645834:{NFSU2_TR(0x645834);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x280ull))));
}
B64583a:{NFSU2_TR(0x64583a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64583c:{NFSU2_TR(0x64583c);
w4(R+28,u32(0x7ab86cull));
}
B645841:{NFSU2_TR(0x645841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645842:{NFSU2_TR(0x645842);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645844:{NFSU2_TR(0x645844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645847:L645847:{c.instructions+=1;NFSU2_TR(0x645847);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645849;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645847u);}goto L645847;}}
}
B645849:L645849:{c.instructions+=1;NFSU2_TR(0x645849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dcb;}}
}
B64584f:L64584f:{c.instructions+=1;NFSU2_TR(0x64584f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B645852:L645852:{c.instructions+=4;NFSU2_TR(0x645852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645856:{NFSU2_TR(0x645856);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645859:{NFSU2_TR(0x645859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B645860:{NFSU2_TR(0x645860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645863:L645863:{c.instructions+=4;NFSU2_TR(0x645863);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645866:{NFSU2_TR(0x645866);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645868:{NFSU2_TR(0x645868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64586b:{NFSU2_TR(0x64586b);
if(r1(R+518)){{goto L645884;}}
}
B64586d:L64586d:{c.instructions+=3;NFSU2_TR(0x64586d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64586f:{NFSU2_TR(0x64586f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645872:{NFSU2_TR(0x645872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645873:L645873:{c.instructions+=1;NFSU2_TR(0x645873);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L645875;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645873u);}goto L645873;}
}
B645875:L645875:{c.instructions+=5;NFSU2_TR(0x645875);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645878:{NFSU2_TR(0x645878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64587b:{NFSU2_TR(0x64587b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64587e:{NFSU2_TR(0x64587e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645882:{NFSU2_TR(0x645882);
{goto L6458a1;}
}
B645884:L645884:{c.instructions+=4;NFSU2_TR(0x645884);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64588a:{NFSU2_TR(0x64588a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64588b:{NFSU2_TR(0x64588b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645891:{NFSU2_TR(0x645891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645896ull));
TAIL_STATIC(0x643afeu,643);
}
B645896:L645896:{c.instructions+=2;NFSU2_TR(0x645896);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B645898:{NFSU2_TR(0x645898);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645dcb;}}
}
B64589e:L64589e:{c.instructions+=1;NFSU2_TR(0x64589e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6458a1:L6458a1:{c.instructions+=2;NFSU2_TR(0x6458a1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6458a4:{NFSU2_TR(0x6458a4);
if(r1(R+518)){{goto L6459fe;}}
}
B6458aa:L6458aa:{c.instructions+=3;NFSU2_TR(0x6458aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6458ad:{NFSU2_TR(0x6458ad);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6458b0:{NFSU2_TR(0x6458b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6458e4;}}
}
B6458b2:L6458b2:{c.instructions+=2;NFSU2_TR(0x6458b2);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6458b4:{NFSU2_TR(0x6458b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6458b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645362u);}goto L645362;}
}
B6458b9:L6458b9:{c.instructions+=2;NFSU2_TR(0x6458b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6458bb:{NFSU2_TR(0x6458bb);
if(r1(R+518)){{goto L6458cf;}}
}
B6458bd:L6458bd:{c.instructions+=5;NFSU2_TR(0x6458bd);
u8 U[4];
w4(U+0,u32(0x7ab9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6458c2:{NFSU2_TR(0x6458c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6458c4:{NFSU2_TR(0x6458c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6458c6:{NFSU2_TR(0x6458c6);
__builtin_memmove((R+4),(R+0),4);
}
B6458c8:{NFSU2_TR(0x6458c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6458cdull));
TAIL_STATIC(0x672498u,672);
}
B6458cd:L6458cd:{c.instructions+=1;NFSU2_TR(0x6458cd);
{goto L6458d1;}
}
B6458cf:L6458cf:{c.instructions+=1;NFSU2_TR(0x6458cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6458d1:L6458d1:{c.instructions+=3;NFSU2_TR(0x6458d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6458d3:{NFSU2_TR(0x6458d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6458d5:{NFSU2_TR(0x6458d5);
if(r1(R+518)){{goto L645dcb;}}
}
B6458db:L6458db:{c.instructions+=3;NFSU2_TR(0x6458db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6458de:{NFSU2_TR(0x6458de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6458e1:{NFSU2_TR(0x6458e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6458e4:L6458e4:{c.instructions+=2;NFSU2_TR(0x6458e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6458e8:{NFSU2_TR(0x6458e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64590f;}}
}
B6458ea:L6458ea:{c.instructions+=2;NFSU2_TR(0x6458ea);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6458ed:{NFSU2_TR(0x6458ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64590f;}}
}
B6458ef:L6458ef:{c.instructions+=4;NFSU2_TR(0x6458ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6458f2:{NFSU2_TR(0x6458f2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6458f4:{NFSU2_TR(0x6458f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6458f6:{NFSU2_TR(0x6458f6);
if(r1(R+518)){{goto L6458fc;}}
}
B6458f8:L6458f8:{c.instructions+=2;NFSU2_TR(0x6458f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x29ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6458fa:{NFSU2_TR(0x6458fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64590f;}}
}
B6458fc:L6458fc:{c.instructions+=2;NFSU2_TR(0x6458fc);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x281ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645903:{NFSU2_TR(0x645903);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64590f;}}
}
B645905:L645905:{c.instructions+=4;NFSU2_TR(0x645905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B645907:{NFSU2_TR(0x645907);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B64590a:{NFSU2_TR(0x64590a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64590d:{NFSU2_TR(0x64590d);
{goto L64593c;}
}
B64590f:L64590f:{c.instructions+=2;NFSU2_TR(0x64590f);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645911:{NFSU2_TR(0x645911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645916ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645362u);}goto L645362;}
}
B645916:L645916:{c.instructions+=2;NFSU2_TR(0x645916);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645918:{NFSU2_TR(0x645918);
if(r1(R+518)){{goto L645924;}}
}
B64591a:L64591a:{c.instructions+=3;NFSU2_TR(0x64591a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64591b:{NFSU2_TR(0x64591b);
__builtin_memmove((R+4),(R+0),4);
}
B64591d:{NFSU2_TR(0x64591d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645922ull));
TAIL_STATIC(0x67269fu,672);
}
B645922:L645922:{c.instructions+=1;NFSU2_TR(0x645922);
{goto L645926;}
}
B645924:L645924:{c.instructions+=1;NFSU2_TR(0x645924);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645926:L645926:{c.instructions+=4;NFSU2_TR(0x645926);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645928:{NFSU2_TR(0x645928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64592b:{NFSU2_TR(0x64592b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64592d:{NFSU2_TR(0x64592d);
if(r1(R+518)){{goto L645dcb;}}
}
B645933:L645933:{c.instructions+=3;NFSU2_TR(0x645933);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B645936:{NFSU2_TR(0x645936);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B645939:{NFSU2_TR(0x645939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64593c:L64593c:{c.instructions+=2;NFSU2_TR(0x64593c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64593f:{NFSU2_TR(0x64593f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645972;}}
}
B645941:L645941:{c.instructions+=2;NFSU2_TR(0x645941);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x281ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645948:{NFSU2_TR(0x645948);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645972;}}
}
B64594a:L64594a:{c.instructions+=4;NFSU2_TR(0x64594a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64594d:{NFSU2_TR(0x64594d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B645950:{NFSU2_TR(0x645950);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645953:{NFSU2_TR(0x645953);
if(r1(R+518)){{goto L64596f;}}
}
B645955:L645955:{c.instructions+=2;NFSU2_TR(0x645955);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645956:{NFSU2_TR(0x645956);
if(r1(R+518)){{goto L64596a;}}
}
B645958:L645958:{c.instructions+=2;NFSU2_TR(0x645958);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x32ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64595b:{NFSU2_TR(0x64595b);
if(r1(R+518)){{goto L64596f;}}
}
B64595d:L64595d:{c.instructions+=3;NFSU2_TR(0x64595d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64595e:{NFSU2_TR(0x64595e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64595f:{NFSU2_TR(0x64595f);
if(r1(R+518)){{goto L64596a;}}
}
B645961:L645961:{c.instructions+=2;NFSU2_TR(0x645961);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1eull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645964:{NFSU2_TR(0x645964);
if(r1(R+518)){{goto L64596f;}}
}
B645966:L645966:{c.instructions+=3;NFSU2_TR(0x645966);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B645967:{NFSU2_TR(0x645967);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645968:{NFSU2_TR(0x645968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645972;}}
}
B64596a:L64596a:{c.instructions+=2;NFSU2_TR(0x64596a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64596d:{NFSU2_TR(0x64596d);
{goto L645972;}
}
B64596f:L64596f:{c.instructions+=1;NFSU2_TR(0x64596f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645972:L645972:{c.instructions+=2;NFSU2_TR(0x645972);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645976:{NFSU2_TR(0x645976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645863u);}goto L645863;}}
}
B64597c:L64597c:{c.instructions+=3;NFSU2_TR(0x64597c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64597f:{NFSU2_TR(0x64597f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645982:{NFSU2_TR(0x645982);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B645984:L645984:{c.instructions+=2;NFSU2_TR(0x645984);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645986:{NFSU2_TR(0x645986);
if(r1(R+518)){{goto L645997;}}
}
B645988:L645988:{c.instructions+=2;NFSU2_TR(0x645988);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64598b:{NFSU2_TR(0x64598b);
if(r1(R+518)){{goto L645997;}}
}
B64598d:L64598d:{c.instructions+=4;NFSU2_TR(0x64598d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645990:{NFSU2_TR(0x645990);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645992:{NFSU2_TR(0x645992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645995:{NFSU2_TR(0x645995);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645984u);}goto L645984;}}
}
B645997:L645997:{c.instructions+=2;NFSU2_TR(0x645997);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645999:{NFSU2_TR(0x645999);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dae;}}
}
B64599f:L64599f:{c.instructions+=2;NFSU2_TR(0x64599f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6459a1:{NFSU2_TR(0x6459a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645dae;}}
}
B6459a7:L6459a7:{c.instructions+=9;NFSU2_TR(0x6459a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6459aa:{NFSU2_TR(0x6459aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459ad:{NFSU2_TR(0x6459ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6459b0:{NFSU2_TR(0x6459b0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6459b2:{NFSU2_TR(0x6459b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459b5:{NFSU2_TR(0x6459b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459b8:{NFSU2_TR(0x6459b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459bb:{NFSU2_TR(0x6459bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459be:{NFSU2_TR(0x6459be);
if(r1(R+518)){{goto L645c4e;}}
}
B6459c4:L6459c4:{c.instructions+=5;NFSU2_TR(0x6459c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6459c8:{NFSU2_TR(0x6459c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6459cb:{NFSU2_TR(0x6459cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6459ce:{NFSU2_TR(0x6459ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459d1:{NFSU2_TR(0x6459d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a3c;}}
}
B6459d3:L6459d3:{c.instructions+=2;NFSU2_TR(0x6459d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6459d7:{NFSU2_TR(0x6459d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a3c;}}
}
B6459d9:L6459d9:{c.instructions+=5;NFSU2_TR(0x6459d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6459db:{NFSU2_TR(0x6459db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6459dd:{NFSU2_TR(0x6459dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6459de:{NFSU2_TR(0x6459de);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6459e0:{NFSU2_TR(0x6459e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a1c;}}
}
B6459e2:L6459e2:{c.instructions+=5;NFSU2_TR(0x6459e2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6459e4:{NFSU2_TR(0x6459e4);
w4(R+28,u32(0x7ab9d0ull));
}
B6459e9:{NFSU2_TR(0x6459e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6459ec:{NFSU2_TR(0x6459ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6459ed:{NFSU2_TR(0x6459ed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6459ef:L6459ef:{c.instructions+=1;NFSU2_TR(0x6459ef);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6459f1;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6459efu);}goto L6459ef;}}
}
B6459f1:L6459f1:{c.instructions+=1;NFSU2_TR(0x6459f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a1c;}}
}
B6459f3:L6459f3:{c.instructions+=3;NFSU2_TR(0x6459f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459f6:{NFSU2_TR(0x6459f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6459f9:{NFSU2_TR(0x6459f9);
{goto L645c38;}
}
B6459fe:L6459fe:{c.instructions+=6;NFSU2_TR(0x6459fe);
u8 U[4];
w4(U+0,u32(0x7ab9a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645a03:{NFSU2_TR(0x645a03);
u8 U[4];
w4(U+0,u32(0x5ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645a08:{NFSU2_TR(0x645a08);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645a0b:{NFSU2_TR(0x645a0b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B645a0e:{NFSU2_TR(0x645a0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645a0f:{NFSU2_TR(0x645a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645a14ull));
TAIL_STATIC(0x64307cu,643);
}
B645a14:L645a14:{c.instructions+=2;NFSU2_TR(0x645a14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B645a17:{NFSU2_TR(0x645a17);
{goto L645dcb;}
}
B645a1c:L645a1c:{c.instructions+=2;NFSU2_TR(0x645a1c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B645a1e:{NFSU2_TR(0x645a1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a3c;}}
}
B645a20:L645a20:{c.instructions+=5;NFSU2_TR(0x645a20);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645a22:{NFSU2_TR(0x645a22);
w4(R+28,u32(0x7ab9a0ull));
}
B645a27:{NFSU2_TR(0x645a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645a2a:{NFSU2_TR(0x645a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645a2b:{NFSU2_TR(0x645a2b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B645a2d:L645a2d:{c.instructions+=1;NFSU2_TR(0x645a2d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645a2f;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645a2du);}goto L645a2d;}}
}
B645a2f:L645a2f:{c.instructions+=1;NFSU2_TR(0x645a2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a3c;}}
}
B645a31:L645a31:{c.instructions+=3;NFSU2_TR(0x645a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645a34:{NFSU2_TR(0x645a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645a37:{NFSU2_TR(0x645a37);
{goto L645c38;}
}
B645a3c:L645a3c:{c.instructions+=2;NFSU2_TR(0x645a3c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B645a3f:{NFSU2_TR(0x645a3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645ad1;}}
}
B645a45:L645a45:{c.instructions+=3;NFSU2_TR(0x645a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645a48:{NFSU2_TR(0x645a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645a4b:{NFSU2_TR(0x645a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645a4e:L645a4e:{c.instructions+=2;NFSU2_TR(0x645a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645a51:{NFSU2_TR(0x645a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645a54:L645a54:{c.instructions+=4;NFSU2_TR(0x645a54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B645a56:{NFSU2_TR(0x645a56);
__builtin_memmove((R+4),(R+8),1);
}
B645a58:{NFSU2_TR(0x645a58);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B645a5a:{NFSU2_TR(0x645a5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a76;}}
}
B645a5c:L645a5c:{c.instructions+=2;NFSU2_TR(0x645a5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645a5e:{NFSU2_TR(0x645a5e);
if(r1(R+518)){{goto L645a72;}}
}
B645a60:L645a60:{c.instructions+=4;NFSU2_TR(0x645a60);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B645a63:{NFSU2_TR(0x645a63);
__builtin_memmove((R+4),(R+8),1);
}
B645a65:{NFSU2_TR(0x645a65);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B645a68:{NFSU2_TR(0x645a68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645a76;}}
}
B645a6a:L645a6a:{c.instructions+=6;NFSU2_TR(0x645a6a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645a6b:{NFSU2_TR(0x645a6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645a6c:{NFSU2_TR(0x645a6c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645a6d:{NFSU2_TR(0x645a6d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645a6e:{NFSU2_TR(0x645a6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B645a70:{NFSU2_TR(0x645a70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645a54u);}goto L645a54;}}
}
B645a72:L645a72:{c.instructions+=2;NFSU2_TR(0x645a72);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B645a74:{NFSU2_TR(0x645a74);
{goto L645a7b;}
}
B645a76:L645a76:{c.instructions+=2;NFSU2_TR(0x645a76);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+4))<(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645a78:{NFSU2_TR(0x645a78);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(u32(0xffffffffull))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645a7b:L645a7b:{c.instructions+=2;NFSU2_TR(0x645a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645a7d:{NFSU2_TR(0x645a7d);
if(r1(R+518)){{goto L645a8f;}}
}
B645a7f:L645a7f:{c.instructions+=6;NFSU2_TR(0x645a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645a82:{NFSU2_TR(0x645a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645a85:{NFSU2_TR(0x645a85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645a87:{NFSU2_TR(0x645a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645a8a:{NFSU2_TR(0x645a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645a8d:{NFSU2_TR(0x645a8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645a4eu);}goto L645a4e;}}
}
B645a8f:L645a8f:{c.instructions+=2;NFSU2_TR(0x645a8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645a91:{NFSU2_TR(0x645a91);
if(r1(R+518)){{goto L645ad1;}}
}
B645a93:L645a93:{c.instructions+=3;NFSU2_TR(0x645a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645a96:{NFSU2_TR(0x645a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645a99:{NFSU2_TR(0x645a99);
{goto L645acb;}
}
B645a9b:L645a9b:{c.instructions+=2;NFSU2_TR(0x645a9b);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645a9d:{NFSU2_TR(0x645a9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645aa2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645362u);}goto L645362;}
}
B645aa2:L645aa2:{c.instructions+=2;NFSU2_TR(0x645aa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645aa4:{NFSU2_TR(0x645aa4);
if(r1(R+518)){{goto L645ab3;}}
}
B645aa6:L645aa6:{c.instructions+=4;NFSU2_TR(0x645aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645aa9:{NFSU2_TR(0x645aa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645aaa:{NFSU2_TR(0x645aaa);
__builtin_memmove((R+4),(R+0),4);
}
B645aac:{NFSU2_TR(0x645aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ab1ull));
TAIL_STATIC(0x67269fu,672);
}
B645ab1:L645ab1:{c.instructions+=1;NFSU2_TR(0x645ab1);
{goto L645ab5;}
}
B645ab3:L645ab3:{c.instructions+=1;NFSU2_TR(0x645ab3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645ab5:L645ab5:{c.instructions+=4;NFSU2_TR(0x645ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645ab7:{NFSU2_TR(0x645ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645aba:{NFSU2_TR(0x645aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B645abc:{NFSU2_TR(0x645abc);
if(r1(R+518)){{goto L645dcb;}}
}
B645ac2:L645ac2:{c.instructions+=3;NFSU2_TR(0x645ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645ac5:{NFSU2_TR(0x645ac5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B645ac8:{NFSU2_TR(0x645ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645acb:L645acb:{c.instructions+=2;NFSU2_TR(0x645acb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645acd:{NFSU2_TR(0x645acd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645a9bu);}goto L645a9b;}}
}
B645acf:L645acf:{c.instructions+=1;NFSU2_TR(0x645acf);
{goto L645afb;}
}
B645ad1:L645ad1:{c.instructions+=2;NFSU2_TR(0x645ad1);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ad3:{NFSU2_TR(0x645ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ad8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645362u);}goto L645362;}
}
B645ad8:L645ad8:{c.instructions+=2;NFSU2_TR(0x645ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645ada:{NFSU2_TR(0x645ada);
if(r1(R+518)){{goto L645ae6;}}
}
B645adc:L645adc:{c.instructions+=3;NFSU2_TR(0x645adc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645add:{NFSU2_TR(0x645add);
__builtin_memmove((R+4),(R+0),4);
}
B645adf:{NFSU2_TR(0x645adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ae4ull));
TAIL_STATIC(0x67269fu,672);
}
B645ae4:L645ae4:{c.instructions+=1;NFSU2_TR(0x645ae4);
{goto L645ae8;}
}
B645ae6:L645ae6:{c.instructions+=1;NFSU2_TR(0x645ae6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645ae8:L645ae8:{c.instructions+=4;NFSU2_TR(0x645ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645aea:{NFSU2_TR(0x645aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645aed:{NFSU2_TR(0x645aed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B645aef:{NFSU2_TR(0x645aef);
if(r1(R+518)){{goto L645dcb;}}
}
B645af5:L645af5:{c.instructions+=2;NFSU2_TR(0x645af5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B645af8:{NFSU2_TR(0x645af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645afb:L645afb:{c.instructions+=2;NFSU2_TR(0x645afb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645aff:{NFSU2_TR(0x645aff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645b0b;}}
}
B645b01:L645b01:{c.instructions+=2;NFSU2_TR(0x645b01);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645b05:{NFSU2_TR(0x645b05);
if(r1(R+518)){{goto L645c38;}}
}
B645b0b:L645b0b:{c.instructions+=6;NFSU2_TR(0x645b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645b0e:{NFSU2_TR(0x645b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B645b10:{NFSU2_TR(0x645b10);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B645b12:{NFSU2_TR(0x645b12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645b14:{NFSU2_TR(0x645b14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645b15:{NFSU2_TR(0x645b15);
{goto L645b3c;}
}
B645b17:L645b17:{c.instructions+=2;NFSU2_TR(0x645b17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645b19:{NFSU2_TR(0x645b19);
if(r1(R+518)){{goto L645b21;}}
}
B645b1b:L645b1b:{c.instructions+=2;NFSU2_TR(0x645b1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645b1e:{NFSU2_TR(0x645b1e);
if(r1(R+518)){{goto L645b21;}}
}
B645b20:L645b20:{c.instructions+=1;NFSU2_TR(0x645b20);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645b21:L645b21:{c.instructions+=5;NFSU2_TR(0x645b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645b24:{NFSU2_TR(0x645b24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645b26:{NFSU2_TR(0x645b26);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645b29:{NFSU2_TR(0x645b29);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645b2c:{NFSU2_TR(0x645b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645b31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64537bu);}goto L64537b;}
}
B645b31:L645b31:{c.instructions+=4;NFSU2_TR(0x645b31);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B645b33:{NFSU2_TR(0x645b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645b36:{NFSU2_TR(0x645b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B645b39:{NFSU2_TR(0x645b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645b3c:L645b3c:{c.instructions+=2;NFSU2_TR(0x645b3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645b3e:{NFSU2_TR(0x645b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645b17u);}goto L645b17;}}
}
B645b40:L645b40:{c.instructions+=5;NFSU2_TR(0x645b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645b43:{NFSU2_TR(0x645b43);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645b45:{NFSU2_TR(0x645b45);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B645b46:{NFSU2_TR(0x645b46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645b47:{NFSU2_TR(0x645b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645b4cull));
TAIL_STATIC(0x671ccbu,671);
}
B645b4c:L645b4c:{c.instructions+=3;NFSU2_TR(0x645b4c);
__builtin_memmove((R+28),(R+0),4);
}
B645b4e:{NFSU2_TR(0x645b4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645b50:{NFSU2_TR(0x645b50);
if(r1(R+518)){{goto L645dcb;}}
}
B645b56:L645b56:{c.instructions+=12;NFSU2_TR(0x645b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645b59:{NFSU2_TR(0x645b59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645b5b:{NFSU2_TR(0x645b5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645b5e:{NFSU2_TR(0x645b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B645b65:{NFSU2_TR(0x645b65);
__builtin_memmove((R+12),(R+518),1);
}
B645b68:{NFSU2_TR(0x645b68);
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x1ull))));
}
B645b6a:{NFSU2_TR(0x645b6a);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfbull))));
}
B645b6d:{NFSU2_TR(0x645b6d);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x27ull))));
}
B645b70:{NFSU2_TR(0x645b70);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B645b72:{NFSU2_TR(0x645b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B645b74:{NFSU2_TR(0x645b74);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645b76:{NFSU2_TR(0x645b76);
if(r1(R+518)){{goto L645baf;}}
}
B645b78:L645b78:{c.instructions+=2;NFSU2_TR(0x645b78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645b7a:{NFSU2_TR(0x645b7a);
if(r1(R+518)){{goto L645b8b;}}
}
B645b7c:L645b7c:{c.instructions+=2;NFSU2_TR(0x645b7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645b7f:{NFSU2_TR(0x645b7f);
if(r1(R+518)){{goto L645b8b;}}
}
B645b81:L645b81:{c.instructions+=3;NFSU2_TR(0x645b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645b84:{NFSU2_TR(0x645b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645b87:{NFSU2_TR(0x645b87);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x20ull));
s1(u32(r4(U+4)),r1(U+8));
}
B645b8b:L645b8b:{c.instructions+=7;NFSU2_TR(0x645b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645b8e:{NFSU2_TR(0x645b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645b91:{NFSU2_TR(0x645b91);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B645b93:{NFSU2_TR(0x645b93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645b94:{NFSU2_TR(0x645b94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645b97:{NFSU2_TR(0x645b97);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645b9a:{NFSU2_TR(0x645b9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645b9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64537bu);}goto L64537b;}
}
B645b9f:L645b9f:{c.instructions+=6;NFSU2_TR(0x645b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B645ba2:{NFSU2_TR(0x645ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645ba5:{NFSU2_TR(0x645ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B645ba8:{NFSU2_TR(0x645ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645bab:{NFSU2_TR(0x645bab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645bad:{NFSU2_TR(0x645bad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645b78u);}goto L645b78;}}
}
B645baf:L645baf:{c.instructions+=4;NFSU2_TR(0x645baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645bb2:{NFSU2_TR(0x645bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645bb5:{NFSU2_TR(0x645bb5);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B645bb8:{NFSU2_TR(0x645bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645bbdull));
TAIL_STATIC(0x642b43u,642);
}
B645bbd:L645bbd:{c.instructions+=12;NFSU2_TR(0x645bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B645bc0:{NFSU2_TR(0x645bc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645bc3:{NFSU2_TR(0x645bc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645bc4:{NFSU2_TR(0x645bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645bc7:{NFSU2_TR(0x645bc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645bc8:{NFSU2_TR(0x645bc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645bcb:{NFSU2_TR(0x645bcb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B645bcc:{NFSU2_TR(0x645bcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645bcf:{NFSU2_TR(0x645bcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645bd2:{NFSU2_TR(0x645bd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645bd3:{NFSU2_TR(0x645bd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645bd4:{NFSU2_TR(0x645bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645bd9ull));
TAIL_STATIC(0x642b5du,642);
}
B645bd9:L645bd9:{c.instructions+=3;NFSU2_TR(0x645bd9);
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
B645bdb:{NFSU2_TR(0x645bdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645bde:{NFSU2_TR(0x645bde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645da7;}}
}
B645be4:L645be4:{c.instructions+=4;NFSU2_TR(0x645be4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645be7:{NFSU2_TR(0x645be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645be8:{NFSU2_TR(0x645be8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645bee:{NFSU2_TR(0x645bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645bf3ull));
TAIL_STATIC(0x643afeu,643);
}
B645bf3:L645bf3:{c.instructions+=2;NFSU2_TR(0x645bf3);
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
B645bf5:{NFSU2_TR(0x645bf5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645da4;}}
}
B645bfb:L645bfb:{c.instructions+=2;NFSU2_TR(0x645bfb);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645bfd:{NFSU2_TR(0x645bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645c02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645362u);}goto L645362;}
}
B645c02:L645c02:{c.instructions+=2;NFSU2_TR(0x645c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645c04:{NFSU2_TR(0x645c04);
if(r1(R+518)){{goto L645c13;}}
}
B645c06:L645c06:{c.instructions+=4;NFSU2_TR(0x645c06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645c09:{NFSU2_TR(0x645c09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645c0a:{NFSU2_TR(0x645c0a);
__builtin_memmove((R+4),(R+0),4);
}
B645c0c:{NFSU2_TR(0x645c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645c11ull));
TAIL_STATIC(0x67269fu,672);
}
B645c11:L645c11:{c.instructions+=1;NFSU2_TR(0x645c11);
{goto L645c15;}
}
B645c13:L645c13:{c.instructions+=1;NFSU2_TR(0x645c13);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645c15:L645c15:{c.instructions+=5;NFSU2_TR(0x645c15);
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
B645c17:{NFSU2_TR(0x645c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645c1a:{NFSU2_TR(0x645c1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B645c1c:{NFSU2_TR(0x645c1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645c1f:{NFSU2_TR(0x645c1f);
if(r1(R+518)){{goto L645da7;}}
}
B645c25:L645c25:{c.instructions+=5;NFSU2_TR(0x645c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645c29:{NFSU2_TR(0x645c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645c2d:{NFSU2_TR(0x645c2d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B645c30:{NFSU2_TR(0x645c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645c33:{NFSU2_TR(0x645c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645c38ull));
TAIL_STATIC(0x6996f4u,699);
}
B645c38:L645c38:{c.instructions+=5;NFSU2_TR(0x645c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645c3b:{NFSU2_TR(0x645c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645c3e:{NFSU2_TR(0x645c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645c40:{NFSU2_TR(0x645c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645c43:{NFSU2_TR(0x645c43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6459c4u);}goto L6459c4;}}
}
B645c49:L645c49:{c.instructions+=2;NFSU2_TR(0x645c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B645c4c:{NFSU2_TR(0x645c4c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B645c4e:L645c4e:{c.instructions+=4;NFSU2_TR(0x645c4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645c51:{NFSU2_TR(0x645c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645c54:{NFSU2_TR(0x645c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645c57:{NFSU2_TR(0x645c57);
if(r1(R+518)){{goto L645d91;}}
}
B645c5d:L645c5d:{c.instructions+=6;NFSU2_TR(0x645c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645c60:{NFSU2_TR(0x645c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B645c62:{NFSU2_TR(0x645c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645c65:{NFSU2_TR(0x645c65);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645c67:{NFSU2_TR(0x645c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645c6a:{NFSU2_TR(0x645c6a);
if(r1(R+518)){{goto L645c74;}}
}
B645c6c:L645c6c:{c.instructions+=3;NFSU2_TR(0x645c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645c6f:{NFSU2_TR(0x645c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645c72:{NFSU2_TR(0x645c72);
{goto L645c78;}
}
B645c74:L645c74:{c.instructions+=1;NFSU2_TR(0x645c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B645c78:L645c78:{c.instructions+=13;NFSU2_TR(0x645c78);
__builtin_memmove((R+0),(R+4),4);
}
B645c7a:{NFSU2_TR(0x645c7a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B645c7c:{NFSU2_TR(0x645c7c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645c7e:{NFSU2_TR(0x645c7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B645c81:{NFSU2_TR(0x645c81);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B645c83:{NFSU2_TR(0x645c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B645c86:{NFSU2_TR(0x645c86);
__builtin_memmove((R+12),(R+8),4);
}
B645c88:{NFSU2_TR(0x645c88);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B645c8a:{NFSU2_TR(0x645c8a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(R+12))));
w4(R+12,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B645c8c:{NFSU2_TR(0x645c8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645c8f:{NFSU2_TR(0x645c8f);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+24))));
}
B645c91:{NFSU2_TR(0x645c91);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645c93:{NFSU2_TR(0x645c93);
if(r1(R+518)){{goto L645d7a;}}
}
B645c99:L645c99:{c.instructions+=2;NFSU2_TR(0x645c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645c9b:{NFSU2_TR(0x645c9b);
if(r1(R+518)){{goto L645d7a;}}
}
B645ca1:L645ca1:{c.instructions+=2;NFSU2_TR(0x645ca1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B645ca4:{NFSU2_TR(0x645ca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645d7a;}}
}
B645caa:L645caa:{c.instructions+=5;NFSU2_TR(0x645caa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645cad:{NFSU2_TR(0x645cad);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645caf:{NFSU2_TR(0x645caf);
w4(R+28,u32(0x7ab99cull));
}
B645cb4:{NFSU2_TR(0x645cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645cb5:{NFSU2_TR(0x645cb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645cb7:L645cb7:{c.instructions+=1;NFSU2_TR(0x645cb7);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645cb9;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645cb7u);}goto L645cb7;}}
}
B645cb9:L645cb9:{c.instructions+=1;NFSU2_TR(0x645cb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L645d7a;}}
}
B645cbf:L645cbf:{c.instructions+=9;NFSU2_TR(0x645cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645cc2:{NFSU2_TR(0x645cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645cc5:{NFSU2_TR(0x645cc5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B645cc8:{NFSU2_TR(0x645cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645ccb:{NFSU2_TR(0x645ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B645cce:{NFSU2_TR(0x645cce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645cd0:{NFSU2_TR(0x645cd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645cd1:{NFSU2_TR(0x645cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645cd4:{NFSU2_TR(0x645cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645cd9ull));
TAIL_STATIC(0x671ccbu,671);
}
B645cd9:L645cd9:{c.instructions+=3;NFSU2_TR(0x645cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645cdb:{NFSU2_TR(0x645cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645cde:{NFSU2_TR(0x645cde);
if(r1(R+518)){{goto L645dcb;}}
}
B645ce4:L645ce4:{c.instructions+=6;NFSU2_TR(0x645ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645ce7:{NFSU2_TR(0x645ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645cea:{NFSU2_TR(0x645cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645ced:{NFSU2_TR(0x645ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645cf0:{NFSU2_TR(0x645cf0);
__builtin_memmove((R+8),(R+4),4);
}
B645cf2:{NFSU2_TR(0x645cf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B645cf5:L645cf5:{c.instructions+=1;NFSU2_TR(0x645cf5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L645cf7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645cf5u);}goto L645cf5;}
}
B645cf7:L645cf7:{c.instructions+=3;NFSU2_TR(0x645cf7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B645cfa:{NFSU2_TR(0x645cfa);
__builtin_memmove((R+4),(R+8),4);
}
B645cfc:{NFSU2_TR(0x645cfc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B645cff:L645cff:{c.instructions+=1;NFSU2_TR(0x645cff);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645d01;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645cffu);}goto L645cff;}
}
B645d01:L645d01:{c.instructions+=6;NFSU2_TR(0x645d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645d04:{NFSU2_TR(0x645d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B645d07:{NFSU2_TR(0x645d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645d0a:{NFSU2_TR(0x645d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B645d0d:{NFSU2_TR(0x645d0d);
__builtin_memmove((R+0),(R+4),4);
}
B645d0f:{NFSU2_TR(0x645d0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B645d12:L645d12:{c.instructions+=1;NFSU2_TR(0x645d12);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L645d14;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645d12u);}goto L645d12;}
}
B645d14:L645d14:{c.instructions+=2;NFSU2_TR(0x645d14);
__builtin_memmove((R+4),(R+0),4);
}
B645d16:{NFSU2_TR(0x645d16);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B645d19:L645d19:{c.instructions+=1;NFSU2_TR(0x645d19);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645d1b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645d19u);}goto L645d19;}
}
B645d1b:L645d1b:{c.instructions+=2;NFSU2_TR(0x645d1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645d1e:{NFSU2_TR(0x645d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645d23ull));
TAIL_STATIC(0x642b43u,642);
}
B645d23:L645d23:{c.instructions+=12;NFSU2_TR(0x645d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d26:{NFSU2_TR(0x645d26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645d29:{NFSU2_TR(0x645d29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645d2a:{NFSU2_TR(0x645d2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645d2b:{NFSU2_TR(0x645d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d2e:{NFSU2_TR(0x645d2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645d31:{NFSU2_TR(0x645d31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B645d34:{NFSU2_TR(0x645d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645d37:{NFSU2_TR(0x645d37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645d3a:{NFSU2_TR(0x645d3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645d3d:{NFSU2_TR(0x645d3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645d40:{NFSU2_TR(0x645d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645d45ull));
TAIL_STATIC(0x642b5du,642);
}
B645d45:L645d45:{c.instructions+=3;NFSU2_TR(0x645d45);
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
B645d47:{NFSU2_TR(0x645d47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645d4a:{NFSU2_TR(0x645d4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645da7;}}
}
B645d4c:L645d4c:{c.instructions+=6;NFSU2_TR(0x645d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B645d4f:{NFSU2_TR(0x645d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645d52:{NFSU2_TR(0x645d52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645d53:{NFSU2_TR(0x645d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d56:{NFSU2_TR(0x645d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645d5c:{NFSU2_TR(0x645d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645d61ull));
TAIL_STATIC(0x643afeu,643);
}
B645d61:L645d61:{c.instructions+=2;NFSU2_TR(0x645d61);
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
B645d63:{NFSU2_TR(0x645d63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L645da4;}}
}
B645d65:L645d65:{c.instructions+=6;NFSU2_TR(0x645d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d68:{NFSU2_TR(0x645d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645d6b:{NFSU2_TR(0x645d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645d6e:{NFSU2_TR(0x645d6e);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B645d72:{NFSU2_TR(0x645d72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645d75:{NFSU2_TR(0x645d75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645d7aull));
TAIL_STATIC(0x6996f4u,699);
}
B645d7a:L645d7a:{c.instructions+=6;NFSU2_TR(0x645d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d7d:{NFSU2_TR(0x645d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B645d7f:{NFSU2_TR(0x645d7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B645d82:{NFSU2_TR(0x645d82);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B645d85:{NFSU2_TR(0x645d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645d88:{NFSU2_TR(0x645d88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645c5du);}goto L645c5d;}}
}
B645d8e:L645d8e:{c.instructions+=1;NFSU2_TR(0x645d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B645d91:L645d91:{c.instructions+=6;NFSU2_TR(0x645d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d94:{NFSU2_TR(0x645d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645d97:{NFSU2_TR(0x645d97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B645d99:{NFSU2_TR(0x645d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645d9c:{NFSU2_TR(0x645d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645d9f:{NFSU2_TR(0x645d9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645773u);}goto L645773;}
}
B645da4:L645da4:{c.instructions+=1;NFSU2_TR(0x645da4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645da7:L645da7:{c.instructions+=1;NFSU2_TR(0x645da7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645dacull));
TAIL_STATIC(0x6996f4u,699);
}
B645dac:L645dac:{c.instructions+=1;NFSU2_TR(0x645dac);
{goto L645dcb;}
}
B645dae:L645dae:{c.instructions+=8;NFSU2_TR(0x645dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645db1:{NFSU2_TR(0x645db1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645db4:{NFSU2_TR(0x645db4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B645db7:{NFSU2_TR(0x645db7);
u8 U[4];
w4(U+0,u32(0x7ab970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dbc:{NFSU2_TR(0x645dbc);
u8 U[4];
w4(U+0,u32(0x5ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dc1:{NFSU2_TR(0x645dc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dc2:{NFSU2_TR(0x645dc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dc3:{NFSU2_TR(0x645dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645dc8ull));
TAIL_STATIC(0x64307cu,643);
}
B645dc8:L645dc8:{c.instructions+=1;NFSU2_TR(0x645dc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B645dcb:L645dcb:{c.instructions+=1;NFSU2_TR(0x645dcb);
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
B645dcd:L645dcd:{c.instructions+=5;NFSU2_TR(0x645dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645dce:{NFSU2_TR(0x645dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645dcf:{NFSU2_TR(0x645dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B645dd0:{NFSU2_TR(0x645dd0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B645dd1:{NFSU2_TR(0x645dd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645dd4:L645dd4:{c.instructions+=8;NFSU2_TR(0x645dd4);
__builtin_memmove((R+28),(R+28),4);
}
B645dd6:{NFSU2_TR(0x645dd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dd7:{NFSU2_TR(0x645dd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dd8:{NFSU2_TR(0x645dd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dd9:{NFSU2_TR(0x645dd9);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645dde:{NFSU2_TR(0x645dde);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645de3:{NFSU2_TR(0x645de3);
__builtin_memmove((R+12),(R+4),4);
}
B645de5:{NFSU2_TR(0x645de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645deaull));
TAIL_STATIC(0x671c51u,671);
}
B645dea:L645dea:{c.instructions+=2;NFSU2_TR(0x645dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645ded:{NFSU2_TR(0x645ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645df2ull));
TAIL_STATIC(0x6428a0u,642);
}
B645df2:L645df2:{c.instructions+=4;NFSU2_TR(0x645df2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B645df4:{NFSU2_TR(0x645df4);
__builtin_memmove((R+4),(R+12),4);
}
B645df6:{NFSU2_TR(0x645df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645dfc:{NFSU2_TR(0x645dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645e01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645458u);}goto L645458;}
}
B645e01:L645e01:{c.instructions+=22;NFSU2_TR(0x645e01);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e03:{NFSU2_TR(0x645e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645e04:{NFSU2_TR(0x645e04);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B645e06:{NFSU2_TR(0x645e06);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B645e07:{NFSU2_TR(0x645e07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B645e09:{NFSU2_TR(0x645e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e0c:{NFSU2_TR(0x645e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e0f:{NFSU2_TR(0x645e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e12:{NFSU2_TR(0x645e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e15:{NFSU2_TR(0x645e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e18:{NFSU2_TR(0x645e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e1b:{NFSU2_TR(0x645e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e1e:{NFSU2_TR(0x645e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e21:{NFSU2_TR(0x645e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e24:{NFSU2_TR(0x645e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e27:{NFSU2_TR(0x645e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e2a:{NFSU2_TR(0x645e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e2d:{NFSU2_TR(0x645e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e30:{NFSU2_TR(0x645e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e36:{NFSU2_TR(0x645e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e3c:{NFSU2_TR(0x645e3c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e3e:{NFSU2_TR(0x645e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((R+28),(U+0),4);
}
B645e41:L645e41:{c.instructions+=1;NFSU2_TR(0x645e41);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L645e43;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645e41u);}goto L645e41;}
}
B645e43:L645e43:{c.instructions+=3;NFSU2_TR(0x645e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645e44:{NFSU2_TR(0x645e44);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645e4a:{NFSU2_TR(0x645e4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e4b:L645e4b:{c.instructions+=1;NFSU2_TR(0x645e4b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L645e4d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645e4bu);}goto L645e4b;}
}
B645e4d:L645e4d:{c.instructions+=3;NFSU2_TR(0x645e4d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e4f:{NFSU2_TR(0x645e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e55:{NFSU2_TR(0x645e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645e5aull));
TAIL_STATIC(0x75e9f6u,75e);
}
B645e5a:L645e5a:{c.instructions+=2;NFSU2_TR(0x645e5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e5b:{NFSU2_TR(0x645e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645e60ull));
TAIL_STATIC(0x75e0d8u,75e);
}
B645e60:L645e60:{c.instructions+=5;NFSU2_TR(0x645e60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B645e63:{NFSU2_TR(0x645e63);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645e65:{NFSU2_TR(0x645e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645e6b:{NFSU2_TR(0x645e6b);
w4(R+8,u32(0x7a1314ull));
}
B645e70:{NFSU2_TR(0x645e70);
if(r1(R+518)){{goto L645e81;}}
}
B645e72:L645e72:{c.instructions+=5;NFSU2_TR(0x645e72);
__builtin_memmove((R+24),(R+0),4);
}
B645e74:{NFSU2_TR(0x645e74);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e76:{NFSU2_TR(0x645e76);
__builtin_memmove((R+28),(R+8),4);
}
B645e78:{NFSU2_TR(0x645e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645e79:{NFSU2_TR(0x645e79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B645e7b:L645e7b:{c.instructions+=1;NFSU2_TR(0x645e7b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645e7d;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645e7bu);}goto L645e7b;}}
}
B645e7d:L645e7d:{c.instructions+=1;NFSU2_TR(0x645e7d);
if(r1(R+518)){{goto L645e8d;}}
}
B645e7f:L645e7f:{c.instructions+=1;NFSU2_TR(0x645e7f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B645e81:L645e81:{c.instructions+=3;NFSU2_TR(0x645e81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e82:{NFSU2_TR(0x645e82);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e84:{NFSU2_TR(0x645e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645e89ull));
TAIL_STATIC(0x75e9f6u,75e);
}
B645e89:L645e89:{c.instructions+=3;NFSU2_TR(0x645e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645e8a:{NFSU2_TR(0x645e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645e8b:{NFSU2_TR(0x645e8b);
{goto L645e8f;}
}
B645e8d:L645e8d:{c.instructions+=1;NFSU2_TR(0x645e8d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B645e8f:L645e8f:{c.instructions+=3;NFSU2_TR(0x645e8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e90:{NFSU2_TR(0x645e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e91:{NFSU2_TR(0x645e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645e96ull));
TAIL_STATIC(0x75db6au,75d);
}
B645e96:L645e96:{c.instructions+=4;NFSU2_TR(0x645e96);
u8 U[4];
w4(U+0,u32(0x8001full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e9b:{NFSU2_TR(0x645e9b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645e9d:{NFSU2_TR(0x645e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645ea3:{NFSU2_TR(0x645ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ea8ull));
TAIL_STATIC(0x75db6au,75d);
}
B645ea8:L645ea8:{c.instructions+=3;NFSU2_TR(0x645ea8);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ead:{NFSU2_TR(0x645ead);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645eae:{NFSU2_TR(0x645eae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645eb3ull));
TAIL_STATIC(0x75db6au,75d);
}
B645eb3:L645eb3:{c.instructions+=2;NFSU2_TR(0x645eb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B645eb6:{NFSU2_TR(0x645eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ebbull));
TAIL_STATIC(0x671bc2u,671);
}
B645ebb:L645ebb:{c.instructions+=5;NFSU2_TR(0x645ebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645ebc:{NFSU2_TR(0x645ebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645ebd:{NFSU2_TR(0x645ebd);
__builtin_memmove((R+0),(R+12),4);
}
B645ebf:{NFSU2_TR(0x645ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B645ec0:{NFSU2_TR(0x645ec0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B645ec1:L645ec1:{c.instructions+=6;NFSU2_TR(0x645ec1);
__builtin_memmove((R+28),(R+28),4);
}
B645ec3:{NFSU2_TR(0x645ec3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ec4:{NFSU2_TR(0x645ec4);
__builtin_memmove((R+12),(R+4),4);
}
B645ec6:{NFSU2_TR(0x645ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645ec9:{NFSU2_TR(0x645ec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645ecb:{NFSU2_TR(0x645ecb);
if(r1(R+518)){{goto L645ed4;}}
}
B645ecd:L645ecd:{c.instructions+=2;NFSU2_TR(0x645ecd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ecf:{NFSU2_TR(0x645ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ed4ull));
TAIL_STATIC(0x64411cu,644);
}
B645ed4:L645ed4:{c.instructions+=3;NFSU2_TR(0x645ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645ed7:{NFSU2_TR(0x645ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645ed9:{NFSU2_TR(0x645ed9);
if(r1(R+518)){{goto L645ee2;}}
}
B645edb:L645edb:{c.instructions+=2;NFSU2_TR(0x645edb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645edd:{NFSU2_TR(0x645edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ee2ull));
TAIL_STATIC(0x6440e1u,644);
}
B645ee2:L645ee2:{c.instructions+=3;NFSU2_TR(0x645ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645ee8:{NFSU2_TR(0x645ee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645eea:{NFSU2_TR(0x645eea);
if(r1(R+518)){{goto L645ef3;}}
}
B645eec:L645eec:{c.instructions+=2;NFSU2_TR(0x645eec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645eee:{NFSU2_TR(0x645eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645ef3ull));
TAIL_STATIC(0x643e72u,643);
}
B645ef3:L645ef3:{c.instructions+=5;NFSU2_TR(0x645ef3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ef4:{NFSU2_TR(0x645ef4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ef5:{NFSU2_TR(0x645ef5);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645ef7:{NFSU2_TR(0x645ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((R+24),(U+0),4);
}
B645efa:{NFSU2_TR(0x645efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645efb:L645efb:{c.instructions+=3;NFSU2_TR(0x645efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B645efd:{NFSU2_TR(0x645efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645eff:{NFSU2_TR(0x645eff);
if(r1(R+518)){{goto L645f08;}}
}
B645f01:L645f01:{c.instructions+=2;NFSU2_TR(0x645f01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f03:{NFSU2_TR(0x645f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645f08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645437u);}goto L645437;}
}
B645f08:L645f08:{c.instructions+=3;NFSU2_TR(0x645f08);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B645f0b:{NFSU2_TR(0x645f0b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B645f0c:{NFSU2_TR(0x645f0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645efbu);}goto L645efb;}}
}
B645f0e:L645f0e:{c.instructions+=3;NFSU2_TR(0x645f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645f14:{NFSU2_TR(0x645f14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645f16:{NFSU2_TR(0x645f16);
if(r1(R+518)){{goto L645f32;}}
}
B645f18:L645f18:{c.instructions+=5;NFSU2_TR(0x645f18);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f1a:{NFSU2_TR(0x645f1a);
w4(R+28,u32(0x7a1314ull));
}
B645f1f:{NFSU2_TR(0x645f1f);
__builtin_memmove((R+24),(R+0),4);
}
B645f21:{NFSU2_TR(0x645f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f22:{NFSU2_TR(0x645f22);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B645f24:L645f24:{c.instructions+=1;NFSU2_TR(0x645f24);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L645f26;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645f24u);}goto L645f24;}}
}
B645f26:L645f26:{c.instructions+=1;NFSU2_TR(0x645f26);
if(r1(R+518)){{goto L645f32;}}
}
B645f28:L645f28:{c.instructions+=3;NFSU2_TR(0x645f28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f29:{NFSU2_TR(0x645f29);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f2b:{NFSU2_TR(0x645f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645f30ull));
TAIL_STATIC(0x75e9f6u,75e);
}
B645f30:L645f30:{c.instructions+=2;NFSU2_TR(0x645f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f31:{NFSU2_TR(0x645f31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f32:L645f32:{c.instructions+=5;NFSU2_TR(0x645f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645f38:{NFSU2_TR(0x645f38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B645f3a:{NFSU2_TR(0x645f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645f3b:{NFSU2_TR(0x645f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645f3c:{NFSU2_TR(0x645f3c);
if(r1(R+518)){{goto L645f45;}}
}
B645f3e:L645f3e:{c.instructions+=2;NFSU2_TR(0x645f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f3f:{NFSU2_TR(0x645f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645f44ull));
TAIL_STATIC(0x75c6dau,75c);
}
B645f44:L645f44:{c.instructions+=1;NFSU2_TR(0x645f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f45:L645f45:{c.instructions+=3;NFSU2_TR(0x645f45);
u8 U[4];
w4(U+0,u32(0xb001full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f4a:{NFSU2_TR(0x645f4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B645f50:{NFSU2_TR(0x645f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645f55ull));
TAIL_STATIC(0x75db6au,75d);
}
B645f55:L645f55:{c.instructions+=4;NFSU2_TR(0x645f55);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645f5c:{NFSU2_TR(0x645f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f5d:{NFSU2_TR(0x645f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f5e:{NFSU2_TR(0x645f5e);
if(r1(R+518)){{goto L645f67;}}
}
B645f60:L645f60:{c.instructions+=2;NFSU2_TR(0x645f60);
__builtin_memmove((R+4),(R+12),4);
}
B645f62:{NFSU2_TR(0x645f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645f67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64547fu);}goto L64547f;}
}
B645f67:L645f67:{c.instructions+=2;NFSU2_TR(0x645f67);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645f6a:{NFSU2_TR(0x645f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645f6full));
TAIL_STATIC(0x6428c0u,642);
}
B645f6f:L645f6f:{c.instructions+=3;NFSU2_TR(0x645f6f);
__builtin_memmove((R+4),(R+12),4);
}
B645f71:{NFSU2_TR(0x645f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B645f72:{NFSU2_TR(0x645f72);
TAIL_STATIC(0x671ca9u,671);
}
B645f77:L645f77:{c.instructions+=11;NFSU2_TR(0x645f77);
__builtin_memmove((R+28),(R+28),4);
}
B645f79:{NFSU2_TR(0x645f79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f7a:{NFSU2_TR(0x645f7a);
__builtin_memmove((R+20),(R+16),4);
}
B645f7c:{NFSU2_TR(0x645f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B645f7f:{NFSU2_TR(0x645f7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f80:{NFSU2_TR(0x645f80);
__builtin_memmove((R+12),(R+4),4);
}
B645f82:{NFSU2_TR(0x645f82);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B645f84:{NFSU2_TR(0x645f84);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645f87:{NFSU2_TR(0x645f87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f88:{NFSU2_TR(0x645f88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645f89:{NFSU2_TR(0x645f89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6463fau,646);}
}
B645f8f:L645f8f:{c.instructions+=2;NFSU2_TR(0x645f8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B645f92:{NFSU2_TR(0x645f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6463fau,646);}
}
B645f98:L645f98:{c.instructions+=3;NFSU2_TR(0x645f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645f9b:{NFSU2_TR(0x645f9b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645f9d:{NFSU2_TR(0x645f9d);
if(r1(R+518)){{goto L645fb8;}}
}
B645f9f:L645f9f:{c.instructions+=4;NFSU2_TR(0x645f9f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645fa1:{NFSU2_TR(0x645fa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+28),(U+0),4);
}
B645fa7:{NFSU2_TR(0x645fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B645faa:{NFSU2_TR(0x645faa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B645fab:L645fab:{c.instructions+=1;NFSU2_TR(0x645fab);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L645fad;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x645fabu);}goto L645fab;}
}
B645fad:L645fad:{c.instructions+=4;NFSU2_TR(0x645fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645fb0:{NFSU2_TR(0x645fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645fb3:{NFSU2_TR(0x645fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B645fb6:{NFSU2_TR(0x645fb6);
{goto L645fdc;}
}
B645fb8:L645fb8:{c.instructions+=7;NFSU2_TR(0x645fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B645fbe:{NFSU2_TR(0x645fbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+0),(U+0),4);
}
B645fc4:{NFSU2_TR(0x645fc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645fc5:{NFSU2_TR(0x645fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645fcb:{NFSU2_TR(0x645fcb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B645fce:{NFSU2_TR(0x645fce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B645fcf:{NFSU2_TR(0x645fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x645fd4ull));
TAIL_STATIC(0x643afeu,643);
}
B645fd4:L645fd4:{c.instructions+=2;NFSU2_TR(0x645fd4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B645fd6:{NFSU2_TR(0x645fd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x646404u,646);}
}
B645fdc:L645fdc:{c.instructions+=5;NFSU2_TR(0x645fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B645fe2:{NFSU2_TR(0x645fe2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B645fe4:{NFSU2_TR(0x645fe4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B645fe5:{NFSU2_TR(0x645fe5);
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
B645fe7:{NFSU2_TR(0x645fe7);
if(r1(R+518)){TAIL_STATIC(0x646385u,646);}
}
B645fed:L645fed:{c.instructions+=1;NFSU2_TR(0x645fed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x64637bu,646);}
}
B645ff3:L645ff3:{c.instructions+=2;NFSU2_TR(0x645ff3);
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
B645ff6:{NFSU2_TR(0x645ff6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x646371u,646);}
}
B645ffc:L645ffc:{c.instructions+=2;NFSU2_TR(0x645ffc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B645fff:{NFSU2_TR(0x645fff);
if(r1(R+518)){TAIL_STATIC(0x646026u,646);}
TAIL_STATIC(0x646001u,646);
}
XIT:NFSU2_TR_EXIT(0x645,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
