#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_695(u8* __restrict R,Cpu& c);
u32 body_696(u8* __restrict R,Cpu& c);
u32 body_697(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x698,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x698,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_698(u8* __restrict R,Cpu& c);
u32 page_698(Cpu& c){return body_698(c.regs.data(),c);}
__attribute__((noinline)) u32 body_698(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x698001:goto L698001;
case 0x698003:c.instructions+=3;goto B698003;
case 0x698006:c.instructions+=2;goto B698006;
case 0x698009:c.instructions+=1;goto B698009;
case 0x69800f:goto L69800f;
case 0x698012:c.instructions+=4;goto B698012;
case 0x698016:c.instructions+=3;goto B698016;
case 0x698018:c.instructions+=2;goto B698018;
case 0x69801a:c.instructions+=1;goto B69801a;
case 0x698020:goto L698020;
case 0x698023:c.instructions+=4;goto B698023;
case 0x698025:c.instructions+=3;goto B698025;
case 0x698028:c.instructions+=2;goto B698028;
case 0x69802b:c.instructions+=1;goto B69802b;
case 0x698031:goto L698031;
case 0x698034:c.instructions+=13;goto B698034;
case 0x698038:c.instructions+=12;goto B698038;
case 0x69803c:c.instructions+=11;goto B69803c;
case 0x69803e:c.instructions+=10;goto B69803e;
case 0x698041:c.instructions+=9;goto B698041;
case 0x698042:c.instructions+=8;goto B698042;
case 0x698045:c.instructions+=7;goto B698045;
case 0x698046:c.instructions+=6;goto B698046;
case 0x698048:c.instructions+=5;goto B698048;
case 0x698049:c.instructions+=4;goto B698049;
case 0x69804c:c.instructions+=3;goto B69804c;
case 0x69804d:c.instructions+=2;goto B69804d;
case 0x69804e:c.instructions+=1;goto B69804e;
case 0x698053:goto L698053;
case 0x698055:c.instructions+=18;goto B698055;
case 0x698059:c.instructions+=17;goto B698059;
case 0x69805c:c.instructions+=16;goto B69805c;
case 0x69805f:c.instructions+=15;goto B69805f;
case 0x698061:c.instructions+=14;goto B698061;
case 0x698065:c.instructions+=13;goto B698065;
case 0x698068:c.instructions+=12;goto B698068;
case 0x69806c:c.instructions+=11;goto B69806c;
case 0x698071:c.instructions+=10;goto B698071;
case 0x698074:c.instructions+=9;goto B698074;
case 0x698077:c.instructions+=8;goto B698077;
case 0x69807a:c.instructions+=7;goto B69807a;
case 0x69807c:c.instructions+=6;goto B69807c;
case 0x698080:c.instructions+=5;goto B698080;
case 0x698084:c.instructions+=4;goto B698084;
case 0x698087:c.instructions+=3;goto B698087;
case 0x698089:c.instructions+=2;goto B698089;
case 0x69808b:c.instructions+=1;goto B69808b;
case 0x69808d:goto L69808d;
case 0x698090:c.instructions+=5;goto B698090;
case 0x698093:c.instructions+=4;goto B698093;
case 0x698095:c.instructions+=3;goto B698095;
case 0x698099:c.instructions+=2;goto B698099;
case 0x69809b:c.instructions+=1;goto B69809b;
case 0x69809f:goto L69809f;
case 0x6980a2:c.instructions+=5;goto B6980a2;
case 0x6980a5:c.instructions+=4;goto B6980a5;
case 0x6980a6:c.instructions+=3;goto B6980a6;
case 0x6980a7:c.instructions+=2;goto B6980a7;
case 0x6980a9:c.instructions+=1;goto B6980a9;
case 0x6980ae:goto L6980ae;
case 0x6980b1:c.instructions+=7;goto B6980b1;
case 0x6980b4:c.instructions+=6;goto B6980b4;
case 0x6980b7:c.instructions+=5;goto B6980b7;
case 0x6980ba:c.instructions+=4;goto B6980ba;
case 0x6980bc:c.instructions+=3;goto B6980bc;
case 0x6980bf:c.instructions+=2;goto B6980bf;
case 0x6980c2:c.instructions+=1;goto B6980c2;
case 0x6980c4:goto L6980c4;
case 0x6980c8:c.instructions+=19;goto B6980c8;
case 0x6980cc:c.instructions+=18;goto B6980cc;
case 0x6980d0:c.instructions+=17;goto B6980d0;
case 0x6980d2:c.instructions+=16;goto B6980d2;
case 0x6980d5:c.instructions+=15;goto B6980d5;
case 0x6980d7:c.instructions+=14;goto B6980d7;
case 0x6980da:c.instructions+=13;goto B6980da;
case 0x6980db:c.instructions+=12;goto B6980db;
case 0x6980df:c.instructions+=11;goto B6980df;
case 0x6980e3:c.instructions+=10;goto B6980e3;
case 0x6980e6:c.instructions+=9;goto B6980e6;
case 0x6980e9:c.instructions+=8;goto B6980e9;
case 0x6980ec:c.instructions+=7;goto B6980ec;
case 0x6980ef:c.instructions+=6;goto B6980ef;
case 0x6980f2:c.instructions+=5;goto B6980f2;
case 0x6980f6:c.instructions+=4;goto B6980f6;
case 0x6980f9:c.instructions+=3;goto B6980f9;
case 0x6980fc:c.instructions+=2;goto B6980fc;
case 0x6980ff:c.instructions+=1;goto B6980ff;
case 0x698105:goto L698105;
case 0x698107:goto L698107;
case 0x698108:c.instructions+=4;goto B698108;
case 0x698109:c.instructions+=3;goto B698109;
case 0x69810a:c.instructions+=2;goto B69810a;
case 0x69810b:c.instructions+=1;goto B69810b;
case 0x69810c:goto L69810c;
case 0x698111:c.instructions+=1;goto B698111;
case 0x698113:goto L698113;
case 0x698118:c.instructions+=1;goto B698118;
case 0x69811a:goto L69811a;
case 0x69811c:c.instructions+=12;goto B69811c;
case 0x69811d:c.instructions+=11;goto B69811d;
case 0x69811f:c.instructions+=10;goto B69811f;
case 0x698122:c.instructions+=9;goto B698122;
case 0x698123:c.instructions+=8;goto B698123;
case 0x698125:c.instructions+=7;goto B698125;
case 0x698128:c.instructions+=6;goto B698128;
case 0x69812c:c.instructions+=5;goto B69812c;
case 0x69812f:c.instructions+=4;goto B69812f;
case 0x698130:c.instructions+=3;goto B698130;
case 0x698133:c.instructions+=2;goto B698133;
case 0x698135:c.instructions+=1;goto B698135;
case 0x698137:goto L698137;
case 0x698139:c.instructions+=1;goto B698139;
case 0x69813e:goto L69813e;
case 0x698142:c.instructions+=1;goto B698142;
case 0x698144:goto L698144;
case 0x698146:c.instructions+=1;goto B698146;
case 0x69814b:goto L69814b;
case 0x69814f:c.instructions+=2;goto B69814f;
case 0x698150:c.instructions+=1;goto B698150;
case 0x698152:goto L698152;
case 0x698155:c.instructions+=2;goto B698155;
case 0x698156:c.instructions+=1;goto B698156;
case 0x69815b:goto L69815b;
case 0x69815d:c.instructions+=4;goto B69815d;
case 0x69815f:c.instructions+=3;goto B69815f;
case 0x698160:c.instructions+=2;goto B698160;
case 0x698163:c.instructions+=1;goto B698163;
case 0x698165:goto L698165;
case 0x698167:c.instructions+=1;goto B698167;
case 0x69816c:goto L69816c;
case 0x69816f:c.instructions+=5;goto B69816f;
case 0x698173:c.instructions+=4;goto B698173;
case 0x698176:c.instructions+=3;goto B698176;
case 0x698178:c.instructions+=2;goto B698178;
case 0x69817b:c.instructions+=1;goto B69817b;
case 0x69817d:goto L69817d;
case 0x69817f:goto L69817f;
case 0x698181:c.instructions+=1;goto B698181;
case 0x698184:goto L698184;
case 0x698186:goto L698186;
case 0x698189:c.instructions+=5;goto B698189;
case 0x69818b:c.instructions+=4;goto B69818b;
case 0x69818e:c.instructions+=3;goto B69818e;
case 0x698192:c.instructions+=2;goto B698192;
case 0x698195:c.instructions+=1;goto B698195;
case 0x69819b:goto L69819b;
case 0x69819f:c.instructions+=1;goto B69819f;
case 0x6981a1:goto L6981a1;
case 0x6981a3:c.instructions+=1;goto B6981a3;
case 0x6981a8:goto L6981a8;
case 0x6981aa:c.instructions+=3;goto B6981aa;
case 0x6981ab:c.instructions+=2;goto B6981ab;
case 0x6981ae:c.instructions+=1;goto B6981ae;
case 0x6981b0:goto L6981b0;
case 0x6981b3:c.instructions+=7;goto B6981b3;
case 0x6981b5:c.instructions+=6;goto B6981b5;
case 0x6981b6:c.instructions+=5;goto B6981b6;
case 0x6981b7:c.instructions+=4;goto B6981b7;
case 0x6981b8:c.instructions+=3;goto B6981b8;
case 0x6981b9:c.instructions+=2;goto B6981b9;
case 0x6981bc:c.instructions+=1;goto B6981bc;
case 0x6981c2:goto L6981c2;
case 0x6981c4:c.instructions+=8;goto B6981c4;
case 0x6981c8:c.instructions+=7;goto B6981c8;
case 0x6981cd:c.instructions+=6;goto B6981cd;
case 0x6981cf:c.instructions+=5;goto B6981cf;
case 0x6981d3:c.instructions+=4;goto B6981d3;
case 0x6981d5:c.instructions+=3;goto B6981d5;
case 0x6981d8:c.instructions+=2;goto B6981d8;
case 0x6981d9:c.instructions+=1;goto B6981d9;
case 0x6981dc:goto L6981dc;
case 0x6981de:goto L6981de;
case 0x6981e2:c.instructions+=12;goto B6981e2;
case 0x6981e6:c.instructions+=11;goto B6981e6;
case 0x6981e8:c.instructions+=10;goto B6981e8;
case 0x6981ec:c.instructions+=9;goto B6981ec;
case 0x6981ef:c.instructions+=8;goto B6981ef;
case 0x6981f2:c.instructions+=7;goto B6981f2;
case 0x6981f4:c.instructions+=6;goto B6981f4;
case 0x6981f7:c.instructions+=5;goto B6981f7;
case 0x6981f9:c.instructions+=4;goto B6981f9;
case 0x6981fc:c.instructions+=3;goto B6981fc;
case 0x6981fe:c.instructions+=2;goto B6981fe;
case 0x698202:c.instructions+=1;goto B698202;
case 0x698204:goto L698204;
case 0x698207:c.instructions+=2;goto B698207;
case 0x698209:c.instructions+=1;goto B698209;
case 0x69820d:goto L69820d;
case 0x698211:c.instructions+=7;goto B698211;
case 0x698214:c.instructions+=6;goto B698214;
case 0x698217:c.instructions+=5;goto B698217;
case 0x698219:c.instructions+=4;goto B698219;
case 0x69821c:c.instructions+=3;goto B69821c;
case 0x69821d:c.instructions+=2;goto B69821d;
case 0x69821f:c.instructions+=1;goto B69821f;
case 0x698221:goto L698221;
case 0x698224:c.instructions+=4;goto B698224;
case 0x698227:c.instructions+=3;goto B698227;
case 0x69822b:c.instructions+=2;goto B69822b;
case 0x69822e:c.instructions+=1;goto B69822e;
case 0x698231:goto L698231;
case 0x698234:c.instructions+=6;goto B698234;
case 0x698237:c.instructions+=5;goto B698237;
case 0x69823b:c.instructions+=4;goto B69823b;
case 0x69823e:c.instructions+=3;goto B69823e;
case 0x698240:c.instructions+=2;goto B698240;
case 0x698243:c.instructions+=1;goto B698243;
case 0x698248:goto L698248;
case 0x69824a:c.instructions+=2;goto B69824a;
case 0x69824b:c.instructions+=1;goto B69824b;
case 0x69824d:goto L69824d;
case 0x69824e:c.instructions+=7;goto B69824e;
case 0x698251:c.instructions+=6;goto B698251;
case 0x698254:c.instructions+=5;goto B698254;
case 0x698257:c.instructions+=4;goto B698257;
case 0x698258:c.instructions+=3;goto B698258;
case 0x69825a:c.instructions+=2;goto B69825a;
case 0x69825c:c.instructions+=1;goto B69825c;
case 0x698261:goto L698261;
case 0x698263:goto L698263;
case 0x698265:goto L698265;
case 0x698267:c.instructions+=4;goto B698267;
case 0x69826a:c.instructions+=3;goto B69826a;
case 0x69826d:c.instructions+=2;goto B69826d;
case 0x698270:c.instructions+=1;goto B698270;
case 0x698276:goto L698276;
case 0x698279:c.instructions+=2;goto B698279;
case 0x69827c:c.instructions+=1;goto B69827c;
case 0x698281:goto L698281;
case 0x698283:c.instructions+=1;goto B698283;
case 0x698285:goto L698285;
case 0x698288:c.instructions+=4;goto B698288;
case 0x69828b:c.instructions+=3;goto B69828b;
case 0x69828e:c.instructions+=2;goto B69828e;
case 0x698290:c.instructions+=1;goto B698290;
case 0x698292:goto L698292;
case 0x698294:c.instructions+=1;goto B698294;
case 0x698299:goto L698299;
case 0x69829c:c.instructions+=2;goto B69829c;
case 0x6982a0:c.instructions+=1;goto B6982a0;
case 0x6982a5:goto L6982a5;
case 0x6982a8:goto L6982a8;
case 0x6982ab:c.instructions+=1;goto B6982ab;
case 0x6982ae:goto L6982ae;
case 0x6982af:goto L6982af;
case 0x6982b0:c.instructions+=3;goto B6982b0;
case 0x6982b1:c.instructions+=2;goto B6982b1;
case 0x6982b2:c.instructions+=1;goto B6982b2;
case 0x6982b5:goto L6982b5;
case 0x6982b7:c.instructions+=9;goto B6982b7;
case 0x6982b9:c.instructions+=8;goto B6982b9;
case 0x6982bf:c.instructions+=7;goto B6982bf;
case 0x6982c6:c.instructions+=6;goto B6982c6;
case 0x6982c9:c.instructions+=5;goto B6982c9;
case 0x6982cc:c.instructions+=4;goto B6982cc;
case 0x6982cf:c.instructions+=3;goto B6982cf;
case 0x6982d2:c.instructions+=2;goto B6982d2;
case 0x6982d5:c.instructions+=1;goto B6982d5;
case 0x6982d6:goto L6982d6;
case 0x6982d8:c.instructions+=7;goto B6982d8;
case 0x6982d9:c.instructions+=6;goto B6982d9;
case 0x6982db:c.instructions+=5;goto B6982db;
case 0x6982de:c.instructions+=4;goto B6982de;
case 0x6982e2:c.instructions+=3;goto B6982e2;
case 0x6982e3:c.instructions+=2;goto B6982e3;
case 0x6982e5:c.instructions+=1;goto B6982e5;
case 0x6982e7:goto L6982e7;
case 0x6982ec:c.instructions+=1;goto B6982ec;
case 0x6982f1:goto L6982f1;
case 0x6982f2:c.instructions+=7;goto B6982f2;
case 0x6982f5:c.instructions+=6;goto B6982f5;
case 0x6982f6:c.instructions+=5;goto B6982f6;
case 0x6982f9:c.instructions+=4;goto B6982f9;
case 0x6982fa:c.instructions+=3;goto B6982fa;
case 0x6982ff:c.instructions+=2;goto B6982ff;
case 0x698302:c.instructions+=1;goto B698302;
case 0x698307:goto L698307;
case 0x698309:c.instructions+=1;goto B698309;
case 0x69830f:goto L69830f;
case 0x698312:c.instructions+=1;goto B698312;
case 0x698314:goto L698314;
case 0x698319:c.instructions+=1;goto B698319;
case 0x69831e:goto L69831e;
case 0x698320:c.instructions+=1;goto B698320;
case 0x698325:goto L698325;
case 0x698327:c.instructions+=3;goto B698327;
case 0x698328:c.instructions+=2;goto B698328;
case 0x69832b:c.instructions+=1;goto B69832b;
case 0x69832d:goto L69832d;
case 0x698332:c.instructions+=1;goto B698332;
case 0x698337:goto L698337;
case 0x698339:c.instructions+=5;goto B698339;
case 0x69833c:c.instructions+=4;goto B69833c;
case 0x69833d:c.instructions+=3;goto B69833d;
case 0x69833f:c.instructions+=2;goto B69833f;
case 0x698341:c.instructions+=1;goto B698341;
case 0x698344:goto L698344;
case 0x698346:goto L698346;
case 0x698348:c.instructions+=1;goto B698348;
case 0x69834b:goto L69834b;
case 0x69834d:goto L69834d;
case 0x698350:c.instructions+=3;goto B698350;
case 0x698353:c.instructions+=2;goto B698353;
case 0x698356:c.instructions+=1;goto B698356;
case 0x698358:goto L698358;
case 0x69835d:c.instructions+=1;goto B69835d;
case 0x698362:goto L698362;
case 0x698365:c.instructions+=3;goto B698365;
case 0x698368:c.instructions+=2;goto B698368;
case 0x698369:c.instructions+=1;goto B698369;
case 0x69836e:goto L69836e;
case 0x698370:c.instructions+=4;goto B698370;
case 0x698372:c.instructions+=3;goto B698372;
case 0x698373:c.instructions+=2;goto B698373;
case 0x698376:c.instructions+=1;goto B698376;
case 0x698378:goto L698378;
case 0x69837d:c.instructions+=1;goto B69837d;
case 0x698382:goto L698382;
case 0x698385:c.instructions+=5;goto B698385;
case 0x698388:c.instructions+=4;goto B698388;
case 0x69838b:c.instructions+=3;goto B69838b;
case 0x69838d:c.instructions+=2;goto B69838d;
case 0x698390:c.instructions+=1;goto B698390;
case 0x698392:goto L698392;
case 0x698394:goto L698394;
case 0x698396:c.instructions+=1;goto B698396;
case 0x698399:goto L698399;
case 0x69839b:goto L69839b;
case 0x69839e:c.instructions+=8;goto B69839e;
case 0x6983a1:c.instructions+=7;goto B6983a1;
case 0x6983a4:c.instructions+=6;goto B6983a4;
case 0x6983a7:c.instructions+=5;goto B6983a7;
case 0x6983aa:c.instructions+=4;goto B6983aa;
case 0x6983ad:c.instructions+=3;goto B6983ad;
case 0x6983b0:c.instructions+=2;goto B6983b0;
case 0x6983b3:c.instructions+=1;goto B6983b3;
case 0x6983b5:goto L6983b5;
case 0x6983b8:c.instructions+=6;goto B6983b8;
case 0x6983bc:c.instructions+=5;goto B6983bc;
case 0x6983be:c.instructions+=4;goto B6983be;
case 0x6983c0:c.instructions+=3;goto B6983c0;
case 0x6983c3:c.instructions+=2;goto B6983c3;
case 0x6983c6:c.instructions+=1;goto B6983c6;
case 0x6983c8:goto L6983c8;
case 0x6983cb:c.instructions+=2;goto B6983cb;
case 0x6983ce:c.instructions+=1;goto B6983ce;
case 0x6983d0:goto L6983d0;
case 0x6983d3:goto L6983d3;
case 0x6983d5:c.instructions+=3;goto B6983d5;
case 0x6983d8:c.instructions+=2;goto B6983d8;
case 0x6983db:c.instructions+=1;goto B6983db;
case 0x6983e1:goto L6983e1;
case 0x6983e4:c.instructions+=7;goto B6983e4;
case 0x6983e6:c.instructions+=6;goto B6983e6;
case 0x6983e8:c.instructions+=5;goto B6983e8;
case 0x6983e9:c.instructions+=4;goto B6983e9;
case 0x6983ec:c.instructions+=3;goto B6983ec;
case 0x6983ed:c.instructions+=2;goto B6983ed;
case 0x6983ee:c.instructions+=1;goto B6983ee;
case 0x6983f3:goto L6983f3;
case 0x6983f6:c.instructions+=5;goto B6983f6;
case 0x6983f9:c.instructions+=4;goto B6983f9;
case 0x6983fc:c.instructions+=3;goto B6983fc;
case 0x6983ff:c.instructions+=2;goto B6983ff;
case 0x698402:c.instructions+=1;goto B698402;
case 0x698408:goto L698408;
case 0x69840a:c.instructions+=14;goto B69840a;
case 0x69840e:c.instructions+=13;goto B69840e;
case 0x698411:c.instructions+=12;goto B698411;
case 0x698415:c.instructions+=11;goto B698415;
case 0x698418:c.instructions+=10;goto B698418;
case 0x69841a:c.instructions+=9;goto B69841a;
case 0x69841d:c.instructions+=8;goto B69841d;
case 0x698421:c.instructions+=7;goto B698421;
case 0x698422:c.instructions+=6;goto B698422;
case 0x698425:c.instructions+=5;goto B698425;
case 0x698429:c.instructions+=4;goto B698429;
case 0x69842c:c.instructions+=3;goto B69842c;
case 0x69842d:c.instructions+=2;goto B69842d;
case 0x698430:c.instructions+=1;goto B698430;
case 0x698432:goto L698432;
case 0x698435:c.instructions+=3;goto B698435;
case 0x698438:c.instructions+=2;goto B698438;
case 0x698439:c.instructions+=1;goto B698439;
case 0x69843e:goto L69843e;
case 0x698440:c.instructions+=4;goto B698440;
case 0x698442:c.instructions+=3;goto B698442;
case 0x698443:c.instructions+=2;goto B698443;
case 0x698446:c.instructions+=1;goto B698446;
case 0x69844c:goto L69844c;
case 0x69844f:c.instructions+=2;goto B69844f;
case 0x698452:c.instructions+=1;goto B698452;
case 0x698454:goto L698454;
case 0x698457:goto L698457;
case 0x69845a:c.instructions+=5;goto B69845a;
case 0x69845d:c.instructions+=4;goto B69845d;
case 0x698460:c.instructions+=3;goto B698460;
case 0x698463:c.instructions+=2;goto B698463;
case 0x698464:c.instructions+=1;goto B698464;
case 0x698469:goto L698469;
case 0x69846c:c.instructions+=14;goto B69846c;
case 0x69846f:c.instructions+=13;goto B69846f;
case 0x698473:c.instructions+=12;goto B698473;
case 0x698476:c.instructions+=11;goto B698476;
case 0x69847a:c.instructions+=10;goto B69847a;
case 0x69847d:c.instructions+=9;goto B69847d;
case 0x69847f:c.instructions+=8;goto B69847f;
case 0x698482:c.instructions+=7;goto B698482;
case 0x698483:c.instructions+=6;goto B698483;
case 0x698486:c.instructions+=5;goto B698486;
case 0x69848a:c.instructions+=4;goto B69848a;
case 0x69848d:c.instructions+=3;goto B69848d;
case 0x69848e:c.instructions+=2;goto B69848e;
case 0x698491:c.instructions+=1;goto B698491;
case 0x698493:goto L698493;
case 0x698496:goto L698496;
case 0x698498:c.instructions+=2;goto B698498;
case 0x69849b:c.instructions+=1;goto B69849b;
case 0x69849d:goto L69849d;
case 0x6984a0:c.instructions+=1;goto B6984a0;
case 0x6984a2:goto L6984a2;
case 0x6984a5:c.instructions+=1;goto B6984a5;
case 0x6984a8:goto L6984a8;
case 0x6984ad:c.instructions+=1;goto B6984ad;
case 0x6984af:goto L6984af;
case 0x6984b3:c.instructions+=4;goto B6984b3;
case 0x6984b6:c.instructions+=3;goto B6984b6;
case 0x6984b8:c.instructions+=2;goto B6984b8;
case 0x6984ba:c.instructions+=1;goto B6984ba;
case 0x6984bc:goto L6984bc;
case 0x6984be:goto L6984be;
case 0x6984c1:c.instructions+=2;goto B6984c1;
case 0x6984c2:c.instructions+=1;goto B6984c2;
case 0x6984c4:goto L6984c4;
case 0x6984c7:c.instructions+=3;goto B6984c7;
case 0x6984ca:c.instructions+=2;goto B6984ca;
case 0x6984cb:c.instructions+=1;goto B6984cb;
case 0x6984d0:goto L6984d0;
case 0x6984d2:c.instructions+=1;goto B6984d2;
case 0x6984d4:goto L6984d4;
case 0x6984d6:goto L6984d6;
case 0x6984d7:goto L6984d7;
case 0x6984d8:goto L6984d8;
case 0x6984d9:c.instructions+=2;goto B6984d9;
case 0x6984da:c.instructions+=1;goto B6984da;
case 0x6984dd:goto L6984dd;
case 0x6984df:c.instructions+=9;goto B6984df;
case 0x6984e0:c.instructions+=8;goto B6984e0;
case 0x6984e2:c.instructions+=7;goto B6984e2;
case 0x6984e5:c.instructions+=6;goto B6984e5;
case 0x6984e8:c.instructions+=5;goto B6984e8;
case 0x6984eb:c.instructions+=4;goto B6984eb;
case 0x6984ec:c.instructions+=3;goto B6984ec;
case 0x6984ef:c.instructions+=2;goto B6984ef;
case 0x6984f2:c.instructions+=1;goto B6984f2;
case 0x6984f4:goto L6984f4;
case 0x6984f5:c.instructions+=1;goto B6984f5;
case 0x6984fa:goto L6984fa;
case 0x6984fc:c.instructions+=3;goto B6984fc;
case 0x6984fd:c.instructions+=2;goto B6984fd;
case 0x6984fe:c.instructions+=1;goto B6984fe;
case 0x698501:goto L698501;
case 0x698503:c.instructions+=9;goto B698503;
case 0x698504:c.instructions+=8;goto B698504;
case 0x698506:c.instructions+=7;goto B698506;
case 0x698507:c.instructions+=6;goto B698507;
case 0x698508:c.instructions+=5;goto B698508;
case 0x698509:c.instructions+=4;goto B698509;
case 0x69850c:c.instructions+=3;goto B69850c;
case 0x69850d:c.instructions+=2;goto B69850d;
case 0x698510:c.instructions+=1;goto B698510;
case 0x698512:goto L698512;
case 0x698513:goto L698513;
case 0x698516:c.instructions+=2;goto B698516;
case 0x698517:c.instructions+=1;goto B698517;
case 0x69851c:goto L69851c;
case 0x69851e:c.instructions+=2;goto B69851e;
case 0x69851f:c.instructions+=1;goto B69851f;
case 0x698521:goto L698521;
case 0x698523:c.instructions+=3;goto B698523;
case 0x698525:c.instructions+=2;goto B698525;
case 0x698527:c.instructions+=1;goto B698527;
case 0x69852d:goto L69852d;
case 0x69852f:c.instructions+=1;goto B69852f;
case 0x698531:goto L698531;
case 0x698532:c.instructions+=3;goto B698532;
case 0x698535:c.instructions+=2;goto B698535;
case 0x698536:c.instructions+=1;goto B698536;
case 0x69853b:goto L69853b;
case 0x69853d:c.instructions+=2;goto B69853d;
case 0x69853e:c.instructions+=1;goto B69853e;
case 0x698540:goto L698540;
case 0x698543:c.instructions+=2;goto B698543;
case 0x698544:c.instructions+=1;goto B698544;
case 0x698549:goto L698549;
case 0x69854b:c.instructions+=2;goto B69854b;
case 0x69854c:c.instructions+=1;goto B69854c;
case 0x698552:goto L698552;
case 0x698554:c.instructions+=1;goto B698554;
case 0x698556:goto L698556;
case 0x698559:c.instructions+=3;goto B698559;
case 0x69855c:c.instructions+=2;goto B69855c;
case 0x698560:c.instructions+=1;goto B698560;
case 0x698561:goto L698561;
case 0x698564:c.instructions+=2;goto B698564;
case 0x698565:c.instructions+=1;goto B698565;
case 0x69856a:goto L69856a;
case 0x69856c:c.instructions+=2;goto B69856c;
case 0x69856d:c.instructions+=1;goto B69856d;
case 0x69856f:goto L69856f;
case 0x698571:goto L698571;
case 0x698572:goto L698572;
case 0x698575:c.instructions+=2;goto B698575;
case 0x698576:c.instructions+=1;goto B698576;
case 0x69857b:goto L69857b;
case 0x69857d:c.instructions+=2;goto B69857d;
case 0x69857e:c.instructions+=1;goto B69857e;
case 0x698580:goto L698580;
case 0x698583:c.instructions+=1;goto B698583;
case 0x698589:goto L698589;
case 0x69858c:c.instructions+=2;goto B69858c;
case 0x69858d:c.instructions+=1;goto B69858d;
case 0x698592:goto L698592;
case 0x698594:c.instructions+=1;goto B698594;
case 0x69859a:goto L69859a;
case 0x69859d:c.instructions+=2;goto B69859d;
case 0x69859e:c.instructions+=1;goto B69859e;
case 0x6985a3:goto L6985a3;
case 0x6985a5:c.instructions+=1;goto B6985a5;
case 0x6985a7:goto L6985a7;
case 0x6985aa:c.instructions+=1;goto B6985aa;
case 0x6985b0:goto L6985b0;
case 0x6985b2:c.instructions+=1;goto B6985b2;
case 0x6985b4:goto L6985b4;
case 0x6985b5:goto L6985b5;
case 0x6985b8:c.instructions+=2;goto B6985b8;
case 0x6985b9:c.instructions+=1;goto B6985b9;
case 0x6985be:goto L6985be;
case 0x6985c0:c.instructions+=2;goto B6985c0;
case 0x6985c1:c.instructions+=1;goto B6985c1;
case 0x6985c3:goto L6985c3;
case 0x6985c5:goto L6985c5;
case 0x6985c9:c.instructions+=2;goto B6985c9;
case 0x6985ca:c.instructions+=1;goto B6985ca;
case 0x6985cf:goto L6985cf;
case 0x6985d1:c.instructions+=2;goto B6985d1;
case 0x6985d2:c.instructions+=1;goto B6985d2;
case 0x6985d4:goto L6985d4;
case 0x6985d8:c.instructions+=1;goto B6985d8;
case 0x6985da:goto L6985da;
case 0x6985db:c.instructions+=1;goto B6985db;
case 0x6985dd:goto L6985dd;
case 0x6985df:c.instructions+=1;goto B6985df;
case 0x6985e1:goto L6985e1;
case 0x6985e4:c.instructions+=4;goto B6985e4;
case 0x6985e7:c.instructions+=3;goto B6985e7;
case 0x6985eb:c.instructions+=2;goto B6985eb;
case 0x6985ee:c.instructions+=1;goto B6985ee;
case 0x6985f1:goto L6985f1;
case 0x6985f4:c.instructions+=2;goto B6985f4;
case 0x6985f7:c.instructions+=1;goto B6985f7;
case 0x6985f9:goto L6985f9;
case 0x6985fc:c.instructions+=5;goto B6985fc;
case 0x6985ff:c.instructions+=4;goto B6985ff;
case 0x698602:c.instructions+=3;goto B698602;
case 0x698605:c.instructions+=2;goto B698605;
case 0x698607:c.instructions+=1;goto B698607;
case 0x698609:goto L698609;
case 0x69860b:c.instructions+=5;goto B69860b;
case 0x69860e:c.instructions+=4;goto B69860e;
case 0x698610:c.instructions+=3;goto B698610;
case 0x698611:c.instructions+=2;goto B698611;
case 0x698613:c.instructions+=1;goto B698613;
case 0x698618:goto L698618;
case 0x69861a:c.instructions+=1;goto B69861a;
case 0x69861c:goto L69861c;
case 0x69861f:c.instructions+=2;goto B69861f;
case 0x698622:c.instructions+=1;goto B698622;
case 0x698624:goto L698624;
case 0x698627:c.instructions+=2;goto B698627;
case 0x69862a:c.instructions+=1;goto B69862a;
case 0x69862f:goto L69862f;
case 0x698631:c.instructions+=1;goto B698631;
case 0x698633:goto L698633;
case 0x698637:c.instructions+=1;goto B698637;
case 0x698639:goto L698639;
case 0x69863c:c.instructions+=1;goto B69863c;
case 0x698641:goto L698641;
case 0x698644:c.instructions+=1;goto B698644;
case 0x698646:goto L698646;
case 0x698648:goto L698648;
case 0x698649:c.instructions+=4;goto B698649;
case 0x69864a:c.instructions+=3;goto B69864a;
case 0x69864b:c.instructions+=2;goto B69864b;
case 0x69864c:c.instructions+=1;goto B69864c;
case 0x69864f:goto L69864f;
case 0x698651:c.instructions+=10;goto B698651;
case 0x698652:c.instructions+=9;goto B698652;
case 0x698654:c.instructions+=8;goto B698654;
case 0x698657:c.instructions+=7;goto B698657;
case 0x698658:c.instructions+=6;goto B698658;
case 0x698659:c.instructions+=5;goto B698659;
case 0x69865c:c.instructions+=4;goto B69865c;
case 0x69865e:c.instructions+=3;goto B69865e;
case 0x698660:c.instructions+=2;goto B698660;
case 0x698663:c.instructions+=1;goto B698663;
case 0x698665:goto L698665;
case 0x698668:c.instructions+=4;goto B698668;
case 0x69866a:c.instructions+=3;goto B69866a;
case 0x69866c:c.instructions+=2;goto B69866c;
case 0x69866e:c.instructions+=1;goto B69866e;
case 0x698673:goto L698673;
case 0x698676:c.instructions+=3;goto B698676;
case 0x698677:c.instructions+=2;goto B698677;
case 0x69867a:c.instructions+=1;goto B69867a;
case 0x69867f:goto L69867f;
case 0x698681:c.instructions+=2;goto B698681;
case 0x698682:c.instructions+=1;goto B698682;
case 0x698684:goto L698684;
case 0x698685:c.instructions+=3;goto B698685;
case 0x698688:c.instructions+=2;goto B698688;
case 0x698689:c.instructions+=1;goto B698689;
case 0x69868e:goto L69868e;
case 0x698690:c.instructions+=2;goto B698690;
case 0x698691:c.instructions+=1;goto B698691;
case 0x698693:goto L698693;
case 0x698696:goto L698696;
case 0x698699:c.instructions+=2;goto B698699;
case 0x69869a:c.instructions+=1;goto B69869a;
case 0x69869f:goto L69869f;
case 0x6986a1:c.instructions+=2;goto B6986a1;
case 0x6986a2:c.instructions+=1;goto B6986a2;
case 0x6986a4:goto L6986a4;
case 0x6986a6:c.instructions+=2;goto B6986a6;
case 0x6986a8:c.instructions+=1;goto B6986a8;
case 0x6986aa:goto L6986aa;
case 0x6986ac:c.instructions+=1;goto B6986ac;
case 0x6986ae:goto L6986ae;
case 0x6986b3:c.instructions+=1;goto B6986b3;
case 0x6986b8:goto L6986b8;
case 0x6986bf:c.instructions+=1;goto B6986bf;
case 0x6986c0:goto L6986c0;
case 0x6986c3:c.instructions+=4;goto B6986c3;
case 0x6986c6:c.instructions+=3;goto B6986c6;
case 0x6986c9:c.instructions+=2;goto B6986c9;
case 0x6986ca:c.instructions+=1;goto B6986ca;
case 0x6986cf:goto L6986cf;
case 0x6986d1:c.instructions+=2;goto B6986d1;
case 0x6986d2:c.instructions+=1;goto B6986d2;
case 0x6986d4:goto L6986d4;
case 0x6986d7:c.instructions+=1;goto B6986d7;
case 0x6986d9:goto L6986d9;
case 0x6986dc:c.instructions+=1;goto B6986dc;
case 0x6986de:goto L6986de;
case 0x6986e1:c.instructions+=9;goto B6986e1;
case 0x6986e4:c.instructions+=8;goto B6986e4;
case 0x6986e7:c.instructions+=7;goto B6986e7;
case 0x6986ea:c.instructions+=6;goto B6986ea;
case 0x6986ec:c.instructions+=5;goto B6986ec;
case 0x6986ef:c.instructions+=4;goto B6986ef;
case 0x6986f1:c.instructions+=3;goto B6986f1;
case 0x6986f3:c.instructions+=2;goto B6986f3;
case 0x6986f6:c.instructions+=1;goto B6986f6;
case 0x6986f8:goto L6986f8;
case 0x6986fb:c.instructions+=10;goto B6986fb;
case 0x6986fe:c.instructions+=9;goto B6986fe;
case 0x698701:c.instructions+=8;goto B698701;
case 0x698704:c.instructions+=7;goto B698704;
case 0x698706:c.instructions+=6;goto B698706;
case 0x698709:c.instructions+=5;goto B698709;
case 0x69870c:c.instructions+=4;goto B69870c;
case 0x69870f:c.instructions+=3;goto B69870f;
case 0x698712:c.instructions+=2;goto B698712;
case 0x698715:c.instructions+=1;goto B698715;
case 0x69871a:goto L69871a;
case 0x69871c:c.instructions+=1;goto B69871c;
case 0x69871e:goto L69871e;
case 0x698720:goto L698720;
case 0x698723:c.instructions+=2;goto B698723;
case 0x698726:c.instructions+=1;goto B698726;
case 0x698728:goto L698728;
case 0x69872b:goto L69872b;
case 0x69872e:c.instructions+=2;goto B69872e;
case 0x698731:c.instructions+=1;goto B698731;
case 0x698733:goto L698733;
case 0x698736:goto L698736;
case 0x698739:c.instructions+=2;goto B698739;
case 0x69873c:c.instructions+=1;goto B69873c;
case 0x69873e:goto L69873e;
case 0x698743:c.instructions+=1;goto B698743;
case 0x698748:goto L698748;
case 0x69874b:c.instructions+=6;goto B69874b;
case 0x69874e:c.instructions+=5;goto B69874e;
case 0x698750:c.instructions+=4;goto B698750;
case 0x698753:c.instructions+=3;goto B698753;
case 0x698755:c.instructions+=2;goto B698755;
case 0x698758:c.instructions+=1;goto B698758;
case 0x69875a:goto L69875a;
case 0x69875d:c.instructions+=1;goto B69875d;
case 0x698760:goto L698760;
case 0x698762:c.instructions+=3;goto B698762;
case 0x698765:c.instructions+=2;goto B698765;
case 0x698767:c.instructions+=1;goto B698767;
case 0x698769:goto L698769;
case 0x69876c:c.instructions+=1;goto B69876c;
case 0x69876f:goto L69876f;
case 0x698772:c.instructions+=5;goto B698772;
case 0x698774:c.instructions+=4;goto B698774;
case 0x698777:c.instructions+=3;goto B698777;
case 0x69877a:c.instructions+=2;goto B69877a;
case 0x69877c:c.instructions+=1;goto B69877c;
case 0x69877e:goto L69877e;
case 0x698780:c.instructions+=1;goto B698780;
case 0x698782:goto L698782;
case 0x698785:c.instructions+=4;goto B698785;
case 0x698788:c.instructions+=3;goto B698788;
case 0x69878b:c.instructions+=2;goto B69878b;
case 0x69878e:c.instructions+=1;goto B69878e;
case 0x698790:goto L698790;
case 0x698794:c.instructions+=3;goto B698794;
case 0x698798:c.instructions+=2;goto B698798;
case 0x69879a:c.instructions+=1;goto B69879a;
case 0x69879c:goto L69879c;
case 0x69879e:c.instructions+=1;goto B69879e;
case 0x6987a0:goto L6987a0;
case 0x6987a2:c.instructions+=1;goto B6987a2;
case 0x6987a5:goto L6987a5;
case 0x6987a7:c.instructions+=1;goto B6987a7;
case 0x6987a9:goto L6987a9;
case 0x6987ac:c.instructions+=5;goto B6987ac;
case 0x6987ad:c.instructions+=4;goto B6987ad;
case 0x6987b0:c.instructions+=3;goto B6987b0;
case 0x6987b2:c.instructions+=2;goto B6987b2;
case 0x6987b5:c.instructions+=1;goto B6987b5;
case 0x6987b7:goto L6987b7;
case 0x6987ba:c.instructions+=8;goto B6987ba;
case 0x6987bd:c.instructions+=7;goto B6987bd;
case 0x6987bf:c.instructions+=6;goto B6987bf;
case 0x6987c1:c.instructions+=5;goto B6987c1;
case 0x6987c4:c.instructions+=4;goto B6987c4;
case 0x6987c5:c.instructions+=3;goto B6987c5;
case 0x6987c8:c.instructions+=2;goto B6987c8;
case 0x6987cb:c.instructions+=1;goto B6987cb;
case 0x6987d0:goto L6987d0;
case 0x6987d2:c.instructions+=1;goto B6987d2;
case 0x6987d8:goto L6987d8;
case 0x6987db:c.instructions+=2;goto B6987db;
case 0x6987de:c.instructions+=1;goto B6987de;
case 0x6987e0:goto L6987e0;
case 0x6987e3:goto L6987e3;
case 0x6987e6:c.instructions+=9;goto B6987e6;
case 0x6987e8:c.instructions+=8;goto B6987e8;
case 0x6987eb:c.instructions+=7;goto B6987eb;
case 0x6987ee:c.instructions+=6;goto B6987ee;
case 0x6987f1:c.instructions+=5;goto B6987f1;
case 0x6987f2:c.instructions+=4;goto B6987f2;
case 0x6987f5:c.instructions+=3;goto B6987f5;
case 0x6987f8:c.instructions+=2;goto B6987f8;
case 0x6987fb:c.instructions+=1;goto B6987fb;
case 0x6987fd:goto L6987fd;
case 0x6987ff:c.instructions+=4;goto B6987ff;
case 0x698802:c.instructions+=3;goto B698802;
case 0x698805:c.instructions+=2;goto B698805;
case 0x698807:c.instructions+=1;goto B698807;
case 0x698809:goto L698809;
case 0x69880b:c.instructions+=3;goto B69880b;
case 0x69880d:c.instructions+=2;goto B69880d;
case 0x69880f:c.instructions+=1;goto B69880f;
case 0x698811:goto L698811;
case 0x698813:c.instructions+=1;goto B698813;
case 0x698815:goto L698815;
case 0x698818:c.instructions+=3;goto B698818;
case 0x69881a:c.instructions+=2;goto B69881a;
case 0x69881d:c.instructions+=1;goto B69881d;
case 0x69881f:goto L69881f;
case 0x698820:c.instructions+=5;goto B698820;
case 0x698821:c.instructions+=4;goto B698821;
case 0x698822:c.instructions+=3;goto B698822;
case 0x698823:c.instructions+=2;goto B698823;
case 0x698825:c.instructions+=1;goto B698825;
case 0x698827:goto L698827;
case 0x698829:c.instructions+=1;goto B698829;
case 0x69882b:goto L69882b;
case 0x69882d:c.instructions+=1;goto B69882d;
case 0x698830:goto L698830;
case 0x698832:c.instructions+=1;goto B698832;
case 0x698834:goto L698834;
case 0x698837:c.instructions+=4;goto B698837;
case 0x69883a:c.instructions+=3;goto B69883a;
case 0x69883c:c.instructions+=2;goto B69883c;
case 0x69883f:c.instructions+=1;goto B69883f;
case 0x698844:goto L698844;
case 0x698846:c.instructions+=1;goto B698846;
case 0x698848:goto L698848;
case 0x69884d:goto L69884d;
case 0x69884f:goto L69884f;
case 0x698850:goto L698850;
case 0x698851:c.instructions+=3;goto B698851;
case 0x698852:c.instructions+=2;goto B698852;
case 0x698853:c.instructions+=1;goto B698853;
case 0x698856:goto L698856;
case 0x698858:c.instructions+=8;goto B698858;
case 0x698859:c.instructions+=7;goto B698859;
case 0x69885b:c.instructions+=6;goto B69885b;
case 0x69885c:c.instructions+=5;goto B69885c;
case 0x69885f:c.instructions+=4;goto B69885f;
case 0x698861:c.instructions+=3;goto B698861;
case 0x698862:c.instructions+=2;goto B698862;
case 0x698865:c.instructions+=1;goto B698865;
case 0x698867:goto L698867;
case 0x698869:c.instructions+=1;goto B698869;
case 0x69886b:goto L69886b;
case 0x698870:c.instructions+=1;goto B698870;
case 0x698872:goto L698872;
case 0x698875:c.instructions+=2;goto B698875;
case 0x698877:c.instructions+=1;goto B698877;
case 0x698879:goto L698879;
case 0x69887b:c.instructions+=1;goto B69887b;
case 0x69887d:goto L69887d;
case 0x698880:c.instructions+=4;goto B698880;
case 0x698881:c.instructions+=3;goto B698881;
case 0x698882:c.instructions+=2;goto B698882;
case 0x698885:c.instructions+=1;goto B698885;
case 0x69888a:goto L69888a;
case 0x69888c:c.instructions+=1;goto B69888c;
case 0x69888e:goto L69888e;
case 0x698891:goto L698891;
case 0x698892:c.instructions+=6;goto B698892;
case 0x698894:c.instructions+=5;goto B698894;
case 0x698896:c.instructions+=4;goto B698896;
case 0x698897:c.instructions+=3;goto B698897;
case 0x698899:c.instructions+=2;goto B698899;
case 0x69889b:c.instructions+=1;goto B69889b;
case 0x69889d:goto L69889d;
case 0x6988a0:c.instructions+=3;goto B6988a0;
case 0x6988a1:c.instructions+=2;goto B6988a1;
case 0x6988a3:c.instructions+=1;goto B6988a3;
case 0x6988a5:goto L6988a5;
case 0x6988a7:c.instructions+=1;goto B6988a7;
case 0x6988a9:goto L6988a9;
case 0x6988ab:c.instructions+=2;goto B6988ab;
case 0x6988ad:c.instructions+=1;goto B6988ad;
case 0x6988af:goto L6988af;
case 0x6988b1:goto L6988b1;
case 0x6988b3:c.instructions+=1;goto B6988b3;
case 0x6988b5:goto L6988b5;
case 0x6988b7:goto L6988b7;
case 0x6988b9:goto L6988b9;
case 0x6988bb:c.instructions+=1;goto B6988bb;
case 0x6988bd:goto L6988bd;
case 0x6988bf:goto L6988bf;
case 0x6988c1:c.instructions+=1;goto B6988c1;
case 0x6988c3:goto L6988c3;
case 0x6988c4:c.instructions+=1;goto B6988c4;
case 0x6988c9:goto L6988c9;
case 0x6988cb:c.instructions+=1;goto B6988cb;
case 0x6988cd:goto L6988cd;
case 0x6988d0:c.instructions+=2;goto B6988d0;
case 0x6988d3:c.instructions+=1;goto B6988d3;
case 0x6988d4:goto L6988d4;
case 0x6988d6:c.instructions+=1;goto B6988d6;
case 0x6988d8:goto L6988d8;
case 0x6988da:goto L6988da;
case 0x6988db:goto L6988db;
case 0x6988dc:c.instructions+=3;goto B6988dc;
case 0x6988dd:c.instructions+=2;goto B6988dd;
case 0x6988de:c.instructions+=1;goto B6988de;
case 0x6988e1:goto L6988e1;
case 0x6988e3:c.instructions+=5;goto B6988e3;
case 0x6988e4:c.instructions+=4;goto B6988e4;
case 0x6988e6:c.instructions+=3;goto B6988e6;
case 0x6988e9:c.instructions+=2;goto B6988e9;
case 0x6988eb:c.instructions+=1;goto B6988eb;
case 0x6988ed:goto L6988ed;
case 0x6988ef:c.instructions+=1;goto B6988ef;
case 0x6988f1:goto L6988f1;
case 0x6988f4:c.instructions+=4;goto B6988f4;
case 0x6988f5:c.instructions+=3;goto B6988f5;
case 0x6988f8:c.instructions+=2;goto B6988f8;
case 0x6988f9:c.instructions+=1;goto B6988f9;
case 0x6988fe:goto L6988fe;
case 0x698900:c.instructions+=1;goto B698900;
case 0x698902:goto L698902;
case 0x698905:goto L698905;
case 0x69890a:c.instructions+=1;goto B69890a;
case 0x69890c:goto L69890c;
case 0x69890f:c.instructions+=1;goto B69890f;
case 0x698911:goto L698911;
case 0x698915:goto L698915;
case 0x698916:c.instructions+=1;goto B698916;
case 0x698919:goto L698919;
case 0x69891b:c.instructions+=5;goto B69891b;
case 0x69891c:c.instructions+=4;goto B69891c;
case 0x69891e:c.instructions+=3;goto B69891e;
case 0x698921:c.instructions+=2;goto B698921;
case 0x698923:c.instructions+=1;goto B698923;
case 0x698925:goto L698925;
case 0x698928:c.instructions+=3;goto B698928;
case 0x69892b:c.instructions+=2;goto B69892b;
case 0x69892e:c.instructions+=1;goto B69892e;
case 0x698930:goto L698930;
case 0x698933:c.instructions+=1;goto B698933;
case 0x698936:goto L698936;
case 0x698938:goto L698938;
case 0x698939:c.instructions+=1;goto B698939;
case 0x69893c:goto L69893c;
case 0x69893e:goto L69893e;
case 0x698940:c.instructions+=2;goto B698940;
case 0x698943:c.instructions+=1;goto B698943;
case 0x698945:goto L698945;
case 0x698948:c.instructions+=4;goto B698948;
case 0x698949:c.instructions+=3;goto B698949;
case 0x69894c:c.instructions+=2;goto B69894c;
case 0x69894d:c.instructions+=1;goto B69894d;
case 0x698952:goto L698952;
case 0x698954:c.instructions+=1;goto B698954;
case 0x698956:goto L698956;
case 0x698959:c.instructions+=2;goto B698959;
case 0x69895c:c.instructions+=1;goto B69895c;
case 0x698961:goto L698961;
case 0x698963:c.instructions+=1;goto B698963;
case 0x698965:goto L698965;
case 0x698967:c.instructions+=1;goto B698967;
case 0x698969:goto L698969;
case 0x69896b:c.instructions+=5;goto B69896b;
case 0x69896c:c.instructions+=4;goto B69896c;
case 0x69896e:c.instructions+=3;goto B69896e;
case 0x698971:c.instructions+=2;goto B698971;
case 0x698973:c.instructions+=1;goto B698973;
case 0x698975:goto L698975;
case 0x698978:c.instructions+=2;goto B698978;
case 0x69897a:c.instructions+=1;goto B69897a;
case 0x69897c:goto L69897c;
case 0x69897e:c.instructions+=1;goto B69897e;
case 0x698980:goto L698980;
case 0x698983:c.instructions+=4;goto B698983;
case 0x698984:c.instructions+=3;goto B698984;
case 0x698987:c.instructions+=2;goto B698987;
case 0x698988:c.instructions+=1;goto B698988;
case 0x69898d:goto L69898d;
case 0x69898f:c.instructions+=1;goto B69898f;
case 0x698991:goto L698991;
case 0x698994:goto L698994;
case 0x698996:goto L698996;
case 0x698997:c.instructions+=1;goto B698997;
case 0x69899a:goto L69899a;
case 0x69899c:goto L69899c;
case 0x69899e:c.instructions+=2;goto B69899e;
case 0x6989a1:c.instructions+=1;goto B6989a1;
case 0x6989a3:goto L6989a3;
case 0x6989a6:c.instructions+=4;goto B6989a6;
case 0x6989a7:c.instructions+=3;goto B6989a7;
case 0x6989aa:c.instructions+=2;goto B6989aa;
case 0x6989ab:c.instructions+=1;goto B6989ab;
case 0x6989b0:goto L6989b0;
case 0x6989b2:c.instructions+=1;goto B6989b2;
case 0x6989b4:goto L6989b4;
case 0x6989b7:c.instructions+=3;goto B6989b7;
case 0x6989b9:c.instructions+=2;goto B6989b9;
case 0x6989bc:c.instructions+=1;goto B6989bc;
case 0x6989c1:goto L6989c1;
case 0x6989c3:c.instructions+=1;goto B6989c3;
case 0x6989c5:goto L6989c5;
case 0x6989c7:c.instructions+=1;goto B6989c7;
case 0x6989c9:goto L6989c9;
case 0x6989cb:c.instructions+=5;goto B6989cb;
case 0x6989cc:c.instructions+=4;goto B6989cc;
case 0x6989ce:c.instructions+=3;goto B6989ce;
case 0x6989d1:c.instructions+=2;goto B6989d1;
case 0x6989d3:c.instructions+=1;goto B6989d3;
case 0x6989d5:goto L6989d5;
case 0x6989d7:c.instructions+=2;goto B6989d7;
case 0x6989da:c.instructions+=1;goto B6989da;
case 0x6989dc:goto L6989dc;
case 0x6989df:c.instructions+=4;goto B6989df;
case 0x6989e0:c.instructions+=3;goto B6989e0;
case 0x6989e3:c.instructions+=2;goto B6989e3;
case 0x6989e4:c.instructions+=1;goto B6989e4;
case 0x6989e9:goto L6989e9;
case 0x6989eb:c.instructions+=1;goto B6989eb;
case 0x6989ed:goto L6989ed;
case 0x6989f0:c.instructions+=2;goto B6989f0;
case 0x6989f3:c.instructions+=1;goto B6989f3;
case 0x6989f8:goto L6989f8;
case 0x6989fa:c.instructions+=1;goto B6989fa;
case 0x6989fc:goto L6989fc;
case 0x6989fe:c.instructions+=1;goto B6989fe;
case 0x698a00:goto L698a00;
case 0x698a02:goto L698a02;
case 0x698a03:c.instructions+=1;goto B698a03;
case 0x698a06:goto L698a06;
case 0x698a08:c.instructions+=6;goto B698a08;
case 0x698a09:c.instructions+=5;goto B698a09;
case 0x698a0b:c.instructions+=4;goto B698a0b;
case 0x698a0c:c.instructions+=3;goto B698a0c;
case 0x698a0f:c.instructions+=2;goto B698a0f;
case 0x698a11:c.instructions+=1;goto B698a11;
case 0x698a13:goto L698a13;
case 0x698a15:c.instructions+=1;goto B698a15;
case 0x698a17:goto L698a17;
case 0x698a1a:c.instructions+=4;goto B698a1a;
case 0x698a1d:c.instructions+=3;goto B698a1d;
case 0x698a1e:c.instructions+=2;goto B698a1e;
case 0x698a1f:c.instructions+=1;goto B698a1f;
case 0x698a24:goto L698a24;
case 0x698a26:c.instructions+=1;goto B698a26;
case 0x698a28:goto L698a28;
case 0x698a2b:goto L698a2b;
case 0x698a2c:c.instructions+=3;goto B698a2c;
case 0x698a2f:c.instructions+=2;goto B698a2f;
case 0x698a32:c.instructions+=1;goto B698a32;
case 0x698a34:goto L698a34;
case 0x698a37:c.instructions+=2;goto B698a37;
case 0x698a39:c.instructions+=1;goto B698a39;
case 0x698a3b:goto L698a3b;
case 0x698a3d:c.instructions+=5;goto B698a3d;
case 0x698a3e:c.instructions+=4;goto B698a3e;
case 0x698a41:c.instructions+=3;goto B698a41;
case 0x698a44:c.instructions+=2;goto B698a44;
case 0x698a45:c.instructions+=1;goto B698a45;
case 0x698a4a:goto L698a4a;
case 0x698a4c:c.instructions+=1;goto B698a4c;
case 0x698a4e:goto L698a4e;
case 0x698a50:goto L698a50;
case 0x698a52:goto L698a52;
case 0x698a53:goto L698a53;
case 0x698a54:c.instructions+=2;goto B698a54;
case 0x698a55:c.instructions+=1;goto B698a55;
case 0x698a58:goto L698a58;
case 0x698a5a:c.instructions+=6;goto B698a5a;
case 0x698a5b:c.instructions+=5;goto B698a5b;
case 0x698a5d:c.instructions+=4;goto B698a5d;
case 0x698a5e:c.instructions+=3;goto B698a5e;
case 0x698a61:c.instructions+=2;goto B698a61;
case 0x698a63:c.instructions+=1;goto B698a63;
case 0x698a65:goto L698a65;
case 0x698a67:c.instructions+=1;goto B698a67;
case 0x698a69:goto L698a69;
case 0x698a6c:c.instructions+=4;goto B698a6c;
case 0x698a6f:c.instructions+=3;goto B698a6f;
case 0x698a70:c.instructions+=2;goto B698a70;
case 0x698a71:c.instructions+=1;goto B698a71;
case 0x698a76:goto L698a76;
case 0x698a78:c.instructions+=1;goto B698a78;
case 0x698a7a:goto L698a7a;
case 0x698a7d:c.instructions+=1;goto B698a7d;
case 0x698a7f:goto L698a7f;
case 0x698a82:c.instructions+=2;goto B698a82;
case 0x698a84:c.instructions+=1;goto B698a84;
case 0x698a86:goto L698a86;
case 0x698a88:c.instructions+=6;goto B698a88;
case 0x698a8a:c.instructions+=5;goto B698a8a;
case 0x698a8d:c.instructions+=4;goto B698a8d;
case 0x698a8e:c.instructions+=3;goto B698a8e;
case 0x698a91:c.instructions+=2;goto B698a91;
case 0x698a92:c.instructions+=1;goto B698a92;
case 0x698a97:goto L698a97;
case 0x698a99:c.instructions+=1;goto B698a99;
case 0x698a9b:goto L698a9b;
case 0x698a9d:goto L698a9d;
case 0x698a9f:goto L698a9f;
case 0x698aa0:c.instructions+=2;goto B698aa0;
case 0x698aa1:c.instructions+=1;goto B698aa1;
case 0x698aa4:goto L698aa4;
case 0x698aa6:c.instructions+=6;goto B698aa6;
case 0x698aa7:c.instructions+=5;goto B698aa7;
case 0x698aa9:c.instructions+=4;goto B698aa9;
case 0x698aaa:c.instructions+=3;goto B698aaa;
case 0x698aad:c.instructions+=2;goto B698aad;
case 0x698aaf:c.instructions+=1;goto B698aaf;
case 0x698ab1:goto L698ab1;
case 0x698ab3:c.instructions+=1;goto B698ab3;
case 0x698ab5:goto L698ab5;
case 0x698ab8:c.instructions+=4;goto B698ab8;
case 0x698abb:c.instructions+=3;goto B698abb;
case 0x698abc:c.instructions+=2;goto B698abc;
case 0x698abd:c.instructions+=1;goto B698abd;
case 0x698ac2:goto L698ac2;
case 0x698ac4:c.instructions+=1;goto B698ac4;
case 0x698ac6:goto L698ac6;
case 0x698ac9:c.instructions+=1;goto B698ac9;
case 0x698acb:goto L698acb;
case 0x698ace:c.instructions+=2;goto B698ace;
case 0x698ad0:c.instructions+=1;goto B698ad0;
case 0x698ad2:goto L698ad2;
case 0x698ad4:c.instructions+=5;goto B698ad4;
case 0x698ad7:c.instructions+=4;goto B698ad7;
case 0x698ada:c.instructions+=3;goto B698ada;
case 0x698add:c.instructions+=2;goto B698add;
case 0x698ade:c.instructions+=1;goto B698ade;
case 0x698ae3:goto L698ae3;
case 0x698ae5:c.instructions+=1;goto B698ae5;
case 0x698ae7:goto L698ae7;
case 0x698ae9:goto L698ae9;
case 0x698aeb:goto L698aeb;
case 0x698aec:c.instructions+=2;goto B698aec;
case 0x698aed:c.instructions+=1;goto B698aed;
case 0x698af0:goto L698af0;
case 0x698af2:c.instructions+=6;goto B698af2;
case 0x698af3:c.instructions+=5;goto B698af3;
case 0x698af5:c.instructions+=4;goto B698af5;
case 0x698af6:c.instructions+=3;goto B698af6;
case 0x698af9:c.instructions+=2;goto B698af9;
case 0x698afb:c.instructions+=1;goto B698afb;
case 0x698afd:goto L698afd;
case 0x698aff:c.instructions+=1;goto B698aff;
case 0x698b01:goto L698b01;
case 0x698b04:c.instructions+=4;goto B698b04;
case 0x698b07:c.instructions+=3;goto B698b07;
case 0x698b08:c.instructions+=2;goto B698b08;
case 0x698b09:c.instructions+=1;goto B698b09;
case 0x698b0e:goto L698b0e;
case 0x698b10:c.instructions+=1;goto B698b10;
case 0x698b12:goto L698b12;
case 0x698b15:c.instructions+=1;goto B698b15;
case 0x698b17:goto L698b17;
case 0x698b1a:c.instructions+=2;goto B698b1a;
case 0x698b1c:c.instructions+=1;goto B698b1c;
case 0x698b1e:goto L698b1e;
case 0x698b20:c.instructions+=6;goto B698b20;
case 0x698b22:c.instructions+=5;goto B698b22;
case 0x698b25:c.instructions+=4;goto B698b25;
case 0x698b26:c.instructions+=3;goto B698b26;
case 0x698b29:c.instructions+=2;goto B698b29;
case 0x698b2a:c.instructions+=1;goto B698b2a;
case 0x698b2f:goto L698b2f;
case 0x698b31:c.instructions+=1;goto B698b31;
case 0x698b33:goto L698b33;
case 0x698b35:goto L698b35;
case 0x698b37:goto L698b37;
case 0x698b38:c.instructions+=2;goto B698b38;
case 0x698b39:c.instructions+=1;goto B698b39;
case 0x698b3c:goto L698b3c;
case 0x698b3e:c.instructions+=6;goto B698b3e;
case 0x698b3f:c.instructions+=5;goto B698b3f;
case 0x698b41:c.instructions+=4;goto B698b41;
case 0x698b42:c.instructions+=3;goto B698b42;
case 0x698b45:c.instructions+=2;goto B698b45;
case 0x698b47:c.instructions+=1;goto B698b47;
case 0x698b49:goto L698b49;
case 0x698b4b:c.instructions+=1;goto B698b4b;
case 0x698b4d:goto L698b4d;
case 0x698b50:c.instructions+=4;goto B698b50;
case 0x698b53:c.instructions+=3;goto B698b53;
case 0x698b54:c.instructions+=2;goto B698b54;
case 0x698b55:c.instructions+=1;goto B698b55;
case 0x698b5a:goto L698b5a;
case 0x698b5c:c.instructions+=1;goto B698b5c;
case 0x698b5e:goto L698b5e;
case 0x698b61:c.instructions+=1;goto B698b61;
case 0x698b63:goto L698b63;
case 0x698b66:c.instructions+=2;goto B698b66;
case 0x698b68:c.instructions+=1;goto B698b68;
case 0x698b6a:goto L698b6a;
case 0x698b6c:c.instructions+=5;goto B698b6c;
case 0x698b6f:c.instructions+=4;goto B698b6f;
case 0x698b72:c.instructions+=3;goto B698b72;
case 0x698b75:c.instructions+=2;goto B698b75;
case 0x698b76:c.instructions+=1;goto B698b76;
case 0x698b7b:goto L698b7b;
case 0x698b7d:c.instructions+=1;goto B698b7d;
case 0x698b7f:goto L698b7f;
case 0x698b81:goto L698b81;
case 0x698b83:goto L698b83;
case 0x698b84:c.instructions+=2;goto B698b84;
case 0x698b85:c.instructions+=1;goto B698b85;
case 0x698b88:goto L698b88;
case 0x698b8a:c.instructions+=6;goto B698b8a;
case 0x698b8b:c.instructions+=5;goto B698b8b;
case 0x698b8d:c.instructions+=4;goto B698b8d;
case 0x698b8e:c.instructions+=3;goto B698b8e;
case 0x698b91:c.instructions+=2;goto B698b91;
case 0x698b93:c.instructions+=1;goto B698b93;
case 0x698b95:goto L698b95;
case 0x698b97:c.instructions+=1;goto B698b97;
case 0x698b99:goto L698b99;
case 0x698b9c:c.instructions+=4;goto B698b9c;
case 0x698b9f:c.instructions+=3;goto B698b9f;
case 0x698ba0:c.instructions+=2;goto B698ba0;
case 0x698ba1:c.instructions+=1;goto B698ba1;
case 0x698ba6:goto L698ba6;
case 0x698ba8:c.instructions+=1;goto B698ba8;
case 0x698baa:goto L698baa;
case 0x698bad:c.instructions+=1;goto B698bad;
case 0x698baf:goto L698baf;
case 0x698bb2:c.instructions+=2;goto B698bb2;
case 0x698bb4:c.instructions+=1;goto B698bb4;
case 0x698bb6:goto L698bb6;
case 0x698bb8:c.instructions+=6;goto B698bb8;
case 0x698bba:c.instructions+=5;goto B698bba;
case 0x698bbd:c.instructions+=4;goto B698bbd;
case 0x698bbe:c.instructions+=3;goto B698bbe;
case 0x698bc1:c.instructions+=2;goto B698bc1;
case 0x698bc2:c.instructions+=1;goto B698bc2;
case 0x698bc7:goto L698bc7;
case 0x698bc9:c.instructions+=1;goto B698bc9;
case 0x698bcb:goto L698bcb;
case 0x698bcd:goto L698bcd;
case 0x698bcf:goto L698bcf;
case 0x698bd0:c.instructions+=2;goto B698bd0;
case 0x698bd1:c.instructions+=1;goto B698bd1;
case 0x698bd4:goto L698bd4;
case 0x698bd6:c.instructions+=6;goto B698bd6;
case 0x698bd7:c.instructions+=5;goto B698bd7;
case 0x698bd9:c.instructions+=4;goto B698bd9;
case 0x698bda:c.instructions+=3;goto B698bda;
case 0x698bdd:c.instructions+=2;goto B698bdd;
case 0x698bdf:c.instructions+=1;goto B698bdf;
case 0x698be1:goto L698be1;
case 0x698be3:c.instructions+=1;goto B698be3;
case 0x698be5:goto L698be5;
case 0x698be8:c.instructions+=4;goto B698be8;
case 0x698beb:c.instructions+=3;goto B698beb;
case 0x698bec:c.instructions+=2;goto B698bec;
case 0x698bed:c.instructions+=1;goto B698bed;
case 0x698bf2:goto L698bf2;
case 0x698bf4:c.instructions+=1;goto B698bf4;
case 0x698bf6:goto L698bf6;
case 0x698bf9:c.instructions+=1;goto B698bf9;
case 0x698bfb:goto L698bfb;
case 0x698bfe:c.instructions+=2;goto B698bfe;
case 0x698c00:c.instructions+=1;goto B698c00;
case 0x698c02:goto L698c02;
case 0x698c04:c.instructions+=5;goto B698c04;
case 0x698c07:c.instructions+=4;goto B698c07;
case 0x698c0a:c.instructions+=3;goto B698c0a;
case 0x698c0d:c.instructions+=2;goto B698c0d;
case 0x698c0e:c.instructions+=1;goto B698c0e;
case 0x698c13:goto L698c13;
case 0x698c15:c.instructions+=1;goto B698c15;
case 0x698c17:goto L698c17;
case 0x698c19:goto L698c19;
case 0x698c1b:goto L698c1b;
case 0x698c1c:c.instructions+=2;goto B698c1c;
case 0x698c1d:c.instructions+=1;goto B698c1d;
case 0x698c20:goto L698c20;
case 0x698c22:c.instructions+=6;goto B698c22;
case 0x698c23:c.instructions+=5;goto B698c23;
case 0x698c25:c.instructions+=4;goto B698c25;
case 0x698c26:c.instructions+=3;goto B698c26;
case 0x698c29:c.instructions+=2;goto B698c29;
case 0x698c2b:c.instructions+=1;goto B698c2b;
case 0x698c2d:goto L698c2d;
case 0x698c2f:c.instructions+=1;goto B698c2f;
case 0x698c31:goto L698c31;
case 0x698c34:c.instructions+=4;goto B698c34;
case 0x698c37:c.instructions+=3;goto B698c37;
case 0x698c38:c.instructions+=2;goto B698c38;
case 0x698c39:c.instructions+=1;goto B698c39;
case 0x698c3e:goto L698c3e;
case 0x698c40:c.instructions+=1;goto B698c40;
case 0x698c42:goto L698c42;
case 0x698c45:c.instructions+=1;goto B698c45;
case 0x698c47:goto L698c47;
case 0x698c4a:c.instructions+=2;goto B698c4a;
case 0x698c4c:c.instructions+=1;goto B698c4c;
case 0x698c4e:goto L698c4e;
case 0x698c50:c.instructions+=5;goto B698c50;
case 0x698c52:c.instructions+=4;goto B698c52;
case 0x698c55:c.instructions+=3;goto B698c55;
case 0x698c58:c.instructions+=2;goto B698c58;
case 0x698c59:c.instructions+=1;goto B698c59;
case 0x698c5e:goto L698c5e;
case 0x698c60:c.instructions+=1;goto B698c60;
case 0x698c62:goto L698c62;
case 0x698c64:goto L698c64;
case 0x698c66:goto L698c66;
case 0x698c67:c.instructions+=2;goto B698c67;
case 0x698c68:c.instructions+=1;goto B698c68;
case 0x698c6b:goto L698c6b;
case 0x698c6d:c.instructions+=6;goto B698c6d;
case 0x698c6e:c.instructions+=5;goto B698c6e;
case 0x698c70:c.instructions+=4;goto B698c70;
case 0x698c71:c.instructions+=3;goto B698c71;
case 0x698c74:c.instructions+=2;goto B698c74;
case 0x698c76:c.instructions+=1;goto B698c76;
case 0x698c78:goto L698c78;
case 0x698c7a:c.instructions+=1;goto B698c7a;
case 0x698c7c:goto L698c7c;
case 0x698c7f:c.instructions+=4;goto B698c7f;
case 0x698c82:c.instructions+=3;goto B698c82;
case 0x698c83:c.instructions+=2;goto B698c83;
case 0x698c84:c.instructions+=1;goto B698c84;
case 0x698c89:goto L698c89;
case 0x698c8b:c.instructions+=1;goto B698c8b;
case 0x698c8d:goto L698c8d;
case 0x698c90:c.instructions+=1;goto B698c90;
case 0x698c92:goto L698c92;
case 0x698c95:c.instructions+=2;goto B698c95;
case 0x698c97:c.instructions+=1;goto B698c97;
case 0x698c99:goto L698c99;
case 0x698c9b:c.instructions+=5;goto B698c9b;
case 0x698c9e:c.instructions+=4;goto B698c9e;
case 0x698ca1:c.instructions+=3;goto B698ca1;
case 0x698ca4:c.instructions+=2;goto B698ca4;
case 0x698ca5:c.instructions+=1;goto B698ca5;
case 0x698caa:goto L698caa;
case 0x698cac:c.instructions+=1;goto B698cac;
case 0x698cae:goto L698cae;
case 0x698cb0:goto L698cb0;
case 0x698cb2:goto L698cb2;
case 0x698cb3:c.instructions+=2;goto B698cb3;
case 0x698cb4:c.instructions+=1;goto B698cb4;
case 0x698cb7:goto L698cb7;
case 0x698cb9:c.instructions+=6;goto B698cb9;
case 0x698cba:c.instructions+=5;goto B698cba;
case 0x698cbc:c.instructions+=4;goto B698cbc;
case 0x698cbd:c.instructions+=3;goto B698cbd;
case 0x698cc0:c.instructions+=2;goto B698cc0;
case 0x698cc2:c.instructions+=1;goto B698cc2;
case 0x698cc4:goto L698cc4;
case 0x698cc6:c.instructions+=1;goto B698cc6;
case 0x698cc8:goto L698cc8;
case 0x698ccb:c.instructions+=4;goto B698ccb;
case 0x698cce:c.instructions+=3;goto B698cce;
case 0x698ccf:c.instructions+=2;goto B698ccf;
case 0x698cd0:c.instructions+=1;goto B698cd0;
case 0x698cd5:goto L698cd5;
case 0x698cd7:c.instructions+=1;goto B698cd7;
case 0x698cd9:goto L698cd9;
case 0x698cdc:c.instructions+=1;goto B698cdc;
case 0x698cde:goto L698cde;
case 0x698ce1:c.instructions+=2;goto B698ce1;
case 0x698ce3:c.instructions+=1;goto B698ce3;
case 0x698ce5:goto L698ce5;
case 0x698ce7:c.instructions+=5;goto B698ce7;
case 0x698ce9:c.instructions+=4;goto B698ce9;
case 0x698cec:c.instructions+=3;goto B698cec;
case 0x698cef:c.instructions+=2;goto B698cef;
case 0x698cf0:c.instructions+=1;goto B698cf0;
case 0x698cf5:goto L698cf5;
case 0x698cf7:c.instructions+=1;goto B698cf7;
case 0x698cf9:goto L698cf9;
case 0x698cfb:goto L698cfb;
case 0x698cfd:goto L698cfd;
case 0x698cfe:c.instructions+=2;goto B698cfe;
case 0x698cff:c.instructions+=1;goto B698cff;
case 0x698d02:goto L698d02;
case 0x698d04:c.instructions+=6;goto B698d04;
case 0x698d05:c.instructions+=5;goto B698d05;
case 0x698d07:c.instructions+=4;goto B698d07;
case 0x698d08:c.instructions+=3;goto B698d08;
case 0x698d0b:c.instructions+=2;goto B698d0b;
case 0x698d0d:c.instructions+=1;goto B698d0d;
case 0x698d0f:goto L698d0f;
case 0x698d11:c.instructions+=1;goto B698d11;
case 0x698d13:goto L698d13;
case 0x698d16:c.instructions+=4;goto B698d16;
case 0x698d19:c.instructions+=3;goto B698d19;
case 0x698d1a:c.instructions+=2;goto B698d1a;
case 0x698d1b:c.instructions+=1;goto B698d1b;
case 0x698d20:goto L698d20;
case 0x698d22:c.instructions+=1;goto B698d22;
case 0x698d24:goto L698d24;
case 0x698d27:c.instructions+=1;goto B698d27;
case 0x698d29:goto L698d29;
case 0x698d2c:c.instructions+=2;goto B698d2c;
case 0x698d2e:c.instructions+=1;goto B698d2e;
case 0x698d30:goto L698d30;
case 0x698d32:c.instructions+=5;goto B698d32;
case 0x698d35:c.instructions+=4;goto B698d35;
case 0x698d38:c.instructions+=3;goto B698d38;
case 0x698d3b:c.instructions+=2;goto B698d3b;
case 0x698d3c:c.instructions+=1;goto B698d3c;
case 0x698d41:goto L698d41;
case 0x698d43:c.instructions+=1;goto B698d43;
case 0x698d45:goto L698d45;
case 0x698d47:goto L698d47;
case 0x698d49:goto L698d49;
case 0x698d4a:c.instructions+=2;goto B698d4a;
case 0x698d4b:c.instructions+=1;goto B698d4b;
case 0x698d4e:goto L698d4e;
case 0x698d50:c.instructions+=6;goto B698d50;
case 0x698d51:c.instructions+=5;goto B698d51;
case 0x698d53:c.instructions+=4;goto B698d53;
case 0x698d54:c.instructions+=3;goto B698d54;
case 0x698d57:c.instructions+=2;goto B698d57;
case 0x698d59:c.instructions+=1;goto B698d59;
case 0x698d5b:goto L698d5b;
case 0x698d5d:c.instructions+=1;goto B698d5d;
case 0x698d5f:goto L698d5f;
case 0x698d62:c.instructions+=4;goto B698d62;
case 0x698d65:c.instructions+=3;goto B698d65;
case 0x698d66:c.instructions+=2;goto B698d66;
case 0x698d67:c.instructions+=1;goto B698d67;
case 0x698d6c:goto L698d6c;
case 0x698d6e:c.instructions+=1;goto B698d6e;
case 0x698d70:goto L698d70;
case 0x698d73:c.instructions+=1;goto B698d73;
case 0x698d75:goto L698d75;
case 0x698d78:c.instructions+=2;goto B698d78;
case 0x698d7a:c.instructions+=1;goto B698d7a;
case 0x698d7c:goto L698d7c;
case 0x698d7e:c.instructions+=5;goto B698d7e;
case 0x698d81:c.instructions+=4;goto B698d81;
case 0x698d84:c.instructions+=3;goto B698d84;
case 0x698d87:c.instructions+=2;goto B698d87;
case 0x698d88:c.instructions+=1;goto B698d88;
case 0x698d8d:goto L698d8d;
case 0x698d8f:c.instructions+=1;goto B698d8f;
case 0x698d91:goto L698d91;
case 0x698d93:goto L698d93;
case 0x698d95:goto L698d95;
case 0x698d96:c.instructions+=2;goto B698d96;
case 0x698d97:c.instructions+=1;goto B698d97;
case 0x698d9a:goto L698d9a;
case 0x698d9c:c.instructions+=6;goto B698d9c;
case 0x698d9d:c.instructions+=5;goto B698d9d;
case 0x698d9f:c.instructions+=4;goto B698d9f;
case 0x698da0:c.instructions+=3;goto B698da0;
case 0x698da3:c.instructions+=2;goto B698da3;
case 0x698da5:c.instructions+=1;goto B698da5;
case 0x698da7:goto L698da7;
case 0x698da9:c.instructions+=1;goto B698da9;
case 0x698dab:goto L698dab;
case 0x698dae:c.instructions+=4;goto B698dae;
case 0x698db1:c.instructions+=3;goto B698db1;
case 0x698db2:c.instructions+=2;goto B698db2;
case 0x698db3:c.instructions+=1;goto B698db3;
case 0x698db8:goto L698db8;
case 0x698dba:c.instructions+=1;goto B698dba;
case 0x698dbc:goto L698dbc;
case 0x698dbf:c.instructions+=1;goto B698dbf;
case 0x698dc1:goto L698dc1;
case 0x698dc4:c.instructions+=2;goto B698dc4;
case 0x698dc6:c.instructions+=1;goto B698dc6;
case 0x698dc8:goto L698dc8;
case 0x698dca:c.instructions+=5;goto B698dca;
case 0x698dcc:c.instructions+=4;goto B698dcc;
case 0x698dcf:c.instructions+=3;goto B698dcf;
case 0x698dd2:c.instructions+=2;goto B698dd2;
case 0x698dd3:c.instructions+=1;goto B698dd3;
case 0x698dd8:goto L698dd8;
case 0x698dda:c.instructions+=1;goto B698dda;
case 0x698ddc:goto L698ddc;
case 0x698dde:goto L698dde;
case 0x698de0:goto L698de0;
case 0x698de1:c.instructions+=2;goto B698de1;
case 0x698de2:c.instructions+=1;goto B698de2;
case 0x698de5:goto L698de5;
case 0x698de7:c.instructions+=6;goto B698de7;
case 0x698de8:c.instructions+=5;goto B698de8;
case 0x698dea:c.instructions+=4;goto B698dea;
case 0x698deb:c.instructions+=3;goto B698deb;
case 0x698dee:c.instructions+=2;goto B698dee;
case 0x698df0:c.instructions+=1;goto B698df0;
case 0x698df2:goto L698df2;
case 0x698df4:c.instructions+=1;goto B698df4;
case 0x698df6:goto L698df6;
case 0x698df9:c.instructions+=4;goto B698df9;
case 0x698dfc:c.instructions+=3;goto B698dfc;
case 0x698dfd:c.instructions+=2;goto B698dfd;
case 0x698dfe:c.instructions+=1;goto B698dfe;
case 0x698e03:goto L698e03;
case 0x698e05:c.instructions+=1;goto B698e05;
case 0x698e07:goto L698e07;
case 0x698e0a:c.instructions+=1;goto B698e0a;
case 0x698e0c:goto L698e0c;
case 0x698e0f:c.instructions+=2;goto B698e0f;
case 0x698e11:c.instructions+=1;goto B698e11;
case 0x698e13:goto L698e13;
case 0x698e15:c.instructions+=5;goto B698e15;
case 0x698e18:c.instructions+=4;goto B698e18;
case 0x698e1b:c.instructions+=3;goto B698e1b;
case 0x698e1e:c.instructions+=2;goto B698e1e;
case 0x698e1f:c.instructions+=1;goto B698e1f;
case 0x698e24:goto L698e24;
case 0x698e26:c.instructions+=1;goto B698e26;
case 0x698e28:goto L698e28;
case 0x698e2a:goto L698e2a;
case 0x698e2c:goto L698e2c;
case 0x698e2d:c.instructions+=2;goto B698e2d;
case 0x698e2e:c.instructions+=1;goto B698e2e;
case 0x698e31:goto L698e31;
case 0x698e33:c.instructions+=6;goto B698e33;
case 0x698e34:c.instructions+=5;goto B698e34;
case 0x698e36:c.instructions+=4;goto B698e36;
case 0x698e37:c.instructions+=3;goto B698e37;
case 0x698e3a:c.instructions+=2;goto B698e3a;
case 0x698e3c:c.instructions+=1;goto B698e3c;
case 0x698e3e:goto L698e3e;
case 0x698e40:c.instructions+=1;goto B698e40;
case 0x698e42:goto L698e42;
case 0x698e45:c.instructions+=4;goto B698e45;
case 0x698e48:c.instructions+=3;goto B698e48;
case 0x698e49:c.instructions+=2;goto B698e49;
case 0x698e4a:c.instructions+=1;goto B698e4a;
case 0x698e4f:goto L698e4f;
case 0x698e51:c.instructions+=1;goto B698e51;
case 0x698e53:goto L698e53;
case 0x698e56:c.instructions+=1;goto B698e56;
case 0x698e58:goto L698e58;
case 0x698e5b:c.instructions+=2;goto B698e5b;
case 0x698e5d:c.instructions+=1;goto B698e5d;
case 0x698e5f:goto L698e5f;
case 0x698e61:c.instructions+=5;goto B698e61;
case 0x698e64:c.instructions+=4;goto B698e64;
case 0x698e67:c.instructions+=3;goto B698e67;
case 0x698e6a:c.instructions+=2;goto B698e6a;
case 0x698e6b:c.instructions+=1;goto B698e6b;
case 0x698e70:goto L698e70;
case 0x698e72:c.instructions+=1;goto B698e72;
case 0x698e74:goto L698e74;
case 0x698e76:goto L698e76;
case 0x698e78:goto L698e78;
case 0x698e79:c.instructions+=2;goto B698e79;
case 0x698e7a:c.instructions+=1;goto B698e7a;
case 0x698e7d:goto L698e7d;
case 0x698e7f:c.instructions+=18;goto B698e7f;
case 0x698e83:c.instructions+=17;goto B698e83;
case 0x698e87:c.instructions+=16;goto B698e87;
case 0x698e89:c.instructions+=15;goto B698e89;
case 0x698e8b:c.instructions+=14;goto B698e8b;
case 0x698e8e:c.instructions+=13;goto B698e8e;
case 0x698e91:c.instructions+=12;goto B698e91;
case 0x698e94:c.instructions+=11;goto B698e94;
case 0x698e97:c.instructions+=10;goto B698e97;
case 0x698e9a:c.instructions+=9;goto B698e9a;
case 0x698e9d:c.instructions+=8;goto B698e9d;
case 0x698ea0:c.instructions+=7;goto B698ea0;
case 0x698ea3:c.instructions+=6;goto B698ea3;
case 0x698ea6:c.instructions+=5;goto B698ea6;
case 0x698ea9:c.instructions+=4;goto B698ea9;
case 0x698eac:c.instructions+=3;goto B698eac;
case 0x698eaf:c.instructions+=2;goto B698eaf;
case 0x698eb2:c.instructions+=1;goto B698eb2;
case 0x698eb3:goto L698eb3;
case 0x698eb5:c.instructions+=5;goto B698eb5;
case 0x698eb6:c.instructions+=4;goto B698eb6;
case 0x698eb8:c.instructions+=3;goto B698eb8;
case 0x698ebb:c.instructions+=2;goto B698ebb;
case 0x698ebd:c.instructions+=1;goto B698ebd;
case 0x698ebf:goto L698ebf;
case 0x698ec4:c.instructions+=1;goto B698ec4;
case 0x698ec6:goto L698ec6;
case 0x698ec9:c.instructions+=2;goto B698ec9;
case 0x698ecc:c.instructions+=1;goto B698ecc;
case 0x698ece:goto L698ece;
case 0x698ecf:c.instructions+=1;goto B698ecf;
case 0x698ed2:goto L698ed2;
case 0x698ed4:c.instructions+=10;goto B698ed4;
case 0x698ed5:c.instructions+=9;goto B698ed5;
case 0x698ed7:c.instructions+=8;goto B698ed7;
case 0x698ed9:c.instructions+=7;goto B698ed9;
case 0x698ede:c.instructions+=6;goto B698ede;
case 0x698ee0:c.instructions+=5;goto B698ee0;
case 0x698ee4:c.instructions+=4;goto B698ee4;
case 0x698ee5:c.instructions+=3;goto B698ee5;
case 0x698ee8:c.instructions+=2;goto B698ee8;
case 0x698eeb:c.instructions+=1;goto B698eeb;
case 0x698eed:goto L698eed;
case 0x698ef0:c.instructions+=2;goto B698ef0;
case 0x698ef2:c.instructions+=1;goto B698ef2;
case 0x698ef4:goto L698ef4;
case 0x698ef7:goto L698ef7;
case 0x698ef9:c.instructions+=1;goto B698ef9;
case 0x698efb:goto L698efb;
case 0x698efe:c.instructions+=2;goto B698efe;
case 0x698f00:c.instructions+=1;goto B698f00;
case 0x698f02:goto L698f02;
case 0x698f05:c.instructions+=2;goto B698f05;
case 0x698f08:c.instructions+=1;goto B698f08;
case 0x698f0a:goto L698f0a;
case 0x698f0b:c.instructions+=2;goto B698f0b;
case 0x698f0c:c.instructions+=1;goto B698f0c;
case 0x698f0f:goto L698f0f;
case 0x698f11:c.instructions+=4;goto B698f11;
case 0x698f13:c.instructions+=3;goto B698f13;
case 0x698f19:c.instructions+=2;goto B698f19;
case 0x698f1f:c.instructions+=1;goto B698f1f;
case 0x698f21:goto L698f21;
case 0x698f26:c.instructions+=2;goto B698f26;
case 0x698f2b:c.instructions+=1;goto B698f2b;
case 0x698f2d:goto L698f2d;
case 0x698f32:c.instructions+=1;goto B698f32;
case 0x698f34:goto L698f34;
case 0x698f39:c.instructions+=1;goto B698f39;
case 0x698f3b:goto L698f3b;
case 0x698f3d:c.instructions+=1;goto B698f3d;
case 0x698f3e:goto L698f3e;
case 0x698f40:c.instructions+=2;goto B698f40;
case 0x698f41:c.instructions+=1;goto B698f41;
case 0x698f42:goto L698f42;
case 0x698f44:c.instructions+=3;goto B698f44;
case 0x698f49:c.instructions+=2;goto B698f49;
case 0x698f4e:c.instructions+=1;goto B698f4e;
case 0x698f50:goto L698f50;
case 0x698f55:c.instructions+=1;goto B698f55;
case 0x698f57:goto L698f57;
case 0x698f5c:c.instructions+=1;goto B698f5c;
case 0x698f5e:goto L698f5e;
case 0x698f63:c.instructions+=1;goto B698f63;
case 0x698f65:goto L698f65;
case 0x698f67:c.instructions+=1;goto B698f67;
case 0x698f68:goto L698f68;
case 0x698f6a:c.instructions+=2;goto B698f6a;
case 0x698f6b:c.instructions+=1;goto B698f6b;
case 0x698f6c:goto L698f6c;
case 0x698f6e:c.instructions+=3;goto B698f6e;
case 0x698f73:c.instructions+=2;goto B698f73;
case 0x698f78:c.instructions+=1;goto B698f78;
case 0x698f7a:goto L698f7a;
case 0x698f7f:c.instructions+=1;goto B698f7f;
case 0x698f81:goto L698f81;
case 0x698f86:c.instructions+=1;goto B698f86;
case 0x698f88:goto L698f88;
case 0x698f8d:c.instructions+=1;goto B698f8d;
case 0x698f8f:goto L698f8f;
case 0x698f94:c.instructions+=1;goto B698f94;
case 0x698f96:goto L698f96;
case 0x698f98:c.instructions+=1;goto B698f98;
case 0x698f99:goto L698f99;
case 0x698f9b:c.instructions+=2;goto B698f9b;
case 0x698f9c:c.instructions+=1;goto B698f9c;
case 0x698f9d:goto L698f9d;
case 0x698f9f:c.instructions+=3;goto B698f9f;
case 0x698fa4:c.instructions+=2;goto B698fa4;
case 0x698fa9:c.instructions+=1;goto B698fa9;
case 0x698fab:goto L698fab;
case 0x698fb0:c.instructions+=1;goto B698fb0;
case 0x698fb2:goto L698fb2;
case 0x698fb7:c.instructions+=1;goto B698fb7;
case 0x698fb9:goto L698fb9;
case 0x698fbe:c.instructions+=1;goto B698fbe;
case 0x698fc0:goto L698fc0;
case 0x698fc5:c.instructions+=1;goto B698fc5;
case 0x698fc7:goto L698fc7;
case 0x698fcc:c.instructions+=1;goto B698fcc;
case 0x698fce:goto L698fce;
case 0x698fd0:c.instructions+=1;goto B698fd0;
case 0x698fd1:goto L698fd1;
case 0x698fd3:c.instructions+=2;goto B698fd3;
case 0x698fd4:c.instructions+=1;goto B698fd4;
case 0x698fd5:goto L698fd5;
case 0x698fd7:c.instructions+=4;goto B698fd7;
case 0x698fdc:c.instructions+=3;goto B698fdc;
case 0x698fe1:c.instructions+=2;goto B698fe1;
case 0x698fe3:c.instructions+=1;goto B698fe3;
case 0x698fe5:goto L698fe5;
case 0x698fe7:goto L698fe7;
case 0x698fec:c.instructions+=1;goto B698fec;
case 0x698fee:goto L698fee;
case 0x698ff3:c.instructions+=1;goto B698ff3;
case 0x698ff5:goto L698ff5;
case 0x698ffa:c.instructions+=1;goto B698ffa;
case 0x698ffc:goto L698ffc;
default:missing_instruction(c.pc);}
B698001:L698001:{c.instructions+=4;NFSU2_TR(0x698001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B698003:{NFSU2_TR(0x698003);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B698006:{NFSU2_TR(0x698006);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B698009:{NFSU2_TR(0x698009);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69810c;}}
}
B69800f:L69800f:{c.instructions+=5;NFSU2_TR(0x69800f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B698012:{NFSU2_TR(0x698012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698016:{NFSU2_TR(0x698016);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B698018:{NFSU2_TR(0x698018);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69801a:{NFSU2_TR(0x69801a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L698105;}}
}
B698020:L698020:{c.instructions+=5;NFSU2_TR(0x698020);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698023:{NFSU2_TR(0x698023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698025:{NFSU2_TR(0x698025);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B698028:{NFSU2_TR(0x698028);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B69802b:{NFSU2_TR(0x69802b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69810c;}}
}
B698031:L698031:{c.instructions+=14;NFSU2_TR(0x698031);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698034:{NFSU2_TR(0x698034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698038:{NFSU2_TR(0x698038);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69803c:{NFSU2_TR(0x69803c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B69803e:{NFSU2_TR(0x69803e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698041:{NFSU2_TR(0x698041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698042:{NFSU2_TR(0x698042);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698045:{NFSU2_TR(0x698045);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698046:{NFSU2_TR(0x698046);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698048:{NFSU2_TR(0x698048);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698049:{NFSU2_TR(0x698049);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69804c:{NFSU2_TR(0x69804c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69804d:{NFSU2_TR(0x69804d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69804e:{NFSU2_TR(0x69804e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698053ull));
TAIL_STATIC(0x695137u,695);
}
B698053:L698053:{c.instructions+=19;NFSU2_TR(0x698053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698055:{NFSU2_TR(0x698055);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B698059:{NFSU2_TR(0x698059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69805c:{NFSU2_TR(0x69805c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69805f:{NFSU2_TR(0x69805f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B698061:{NFSU2_TR(0x698061);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B698065:{NFSU2_TR(0x698065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698068:{NFSU2_TR(0x698068);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B69806c:{NFSU2_TR(0x69806c);
u8 U[18];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+6,u32(s32(s16(r2(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(U+10,u32(s32(s16(r2(U+4)))));
w4(U+14,u32(u32(r4(U+6))*u32(r4(U+10))));
w2(R+0,u16(r4(U+14)));
}
B698071:{NFSU2_TR(0x698071);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698074:{NFSU2_TR(0x698074);
w4(R+4,u32(r2(R+4)));
}
B698077:{NFSU2_TR(0x698077);
w4(R+8,u32(r2(R+8)));
}
B69807a:{NFSU2_TR(0x69807a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B69807c:{NFSU2_TR(0x69807c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B698080:{NFSU2_TR(0x698080);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B698084:{NFSU2_TR(0x698084);
w4(R+0,u32(r2(R+0)));
}
B698087:{NFSU2_TR(0x698087);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B698089:{NFSU2_TR(0x698089);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69808b:{NFSU2_TR(0x69808b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69809f;}}
}
B69808d:L69808d:{c.instructions+=6;NFSU2_TR(0x69808d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698090:{NFSU2_TR(0x698090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B698093:{NFSU2_TR(0x698093);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B698095:{NFSU2_TR(0x698095);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B698099:{NFSU2_TR(0x698099);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B69809b:{NFSU2_TR(0x69809b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B69809f:L69809f:{c.instructions+=6;NFSU2_TR(0x69809f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6980a2:{NFSU2_TR(0x6980a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6980a5:{NFSU2_TR(0x6980a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6980a6:{NFSU2_TR(0x6980a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6980a7:{NFSU2_TR(0x6980a7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6980a9:{NFSU2_TR(0x6980a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6980aeull));
TAIL_STATIC(0x697cfeu,697);
}
B6980ae:L6980ae:{c.instructions+=8;NFSU2_TR(0x6980ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6980b1:{NFSU2_TR(0x6980b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6980b4:{NFSU2_TR(0x6980b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6980b7:{NFSU2_TR(0x6980b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6980ba:{NFSU2_TR(0x6980ba);
__builtin_memmove((R+4),(R+8),4);
}
B6980bc:{NFSU2_TR(0x6980bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6980bf:{NFSU2_TR(0x6980bf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6980c2:{NFSU2_TR(0x6980c2);
if(r1(R+518)){{goto L698113;}}
}
B6980c4:L6980c4:{c.instructions+=20;NFSU2_TR(0x6980c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6980c8:{NFSU2_TR(0x6980c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B6980cc:{NFSU2_TR(0x6980cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6980d0:{NFSU2_TR(0x6980d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6980d2:{NFSU2_TR(0x6980d2);
w1(R+512,u8((r2(R+4))!=(u16(0x0ull))));
w2(R+4,u16(0-u32(r2(R+4))));
}
B6980d5:{NFSU2_TR(0x6980d5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6980d7:{NFSU2_TR(0x6980d7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6980da:{NFSU2_TR(0x6980da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6980db:{NFSU2_TR(0x6980db);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6980df:{NFSU2_TR(0x6980df);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6980e3:{NFSU2_TR(0x6980e3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6980e6:{NFSU2_TR(0x6980e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6980e9:{NFSU2_TR(0x6980e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6980ec:{NFSU2_TR(0x6980ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6980ef:{NFSU2_TR(0x6980ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6980f2:{NFSU2_TR(0x6980f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6980f6:{NFSU2_TR(0x6980f6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6980f9:{NFSU2_TR(0x6980f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6980fc:{NFSU2_TR(0x6980fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6980ff:{NFSU2_TR(0x6980ff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698020u);}goto L698020;}}
}
B698105:L698105:{c.instructions+=1;NFSU2_TR(0x698105);
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
B698107:L698107:{c.instructions+=5;NFSU2_TR(0x698107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B698108:{NFSU2_TR(0x698108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698109:{NFSU2_TR(0x698109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69810a:{NFSU2_TR(0x69810a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69810b:{NFSU2_TR(0x69810b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69810c:L69810c:{c.instructions+=2;NFSU2_TR(0x69810c);
w4(R+0,u32(0x80004005ull));
}
B698111:{NFSU2_TR(0x698111);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698107u);}goto L698107;}
}
B698113:L698113:{c.instructions+=2;NFSU2_TR(0x698113);
w4(R+0,u32(0x8007000eull));
}
B698118:{NFSU2_TR(0x698118);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698107u);}goto L698107;}
}
B69811a:L69811a:{c.instructions+=13;NFSU2_TR(0x69811a);
__builtin_memmove((R+28),(R+28),4);
}
B69811c:{NFSU2_TR(0x69811c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69811d:{NFSU2_TR(0x69811d);
__builtin_memmove((R+20),(R+16),4);
}
B69811f:{NFSU2_TR(0x69811f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B698122:{NFSU2_TR(0x698122);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698123:{NFSU2_TR(0x698123);
__builtin_memmove((R+12),(R+4),4);
}
B698125:{NFSU2_TR(0x698125);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698128:{NFSU2_TR(0x698128);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B69812c:{NFSU2_TR(0x69812c);
w4(R+0,u32(r2(R+4)));
}
B69812f:{NFSU2_TR(0x69812f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698130:{NFSU2_TR(0x698130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698133:{NFSU2_TR(0x698133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B698135:{NFSU2_TR(0x698135);
if(r1(R+512)){{goto L69813e;}}
}
B698137:L698137:{c.instructions+=2;NFSU2_TR(0x698137);
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
B698139:{NFSU2_TR(0x698139);
{goto L6982af;}
}
B69813e:L69813e:{c.instructions+=2;NFSU2_TR(0x69813e);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0x1ull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0x1ull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B698142:{NFSU2_TR(0x698142);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69814b;}}
}
B698144:L698144:{c.instructions+=2;NFSU2_TR(0x698144);
__builtin_memmove((R+0),(R+12),4);
}
B698146:{NFSU2_TR(0x698146);
{goto L6982af;}
}
B69814b:L69814b:{c.instructions+=3;NFSU2_TR(0x69814b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69814f:{NFSU2_TR(0x69814f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698150:{NFSU2_TR(0x698150);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698186;}}
}
B698152:L698152:{c.instructions+=3;NFSU2_TR(0x698152);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B698155:{NFSU2_TR(0x698155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698156:{NFSU2_TR(0x698156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69815bull));
TAIL_STATIC(0x575620u,575);
}
B69815b:L69815b:{c.instructions+=5;NFSU2_TR(0x69815b);
__builtin_memmove((R+28),(R+0),4);
}
B69815d:{NFSU2_TR(0x69815d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69815f:{NFSU2_TR(0x69815f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698160:{NFSU2_TR(0x698160);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698163:{NFSU2_TR(0x698163);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69816c;}}
}
B698165:L698165:{c.instructions+=2;NFSU2_TR(0x698165);
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
B698167:{NFSU2_TR(0x698167);
{goto L6982ae;}
}
B69816c:L69816c:{c.instructions+=6;NFSU2_TR(0x69816c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69816f:{NFSU2_TR(0x69816f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B698173:{NFSU2_TR(0x698173);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B698176:{NFSU2_TR(0x698176);
__builtin_memmove((R+8),(R+4),4);
}
B698178:{NFSU2_TR(0x698178);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69817b:{NFSU2_TR(0x69817b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69817d:L69817d:{c.instructions+=1;NFSU2_TR(0x69817d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69817f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69817du);}goto L69817d;}
}
B69817f:L69817f:{c.instructions+=2;NFSU2_TR(0x69817f);
__builtin_memmove((R+4),(R+8),4);
}
B698181:{NFSU2_TR(0x698181);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B698184:L698184:{c.instructions+=1;NFSU2_TR(0x698184);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L698186;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698184u);}goto L698184;}
}
B698186:L698186:{c.instructions+=6;NFSU2_TR(0x698186);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698189:{NFSU2_TR(0x698189);
__builtin_memmove((R+0),(R+24),4);
}
B69818b:{NFSU2_TR(0x69818b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69818e:{NFSU2_TR(0x69818e);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B698192:{NFSU2_TR(0x698192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698195:{NFSU2_TR(0x698195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6982a8;}}
}
B69819b:L69819b:{c.instructions+=2;NFSU2_TR(0x69819b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69819f:{NFSU2_TR(0x69819f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6981c2;}}
}
B6981a1:L6981a1:{c.instructions+=2;NFSU2_TR(0x6981a1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6981a3:{NFSU2_TR(0x6981a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6981a8ull));
TAIL_STATIC(0x575620u,575);
}
B6981a8:L6981a8:{c.instructions+=4;NFSU2_TR(0x6981a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6981aa:{NFSU2_TR(0x6981aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6981ab:{NFSU2_TR(0x6981ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6981ae:{NFSU2_TR(0x6981ae);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698165u);}goto L698165;}}
}
B6981b0:L6981b0:{c.instructions+=8;NFSU2_TR(0x6981b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6981b3:{NFSU2_TR(0x6981b3);
__builtin_memmove((R+28),(R+0),4);
}
B6981b5:{NFSU2_TR(0x6981b5);
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
B6981b6:{NFSU2_TR(0x6981b6);
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
B6981b7:{NFSU2_TR(0x6981b7);
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
B6981b8:{NFSU2_TR(0x6981b8);
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
B6981b9:{NFSU2_TR(0x6981b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6981bc:{NFSU2_TR(0x6981bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6981c2:L6981c2:{c.instructions+=9;NFSU2_TR(0x6981c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6981c4:{NFSU2_TR(0x6981c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6981c8:{NFSU2_TR(0x6981c8);
u8 U[18];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+6,u32(s32(s16(r2(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(U+10,u32(s32(s16(r2(U+4)))));
w4(U+14,u32(u32(r4(U+6))*u32(r4(U+10))));
w2(R+0,u16(r4(U+14)));
}
B6981cd:{NFSU2_TR(0x6981cd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6981cf:{NFSU2_TR(0x6981cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6981d3:{NFSU2_TR(0x6981d3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6981d5:{NFSU2_TR(0x6981d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6981d8:{NFSU2_TR(0x6981d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6981d9:{NFSU2_TR(0x6981d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6981dc:L6981dc:{c.instructions+=1;NFSU2_TR(0x6981dc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6981de;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6981dcu);}goto L6981dc;}
}
B6981de:L6981de:{c.instructions+=13;NFSU2_TR(0x6981de);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6981e2:{NFSU2_TR(0x6981e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B6981e6:{NFSU2_TR(0x6981e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6981e8:{NFSU2_TR(0x6981e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6981ec:{NFSU2_TR(0x6981ec);
w4(R+0,u32(r2(R+0)));
}
B6981ef:{NFSU2_TR(0x6981ef);
w4(R+28,u32(r2(R+4)));
}
B6981f2:{NFSU2_TR(0x6981f2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6981f4:{NFSU2_TR(0x6981f4);
w4(R+0,u32(r2(R+8)));
}
B6981f7:{NFSU2_TR(0x6981f7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6981f9:{NFSU2_TR(0x6981f9);
w4(R+0,u32(r2(R+24)));
}
B6981fc:{NFSU2_TR(0x6981fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6981fe:{NFSU2_TR(0x6981fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B698202:{NFSU2_TR(0x698202);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69820d;}}
}
B698204:L698204:{c.instructions+=3;NFSU2_TR(0x698204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B698207:{NFSU2_TR(0x698207);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B698209:{NFSU2_TR(0x698209);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B69820d:L69820d:{c.instructions+=8;NFSU2_TR(0x69820d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B698211:{NFSU2_TR(0x698211);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698214:{NFSU2_TR(0x698214);
w1(R+512,u8((r2(R+0))!=(u16(0x0ull))));
w2(R+0,u16(0-u32(r2(R+0))));
}
B698217:{NFSU2_TR(0x698217);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B698219:{NFSU2_TR(0x698219);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B69821c:{NFSU2_TR(0x69821c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69821d:{NFSU2_TR(0x69821d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69821f:{NFSU2_TR(0x69821f);
if(r1(R+518)){{goto L698231;}}
}
B698221:L698221:{c.instructions+=5;NFSU2_TR(0x698221);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B698224:{NFSU2_TR(0x698224);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B698227:{NFSU2_TR(0x698227);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69822b:{NFSU2_TR(0x69822b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69822e:{NFSU2_TR(0x69822e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698231:L698231:{c.instructions+=7;NFSU2_TR(0x698231);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698234:{NFSU2_TR(0x698234);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B698237:{NFSU2_TR(0x698237);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B69823b:{NFSU2_TR(0x69823b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69823e:{NFSU2_TR(0x69823e);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698240:{NFSU2_TR(0x698240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B698243:{NFSU2_TR(0x698243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698248ull));
TAIL_STATIC(0x575620u,575);
}
B698248:L698248:{c.instructions+=3;NFSU2_TR(0x698248);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69824a:{NFSU2_TR(0x69824a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69824b:{NFSU2_TR(0x69824b);
if(r1(R+518)){{goto L698263;}}
}
B69824d:L69824d:{c.instructions+=8;NFSU2_TR(0x69824d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69824e:{NFSU2_TR(0x69824e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698251:{NFSU2_TR(0x698251);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698254:{NFSU2_TR(0x698254);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698257:{NFSU2_TR(0x698257);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698258:{NFSU2_TR(0x698258);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B69825a:{NFSU2_TR(0x69825a);
__builtin_memmove((R+4),(R+0),4);
}
B69825c:{NFSU2_TR(0x69825c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698261ull));
TAIL_STATIC(0x695233u,695);
}
B698261:L698261:{c.instructions+=1;NFSU2_TR(0x698261);
{goto L698265;}
}
B698263:L698263:{c.instructions+=1;NFSU2_TR(0x698263);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698265:L698265:{c.instructions+=5;NFSU2_TR(0x698265);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698267:{NFSU2_TR(0x698267);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69826a:{NFSU2_TR(0x69826a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69826d:{NFSU2_TR(0x69826d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B698270:{NFSU2_TR(0x698270);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698165u);}goto L698165;}}
}
B698276:L698276:{c.instructions+=3;NFSU2_TR(0x698276);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698279:{NFSU2_TR(0x698279);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69827c:{NFSU2_TR(0x69827c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698281ull));
TAIL_STATIC(0x697f96u,697);
}
B698281:L698281:{c.instructions+=2;NFSU2_TR(0x698281);
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
B698283:{NFSU2_TR(0x698283);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6982a5;}}
}
B698285:L698285:{c.instructions+=5;NFSU2_TR(0x698285);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698288:{NFSU2_TR(0x698288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69828b:{NFSU2_TR(0x69828b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69828e:{NFSU2_TR(0x69828e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698290:{NFSU2_TR(0x698290);
if(r1(R+518)){{goto L698299;}}
}
B698292:L698292:{c.instructions+=2;NFSU2_TR(0x698292);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698294:{NFSU2_TR(0x698294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698299ull));
TAIL_STATIC(0x6957fcu,695);
}
B698299:L698299:{c.instructions+=3;NFSU2_TR(0x698299);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69829c:{NFSU2_TR(0x69829c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6982a0:{NFSU2_TR(0x6982a0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698165u);}goto L698165;}
}
B6982a5:L6982a5:{c.instructions+=1;NFSU2_TR(0x6982a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6982a8:L6982a8:{c.instructions+=2;NFSU2_TR(0x6982a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6982ab:{NFSU2_TR(0x6982ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6982ae:L6982ae:{c.instructions+=1;NFSU2_TR(0x6982ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6982af:L6982af:{c.instructions+=4;NFSU2_TR(0x6982af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6982b0:{NFSU2_TR(0x6982b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6982b1:{NFSU2_TR(0x6982b1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6982b2:{NFSU2_TR(0x6982b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6982b5:L6982b5:{c.instructions+=10;NFSU2_TR(0x6982b5);
__builtin_memmove((R+0),(R+4),4);
}
B6982b7:{NFSU2_TR(0x6982b7);
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
B6982b9:{NFSU2_TR(0x6982b9);
u8 U[4];
w4(U+0,u32(0x7bab58ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6982bf:{NFSU2_TR(0x6982bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6982c6:{NFSU2_TR(0x6982c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6982c9:{NFSU2_TR(0x6982c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6982cc:{NFSU2_TR(0x6982cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6982cf:{NFSU2_TR(0x6982cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6982d2:{NFSU2_TR(0x6982d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6982d5:{NFSU2_TR(0x6982d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6982d6:L6982d6:{c.instructions+=8;NFSU2_TR(0x6982d6);
__builtin_memmove((R+28),(R+28),4);
}
B6982d8:{NFSU2_TR(0x6982d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6982d9:{NFSU2_TR(0x6982d9);
__builtin_memmove((R+20),(R+16),4);
}
B6982db:{NFSU2_TR(0x6982db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6982de:{NFSU2_TR(0x6982de);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6982e2:{NFSU2_TR(0x6982e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6982e3:{NFSU2_TR(0x6982e3);
__builtin_memmove((R+12),(R+4),4);
}
B6982e5:{NFSU2_TR(0x6982e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6982f1;}}
}
B6982e7:L6982e7:{c.instructions+=2;NFSU2_TR(0x6982e7);
w4(R+0,u32(0x8876086cull));
}
B6982ec:{NFSU2_TR(0x6982ec);
{goto L6984d8;}
}
B6982f1:L6982f1:{c.instructions+=8;NFSU2_TR(0x6982f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6982f2:{NFSU2_TR(0x6982f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6982f5:{NFSU2_TR(0x6982f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6982f6:{NFSU2_TR(0x6982f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6982f9:{NFSU2_TR(0x6982f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6982fa:{NFSU2_TR(0x6982fa);
u8 U[4];
w4(U+0,u32(0x42415443ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6982ff:{NFSU2_TR(0x6982ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698302:{NFSU2_TR(0x698302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698307ull));
TAIL_STATIC(0x671db5u,671);
}
B698307:L698307:{c.instructions+=2;NFSU2_TR(0x698307);
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
B698309:{NFSU2_TR(0x698309);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6984d7;}}
}
B69830f:L69830f:{c.instructions+=2;NFSU2_TR(0x69830f);
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
B698312:{NFSU2_TR(0x698312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69831e;}}
}
B698314:L698314:{c.instructions+=2;NFSU2_TR(0x698314);
w4(R+0,u32(0x88760b59ull));
}
B698319:{NFSU2_TR(0x698319);
{goto L6984d7;}
}
B69831e:L69831e:{c.instructions+=2;NFSU2_TR(0x69831e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B698320:{NFSU2_TR(0x698320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698325ull));
TAIL_STATIC(0x575620u,575);
}
B698325:L698325:{c.instructions+=4;NFSU2_TR(0x698325);
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
B698327:{NFSU2_TR(0x698327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698328:{NFSU2_TR(0x698328);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69832b:{NFSU2_TR(0x69832b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698337;}}
}
B69832d:L69832d:{c.instructions+=2;NFSU2_TR(0x69832d);
w4(R+0,u32(0x8007000eull));
}
B698332:{NFSU2_TR(0x698332);
{goto L6984d7;}
}
B698337:L698337:{c.instructions+=6;NFSU2_TR(0x698337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B698339:{NFSU2_TR(0x698339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69833c:{NFSU2_TR(0x69833c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69833d:{NFSU2_TR(0x69833d);
__builtin_memmove((R+28),(R+0),4);
}
B69833f:{NFSU2_TR(0x69833f);
__builtin_memmove((R+0),(R+4),4);
}
B698341:{NFSU2_TR(0x698341);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B698344:L698344:{c.instructions+=1;NFSU2_TR(0x698344);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L698346;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698344u);}goto L698344;}
}
B698346:L698346:{c.instructions+=2;NFSU2_TR(0x698346);
__builtin_memmove((R+4),(R+0),4);
}
B698348:{NFSU2_TR(0x698348);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69834b:L69834b:{c.instructions+=1;NFSU2_TR(0x69834b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L69834d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69834bu);}goto L69834b;}
}
B69834d:L69834d:{c.instructions+=4;NFSU2_TR(0x69834d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698350:{NFSU2_TR(0x698350);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698353:{NFSU2_TR(0x698353);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x1cull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B698356:{NFSU2_TR(0x698356);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L698362;}}
}
B698358:L698358:{c.instructions+=2;NFSU2_TR(0x698358);
w4(R+0,u32(0x88760b59ull));
}
B69835d:{NFSU2_TR(0x69835d);
{goto L6984d6;}
}
B698362:L698362:{c.instructions+=4;NFSU2_TR(0x698362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698365:{NFSU2_TR(0x698365);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B698368:{NFSU2_TR(0x698368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698369:{NFSU2_TR(0x698369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69836eull));
TAIL_STATIC(0x575620u,575);
}
B69836e:L69836e:{c.instructions+=5;NFSU2_TR(0x69836e);
__builtin_memmove((R+28),(R+0),4);
}
B698370:{NFSU2_TR(0x698370);
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
B698372:{NFSU2_TR(0x698372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698373:{NFSU2_TR(0x698373);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698376:{NFSU2_TR(0x698376);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698382;}}
}
B698378:L698378:{c.instructions+=2;NFSU2_TR(0x698378);
w4(R+0,u32(0x8007000eull));
}
B69837d:{NFSU2_TR(0x69837d);
{goto L6984d6;}
}
B698382:L698382:{c.instructions+=6;NFSU2_TR(0x698382);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698385:{NFSU2_TR(0x698385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698388:{NFSU2_TR(0x698388);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69838b:{NFSU2_TR(0x69838b);
__builtin_memmove((R+8),(R+4),4);
}
B69838d:{NFSU2_TR(0x69838d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B698390:{NFSU2_TR(0x698390);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698392:L698392:{c.instructions+=1;NFSU2_TR(0x698392);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L698394;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698392u);}goto L698392;}
}
B698394:L698394:{c.instructions+=2;NFSU2_TR(0x698394);
__builtin_memmove((R+4),(R+8),4);
}
B698396:{NFSU2_TR(0x698396);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B698399:L698399:{c.instructions+=1;NFSU2_TR(0x698399);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L69839b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698399u);}goto L698399;}
}
B69839b:L69839b:{c.instructions+=9;NFSU2_TR(0x69839b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69839e:{NFSU2_TR(0x69839e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6983a1:{NFSU2_TR(0x6983a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6983a4:{NFSU2_TR(0x6983a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6983a7:{NFSU2_TR(0x6983a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6983aa:{NFSU2_TR(0x6983aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6983ad:{NFSU2_TR(0x6983ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6983b0:{NFSU2_TR(0x6983b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6983b3:{NFSU2_TR(0x6983b3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698358u);}goto L698358;}}
}
B6983b5:L6983b5:{c.instructions+=7;NFSU2_TR(0x6983b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6983b8:{NFSU2_TR(0x6983b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6983bc:{NFSU2_TR(0x6983bc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6983be:{NFSU2_TR(0x6983be);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6983c0:{NFSU2_TR(0x6983c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6983c3:{NFSU2_TR(0x6983c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6983c6:{NFSU2_TR(0x6983c6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L698432;}}
}
B6983c8:L6983c8:{c.instructions+=3;NFSU2_TR(0x6983c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6983cb:{NFSU2_TR(0x6983cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6983ce:{NFSU2_TR(0x6983ce);
{goto L6983d3;}
}
B6983d0:L6983d0:{c.instructions+=1;NFSU2_TR(0x6983d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6983d3:L6983d3:{c.instructions+=4;NFSU2_TR(0x6983d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6983d5:{NFSU2_TR(0x6983d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6983d8:{NFSU2_TR(0x6983d8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6983db:{NFSU2_TR(0x6983db);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698358u);}goto L698358;}}
}
B6983e1:L6983e1:{c.instructions+=8;NFSU2_TR(0x6983e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6983e4:{NFSU2_TR(0x6983e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6983e6:{NFSU2_TR(0x6983e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6983e8:{NFSU2_TR(0x6983e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6983e9:{NFSU2_TR(0x6983e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
}
B6983ec:{NFSU2_TR(0x6983ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6983ed:{NFSU2_TR(0x6983ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6983ee:{NFSU2_TR(0x6983ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6983f3ull));
TAIL_STATIC(0x697cfeu,697);
}
B6983f3:L6983f3:{c.instructions+=6;NFSU2_TR(0x6983f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6983f6:{NFSU2_TR(0x6983f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6983f9:{NFSU2_TR(0x6983f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6983fc:{NFSU2_TR(0x6983fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6983ff:{NFSU2_TR(0x6983ff);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B698402:{NFSU2_TR(0x698402);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698378u);}goto L698378;}}
}
B698408:L698408:{c.instructions+=15;NFSU2_TR(0x698408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69840a:{NFSU2_TR(0x69840a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B69840e:{NFSU2_TR(0x69840e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B698411:{NFSU2_TR(0x698411);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B698415:{NFSU2_TR(0x698415);
w1(R+512,u8((r2(R+4))!=(u16(0x0ull))));
w2(R+4,u16(0-u32(r2(R+4))));
}
B698418:{NFSU2_TR(0x698418);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69841a:{NFSU2_TR(0x69841a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69841d:{NFSU2_TR(0x69841d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x14ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698421:{NFSU2_TR(0x698421);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B698422:{NFSU2_TR(0x698422);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B698425:{NFSU2_TR(0x698425);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B698429:{NFSU2_TR(0x698429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B69842c:{NFSU2_TR(0x69842c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69842d:{NFSU2_TR(0x69842d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B698430:{NFSU2_TR(0x698430);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6983d0u);}goto L6983d0;}}
}
B698432:L698432:{c.instructions+=4;NFSU2_TR(0x698432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698435:{NFSU2_TR(0x698435);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B698438:{NFSU2_TR(0x698438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698439:{NFSU2_TR(0x698439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69843eull));
TAIL_STATIC(0x575620u,575);
}
B69843e:L69843e:{c.instructions+=5;NFSU2_TR(0x69843e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B698440:{NFSU2_TR(0x698440);
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
B698442:{NFSU2_TR(0x698442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698443:{NFSU2_TR(0x698443);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698446:{NFSU2_TR(0x698446);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698378u);}goto L698378;}}
}
B69844c:L69844c:{c.instructions+=3;NFSU2_TR(0x69844c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69844f:{NFSU2_TR(0x69844f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698452:{NFSU2_TR(0x698452);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L698496;}}
}
B698454:L698454:{c.instructions+=1;NFSU2_TR(0x698454);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698457:L698457:{c.instructions+=6;NFSU2_TR(0x698457);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69845a:{NFSU2_TR(0x69845a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69845d:{NFSU2_TR(0x69845d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B698460:{NFSU2_TR(0x698460);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B698463:{NFSU2_TR(0x698463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698464:{NFSU2_TR(0x698464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698469ull));
TAIL_STATIC(0x695332u,695);
}
B698469:L698469:{c.instructions+=15;NFSU2_TR(0x698469);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69846c:{NFSU2_TR(0x69846c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69846f:{NFSU2_TR(0x69846f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B698473:{NFSU2_TR(0x698473);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698476:{NFSU2_TR(0x698476);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B69847a:{NFSU2_TR(0x69847a);
w1(R+512,u8((r2(R+8))!=(u16(0x0ull))));
w2(R+8,u16(0-u32(r2(R+8))));
}
B69847d:{NFSU2_TR(0x69847d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69847f:{NFSU2_TR(0x69847f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B698482:{NFSU2_TR(0x698482);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B698483:{NFSU2_TR(0x698483);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B698486:{NFSU2_TR(0x698486);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69848a:{NFSU2_TR(0x69848a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B69848d:{NFSU2_TR(0x69848d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69848e:{NFSU2_TR(0x69848e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B698491:{NFSU2_TR(0x698491);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698457u);}goto L698457;}}
}
B698493:L698493:{c.instructions+=1;NFSU2_TR(0x698493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698496:L698496:{c.instructions+=3;NFSU2_TR(0x698496);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B698498:{NFSU2_TR(0x698498);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69849b:{NFSU2_TR(0x69849b);
if(r1(R+518)){{goto L6984d4;}}
}
B69849d:L69849d:{c.instructions+=2;NFSU2_TR(0x69849d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6984a0:{NFSU2_TR(0x6984a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6984c4;}}
}
B6984a2:L6984a2:{c.instructions+=2;NFSU2_TR(0x6984a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6984a5:{NFSU2_TR(0x6984a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6984a8:L6984a8:{c.instructions+=2;NFSU2_TR(0x6984a8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6984ad:{NFSU2_TR(0x6984ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6984be;}}
}
B6984af:L6984af:{c.instructions+=5;NFSU2_TR(0x6984af);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6984b3:{NFSU2_TR(0x6984b3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B6984b6:{NFSU2_TR(0x6984b6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6984b8:{NFSU2_TR(0x6984b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6984ba:{NFSU2_TR(0x6984ba);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6984be;}}
}
B6984bc:L6984bc:{c.instructions+=1;NFSU2_TR(0x6984bc);
__builtin_memmove((R+4),(R+8),4);
}
B6984be:L6984be:{c.instructions+=3;NFSU2_TR(0x6984be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B6984c1:{NFSU2_TR(0x6984c1);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6984c2:{NFSU2_TR(0x6984c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6984a8u);}goto L6984a8;}}
}
B6984c4:L6984c4:{c.instructions+=4;NFSU2_TR(0x6984c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6984c7:{NFSU2_TR(0x6984c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6984ca:{NFSU2_TR(0x6984ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6984cb:{NFSU2_TR(0x6984cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6984d0ull));
TAIL_STATIC(0x670f08u,670);
}
B6984d0:L6984d0:{c.instructions+=2;NFSU2_TR(0x6984d0);
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
B6984d2:{NFSU2_TR(0x6984d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6984d6;}}
}
B6984d4:L6984d4:{c.instructions+=1;NFSU2_TR(0x6984d4);
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
B6984d6:L6984d6:{c.instructions+=1;NFSU2_TR(0x6984d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6984d7:L6984d7:{c.instructions+=1;NFSU2_TR(0x6984d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6984d8:L6984d8:{c.instructions+=3;NFSU2_TR(0x6984d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6984d9:{NFSU2_TR(0x6984d9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6984da:{NFSU2_TR(0x6984da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6984dd:L6984dd:{c.instructions+=10;NFSU2_TR(0x6984dd);
__builtin_memmove((R+28),(R+28),4);
}
B6984df:{NFSU2_TR(0x6984df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6984e0:{NFSU2_TR(0x6984e0);
__builtin_memmove((R+20),(R+16),4);
}
B6984e2:{NFSU2_TR(0x6984e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6984e5:{NFSU2_TR(0x6984e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6984e8:{NFSU2_TR(0x6984e8);
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
B6984eb:{NFSU2_TR(0x6984eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6984ec:{NFSU2_TR(0x6984ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6984ef:{NFSU2_TR(0x6984ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6984f2:{NFSU2_TR(0x6984f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6984fa;}}
}
B6984f4:L6984f4:{c.instructions+=2;NFSU2_TR(0x6984f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6984f5:{NFSU2_TR(0x6984f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6984faull));
TAIL_STATIC(0x672256u,672);
}
B6984fa:L6984fa:{c.instructions+=4;NFSU2_TR(0x6984fa);
__builtin_memmove((R+0),(R+24),4);
}
B6984fc:{NFSU2_TR(0x6984fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6984fd:{NFSU2_TR(0x6984fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6984fe:{NFSU2_TR(0x6984fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698501:L698501:{c.instructions+=10;NFSU2_TR(0x698501);
__builtin_memmove((R+28),(R+28),4);
}
B698503:{NFSU2_TR(0x698503);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698504:{NFSU2_TR(0x698504);
__builtin_memmove((R+20),(R+16),4);
}
B698506:{NFSU2_TR(0x698506);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698507:{NFSU2_TR(0x698507);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698508:{NFSU2_TR(0x698508);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698509:{NFSU2_TR(0x698509);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69850c:{NFSU2_TR(0x69850c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69850d:{NFSU2_TR(0x69850d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698510:{NFSU2_TR(0x698510);
{goto L698513;}
}
B698512:L698512:{c.instructions+=1;NFSU2_TR(0x698512);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698513:L698513:{c.instructions+=3;NFSU2_TR(0x698513);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698516:{NFSU2_TR(0x698516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698517:{NFSU2_TR(0x698517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69851cull));
TAIL_STATIC(0x75dfb2u,75d);
}
B69851c:L69851c:{c.instructions+=3;NFSU2_TR(0x69851c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69851e:{NFSU2_TR(0x69851e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69851f:{NFSU2_TR(0x69851f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698512u);}goto L698512;}}
}
B698521:L698521:{c.instructions+=4;NFSU2_TR(0x698521);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B698523:{NFSU2_TR(0x698523);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B698525:{NFSU2_TR(0x698525);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B698527:{NFSU2_TR(0x698527);
if(r1(R+518)){{goto L698641;}}
}
B69852d:L69852d:{c.instructions+=2;NFSU2_TR(0x69852d);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x5bull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69852f:{NFSU2_TR(0x69852f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6985a3;}}
}
B698531:L698531:{c.instructions+=4;NFSU2_TR(0x698531);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698532:{NFSU2_TR(0x698532);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698535:{NFSU2_TR(0x698535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698536:{NFSU2_TR(0x698536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69853bull));
TAIL_STATIC(0x75dfb2u,75d);
}
B69853b:L69853b:{c.instructions+=3;NFSU2_TR(0x69853b);
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
B69853d:{NFSU2_TR(0x69853d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69853e:{NFSU2_TR(0x69853e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698531u);}goto L698531;}}
}
B698540:L698540:{c.instructions+=3;NFSU2_TR(0x698540);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698543:{NFSU2_TR(0x698543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698544:{NFSU2_TR(0x698544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698549ull));
TAIL_STATIC(0x75df39u,75d);
}
B698549:L698549:{c.instructions+=3;NFSU2_TR(0x698549);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69854b:{NFSU2_TR(0x69854b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69854c:{NFSU2_TR(0x69854c);
if(r1(R+518)){{goto L698646;}}
}
B698552:L698552:{c.instructions+=2;NFSU2_TR(0x698552);
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
B698554:{NFSU2_TR(0x698554);
{goto L698561;}
}
B698556:L698556:{c.instructions+=4;NFSU2_TR(0x698556);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B698559:{NFSU2_TR(0x698559);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69855c:{NFSU2_TR(0x69855c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B698560:{NFSU2_TR(0x698560);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698561:L698561:{c.instructions+=3;NFSU2_TR(0x698561);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698564:{NFSU2_TR(0x698564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698565:{NFSU2_TR(0x698565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69856aull));
TAIL_STATIC(0x75df39u,75d);
}
B69856a:L69856a:{c.instructions+=3;NFSU2_TR(0x69856a);
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
B69856c:{NFSU2_TR(0x69856c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69856d:{NFSU2_TR(0x69856d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698556u);}goto L698556;}}
}
B69856f:L69856f:{c.instructions+=1;NFSU2_TR(0x69856f);
{goto L698572;}
}
B698571:L698571:{c.instructions+=1;NFSU2_TR(0x698571);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698572:L698572:{c.instructions+=3;NFSU2_TR(0x698572);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698575:{NFSU2_TR(0x698575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698576:{NFSU2_TR(0x698576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69857bull));
TAIL_STATIC(0x75dfb2u,75d);
}
B69857b:L69857b:{c.instructions+=3;NFSU2_TR(0x69857b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69857d:{NFSU2_TR(0x69857d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69857e:{NFSU2_TR(0x69857e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698571u);}goto L698571;}}
}
B698580:L698580:{c.instructions+=2;NFSU2_TR(0x698580);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B698583:{NFSU2_TR(0x698583);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698646;}}
}
B698589:L698589:{c.instructions+=3;NFSU2_TR(0x698589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69858c:{NFSU2_TR(0x69858c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69858d:{NFSU2_TR(0x69858d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698592ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69811au);}goto L69811a;}
}
B698592:L698592:{c.instructions+=2;NFSU2_TR(0x698592);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B698594:{NFSU2_TR(0x698594);
if(r1(R+518)){{goto L698646;}}
}
B69859a:L69859a:{c.instructions+=3;NFSU2_TR(0x69859a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69859d:{NFSU2_TR(0x69859d);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69859e:{NFSU2_TR(0x69859e);
{goto L698639;}
}
B6985a3:L6985a3:{c.instructions+=2;NFSU2_TR(0x6985a3);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x2eull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6985a5:{NFSU2_TR(0x6985a5);
if(r1(R+518)){{goto L6985b4;}}
}
B6985a7:L6985a7:{c.instructions+=2;NFSU2_TR(0x6985a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6985aa:{NFSU2_TR(0x6985aa);
if(r1(R+518)){{goto L698646;}}
}
B6985b0:L6985b0:{c.instructions+=2;NFSU2_TR(0x6985b0);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2eull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2eull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6985b2:{NFSU2_TR(0x6985b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6985b5;}}
}
B6985b4:L6985b4:{c.instructions+=1;NFSU2_TR(0x6985b4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6985b5:L6985b5:{c.instructions+=3;NFSU2_TR(0x6985b5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6985b8:{NFSU2_TR(0x6985b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6985b9:{NFSU2_TR(0x6985b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6985beull));
TAIL_STATIC(0x75dfb2u,75d);
}
B6985be:L6985be:{c.instructions+=3;NFSU2_TR(0x6985be);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6985c0:{NFSU2_TR(0x6985c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6985c1:{NFSU2_TR(0x6985c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6985b4u);}goto L6985b4;}}
}
B6985c3:L6985c3:{c.instructions+=1;NFSU2_TR(0x6985c3);
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
B6985c5:L6985c5:{c.instructions+=3;NFSU2_TR(0x6985c5);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B6985c9:{NFSU2_TR(0x6985c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6985ca:{NFSU2_TR(0x6985ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6985cfull));
TAIL_STATIC(0x75dfecu,75d);
}
B6985cf:L6985cf:{c.instructions+=3;NFSU2_TR(0x6985cf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6985d1:{NFSU2_TR(0x6985d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6985d2:{NFSU2_TR(0x6985d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6985da;}}
}
B6985d4:L6985d4:{c.instructions+=2;NFSU2_TR(0x6985d4);
u8 U[11];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(R+512,u8((r1(U+9))<(u8(0x5full))));
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6985d8:{NFSU2_TR(0x6985d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6985dd;}}
}
B6985da:L6985da:{c.instructions+=2;NFSU2_TR(0x6985da);
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
B6985db:{NFSU2_TR(0x6985db);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6985c5u);}goto L6985c5;}
}
B6985dd:L6985dd:{c.instructions+=2;NFSU2_TR(0x6985dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6985df:{NFSU2_TR(0x6985df);
if(r1(R+518)){{goto L698646;}}
}
B6985e1:L6985e1:{c.instructions+=5;NFSU2_TR(0x6985e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6985e4:{NFSU2_TR(0x6985e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6985e7:{NFSU2_TR(0x6985e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6985eb:{NFSU2_TR(0x6985eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6985ee:{NFSU2_TR(0x6985ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6985f1:L6985f1:{c.instructions+=3;NFSU2_TR(0x6985f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6985f4:{NFSU2_TR(0x6985f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6985f7:{NFSU2_TR(0x6985f7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L698646;}}
}
B6985f9:L6985f9:{c.instructions+=6;NFSU2_TR(0x6985f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6985fc:{NFSU2_TR(0x6985fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6985ff:{NFSU2_TR(0x6985ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B698602:{NFSU2_TR(0x698602);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698605:{NFSU2_TR(0x698605);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698607:{NFSU2_TR(0x698607);
if(r1(R+518)){{goto L69861c;}}
}
B698609:L698609:{c.instructions+=6;NFSU2_TR(0x698609);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69860b:{NFSU2_TR(0x69860b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69860e:{NFSU2_TR(0x69860e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B698610:{NFSU2_TR(0x698610);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698611:{NFSU2_TR(0x698611);
__builtin_memmove((R+0),(R+24),4);
}
B698613:{NFSU2_TR(0x698613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698618ull));
TAIL_STATIC(0x6951f2u,695);
}
B698618:L698618:{c.instructions+=2;NFSU2_TR(0x698618);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69861a:{NFSU2_TR(0x69861a);
if(r1(R+518)){{goto L698624;}}
}
B69861c:L69861c:{c.instructions+=3;NFSU2_TR(0x69861c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69861f:{NFSU2_TR(0x69861f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698622:{NFSU2_TR(0x698622);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6985f1u);}goto L6985f1;}
}
B698624:L698624:{c.instructions+=3;NFSU2_TR(0x698624);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698627:{NFSU2_TR(0x698627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69862a:{NFSU2_TR(0x69862a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69862full));
TAIL_STATIC(0x695441u,695);
}
B69862f:L69862f:{c.instructions+=2;NFSU2_TR(0x69862f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698631:{NFSU2_TR(0x698631);
if(r1(R+518)){{goto L698646;}}
}
B698633:L698633:{c.instructions+=2;NFSU2_TR(0x698633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698637:{NFSU2_TR(0x698637);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698639:L698639:{c.instructions+=2;NFSU2_TR(0x698639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69863c:{NFSU2_TR(0x69863c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698513u);}goto L698513;}
}
B698641:L698641:{c.instructions+=2;NFSU2_TR(0x698641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698644:{NFSU2_TR(0x698644);
{goto L698648;}
}
B698646:L698646:{c.instructions+=1;NFSU2_TR(0x698646);
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
B698648:L698648:{c.instructions+=5;NFSU2_TR(0x698648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B698649:{NFSU2_TR(0x698649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69864a:{NFSU2_TR(0x69864a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69864b:{NFSU2_TR(0x69864b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69864c:{NFSU2_TR(0x69864c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69864f:L69864f:{c.instructions+=11;NFSU2_TR(0x69864f);
__builtin_memmove((R+28),(R+28),4);
}
B698651:{NFSU2_TR(0x698651);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698652:{NFSU2_TR(0x698652);
__builtin_memmove((R+20),(R+16),4);
}
B698654:{NFSU2_TR(0x698654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B698657:{NFSU2_TR(0x698657);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698658:{NFSU2_TR(0x698658);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698659:{NFSU2_TR(0x698659);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69865c:{NFSU2_TR(0x69865c);
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
B69865e:{NFSU2_TR(0x69865e);
__builtin_memmove((R+12),(R+4),4);
}
B698660:{NFSU2_TR(0x698660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698663:{NFSU2_TR(0x698663);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698673;}}
}
B698665:L698665:{c.instructions+=5;NFSU2_TR(0x698665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698668:{NFSU2_TR(0x698668);
w4(R+28,u32(0-u32(r4(R+28))));
}
B69866a:{NFSU2_TR(0x69866a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69866c:{NFSU2_TR(0x69866c);
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
B69866e:{NFSU2_TR(0x69866e);
{goto L698850;}
}
B698673:L698673:{c.instructions+=4;NFSU2_TR(0x698673);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698676:{NFSU2_TR(0x698676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698677:{NFSU2_TR(0x698677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69867a:{NFSU2_TR(0x69867a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69867full));
TAIL_STATIC(0x75dfb2u,75d);
}
B69867f:L69867f:{c.instructions+=3;NFSU2_TR(0x69867f);
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
B698681:{NFSU2_TR(0x698681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698682:{NFSU2_TR(0x698682);
if(r1(R+518)){{goto L698696;}}
}
B698684:L698684:{c.instructions+=4;NFSU2_TR(0x698684);
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
B698685:{NFSU2_TR(0x698685);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698688:{NFSU2_TR(0x698688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698689:{NFSU2_TR(0x698689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69868eull));
TAIL_STATIC(0x75dfb2u,75d);
}
B69868e:L69868e:{c.instructions+=3;NFSU2_TR(0x69868e);
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
B698690:{NFSU2_TR(0x698690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698691:{NFSU2_TR(0x698691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698684u);}goto L698684;}}
}
B698693:L698693:{c.instructions+=1;NFSU2_TR(0x698693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698696:L698696:{c.instructions+=3;NFSU2_TR(0x698696);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B698699:{NFSU2_TR(0x698699);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69869a:{NFSU2_TR(0x69869a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69869full));
TAIL_STATIC(0x75dfecu,75d);
}
B69869f:L69869f:{c.instructions+=3;NFSU2_TR(0x69869f);
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
B6986a1:{NFSU2_TR(0x6986a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6986a2:{NFSU2_TR(0x6986a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6986b8;}}
}
B6986a4:L6986a4:{c.instructions+=3;NFSU2_TR(0x6986a4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6986a6:{NFSU2_TR(0x6986a6);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6986a8:{NFSU2_TR(0x6986a8);
if(r1(R+518)){{goto L6986b8;}}
}
B6986aa:L6986aa:{c.instructions+=2;NFSU2_TR(0x6986aa);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x24ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x24ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x24ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6986ac:{NFSU2_TR(0x6986ac);
if(r1(R+518)){{goto L6986b8;}}
}
B6986ae:L6986ae:{c.instructions+=2;NFSU2_TR(0x6986ae);
w4(R+0,u32(0x8876086cull));
}
B6986b3:{NFSU2_TR(0x6986b3);
{goto L698850;}
}
B6986b8:L6986b8:{c.instructions+=2;NFSU2_TR(0x6986b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6986bf:{NFSU2_TR(0x6986bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6986c0:L6986c0:{c.instructions+=5;NFSU2_TR(0x6986c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6986c3:{NFSU2_TR(0x6986c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6986c6:{NFSU2_TR(0x6986c6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6986c9:{NFSU2_TR(0x6986c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6986ca:{NFSU2_TR(0x6986ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6986cfull));
TAIL_STATIC(0x75dfecu,75d);
}
B6986cf:L6986cf:{c.instructions+=3;NFSU2_TR(0x6986cf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6986d1:{NFSU2_TR(0x6986d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6986d2:{NFSU2_TR(0x6986d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6986d9;}}
}
B6986d4:L6986d4:{c.instructions+=2;NFSU2_TR(0x6986d4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(U+1))<(u8(0x5full))));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6986d7:{NFSU2_TR(0x6986d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6986de;}}
}
B6986d9:L6986d9:{c.instructions+=2;NFSU2_TR(0x6986d9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B6986dc:{NFSU2_TR(0x6986dc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6986c0u);}goto L6986c0;}
}
B6986de:L6986de:{c.instructions+=10;NFSU2_TR(0x6986de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6986e1:{NFSU2_TR(0x6986e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6986e4:{NFSU2_TR(0x6986e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6986e7:{NFSU2_TR(0x6986e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6986ea:{NFSU2_TR(0x6986ea);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6986ec:{NFSU2_TR(0x6986ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6986ef:{NFSU2_TR(0x6986ef);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6986f1:{NFSU2_TR(0x6986f1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6986f3:{NFSU2_TR(0x6986f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6986f6:{NFSU2_TR(0x6986f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L698736;}}
}
B6986f8:L6986f8:{c.instructions+=11;NFSU2_TR(0x6986f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6986fb:{NFSU2_TR(0x6986fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6986fe:{NFSU2_TR(0x6986fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698701:{NFSU2_TR(0x698701);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B698704:{NFSU2_TR(0x698704);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B698706:{NFSU2_TR(0x698706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B698709:{NFSU2_TR(0x698709);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69870c:{NFSU2_TR(0x69870c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69870f:{NFSU2_TR(0x69870f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B698712:{NFSU2_TR(0x698712);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698715:{NFSU2_TR(0x698715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69871aull));
TAIL_STATIC(0x6951f2u,695);
}
B69871a:L69871a:{c.instructions+=2;NFSU2_TR(0x69871a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69871c:{NFSU2_TR(0x69871c);
if(r1(R+518)){{goto L698733;}}
}
B69871e:L69871e:{c.instructions+=1;NFSU2_TR(0x69871e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698728;}}
}
B698720:L698720:{c.instructions+=3;NFSU2_TR(0x698720);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698723:{NFSU2_TR(0x698723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698726:{NFSU2_TR(0x698726);
{goto L69872b;}
}
B698728:L698728:{c.instructions+=1;NFSU2_TR(0x698728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69872b:L69872b:{c.instructions+=3;NFSU2_TR(0x69872b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69872e:{NFSU2_TR(0x69872e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B698731:{NFSU2_TR(0x698731);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6986f8u);}goto L6986f8;}}
}
B698733:L698733:{c.instructions+=1;NFSU2_TR(0x698733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B698736:L698736:{c.instructions+=3;NFSU2_TR(0x698736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698739:{NFSU2_TR(0x698739);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69873c:{NFSU2_TR(0x69873c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698748;}}
}
B69873e:L69873e:{c.instructions+=2;NFSU2_TR(0x69873e);
w4(R+0,u32(0x8876086cull));
}
B698743:{NFSU2_TR(0x698743);
{goto L69884f;}
}
B698748:L698748:{c.instructions+=7;NFSU2_TR(0x698748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69874b:{NFSU2_TR(0x69874b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69874e:{NFSU2_TR(0x69874e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B698750:{NFSU2_TR(0x698750);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B698753:{NFSU2_TR(0x698753);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698755:{NFSU2_TR(0x698755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698758:{NFSU2_TR(0x698758);
if(r1(R+518)){{goto L6987b7;}}
}
B69875a:L69875a:{c.instructions+=2;NFSU2_TR(0x69875a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
}
B69875d:{NFSU2_TR(0x69875d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698760:L698760:{c.instructions+=4;NFSU2_TR(0x698760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698762:{NFSU2_TR(0x698762);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B698765:{NFSU2_TR(0x698765);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B698767:{NFSU2_TR(0x698767);
if(r1(R+518)){{goto L6987a9;}}
}
B698769:L698769:{c.instructions+=2;NFSU2_TR(0x698769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69876c:{NFSU2_TR(0x69876c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69876f:L69876f:{c.instructions+=6;NFSU2_TR(0x69876f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698772:{NFSU2_TR(0x698772);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B698774:{NFSU2_TR(0x698774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B698777:{NFSU2_TR(0x698777);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B69877a:{NFSU2_TR(0x69877a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B69877c:{NFSU2_TR(0x69877c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6987a0;}}
}
B69877e:L69877e:{c.instructions+=2;NFSU2_TR(0x69877e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B698780:{NFSU2_TR(0x698780);
if(r1(R+518)){{goto L69879c;}}
}
B698782:L698782:{c.instructions+=5;NFSU2_TR(0x698782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698785:{NFSU2_TR(0x698785);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B698788:{NFSU2_TR(0x698788);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B69878b:{NFSU2_TR(0x69878b);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B69878e:{NFSU2_TR(0x69878e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6987a0;}}
}
B698790:L698790:{c.instructions+=4;NFSU2_TR(0x698790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698794:{NFSU2_TR(0x698794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698798:{NFSU2_TR(0x698798);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69879a:{NFSU2_TR(0x69879a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69876fu);}goto L69876f;}}
}
B69879c:L69879c:{c.instructions+=2;NFSU2_TR(0x69879c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69879e:{NFSU2_TR(0x69879e);
{goto L6987a5;}
}
B6987a0:L6987a0:{c.instructions+=2;NFSU2_TR(0x6987a0);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6987a2:{NFSU2_TR(0x6987a2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6987a5:L6987a5:{c.instructions+=2;NFSU2_TR(0x6987a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6987a7:{NFSU2_TR(0x6987a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6987b7;}}
}
B6987a9:L6987a9:{c.instructions+=6;NFSU2_TR(0x6987a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6987ac:{NFSU2_TR(0x6987ac);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6987ad:{NFSU2_TR(0x6987ad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x14ull))));
}
B6987b0:{NFSU2_TR(0x6987b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6987b2:{NFSU2_TR(0x6987b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6987b5:{NFSU2_TR(0x6987b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698760u);}goto L698760;}}
}
B6987b7:L6987b7:{c.instructions+=9;NFSU2_TR(0x6987b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6987ba:{NFSU2_TR(0x6987ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6987bd:{NFSU2_TR(0x6987bd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6987bf:{NFSU2_TR(0x6987bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6987c1:{NFSU2_TR(0x6987c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6987c4:{NFSU2_TR(0x6987c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6987c5:{NFSU2_TR(0x6987c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6987c8:{NFSU2_TR(0x6987c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6987cb:{NFSU2_TR(0x6987cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6987d0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698501u);}goto L698501;}
}
B6987d0:L6987d0:{c.instructions+=2;NFSU2_TR(0x6987d0);
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
B6987d2:{NFSU2_TR(0x6987d2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69873eu);}goto L69873e;}}
}
B6987d8:L6987d8:{c.instructions+=3;NFSU2_TR(0x6987d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6987db:{NFSU2_TR(0x6987db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6987de:{NFSU2_TR(0x6987de);
{goto L6987e3;}
}
B6987e0:L6987e0:{c.instructions+=1;NFSU2_TR(0x6987e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6987e3:L6987e3:{c.instructions+=10;NFSU2_TR(0x6987e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6987e6:{NFSU2_TR(0x6987e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6987e8:{NFSU2_TR(0x6987e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B6987eb:{NFSU2_TR(0x6987eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6987ee:{NFSU2_TR(0x6987ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6987f1:{NFSU2_TR(0x6987f1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6987f2:{NFSU2_TR(0x6987f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B6987f5:{NFSU2_TR(0x6987f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6987f8:{NFSU2_TR(0x6987f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6987fb:{NFSU2_TR(0x6987fb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69884d;}}
}
B6987fd:L6987fd:{c.instructions+=5;NFSU2_TR(0x6987fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6987ff:{NFSU2_TR(0x6987ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B698802:{NFSU2_TR(0x698802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B698805:{NFSU2_TR(0x698805);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B698807:{NFSU2_TR(0x698807);
if(r1(R+518)){{goto L698834;}}
}
B698809:L698809:{c.instructions+=4;NFSU2_TR(0x698809);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B69880b:{NFSU2_TR(0x69880b);
__builtin_memmove((R+4),(R+8),1);
}
B69880d:{NFSU2_TR(0x69880d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B69880f:{NFSU2_TR(0x69880f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69882b;}}
}
B698811:L698811:{c.instructions+=2;NFSU2_TR(0x698811);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B698813:{NFSU2_TR(0x698813);
if(r1(R+518)){{goto L698827;}}
}
B698815:L698815:{c.instructions+=4;NFSU2_TR(0x698815);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B698818:{NFSU2_TR(0x698818);
__builtin_memmove((R+4),(R+8),1);
}
B69881a:{NFSU2_TR(0x69881a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B69881d:{NFSU2_TR(0x69881d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69882b;}}
}
B69881f:L69881f:{c.instructions+=6;NFSU2_TR(0x69881f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B698820:{NFSU2_TR(0x698820);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B698821:{NFSU2_TR(0x698821);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B698822:{NFSU2_TR(0x698822);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B698823:{NFSU2_TR(0x698823);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B698825:{NFSU2_TR(0x698825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698809u);}goto L698809;}}
}
B698827:L698827:{c.instructions+=2;NFSU2_TR(0x698827);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698829:{NFSU2_TR(0x698829);
{goto L698830;}
}
B69882b:L69882b:{c.instructions+=2;NFSU2_TR(0x69882b);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69882d:{NFSU2_TR(0x69882d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B698830:L698830:{c.instructions+=2;NFSU2_TR(0x698830);
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
B698832:{NFSU2_TR(0x698832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69884d;}}
}
B698834:L698834:{c.instructions+=5;NFSU2_TR(0x698834);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698837:{NFSU2_TR(0x698837);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69883a:{NFSU2_TR(0x69883a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69883c:{NFSU2_TR(0x69883c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69883f:{NFSU2_TR(0x69883f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698844ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698501u);}goto L698501;}
}
B698844:L698844:{c.instructions+=2;NFSU2_TR(0x698844);
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
B698846:{NFSU2_TR(0x698846);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6987e0u);}goto L6987e0;}}
}
B698848:L698848:{c.instructions+=1;NFSU2_TR(0x698848);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69873eu);}goto L69873e;}
}
B69884d:L69884d:{c.instructions+=1;NFSU2_TR(0x69884d);
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
B69884f:L69884f:{c.instructions+=1;NFSU2_TR(0x69884f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698850:L698850:{c.instructions+=4;NFSU2_TR(0x698850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B698851:{NFSU2_TR(0x698851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B698852:{NFSU2_TR(0x698852);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B698853:{NFSU2_TR(0x698853);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698856:L698856:{c.instructions+=9;NFSU2_TR(0x698856);
__builtin_memmove((R+28),(R+28),4);
}
B698858:{NFSU2_TR(0x698858);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698859:{NFSU2_TR(0x698859);
__builtin_memmove((R+20),(R+16),4);
}
B69885b:{NFSU2_TR(0x69885b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69885c:{NFSU2_TR(0x69885c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69885f:{NFSU2_TR(0x69885f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698861:{NFSU2_TR(0x698861);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698862:{NFSU2_TR(0x698862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B698865:{NFSU2_TR(0x698865);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698872;}}
}
B698867:L698867:{c.instructions+=2;NFSU2_TR(0x698867);
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
B698869:{NFSU2_TR(0x698869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698872;}}
}
B69886b:L69886b:{c.instructions+=2;NFSU2_TR(0x69886b);
w4(R+0,u32(0x8876086cull));
}
B698870:{NFSU2_TR(0x698870);
{goto L6988db;}
}
B698872:L698872:{c.instructions+=3;NFSU2_TR(0x698872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698875:{NFSU2_TR(0x698875);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698877:{NFSU2_TR(0x698877);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L69887d;}}
}
B698879:L698879:{c.instructions+=2;NFSU2_TR(0x698879);
w4(R+4,u32(0-u32(r4(R+4))));
}
B69887b:{NFSU2_TR(0x69887b);
{goto L698891;}
}
B69887d:L69887d:{c.instructions+=5;NFSU2_TR(0x69887d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698880:{NFSU2_TR(0x698880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698881:{NFSU2_TR(0x698881);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698882:{NFSU2_TR(0x698882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698885:{NFSU2_TR(0x698885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69888aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B69888a:L69888a:{c.instructions+=2;NFSU2_TR(0x69888a);
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
B69888c:{NFSU2_TR(0x69888c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6988db;}}
}
B69888e:L69888e:{c.instructions+=1;NFSU2_TR(0x69888e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698891:L698891:{c.instructions+=7;NFSU2_TR(0x698891);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698892:{NFSU2_TR(0x698892);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B698894:{NFSU2_TR(0x698894);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B698896:{NFSU2_TR(0x698896);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B698897:{NFSU2_TR(0x698897);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698899:{NFSU2_TR(0x698899);
__builtin_memmove((R+0),(R+4),4);
}
B69889b:{NFSU2_TR(0x69889b);
if(r1(R+518)){{goto L6988a5;}}
}
B69889d:L69889d:{c.instructions+=4;NFSU2_TR(0x69889d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6988a0:{NFSU2_TR(0x6988a0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6988a1:{NFSU2_TR(0x6988a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6988a3:{NFSU2_TR(0x6988a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69889du);}goto L69889d;}}
}
B6988a5:L6988a5:{c.instructions+=2;NFSU2_TR(0x6988a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6988a7:{NFSU2_TR(0x6988a7);
if(r1(R+518)){{goto L6988b9;}}
}
B6988a9:L6988a9:{c.instructions+=3;NFSU2_TR(0x6988a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6988ab:{NFSU2_TR(0x6988ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6988ad:{NFSU2_TR(0x6988ad);
if(r1(R+518)){{goto L6988b1;}}
}
B6988af:L6988af:{c.instructions+=1;NFSU2_TR(0x6988af);
__builtin_memmove((R+24),(R+0),4);
}
B6988b1:L6988b1:{c.instructions+=2;NFSU2_TR(0x6988b1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6988b3:{NFSU2_TR(0x6988b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6988b7;}}
}
B6988b5:L6988b5:{c.instructions+=1;NFSU2_TR(0x6988b5);
__builtin_memmove((R+24),(R+8),4);
}
B6988b7:L6988b7:{c.instructions+=1;NFSU2_TR(0x6988b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6988b9:L6988b9:{c.instructions+=2;NFSU2_TR(0x6988b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6988bb:{NFSU2_TR(0x6988bb);
if(r1(R+518)){{goto L6988d8;}}
}
B6988bd:L6988bd:{c.instructions+=1;NFSU2_TR(0x6988bd);
{goto L6988d4;}
}
B6988bf:L6988bf:{c.instructions+=2;NFSU2_TR(0x6988bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6988c1:{NFSU2_TR(0x6988c1);
if(r1(R+518)){{goto L6988d8;}}
}
B6988c3:L6988c3:{c.instructions+=2;NFSU2_TR(0x6988c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6988c4:{NFSU2_TR(0x6988c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6988c9ull));
TAIL_STATIC(0x69539eu,695);
}
B6988c9:L6988c9:{c.instructions+=2;NFSU2_TR(0x6988c9);
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
B6988cb:{NFSU2_TR(0x6988cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6988da;}}
}
B6988cd:L6988cd:{c.instructions+=3;NFSU2_TR(0x6988cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6988d0:{NFSU2_TR(0x6988d0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6988d3:{NFSU2_TR(0x6988d3);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6988d4:L6988d4:{c.instructions+=2;NFSU2_TR(0x6988d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6988d6:{NFSU2_TR(0x6988d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6988bfu);}goto L6988bf;}}
}
B6988d8:L6988d8:{c.instructions+=1;NFSU2_TR(0x6988d8);
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
B6988da:L6988da:{c.instructions+=1;NFSU2_TR(0x6988da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6988db:L6988db:{c.instructions+=4;NFSU2_TR(0x6988db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6988dc:{NFSU2_TR(0x6988dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6988dd:{NFSU2_TR(0x6988dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6988de:{NFSU2_TR(0x6988de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6988e1:L6988e1:{c.instructions+=6;NFSU2_TR(0x6988e1);
__builtin_memmove((R+28),(R+28),4);
}
B6988e3:{NFSU2_TR(0x6988e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6988e4:{NFSU2_TR(0x6988e4);
__builtin_memmove((R+20),(R+16),4);
}
B6988e6:{NFSU2_TR(0x6988e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6988e9:{NFSU2_TR(0x6988e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6988eb:{NFSU2_TR(0x6988eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6988f1;}}
}
B6988ed:L6988ed:{c.instructions+=2;NFSU2_TR(0x6988ed);
w4(R+0,u32(0-u32(r4(R+0))));
}
B6988ef:{NFSU2_TR(0x6988ef);
{goto L698905;}
}
B6988f1:L6988f1:{c.instructions+=5;NFSU2_TR(0x6988f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6988f4:{NFSU2_TR(0x6988f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6988f5:{NFSU2_TR(0x6988f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6988f8:{NFSU2_TR(0x6988f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6988f9:{NFSU2_TR(0x6988f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6988feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B6988fe:L6988fe:{c.instructions+=2;NFSU2_TR(0x6988fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698900:{NFSU2_TR(0x698900);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L69890c;}}
}
B698902:L698902:{c.instructions+=1;NFSU2_TR(0x698902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698905:L698905:{c.instructions+=2;NFSU2_TR(0x698905);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x3ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x3ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x3ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69890a:{NFSU2_TR(0x69890a);
if(r1(R+518)){{goto L698911;}}
}
B69890c:L69890c:{c.instructions+=2;NFSU2_TR(0x69890c);
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
B69890f:{NFSU2_TR(0x69890f);
{goto L698915;}
}
B698911:L698911:{c.instructions+=1;NFSU2_TR(0x698911);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B698915:L698915:{c.instructions+=2;NFSU2_TR(0x698915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698916:{NFSU2_TR(0x698916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698919:L698919:{c.instructions+=6;NFSU2_TR(0x698919);
__builtin_memmove((R+28),(R+28),4);
}
B69891b:{NFSU2_TR(0x69891b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69891c:{NFSU2_TR(0x69891c);
__builtin_memmove((R+20),(R+16),4);
}
B69891e:{NFSU2_TR(0x69891e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698921:{NFSU2_TR(0x698921);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698923:{NFSU2_TR(0x698923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69893c;}}
}
B698925:L698925:{c.instructions+=4;NFSU2_TR(0x698925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698928:{NFSU2_TR(0x698928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69892b:{NFSU2_TR(0x69892b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69892e:{NFSU2_TR(0x69892e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L698965;}}
}
B698930:L698930:{c.instructions+=2;NFSU2_TR(0x698930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698933:{NFSU2_TR(0x698933);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B698936:L698936:{c.instructions+=1;NFSU2_TR(0x698936);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698938:L698938:{c.instructions+=2;NFSU2_TR(0x698938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698939:{NFSU2_TR(0x698939);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69893c:L69893c:{c.instructions+=1;NFSU2_TR(0x69893c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698945;}}
}
B69893e:L69893e:{c.instructions+=3;NFSU2_TR(0x69893e);
w4(R+0,u32(0-u32(r4(R+0))));
}
B698940:{NFSU2_TR(0x698940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698943:{NFSU2_TR(0x698943);
{goto L698956;}
}
B698945:L698945:{c.instructions+=5;NFSU2_TR(0x698945);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698948:{NFSU2_TR(0x698948);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698949:{NFSU2_TR(0x698949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69894c:{NFSU2_TR(0x69894c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69894d:{NFSU2_TR(0x69894d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698952ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698952:L698952:{c.instructions+=2;NFSU2_TR(0x698952);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698954:{NFSU2_TR(0x698954);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698965;}}
}
B698956:L698956:{c.instructions+=3;NFSU2_TR(0x698956);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698959:{NFSU2_TR(0x698959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69895c:{NFSU2_TR(0x69895c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698961ull));
TAIL_STATIC(0x695441u,695);
}
B698961:L698961:{c.instructions+=2;NFSU2_TR(0x698961);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698963:{NFSU2_TR(0x698963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698936u);}goto L698936;}}
}
B698965:L698965:{c.instructions+=2;NFSU2_TR(0x698965);
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
B698967:{NFSU2_TR(0x698967);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698938u);}goto L698938;}
}
B698969:L698969:{c.instructions+=6;NFSU2_TR(0x698969);
__builtin_memmove((R+28),(R+28),4);
}
B69896b:{NFSU2_TR(0x69896b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69896c:{NFSU2_TR(0x69896c);
__builtin_memmove((R+20),(R+16),4);
}
B69896e:{NFSU2_TR(0x69896e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698971:{NFSU2_TR(0x698971);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698973:{NFSU2_TR(0x698973);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69899a;}}
}
B698975:L698975:{c.instructions+=3;NFSU2_TR(0x698975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698978:{NFSU2_TR(0x698978);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69897a:{NFSU2_TR(0x69897a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698980;}}
}
B69897c:L69897c:{c.instructions+=2;NFSU2_TR(0x69897c);
w4(R+0,u32(0-u32(r4(R+0))));
}
B69897e:{NFSU2_TR(0x69897e);
{goto L698994;}
}
B698980:L698980:{c.instructions+=5;NFSU2_TR(0x698980);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B698983:{NFSU2_TR(0x698983);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698984:{NFSU2_TR(0x698984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698987:{NFSU2_TR(0x698987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698988:{NFSU2_TR(0x698988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69898dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B69898d:L69898d:{c.instructions+=2;NFSU2_TR(0x69898d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B69898f:{NFSU2_TR(0x69898f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6989c5;}}
}
B698991:L698991:{c.instructions+=1;NFSU2_TR(0x698991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698994:L698994:{c.instructions+=1;NFSU2_TR(0x698994);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698996:L698996:{c.instructions+=2;NFSU2_TR(0x698996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698997:{NFSU2_TR(0x698997);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69899a:L69899a:{c.instructions+=1;NFSU2_TR(0x69899a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6989a3;}}
}
B69899c:L69899c:{c.instructions+=3;NFSU2_TR(0x69899c);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69899e:{NFSU2_TR(0x69899e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6989a1:{NFSU2_TR(0x6989a1);
{goto L6989b4;}
}
B6989a3:L6989a3:{c.instructions+=5;NFSU2_TR(0x6989a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6989a6:{NFSU2_TR(0x6989a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6989a7:{NFSU2_TR(0x6989a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6989aa:{NFSU2_TR(0x6989aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6989ab:{NFSU2_TR(0x6989ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6989b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B6989b0:L6989b0:{c.instructions+=2;NFSU2_TR(0x6989b0);
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
B6989b2:{NFSU2_TR(0x6989b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6989c5;}}
}
B6989b4:L6989b4:{c.instructions+=4;NFSU2_TR(0x6989b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6989b7:{NFSU2_TR(0x6989b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6989b9:{NFSU2_TR(0x6989b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6989bc:{NFSU2_TR(0x6989bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6989c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698501u);}goto L698501;}
}
B6989c1:L6989c1:{c.instructions+=2;NFSU2_TR(0x6989c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6989c3:{NFSU2_TR(0x6989c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698994u);}goto L698994;}}
}
B6989c5:L6989c5:{c.instructions+=2;NFSU2_TR(0x6989c5);
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
B6989c7:{NFSU2_TR(0x6989c7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698996u);}goto L698996;}
}
B6989c9:L6989c9:{c.instructions+=6;NFSU2_TR(0x6989c9);
__builtin_memmove((R+28),(R+28),4);
}
B6989cb:{NFSU2_TR(0x6989cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6989cc:{NFSU2_TR(0x6989cc);
__builtin_memmove((R+20),(R+16),4);
}
B6989ce:{NFSU2_TR(0x6989ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6989d1:{NFSU2_TR(0x6989d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6989d3:{NFSU2_TR(0x6989d3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6989dc;}}
}
B6989d5:L6989d5:{c.instructions+=3;NFSU2_TR(0x6989d5);
w4(R+0,u32(0-u32(r4(R+0))));
}
B6989d7:{NFSU2_TR(0x6989d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6989da:{NFSU2_TR(0x6989da);
{goto L6989ed;}
}
B6989dc:L6989dc:{c.instructions+=5;NFSU2_TR(0x6989dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6989df:{NFSU2_TR(0x6989df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6989e0:{NFSU2_TR(0x6989e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6989e3:{NFSU2_TR(0x6989e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6989e4:{NFSU2_TR(0x6989e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6989e9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B6989e9:L6989e9:{c.instructions+=2;NFSU2_TR(0x6989e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6989eb:{NFSU2_TR(0x6989eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6989fc;}}
}
B6989ed:L6989ed:{c.instructions+=3;NFSU2_TR(0x6989ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6989f0:{NFSU2_TR(0x6989f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6989f3:{NFSU2_TR(0x6989f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6989f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69811au);}goto L69811a;}
}
B6989f8:L6989f8:{c.instructions+=2;NFSU2_TR(0x6989f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6989fa:{NFSU2_TR(0x6989fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698a00;}}
}
B6989fc:L6989fc:{c.instructions+=2;NFSU2_TR(0x6989fc);
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
B6989fe:{NFSU2_TR(0x6989fe);
{goto L698a02;}
}
B698a00:L698a00:{c.instructions+=1;NFSU2_TR(0x698a00);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B698a02:L698a02:{c.instructions+=2;NFSU2_TR(0x698a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698a03:{NFSU2_TR(0x698a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698a06:L698a06:{c.instructions+=7;NFSU2_TR(0x698a06);
__builtin_memmove((R+28),(R+28),4);
}
B698a08:{NFSU2_TR(0x698a08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a09:{NFSU2_TR(0x698a09);
__builtin_memmove((R+20),(R+16),4);
}
B698a0b:{NFSU2_TR(0x698a0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a0c:{NFSU2_TR(0x698a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B698a0f:{NFSU2_TR(0x698a0f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698a11:{NFSU2_TR(0x698a11);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698a17;}}
}
B698a13:L698a13:{c.instructions+=2;NFSU2_TR(0x698a13);
w4(R+28,u32(0-u32(r4(R+28))));
}
B698a15:{NFSU2_TR(0x698a15);
{goto L698a2b;}
}
B698a17:L698a17:{c.instructions+=5;NFSU2_TR(0x698a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698a1a:{NFSU2_TR(0x698a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698a1d:{NFSU2_TR(0x698a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a1e:{NFSU2_TR(0x698a1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a1f:{NFSU2_TR(0x698a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698a24ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698a24:L698a24:{c.instructions+=2;NFSU2_TR(0x698a24);
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
B698a26:{NFSU2_TR(0x698a26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698a53;}}
}
B698a28:L698a28:{c.instructions+=1;NFSU2_TR(0x698a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B698a2b:L698a2b:{c.instructions+=4;NFSU2_TR(0x698a2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a2c:{NFSU2_TR(0x698a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698a2f:{NFSU2_TR(0x698a2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B698a32:{NFSU2_TR(0x698a32);
{goto L698a3b;}
}
B698a34:L698a34:{c.instructions+=3;NFSU2_TR(0x698a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B698a37:{NFSU2_TR(0x698a37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698a39:{NFSU2_TR(0x698a39);
if(r1(R+518)){{goto L698a50;}}
}
B698a3b:L698a3b:{c.instructions+=6;NFSU2_TR(0x698a3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a3d:{NFSU2_TR(0x698a3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a3e:{NFSU2_TR(0x698a3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698a41:{NFSU2_TR(0x698a41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698a44:{NFSU2_TR(0x698a44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a45:{NFSU2_TR(0x698a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698a4aull));
TAIL_STATIC(0x695b38u,695);
}
B698a4a:L698a4a:{c.instructions+=2;NFSU2_TR(0x698a4a);
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
B698a4c:{NFSU2_TR(0x698a4c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698a34u);}goto L698a34;}}
}
B698a4e:L698a4e:{c.instructions+=1;NFSU2_TR(0x698a4e);
{goto L698a52;}
}
B698a50:L698a50:{c.instructions+=1;NFSU2_TR(0x698a50);
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
B698a52:L698a52:{c.instructions+=1;NFSU2_TR(0x698a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698a53:L698a53:{c.instructions+=3;NFSU2_TR(0x698a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B698a54:{NFSU2_TR(0x698a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698a55:{NFSU2_TR(0x698a55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698a58:L698a58:{c.instructions+=7;NFSU2_TR(0x698a58);
__builtin_memmove((R+28),(R+28),4);
}
B698a5a:{NFSU2_TR(0x698a5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a5b:{NFSU2_TR(0x698a5b);
__builtin_memmove((R+20),(R+16),4);
}
B698a5d:{NFSU2_TR(0x698a5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a5e:{NFSU2_TR(0x698a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698a61:{NFSU2_TR(0x698a61);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698a63:{NFSU2_TR(0x698a63);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698a69;}}
}
B698a65:L698a65:{c.instructions+=2;NFSU2_TR(0x698a65);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698a67:{NFSU2_TR(0x698a67);
{goto L698a86;}
}
B698a69:L698a69:{c.instructions+=5;NFSU2_TR(0x698a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698a6c:{NFSU2_TR(0x698a6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698a6f:{NFSU2_TR(0x698a6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a70:{NFSU2_TR(0x698a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a71:{NFSU2_TR(0x698a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698a76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698a76:L698a76:{c.instructions+=2;NFSU2_TR(0x698a76);
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
B698a78:{NFSU2_TR(0x698a78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698a9f;}}
}
B698a7a:L698a7a:{c.instructions+=2;NFSU2_TR(0x698a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698a7d:{NFSU2_TR(0x698a7d);
{goto L698a86;}
}
B698a7f:L698a7f:{c.instructions+=3;NFSU2_TR(0x698a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698a82:{NFSU2_TR(0x698a82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698a84:{NFSU2_TR(0x698a84);
if(r1(R+518)){{goto L698a9d;}}
}
B698a86:L698a86:{c.instructions+=7;NFSU2_TR(0x698a86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a88:{NFSU2_TR(0x698a88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a8a:{NFSU2_TR(0x698a8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698a8d:{NFSU2_TR(0x698a8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a8e:{NFSU2_TR(0x698a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698a91:{NFSU2_TR(0x698a91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698a92:{NFSU2_TR(0x698a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698a97ull));
TAIL_STATIC(0x695dd7u,695);
}
B698a97:L698a97:{c.instructions+=2;NFSU2_TR(0x698a97);
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
B698a99:{NFSU2_TR(0x698a99);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698a7fu);}goto L698a7f;}}
}
B698a9b:L698a9b:{c.instructions+=1;NFSU2_TR(0x698a9b);
{goto L698a9f;}
}
B698a9d:L698a9d:{c.instructions+=1;NFSU2_TR(0x698a9d);
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
B698a9f:L698a9f:{c.instructions+=3;NFSU2_TR(0x698a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698aa0:{NFSU2_TR(0x698aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698aa1:{NFSU2_TR(0x698aa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698aa4:L698aa4:{c.instructions+=7;NFSU2_TR(0x698aa4);
__builtin_memmove((R+28),(R+28),4);
}
B698aa6:{NFSU2_TR(0x698aa6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698aa7:{NFSU2_TR(0x698aa7);
__builtin_memmove((R+20),(R+16),4);
}
B698aa9:{NFSU2_TR(0x698aa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698aaa:{NFSU2_TR(0x698aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698aad:{NFSU2_TR(0x698aad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698aaf:{NFSU2_TR(0x698aaf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698ab5;}}
}
B698ab1:L698ab1:{c.instructions+=2;NFSU2_TR(0x698ab1);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698ab3:{NFSU2_TR(0x698ab3);
{goto L698ad2;}
}
B698ab5:L698ab5:{c.instructions+=5;NFSU2_TR(0x698ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698ab8:{NFSU2_TR(0x698ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698abb:{NFSU2_TR(0x698abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698abc:{NFSU2_TR(0x698abc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698abd:{NFSU2_TR(0x698abd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698ac2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698ac2:L698ac2:{c.instructions+=2;NFSU2_TR(0x698ac2);
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
B698ac4:{NFSU2_TR(0x698ac4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698aeb;}}
}
B698ac6:L698ac6:{c.instructions+=2;NFSU2_TR(0x698ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698ac9:{NFSU2_TR(0x698ac9);
{goto L698ad2;}
}
B698acb:L698acb:{c.instructions+=3;NFSU2_TR(0x698acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698ace:{NFSU2_TR(0x698ace);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698ad0:{NFSU2_TR(0x698ad0);
if(r1(R+518)){{goto L698ae9;}}
}
B698ad2:L698ad2:{c.instructions+=6;NFSU2_TR(0x698ad2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ad4:{NFSU2_TR(0x698ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698ad7:{NFSU2_TR(0x698ad7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698ada:{NFSU2_TR(0x698ada);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698add:{NFSU2_TR(0x698add);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ade:{NFSU2_TR(0x698ade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698ae3ull));
TAIL_STATIC(0x695dd7u,695);
}
B698ae3:L698ae3:{c.instructions+=2;NFSU2_TR(0x698ae3);
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
B698ae5:{NFSU2_TR(0x698ae5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698acbu);}goto L698acb;}}
}
B698ae7:L698ae7:{c.instructions+=1;NFSU2_TR(0x698ae7);
{goto L698aeb;}
}
B698ae9:L698ae9:{c.instructions+=1;NFSU2_TR(0x698ae9);
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
B698aeb:L698aeb:{c.instructions+=3;NFSU2_TR(0x698aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698aec:{NFSU2_TR(0x698aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698aed:{NFSU2_TR(0x698aed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698af0:L698af0:{c.instructions+=7;NFSU2_TR(0x698af0);
__builtin_memmove((R+28),(R+28),4);
}
B698af2:{NFSU2_TR(0x698af2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698af3:{NFSU2_TR(0x698af3);
__builtin_memmove((R+20),(R+16),4);
}
B698af5:{NFSU2_TR(0x698af5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698af6:{NFSU2_TR(0x698af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698af9:{NFSU2_TR(0x698af9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698afb:{NFSU2_TR(0x698afb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698b01;}}
}
B698afd:L698afd:{c.instructions+=2;NFSU2_TR(0x698afd);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698aff:{NFSU2_TR(0x698aff);
{goto L698b1e;}
}
B698b01:L698b01:{c.instructions+=5;NFSU2_TR(0x698b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698b04:{NFSU2_TR(0x698b04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698b07:{NFSU2_TR(0x698b07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b08:{NFSU2_TR(0x698b08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b09:{NFSU2_TR(0x698b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698b0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698b0e:L698b0e:{c.instructions+=2;NFSU2_TR(0x698b0e);
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
B698b10:{NFSU2_TR(0x698b10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698b37;}}
}
B698b12:L698b12:{c.instructions+=2;NFSU2_TR(0x698b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698b15:{NFSU2_TR(0x698b15);
{goto L698b1e;}
}
B698b17:L698b17:{c.instructions+=3;NFSU2_TR(0x698b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698b1a:{NFSU2_TR(0x698b1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698b1c:{NFSU2_TR(0x698b1c);
if(r1(R+518)){{goto L698b35;}}
}
B698b1e:L698b1e:{c.instructions+=7;NFSU2_TR(0x698b1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b20:{NFSU2_TR(0x698b20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b22:{NFSU2_TR(0x698b22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698b25:{NFSU2_TR(0x698b25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b26:{NFSU2_TR(0x698b26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698b29:{NFSU2_TR(0x698b29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b2a:{NFSU2_TR(0x698b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698b2full));
TAIL_STATIC(0x6960d9u,696);
}
B698b2f:L698b2f:{c.instructions+=2;NFSU2_TR(0x698b2f);
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
B698b31:{NFSU2_TR(0x698b31);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698b17u);}goto L698b17;}}
}
B698b33:L698b33:{c.instructions+=1;NFSU2_TR(0x698b33);
{goto L698b37;}
}
B698b35:L698b35:{c.instructions+=1;NFSU2_TR(0x698b35);
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
B698b37:L698b37:{c.instructions+=3;NFSU2_TR(0x698b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698b38:{NFSU2_TR(0x698b38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698b39:{NFSU2_TR(0x698b39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698b3c:L698b3c:{c.instructions+=7;NFSU2_TR(0x698b3c);
__builtin_memmove((R+28),(R+28),4);
}
B698b3e:{NFSU2_TR(0x698b3e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b3f:{NFSU2_TR(0x698b3f);
__builtin_memmove((R+20),(R+16),4);
}
B698b41:{NFSU2_TR(0x698b41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b42:{NFSU2_TR(0x698b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698b45:{NFSU2_TR(0x698b45);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698b47:{NFSU2_TR(0x698b47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698b4d;}}
}
B698b49:L698b49:{c.instructions+=2;NFSU2_TR(0x698b49);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698b4b:{NFSU2_TR(0x698b4b);
{goto L698b6a;}
}
B698b4d:L698b4d:{c.instructions+=5;NFSU2_TR(0x698b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698b50:{NFSU2_TR(0x698b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698b53:{NFSU2_TR(0x698b53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b54:{NFSU2_TR(0x698b54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b55:{NFSU2_TR(0x698b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698b5aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698b5a:L698b5a:{c.instructions+=2;NFSU2_TR(0x698b5a);
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
B698b5c:{NFSU2_TR(0x698b5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698b83;}}
}
B698b5e:L698b5e:{c.instructions+=2;NFSU2_TR(0x698b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698b61:{NFSU2_TR(0x698b61);
{goto L698b6a;}
}
B698b63:L698b63:{c.instructions+=3;NFSU2_TR(0x698b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698b66:{NFSU2_TR(0x698b66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698b68:{NFSU2_TR(0x698b68);
if(r1(R+518)){{goto L698b81;}}
}
B698b6a:L698b6a:{c.instructions+=6;NFSU2_TR(0x698b6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b6c:{NFSU2_TR(0x698b6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698b6f:{NFSU2_TR(0x698b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698b72:{NFSU2_TR(0x698b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698b75:{NFSU2_TR(0x698b75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b76:{NFSU2_TR(0x698b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698b7bull));
TAIL_STATIC(0x6960d9u,696);
}
B698b7b:L698b7b:{c.instructions+=2;NFSU2_TR(0x698b7b);
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
B698b7d:{NFSU2_TR(0x698b7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698b63u);}goto L698b63;}}
}
B698b7f:L698b7f:{c.instructions+=1;NFSU2_TR(0x698b7f);
{goto L698b83;}
}
B698b81:L698b81:{c.instructions+=1;NFSU2_TR(0x698b81);
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
B698b83:L698b83:{c.instructions+=3;NFSU2_TR(0x698b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698b84:{NFSU2_TR(0x698b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698b85:{NFSU2_TR(0x698b85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698b88:L698b88:{c.instructions+=7;NFSU2_TR(0x698b88);
__builtin_memmove((R+28),(R+28),4);
}
B698b8a:{NFSU2_TR(0x698b8a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b8b:{NFSU2_TR(0x698b8b);
__builtin_memmove((R+20),(R+16),4);
}
B698b8d:{NFSU2_TR(0x698b8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698b8e:{NFSU2_TR(0x698b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698b91:{NFSU2_TR(0x698b91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698b93:{NFSU2_TR(0x698b93);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698b99;}}
}
B698b95:L698b95:{c.instructions+=2;NFSU2_TR(0x698b95);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698b97:{NFSU2_TR(0x698b97);
{goto L698bb6;}
}
B698b99:L698b99:{c.instructions+=5;NFSU2_TR(0x698b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698b9c:{NFSU2_TR(0x698b9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698b9f:{NFSU2_TR(0x698b9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ba0:{NFSU2_TR(0x698ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ba1:{NFSU2_TR(0x698ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698ba6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698ba6:L698ba6:{c.instructions+=2;NFSU2_TR(0x698ba6);
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
B698ba8:{NFSU2_TR(0x698ba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698bcf;}}
}
B698baa:L698baa:{c.instructions+=2;NFSU2_TR(0x698baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698bad:{NFSU2_TR(0x698bad);
{goto L698bb6;}
}
B698baf:L698baf:{c.instructions+=3;NFSU2_TR(0x698baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698bb2:{NFSU2_TR(0x698bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698bb4:{NFSU2_TR(0x698bb4);
if(r1(R+518)){{goto L698bcd;}}
}
B698bb6:L698bb6:{c.instructions+=7;NFSU2_TR(0x698bb6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bb8:{NFSU2_TR(0x698bb8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bba:{NFSU2_TR(0x698bba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698bbd:{NFSU2_TR(0x698bbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bbe:{NFSU2_TR(0x698bbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698bc1:{NFSU2_TR(0x698bc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bc2:{NFSU2_TR(0x698bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698bc7ull));
TAIL_STATIC(0x6963cfu,696);
}
B698bc7:L698bc7:{c.instructions+=2;NFSU2_TR(0x698bc7);
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
B698bc9:{NFSU2_TR(0x698bc9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698bafu);}goto L698baf;}}
}
B698bcb:L698bcb:{c.instructions+=1;NFSU2_TR(0x698bcb);
{goto L698bcf;}
}
B698bcd:L698bcd:{c.instructions+=1;NFSU2_TR(0x698bcd);
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
B698bcf:L698bcf:{c.instructions+=3;NFSU2_TR(0x698bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698bd0:{NFSU2_TR(0x698bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698bd1:{NFSU2_TR(0x698bd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698bd4:L698bd4:{c.instructions+=7;NFSU2_TR(0x698bd4);
__builtin_memmove((R+28),(R+28),4);
}
B698bd6:{NFSU2_TR(0x698bd6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bd7:{NFSU2_TR(0x698bd7);
__builtin_memmove((R+20),(R+16),4);
}
B698bd9:{NFSU2_TR(0x698bd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bda:{NFSU2_TR(0x698bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698bdd:{NFSU2_TR(0x698bdd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698bdf:{NFSU2_TR(0x698bdf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698be5;}}
}
B698be1:L698be1:{c.instructions+=2;NFSU2_TR(0x698be1);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698be3:{NFSU2_TR(0x698be3);
{goto L698c02;}
}
B698be5:L698be5:{c.instructions+=5;NFSU2_TR(0x698be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698be8:{NFSU2_TR(0x698be8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698beb:{NFSU2_TR(0x698beb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bec:{NFSU2_TR(0x698bec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698bed:{NFSU2_TR(0x698bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698bf2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698bf2:L698bf2:{c.instructions+=2;NFSU2_TR(0x698bf2);
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
B698bf4:{NFSU2_TR(0x698bf4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698c1b;}}
}
B698bf6:L698bf6:{c.instructions+=2;NFSU2_TR(0x698bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698bf9:{NFSU2_TR(0x698bf9);
{goto L698c02;}
}
B698bfb:L698bfb:{c.instructions+=3;NFSU2_TR(0x698bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698bfe:{NFSU2_TR(0x698bfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698c00:{NFSU2_TR(0x698c00);
if(r1(R+518)){{goto L698c19;}}
}
B698c02:L698c02:{c.instructions+=6;NFSU2_TR(0x698c02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c04:{NFSU2_TR(0x698c04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698c07:{NFSU2_TR(0x698c07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698c0a:{NFSU2_TR(0x698c0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698c0d:{NFSU2_TR(0x698c0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c0e:{NFSU2_TR(0x698c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698c13ull));
TAIL_STATIC(0x6963cfu,696);
}
B698c13:L698c13:{c.instructions+=2;NFSU2_TR(0x698c13);
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
B698c15:{NFSU2_TR(0x698c15);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698bfbu);}goto L698bfb;}}
}
B698c17:L698c17:{c.instructions+=1;NFSU2_TR(0x698c17);
{goto L698c1b;}
}
B698c19:L698c19:{c.instructions+=1;NFSU2_TR(0x698c19);
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
B698c1b:L698c1b:{c.instructions+=3;NFSU2_TR(0x698c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698c1c:{NFSU2_TR(0x698c1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698c1d:{NFSU2_TR(0x698c1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698c20:L698c20:{c.instructions+=7;NFSU2_TR(0x698c20);
__builtin_memmove((R+28),(R+28),4);
}
B698c22:{NFSU2_TR(0x698c22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c23:{NFSU2_TR(0x698c23);
__builtin_memmove((R+20),(R+16),4);
}
B698c25:{NFSU2_TR(0x698c25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c26:{NFSU2_TR(0x698c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698c29:{NFSU2_TR(0x698c29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698c2b:{NFSU2_TR(0x698c2b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698c31;}}
}
B698c2d:L698c2d:{c.instructions+=2;NFSU2_TR(0x698c2d);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698c2f:{NFSU2_TR(0x698c2f);
{goto L698c4e;}
}
B698c31:L698c31:{c.instructions+=5;NFSU2_TR(0x698c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698c34:{NFSU2_TR(0x698c34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698c37:{NFSU2_TR(0x698c37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c38:{NFSU2_TR(0x698c38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c39:{NFSU2_TR(0x698c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698c3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698c3e:L698c3e:{c.instructions+=2;NFSU2_TR(0x698c3e);
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
B698c40:{NFSU2_TR(0x698c40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698c66;}}
}
B698c42:L698c42:{c.instructions+=2;NFSU2_TR(0x698c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698c45:{NFSU2_TR(0x698c45);
{goto L698c4e;}
}
B698c47:L698c47:{c.instructions+=3;NFSU2_TR(0x698c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698c4a:{NFSU2_TR(0x698c4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698c4c:{NFSU2_TR(0x698c4c);
if(r1(R+518)){{goto L698c64;}}
}
B698c4e:L698c4e:{c.instructions+=6;NFSU2_TR(0x698c4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c50:{NFSU2_TR(0x698c50);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c52:{NFSU2_TR(0x698c52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698c55:{NFSU2_TR(0x698c55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698c58:{NFSU2_TR(0x698c58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c59:{NFSU2_TR(0x698c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698c5eull));
TAIL_STATIC(0x696700u,696);
}
B698c5e:L698c5e:{c.instructions+=2;NFSU2_TR(0x698c5e);
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
B698c60:{NFSU2_TR(0x698c60);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698c47u);}goto L698c47;}}
}
B698c62:L698c62:{c.instructions+=1;NFSU2_TR(0x698c62);
{goto L698c66;}
}
B698c64:L698c64:{c.instructions+=1;NFSU2_TR(0x698c64);
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
B698c66:L698c66:{c.instructions+=3;NFSU2_TR(0x698c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698c67:{NFSU2_TR(0x698c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698c68:{NFSU2_TR(0x698c68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698c6b:L698c6b:{c.instructions+=7;NFSU2_TR(0x698c6b);
__builtin_memmove((R+28),(R+28),4);
}
B698c6d:{NFSU2_TR(0x698c6d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c6e:{NFSU2_TR(0x698c6e);
__builtin_memmove((R+20),(R+16),4);
}
B698c70:{NFSU2_TR(0x698c70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c71:{NFSU2_TR(0x698c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698c74:{NFSU2_TR(0x698c74);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698c76:{NFSU2_TR(0x698c76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698c7c;}}
}
B698c78:L698c78:{c.instructions+=2;NFSU2_TR(0x698c78);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698c7a:{NFSU2_TR(0x698c7a);
{goto L698c99;}
}
B698c7c:L698c7c:{c.instructions+=5;NFSU2_TR(0x698c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698c7f:{NFSU2_TR(0x698c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698c82:{NFSU2_TR(0x698c82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c83:{NFSU2_TR(0x698c83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c84:{NFSU2_TR(0x698c84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698c89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698c89:L698c89:{c.instructions+=2;NFSU2_TR(0x698c89);
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
B698c8b:{NFSU2_TR(0x698c8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698cb2;}}
}
B698c8d:L698c8d:{c.instructions+=2;NFSU2_TR(0x698c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698c90:{NFSU2_TR(0x698c90);
{goto L698c99;}
}
B698c92:L698c92:{c.instructions+=3;NFSU2_TR(0x698c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698c95:{NFSU2_TR(0x698c95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698c97:{NFSU2_TR(0x698c97);
if(r1(R+518)){{goto L698cb0;}}
}
B698c99:L698c99:{c.instructions+=6;NFSU2_TR(0x698c99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698c9b:{NFSU2_TR(0x698c9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698c9e:{NFSU2_TR(0x698c9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698ca1:{NFSU2_TR(0x698ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698ca4:{NFSU2_TR(0x698ca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ca5:{NFSU2_TR(0x698ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698caaull));
TAIL_STATIC(0x696700u,696);
}
B698caa:L698caa:{c.instructions+=2;NFSU2_TR(0x698caa);
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
B698cac:{NFSU2_TR(0x698cac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698c92u);}goto L698c92;}}
}
B698cae:L698cae:{c.instructions+=1;NFSU2_TR(0x698cae);
{goto L698cb2;}
}
B698cb0:L698cb0:{c.instructions+=1;NFSU2_TR(0x698cb0);
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
B698cb2:L698cb2:{c.instructions+=3;NFSU2_TR(0x698cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698cb3:{NFSU2_TR(0x698cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698cb4:{NFSU2_TR(0x698cb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698cb7:L698cb7:{c.instructions+=7;NFSU2_TR(0x698cb7);
__builtin_memmove((R+28),(R+28),4);
}
B698cb9:{NFSU2_TR(0x698cb9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698cba:{NFSU2_TR(0x698cba);
__builtin_memmove((R+20),(R+16),4);
}
B698cbc:{NFSU2_TR(0x698cbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698cbd:{NFSU2_TR(0x698cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698cc0:{NFSU2_TR(0x698cc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698cc2:{NFSU2_TR(0x698cc2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698cc8;}}
}
B698cc4:L698cc4:{c.instructions+=2;NFSU2_TR(0x698cc4);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698cc6:{NFSU2_TR(0x698cc6);
{goto L698ce5;}
}
B698cc8:L698cc8:{c.instructions+=5;NFSU2_TR(0x698cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698ccb:{NFSU2_TR(0x698ccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698cce:{NFSU2_TR(0x698cce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ccf:{NFSU2_TR(0x698ccf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698cd0:{NFSU2_TR(0x698cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698cd5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698cd5:L698cd5:{c.instructions+=2;NFSU2_TR(0x698cd5);
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
B698cd7:{NFSU2_TR(0x698cd7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698cfd;}}
}
B698cd9:L698cd9:{c.instructions+=2;NFSU2_TR(0x698cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698cdc:{NFSU2_TR(0x698cdc);
{goto L698ce5;}
}
B698cde:L698cde:{c.instructions+=3;NFSU2_TR(0x698cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698ce1:{NFSU2_TR(0x698ce1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698ce3:{NFSU2_TR(0x698ce3);
if(r1(R+518)){{goto L698cfb;}}
}
B698ce5:L698ce5:{c.instructions+=6;NFSU2_TR(0x698ce5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ce7:{NFSU2_TR(0x698ce7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ce9:{NFSU2_TR(0x698ce9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698cec:{NFSU2_TR(0x698cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698cef:{NFSU2_TR(0x698cef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698cf0:{NFSU2_TR(0x698cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698cf5ull));
TAIL_STATIC(0x696aedu,696);
}
B698cf5:L698cf5:{c.instructions+=2;NFSU2_TR(0x698cf5);
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
B698cf7:{NFSU2_TR(0x698cf7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698cdeu);}goto L698cde;}}
}
B698cf9:L698cf9:{c.instructions+=1;NFSU2_TR(0x698cf9);
{goto L698cfd;}
}
B698cfb:L698cfb:{c.instructions+=1;NFSU2_TR(0x698cfb);
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
B698cfd:L698cfd:{c.instructions+=3;NFSU2_TR(0x698cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698cfe:{NFSU2_TR(0x698cfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698cff:{NFSU2_TR(0x698cff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698d02:L698d02:{c.instructions+=7;NFSU2_TR(0x698d02);
__builtin_memmove((R+28),(R+28),4);
}
B698d04:{NFSU2_TR(0x698d04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d05:{NFSU2_TR(0x698d05);
__builtin_memmove((R+20),(R+16),4);
}
B698d07:{NFSU2_TR(0x698d07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d08:{NFSU2_TR(0x698d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698d0b:{NFSU2_TR(0x698d0b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698d0d:{NFSU2_TR(0x698d0d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698d13;}}
}
B698d0f:L698d0f:{c.instructions+=2;NFSU2_TR(0x698d0f);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698d11:{NFSU2_TR(0x698d11);
{goto L698d30;}
}
B698d13:L698d13:{c.instructions+=5;NFSU2_TR(0x698d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698d16:{NFSU2_TR(0x698d16);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698d19:{NFSU2_TR(0x698d19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d1a:{NFSU2_TR(0x698d1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d1b:{NFSU2_TR(0x698d1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698d20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698d20:L698d20:{c.instructions+=2;NFSU2_TR(0x698d20);
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
B698d22:{NFSU2_TR(0x698d22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698d49;}}
}
B698d24:L698d24:{c.instructions+=2;NFSU2_TR(0x698d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698d27:{NFSU2_TR(0x698d27);
{goto L698d30;}
}
B698d29:L698d29:{c.instructions+=3;NFSU2_TR(0x698d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698d2c:{NFSU2_TR(0x698d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698d2e:{NFSU2_TR(0x698d2e);
if(r1(R+518)){{goto L698d47;}}
}
B698d30:L698d30:{c.instructions+=6;NFSU2_TR(0x698d30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d32:{NFSU2_TR(0x698d32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698d35:{NFSU2_TR(0x698d35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698d38:{NFSU2_TR(0x698d38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698d3b:{NFSU2_TR(0x698d3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d3c:{NFSU2_TR(0x698d3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698d41ull));
TAIL_STATIC(0x696aedu,696);
}
B698d41:L698d41:{c.instructions+=2;NFSU2_TR(0x698d41);
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
B698d43:{NFSU2_TR(0x698d43);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698d29u);}goto L698d29;}}
}
B698d45:L698d45:{c.instructions+=1;NFSU2_TR(0x698d45);
{goto L698d49;}
}
B698d47:L698d47:{c.instructions+=1;NFSU2_TR(0x698d47);
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
B698d49:L698d49:{c.instructions+=3;NFSU2_TR(0x698d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698d4a:{NFSU2_TR(0x698d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698d4b:{NFSU2_TR(0x698d4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698d4e:L698d4e:{c.instructions+=7;NFSU2_TR(0x698d4e);
__builtin_memmove((R+28),(R+28),4);
}
B698d50:{NFSU2_TR(0x698d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d51:{NFSU2_TR(0x698d51);
__builtin_memmove((R+20),(R+16),4);
}
B698d53:{NFSU2_TR(0x698d53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d54:{NFSU2_TR(0x698d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698d57:{NFSU2_TR(0x698d57);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698d59:{NFSU2_TR(0x698d59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698d5f;}}
}
B698d5b:L698d5b:{c.instructions+=2;NFSU2_TR(0x698d5b);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698d5d:{NFSU2_TR(0x698d5d);
{goto L698d7c;}
}
B698d5f:L698d5f:{c.instructions+=5;NFSU2_TR(0x698d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698d62:{NFSU2_TR(0x698d62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698d65:{NFSU2_TR(0x698d65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d66:{NFSU2_TR(0x698d66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d67:{NFSU2_TR(0x698d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698d6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698d6c:L698d6c:{c.instructions+=2;NFSU2_TR(0x698d6c);
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
B698d6e:{NFSU2_TR(0x698d6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698d95;}}
}
B698d70:L698d70:{c.instructions+=2;NFSU2_TR(0x698d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698d73:{NFSU2_TR(0x698d73);
{goto L698d7c;}
}
B698d75:L698d75:{c.instructions+=3;NFSU2_TR(0x698d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698d78:{NFSU2_TR(0x698d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698d7a:{NFSU2_TR(0x698d7a);
if(r1(R+518)){{goto L698d93;}}
}
B698d7c:L698d7c:{c.instructions+=6;NFSU2_TR(0x698d7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d7e:{NFSU2_TR(0x698d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698d81:{NFSU2_TR(0x698d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698d84:{NFSU2_TR(0x698d84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698d87:{NFSU2_TR(0x698d87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d88:{NFSU2_TR(0x698d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698d8dull));
TAIL_STATIC(0x696f82u,696);
}
B698d8d:L698d8d:{c.instructions+=2;NFSU2_TR(0x698d8d);
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
B698d8f:{NFSU2_TR(0x698d8f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698d75u);}goto L698d75;}}
}
B698d91:L698d91:{c.instructions+=1;NFSU2_TR(0x698d91);
{goto L698d95;}
}
B698d93:L698d93:{c.instructions+=1;NFSU2_TR(0x698d93);
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
B698d95:L698d95:{c.instructions+=3;NFSU2_TR(0x698d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698d96:{NFSU2_TR(0x698d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698d97:{NFSU2_TR(0x698d97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698d9a:L698d9a:{c.instructions+=7;NFSU2_TR(0x698d9a);
__builtin_memmove((R+28),(R+28),4);
}
B698d9c:{NFSU2_TR(0x698d9c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698d9d:{NFSU2_TR(0x698d9d);
__builtin_memmove((R+20),(R+16),4);
}
B698d9f:{NFSU2_TR(0x698d9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698da0:{NFSU2_TR(0x698da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698da3:{NFSU2_TR(0x698da3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698da5:{NFSU2_TR(0x698da5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698dab;}}
}
B698da7:L698da7:{c.instructions+=2;NFSU2_TR(0x698da7);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698da9:{NFSU2_TR(0x698da9);
{goto L698dc8;}
}
B698dab:L698dab:{c.instructions+=5;NFSU2_TR(0x698dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698dae:{NFSU2_TR(0x698dae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698db1:{NFSU2_TR(0x698db1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698db2:{NFSU2_TR(0x698db2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698db3:{NFSU2_TR(0x698db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698db8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698db8:L698db8:{c.instructions+=2;NFSU2_TR(0x698db8);
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
B698dba:{NFSU2_TR(0x698dba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698de0;}}
}
B698dbc:L698dbc:{c.instructions+=2;NFSU2_TR(0x698dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698dbf:{NFSU2_TR(0x698dbf);
{goto L698dc8;}
}
B698dc1:L698dc1:{c.instructions+=3;NFSU2_TR(0x698dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698dc4:{NFSU2_TR(0x698dc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698dc6:{NFSU2_TR(0x698dc6);
if(r1(R+518)){{goto L698dde;}}
}
B698dc8:L698dc8:{c.instructions+=6;NFSU2_TR(0x698dc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698dca:{NFSU2_TR(0x698dca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698dcc:{NFSU2_TR(0x698dcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698dcf:{NFSU2_TR(0x698dcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698dd2:{NFSU2_TR(0x698dd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698dd3:{NFSU2_TR(0x698dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698dd8ull));
TAIL_STATIC(0x6973bcu,697);
}
B698dd8:L698dd8:{c.instructions+=2;NFSU2_TR(0x698dd8);
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
B698dda:{NFSU2_TR(0x698dda);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698dc1u);}goto L698dc1;}}
}
B698ddc:L698ddc:{c.instructions+=1;NFSU2_TR(0x698ddc);
{goto L698de0;}
}
B698dde:L698dde:{c.instructions+=1;NFSU2_TR(0x698dde);
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
B698de0:L698de0:{c.instructions+=3;NFSU2_TR(0x698de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698de1:{NFSU2_TR(0x698de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698de2:{NFSU2_TR(0x698de2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698de5:L698de5:{c.instructions+=7;NFSU2_TR(0x698de5);
__builtin_memmove((R+28),(R+28),4);
}
B698de7:{NFSU2_TR(0x698de7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698de8:{NFSU2_TR(0x698de8);
__builtin_memmove((R+20),(R+16),4);
}
B698dea:{NFSU2_TR(0x698dea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698deb:{NFSU2_TR(0x698deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698dee:{NFSU2_TR(0x698dee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698df0:{NFSU2_TR(0x698df0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698df6;}}
}
B698df2:L698df2:{c.instructions+=2;NFSU2_TR(0x698df2);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698df4:{NFSU2_TR(0x698df4);
{goto L698e13;}
}
B698df6:L698df6:{c.instructions+=5;NFSU2_TR(0x698df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698df9:{NFSU2_TR(0x698df9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698dfc:{NFSU2_TR(0x698dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698dfd:{NFSU2_TR(0x698dfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698dfe:{NFSU2_TR(0x698dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698e03ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698e03:L698e03:{c.instructions+=2;NFSU2_TR(0x698e03);
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
B698e05:{NFSU2_TR(0x698e05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698e2c;}}
}
B698e07:L698e07:{c.instructions+=2;NFSU2_TR(0x698e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698e0a:{NFSU2_TR(0x698e0a);
{goto L698e13;}
}
B698e0c:L698e0c:{c.instructions+=3;NFSU2_TR(0x698e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698e0f:{NFSU2_TR(0x698e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698e11:{NFSU2_TR(0x698e11);
if(r1(R+518)){{goto L698e2a;}}
}
B698e13:L698e13:{c.instructions+=6;NFSU2_TR(0x698e13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e15:{NFSU2_TR(0x698e15);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698e18:{NFSU2_TR(0x698e18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698e1b:{NFSU2_TR(0x698e1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698e1e:{NFSU2_TR(0x698e1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e1f:{NFSU2_TR(0x698e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698e24ull));
TAIL_STATIC(0x6973bcu,697);
}
B698e24:L698e24:{c.instructions+=2;NFSU2_TR(0x698e24);
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
B698e26:{NFSU2_TR(0x698e26);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698e0cu);}goto L698e0c;}}
}
B698e28:L698e28:{c.instructions+=1;NFSU2_TR(0x698e28);
{goto L698e2c;}
}
B698e2a:L698e2a:{c.instructions+=1;NFSU2_TR(0x698e2a);
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
B698e2c:L698e2c:{c.instructions+=3;NFSU2_TR(0x698e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698e2d:{NFSU2_TR(0x698e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698e2e:{NFSU2_TR(0x698e2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698e31:L698e31:{c.instructions+=7;NFSU2_TR(0x698e31);
__builtin_memmove((R+28),(R+28),4);
}
B698e33:{NFSU2_TR(0x698e33);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e34:{NFSU2_TR(0x698e34);
__builtin_memmove((R+20),(R+16),4);
}
B698e36:{NFSU2_TR(0x698e36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e37:{NFSU2_TR(0x698e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698e3a:{NFSU2_TR(0x698e3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B698e3c:{NFSU2_TR(0x698e3c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L698e42;}}
}
B698e3e:L698e3e:{c.instructions+=2;NFSU2_TR(0x698e3e);
w4(R+24,u32(0-u32(r4(R+24))));
}
B698e40:{NFSU2_TR(0x698e40);
{goto L698e5f;}
}
B698e42:L698e42:{c.instructions+=5;NFSU2_TR(0x698e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698e45:{NFSU2_TR(0x698e45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B698e48:{NFSU2_TR(0x698e48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e49:{NFSU2_TR(0x698e49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e4a:{NFSU2_TR(0x698e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698e4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69864fu);}goto L69864f;}
}
B698e4f:L698e4f:{c.instructions+=2;NFSU2_TR(0x698e4f);
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
B698e51:{NFSU2_TR(0x698e51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L698e78;}}
}
B698e53:L698e53:{c.instructions+=2;NFSU2_TR(0x698e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698e56:{NFSU2_TR(0x698e56);
{goto L698e5f;}
}
B698e58:L698e58:{c.instructions+=3;NFSU2_TR(0x698e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698e5b:{NFSU2_TR(0x698e5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698e5d:{NFSU2_TR(0x698e5d);
if(r1(R+518)){{goto L698e76;}}
}
B698e5f:L698e5f:{c.instructions+=6;NFSU2_TR(0x698e5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e61:{NFSU2_TR(0x698e61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698e64:{NFSU2_TR(0x698e64);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698e67:{NFSU2_TR(0x698e67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B698e6a:{NFSU2_TR(0x698e6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698e6b:{NFSU2_TR(0x698e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x698e70ull));
TAIL_STATIC(0x6978c4u,697);
}
B698e70:L698e70:{c.instructions+=2;NFSU2_TR(0x698e70);
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
B698e72:{NFSU2_TR(0x698e72);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x698e58u);}goto L698e58;}}
}
B698e74:L698e74:{c.instructions+=1;NFSU2_TR(0x698e74);
{goto L698e78;}
}
B698e76:L698e76:{c.instructions+=1;NFSU2_TR(0x698e76);
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
B698e78:L698e78:{c.instructions+=3;NFSU2_TR(0x698e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698e79:{NFSU2_TR(0x698e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698e7a:{NFSU2_TR(0x698e7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698e7d:L698e7d:{c.instructions+=19;NFSU2_TR(0x698e7d);
__builtin_memmove((R+0),(R+4),4);
}
B698e7f:{NFSU2_TR(0x698e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698e83:{NFSU2_TR(0x698e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B698e87:{NFSU2_TR(0x698e87);
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
B698e89:{NFSU2_TR(0x698e89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B698e8b:{NFSU2_TR(0x698e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698e8e:{NFSU2_TR(0x698e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698e91:{NFSU2_TR(0x698e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698e94:{NFSU2_TR(0x698e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698e97:{NFSU2_TR(0x698e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698e9a:{NFSU2_TR(0x698e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698e9d:{NFSU2_TR(0x698e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698ea0:{NFSU2_TR(0x698ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698ea3:{NFSU2_TR(0x698ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698ea6:{NFSU2_TR(0x698ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698ea9:{NFSU2_TR(0x698ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698eac:{NFSU2_TR(0x698eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698eaf:{NFSU2_TR(0x698eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698eb2:{NFSU2_TR(0x698eb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698eb3:L698eb3:{c.instructions+=6;NFSU2_TR(0x698eb3);
__builtin_memmove((R+28),(R+28),4);
}
B698eb5:{NFSU2_TR(0x698eb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698eb6:{NFSU2_TR(0x698eb6);
__builtin_memmove((R+20),(R+16),4);
}
B698eb8:{NFSU2_TR(0x698eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698ebb:{NFSU2_TR(0x698ebb);
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
B698ebd:{NFSU2_TR(0x698ebd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L698ec6;}}
}
B698ebf:L698ebf:{c.instructions+=2;NFSU2_TR(0x698ebf);
w4(R+0,u32(0x80004005ull));
}
B698ec4:{NFSU2_TR(0x698ec4);
{goto L698ece;}
}
B698ec6:L698ec6:{c.instructions+=3;NFSU2_TR(0x698ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698ec9:{NFSU2_TR(0x698ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B698ecc:{NFSU2_TR(0x698ecc);
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
B698ece:L698ece:{c.instructions+=2;NFSU2_TR(0x698ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698ecf:{NFSU2_TR(0x698ecf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698ed2:L698ed2:{c.instructions+=11;NFSU2_TR(0x698ed2);
__builtin_memmove((R+28),(R+28),4);
}
B698ed4:{NFSU2_TR(0x698ed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ed5:{NFSU2_TR(0x698ed5);
__builtin_memmove((R+20),(R+16),4);
}
B698ed7:{NFSU2_TR(0x698ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698ed9:{NFSU2_TR(0x698ed9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B698ede:{NFSU2_TR(0x698ede);
__builtin_memmove((R+8),(R+0),4);
}
B698ee0:{NFSU2_TR(0x698ee0);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B698ee4:{NFSU2_TR(0x698ee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B698ee5:{NFSU2_TR(0x698ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B698ee8:{NFSU2_TR(0x698ee8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B698eeb:{NFSU2_TR(0x698eeb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L698efb;}}
}
B698eed:L698eed:{c.instructions+=3;NFSU2_TR(0x698eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B698ef0:{NFSU2_TR(0x698ef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698ef2:{NFSU2_TR(0x698ef2);
if(r1(R+518)){{goto L698ef7;}}
}
B698ef4:L698ef4:{c.instructions+=1;NFSU2_TR(0x698ef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B698ef7:L698ef7:{c.instructions+=2;NFSU2_TR(0x698ef7);
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
B698ef9:{NFSU2_TR(0x698ef9);
{goto L698f0a;}
}
B698efb:L698efb:{c.instructions+=3;NFSU2_TR(0x698efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B698efe:{NFSU2_TR(0x698efe);
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
B698f00:{NFSU2_TR(0x698f00);
if(r1(R+518)){{goto L698f0a;}}
}
B698f02:L698f02:{c.instructions+=3;NFSU2_TR(0x698f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B698f05:{NFSU2_TR(0x698f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B698f08:{NFSU2_TR(0x698f08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B698f0a:L698f0a:{c.instructions+=3;NFSU2_TR(0x698f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B698f0b:{NFSU2_TR(0x698f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B698f0c:{NFSU2_TR(0x698f0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f0f:L698f0f:{c.instructions+=5;NFSU2_TR(0x698f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698f11:{NFSU2_TR(0x698f11);
__builtin_memmove((R+4),(R+0),4);
}
B698f13:{NFSU2_TR(0x698f13);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B698f19:{NFSU2_TR(0x698f19);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B698f1f:{NFSU2_TR(0x698f1f);
if(r1(R+518)){{goto L698f3e;}}
}
B698f21:L698f21:{c.instructions+=3;NFSU2_TR(0x698f21);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B698f26:{NFSU2_TR(0x698f26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f2b:{NFSU2_TR(0x698f2b);
if(r1(R+518)){{goto L698f3e;}}
}
B698f2d:L698f2d:{c.instructions+=2;NFSU2_TR(0x698f2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f32:{NFSU2_TR(0x698f32);
if(r1(R+518)){{goto L698f3e;}}
}
B698f34:L698f34:{c.instructions+=2;NFSU2_TR(0x698f34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f39:{NFSU2_TR(0x698f39);
if(r1(R+518)){{goto L698f3e;}}
}
B698f3b:L698f3b:{c.instructions+=2;NFSU2_TR(0x698f3b);
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
B698f3d:{NFSU2_TR(0x698f3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f3e:L698f3e:{c.instructions+=3;NFSU2_TR(0x698f3e);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698f40:{NFSU2_TR(0x698f40);
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
B698f41:{NFSU2_TR(0x698f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f42:L698f42:{c.instructions+=4;NFSU2_TR(0x698f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698f44:{NFSU2_TR(0x698f44);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B698f49:{NFSU2_TR(0x698f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f4e:{NFSU2_TR(0x698f4e);
if(r1(R+518)){{goto L698f68;}}
}
B698f50:L698f50:{c.instructions+=2;NFSU2_TR(0x698f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f55:{NFSU2_TR(0x698f55);
if(r1(R+518)){{goto L698f68;}}
}
B698f57:L698f57:{c.instructions+=2;NFSU2_TR(0x698f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f5c:{NFSU2_TR(0x698f5c);
if(r1(R+518)){{goto L698f68;}}
}
B698f5e:L698f5e:{c.instructions+=2;NFSU2_TR(0x698f5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f63:{NFSU2_TR(0x698f63);
if(r1(R+518)){{goto L698f68;}}
}
B698f65:L698f65:{c.instructions+=2;NFSU2_TR(0x698f65);
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
B698f67:{NFSU2_TR(0x698f67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f68:L698f68:{c.instructions+=3;NFSU2_TR(0x698f68);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698f6a:{NFSU2_TR(0x698f6a);
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
B698f6b:{NFSU2_TR(0x698f6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f6c:L698f6c:{c.instructions+=4;NFSU2_TR(0x698f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698f6e:{NFSU2_TR(0x698f6e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B698f73:{NFSU2_TR(0x698f73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f78:{NFSU2_TR(0x698f78);
if(r1(R+518)){{goto L698f99;}}
}
B698f7a:L698f7a:{c.instructions+=2;NFSU2_TR(0x698f7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f7f:{NFSU2_TR(0x698f7f);
if(r1(R+518)){{goto L698f99;}}
}
B698f81:L698f81:{c.instructions+=2;NFSU2_TR(0x698f81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f86:{NFSU2_TR(0x698f86);
if(r1(R+518)){{goto L698f99;}}
}
B698f88:L698f88:{c.instructions+=2;NFSU2_TR(0x698f88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f8d:{NFSU2_TR(0x698f8d);
if(r1(R+518)){{goto L698f99;}}
}
B698f8f:L698f8f:{c.instructions+=2;NFSU2_TR(0x698f8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698f94:{NFSU2_TR(0x698f94);
if(r1(R+518)){{goto L698f99;}}
}
B698f96:L698f96:{c.instructions+=2;NFSU2_TR(0x698f96);
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
B698f98:{NFSU2_TR(0x698f98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f99:L698f99:{c.instructions+=3;NFSU2_TR(0x698f99);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698f9b:{NFSU2_TR(0x698f9b);
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
B698f9c:{NFSU2_TR(0x698f9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698f9d:L698f9d:{c.instructions+=4;NFSU2_TR(0x698f9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698f9f:{NFSU2_TR(0x698f9f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B698fa4:{NFSU2_TR(0x698fa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fa9:{NFSU2_TR(0x698fa9);
if(r1(R+518)){{goto L698fd1;}}
}
B698fab:L698fab:{c.instructions+=2;NFSU2_TR(0x698fab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fb0:{NFSU2_TR(0x698fb0);
if(r1(R+518)){{goto L698fd1;}}
}
B698fb2:L698fb2:{c.instructions+=2;NFSU2_TR(0x698fb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fb7:{NFSU2_TR(0x698fb7);
if(r1(R+518)){{goto L698fd1;}}
}
B698fb9:L698fb9:{c.instructions+=2;NFSU2_TR(0x698fb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fbe:{NFSU2_TR(0x698fbe);
if(r1(R+518)){{goto L698fd1;}}
}
B698fc0:L698fc0:{c.instructions+=2;NFSU2_TR(0x698fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fc5:{NFSU2_TR(0x698fc5);
if(r1(R+518)){{goto L698fd1;}}
}
B698fc7:L698fc7:{c.instructions+=2;NFSU2_TR(0x698fc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fcc:{NFSU2_TR(0x698fcc);
if(r1(R+518)){{goto L698fd1;}}
}
B698fce:L698fce:{c.instructions+=2;NFSU2_TR(0x698fce);
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
B698fd0:{NFSU2_TR(0x698fd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698fd1:L698fd1:{c.instructions+=3;NFSU2_TR(0x698fd1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B698fd3:{NFSU2_TR(0x698fd3);
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
B698fd4:{NFSU2_TR(0x698fd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B698fd5:L698fd5:{c.instructions+=5;NFSU2_TR(0x698fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B698fd7:{NFSU2_TR(0x698fd7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B698fdc:{NFSU2_TR(0x698fdc);
w4(R+4,u32(0x70700000ull));
}
B698fe1:{NFSU2_TR(0x698fe1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B698fe3:{NFSU2_TR(0x698fe3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x69900au,699);}
}
B698fe5:L698fe5:{c.instructions+=1;NFSU2_TR(0x698fe5);
if(r1(R+518)){TAIL_STATIC(0x699029u,699);}
}
B698fe7:L698fe7:{c.instructions+=2;NFSU2_TR(0x698fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698fec:{NFSU2_TR(0x698fec);
if(r1(R+518)){TAIL_STATIC(0x699029u,699);}
}
B698fee:L698fee:{c.instructions+=2;NFSU2_TR(0x698fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698ff3:{NFSU2_TR(0x698ff3);
if(r1(R+518)){TAIL_STATIC(0x699029u,699);}
}
B698ff5:L698ff5:{c.instructions+=2;NFSU2_TR(0x698ff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B698ffa:{NFSU2_TR(0x698ffa);
if(r1(R+518)){TAIL_STATIC(0x699029u,699);}
}
B698ffc:L698ffc:{c.instructions+=1;NFSU2_TR(0x698ffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
TAIL_STATIC(0x699001u,699);
}
XIT:NFSU2_TR_EXIT(0x698,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
