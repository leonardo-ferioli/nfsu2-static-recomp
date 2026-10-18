#include "runtime.hpp"
namespace nfsu2raw {
uint32_t ref_0(Cpu& c){switch(c.pc){
case 0x40000000:{ // INT_ADD:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40000004;}
default:return 0;}}
uint32_t ref_1(Cpu& c){switch(c.pc){
case 0x40001000:{ // INT_ADD:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x40001004;}
default:return 0;}}
uint32_t ref_2(Cpu& c){switch(c.pc){
case 0x40002000:{ // INT_ADD:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x40002004;}
default:return 0;}}
uint32_t ref_3(Cpu& c){switch(c.pc){
case 0x40003000:{ // INT_ADD:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40003004;}
default:return 0;}}
uint32_t ref_4(Cpu& c){switch(c.pc){
case 0x40004000:{ // INT_ADD:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40004004;}
default:return 0;}}
uint32_t ref_5(Cpu& c){switch(c.pc){
case 0x40005000:{ // INT_ADD:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40005004;}
default:return 0;}}
uint32_t ref_6(Cpu& c){switch(c.pc){
case 0x40006000:{ // INT_ADD:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x40006004;}
default:return 0;}}
uint32_t ref_7(Cpu& c){switch(c.pc){
case 0x40007000:{ // INT_ADD:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x1full));
return 0x40007004;}
default:return 0;}}
uint32_t ref_8(Cpu& c){switch(c.pc){
case 0x40008000:{ // INT_ADD:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x40008004;}
default:return 0;}}
uint32_t ref_9(Cpu& c){switch(c.pc){
case 0x40009000:{ // INT_ADD:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x3full));
return 0x40009004;}
default:return 0;}}
uint32_t ref_10(Cpu& c){switch(c.pc){
case 0x4000a000:{ // INT_ADD:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x7full));
return 0x4000a004;}
default:return 0;}}
uint32_t ref_11(Cpu& c){switch(c.pc){
case 0x4000b000:{ // INT_ADD:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x4000b004;}
default:return 0;}}
uint32_t ref_12(Cpu& c){switch(c.pc){
case 0x4000c000:{ // INT_ADD:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0xffull));
return 0x4000c004;}
default:return 0;}}
uint32_t ref_13(Cpu& c){switch(c.pc){
case 0x4000d000:{ // INT_ADD:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x4000d004;}
default:return 0;}}
uint32_t ref_14(Cpu& c){switch(c.pc){
case 0x4000e000:{ // INT_ADD:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x4000e004;}
default:return 0;}}
uint32_t ref_15(Cpu& c){switch(c.pc){
case 0x4000f000:{ // INT_ADD:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x4000f004;}
default:return 0;}}
uint32_t ref_16(Cpu& c){switch(c.pc){
case 0x40010000:{ // INT_ADD:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40010004;}
default:return 0;}}
uint32_t ref_17(Cpu& c){switch(c.pc){
case 0x40011000:{ // INT_ADD:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40011004;}
default:return 0;}}
uint32_t ref_18(Cpu& c){switch(c.pc){
case 0x40012000:{ // INT_ADD:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40012004;}
default:return 0;}}
uint32_t ref_19(Cpu& c){switch(c.pc){
case 0x40013000:{ // INT_ADD:4<-4,4:cr:k=0
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x0ull,r<4>(c,0x600)));
return 0x40013004;}
default:return 0;}}
uint32_t ref_20(Cpu& c){switch(c.pc){
case 0x40014000:{ // INT_ADD:4<-4,4:cr:k=1
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0x600)));
return 0x40014004;}
default:return 0;}}
uint32_t ref_21(Cpu& c){switch(c.pc){
case 0x40015000:{ // INT_ADD:4<-4,4:cr:k=2
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x600)));
return 0x40015004;}
default:return 0;}}
uint32_t ref_22(Cpu& c){switch(c.pc){
case 0x40016000:{ // INT_ADD:4<-4,4:cr:k=3
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x3ull,r<4>(c,0x600)));
return 0x40016004;}
default:return 0;}}
uint32_t ref_23(Cpu& c){switch(c.pc){
case 0x40017000:{ // INT_ADD:4<-4,4:cr:k=7
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x7ull,r<4>(c,0x600)));
return 0x40017004;}
default:return 0;}}
uint32_t ref_24(Cpu& c){switch(c.pc){
case 0x40018000:{ // INT_ADD:4<-4,4:cr:k=8
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x600)));
return 0x40018004;}
default:return 0;}}
uint32_t ref_25(Cpu& c){switch(c.pc){
case 0x40019000:{ // INT_ADD:4<-4,4:cr:k=31
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x1full,r<4>(c,0x600)));
return 0x40019004;}
default:return 0;}}
uint32_t ref_26(Cpu& c){switch(c.pc){
case 0x4001a000:{ // INT_ADD:4<-4,4:cr:k=32
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x600)));
return 0x4001a004;}
default:return 0;}}
uint32_t ref_27(Cpu& c){switch(c.pc){
case 0x4001b000:{ // INT_ADD:4<-4,4:cr:k=63
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x3full,r<4>(c,0x600)));
return 0x4001b004;}
default:return 0;}}
uint32_t ref_28(Cpu& c){switch(c.pc){
case 0x4001c000:{ // INT_ADD:4<-4,4:cr:k=127
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x7full,r<4>(c,0x600)));
return 0x4001c004;}
default:return 0;}}
uint32_t ref_29(Cpu& c){switch(c.pc){
case 0x4001d000:{ // INT_ADD:4<-4,4:cr:k=128
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x600)));
return 0x4001d004;}
default:return 0;}}
uint32_t ref_30(Cpu& c){switch(c.pc){
case 0x4001e000:{ // INT_ADD:4<-4,4:cr:k=255
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0xffull,r<4>(c,0x600)));
return 0x4001e004;}
default:return 0;}}
uint32_t ref_31(Cpu& c){switch(c.pc){
case 0x4001f000:{ // INT_ADD:4<-4,4:cr:k=32767
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x7fffull,r<4>(c,0x600)));
return 0x4001f004;}
default:return 0;}}
uint32_t ref_32(Cpu& c){switch(c.pc){
case 0x40020000:{ // INT_ADD:4<-4,4:cr:k=32768
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x8000ull,r<4>(c,0x600)));
return 0x40020004;}
default:return 0;}}
uint32_t ref_33(Cpu& c){switch(c.pc){
case 0x40021000:{ // INT_ADD:4<-4,4:cr:k=65535
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0xffffull,r<4>(c,0x600)));
return 0x40021004;}
default:return 0;}}
uint32_t ref_34(Cpu& c){switch(c.pc){
case 0x40022000:{ // INT_ADD:4<-4,4:cr:k=2147483647
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x7fffffffull,r<4>(c,0x600)));
return 0x40022004;}
default:return 0;}}
uint32_t ref_35(Cpu& c){switch(c.pc){
case 0x40023000:{ // INT_ADD:4<-4,4:cr:k=2147483648
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0x80000000ull,r<4>(c,0x600)));
return 0x40023004;}
default:return 0;}}
uint32_t ref_36(Cpu& c){switch(c.pc){
case 0x40024000:{ // INT_ADD:4<-4,4:cr:k=4294967295
wr<4>(c,0x400,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x600)));
return 0x40024004;}
default:return 0;}}
uint32_t ref_37(Cpu& c){switch(c.pc){
case 0x40025000:{ // COPY:4<-4:r
wr<4>(c,0x400,eval<Op::COPY,4,4>(r<4>(c,0x500)));
return 0x40025004;}
default:return 0;}}
uint32_t ref_38(Cpu& c){switch(c.pc){
case 0x40026000:{ // COPY:4<-4:c:k=0
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x0ull));
return 0x40026004;}
default:return 0;}}
uint32_t ref_39(Cpu& c){switch(c.pc){
case 0x40027000:{ // COPY:4<-4:c:k=1
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x1ull));
return 0x40027004;}
default:return 0;}}
uint32_t ref_40(Cpu& c){switch(c.pc){
case 0x40028000:{ // COPY:4<-4:c:k=2
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x2ull));
return 0x40028004;}
default:return 0;}}
uint32_t ref_41(Cpu& c){switch(c.pc){
case 0x40029000:{ // COPY:4<-4:c:k=3
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x3ull));
return 0x40029004;}
default:return 0;}}
uint32_t ref_42(Cpu& c){switch(c.pc){
case 0x4002a000:{ // COPY:4<-4:c:k=7
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x7ull));
return 0x4002a004;}
default:return 0;}}
uint32_t ref_43(Cpu& c){switch(c.pc){
case 0x4002b000:{ // COPY:4<-4:c:k=8
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x8ull));
return 0x4002b004;}
default:return 0;}}
uint32_t ref_44(Cpu& c){switch(c.pc){
case 0x4002c000:{ // COPY:4<-4:c:k=31
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x1full));
return 0x4002c004;}
default:return 0;}}
uint32_t ref_45(Cpu& c){switch(c.pc){
case 0x4002d000:{ // COPY:4<-4:c:k=32
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x20ull));
return 0x4002d004;}
default:return 0;}}
uint32_t ref_46(Cpu& c){switch(c.pc){
case 0x4002e000:{ // COPY:4<-4:c:k=63
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x3full));
return 0x4002e004;}
default:return 0;}}
uint32_t ref_47(Cpu& c){switch(c.pc){
case 0x4002f000:{ // COPY:4<-4:c:k=127
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x7full));
return 0x4002f004;}
default:return 0;}}
uint32_t ref_48(Cpu& c){switch(c.pc){
case 0x40030000:{ // COPY:4<-4:c:k=128
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x80ull));
return 0x40030004;}
default:return 0;}}
uint32_t ref_49(Cpu& c){switch(c.pc){
case 0x40031000:{ // COPY:4<-4:c:k=255
wr<4>(c,0x400,eval<Op::COPY,4,4>(0xffull));
return 0x40031004;}
default:return 0;}}
uint32_t ref_50(Cpu& c){switch(c.pc){
case 0x40032000:{ // COPY:4<-4:c:k=32767
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x7fffull));
return 0x40032004;}
default:return 0;}}
uint32_t ref_51(Cpu& c){switch(c.pc){
case 0x40033000:{ // COPY:4<-4:c:k=32768
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x8000ull));
return 0x40033004;}
default:return 0;}}
uint32_t ref_52(Cpu& c){switch(c.pc){
case 0x40034000:{ // COPY:4<-4:c:k=65535
wr<4>(c,0x400,eval<Op::COPY,4,4>(0xffffull));
return 0x40034004;}
default:return 0;}}
uint32_t ref_53(Cpu& c){switch(c.pc){
case 0x40035000:{ // COPY:4<-4:c:k=2147483647
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x7fffffffull));
return 0x40035004;}
default:return 0;}}
uint32_t ref_54(Cpu& c){switch(c.pc){
case 0x40036000:{ // COPY:4<-4:c:k=2147483648
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x80000000ull));
return 0x40036004;}
default:return 0;}}
uint32_t ref_55(Cpu& c){switch(c.pc){
case 0x40037000:{ // COPY:4<-4:c:k=4294967295
wr<4>(c,0x400,eval<Op::COPY,4,4>(0xffffffffull));
return 0x40037004;}
default:return 0;}}
uint32_t ref_56(Cpu& c){switch(c.pc){
case 0x40038000:{ // INT_SUB:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40038004;}
default:return 0;}}
uint32_t ref_57(Cpu& c){switch(c.pc){
case 0x40039000:{ // INT_SUB:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x40039004;}
default:return 0;}}
uint32_t ref_58(Cpu& c){switch(c.pc){
case 0x4003a000:{ // INT_SUB:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x4003a004;}
default:return 0;}}
uint32_t ref_59(Cpu& c){switch(c.pc){
case 0x4003b000:{ // INT_SUB:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x4003b004;}
default:return 0;}}
uint32_t ref_60(Cpu& c){switch(c.pc){
case 0x4003c000:{ // INT_SUB:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x4003c004;}
default:return 0;}}
uint32_t ref_61(Cpu& c){switch(c.pc){
case 0x4003d000:{ // INT_SUB:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x4003d004;}
default:return 0;}}
uint32_t ref_62(Cpu& c){switch(c.pc){
case 0x4003e000:{ // INT_SUB:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x4003e004;}
default:return 0;}}
uint32_t ref_63(Cpu& c){switch(c.pc){
case 0x4003f000:{ // INT_SUB:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x1full));
return 0x4003f004;}
default:return 0;}}
uint32_t ref_64(Cpu& c){switch(c.pc){
case 0x40040000:{ // INT_SUB:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x40040004;}
default:return 0;}}
uint32_t ref_65(Cpu& c){switch(c.pc){
case 0x40041000:{ // INT_SUB:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x3full));
return 0x40041004;}
default:return 0;}}
uint32_t ref_66(Cpu& c){switch(c.pc){
case 0x40042000:{ // INT_SUB:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x7full));
return 0x40042004;}
default:return 0;}}
uint32_t ref_67(Cpu& c){switch(c.pc){
case 0x40043000:{ // INT_SUB:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x40043004;}
default:return 0;}}
uint32_t ref_68(Cpu& c){switch(c.pc){
case 0x40044000:{ // INT_SUB:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0xffull));
return 0x40044004;}
default:return 0;}}
uint32_t ref_69(Cpu& c){switch(c.pc){
case 0x40045000:{ // INT_SUB:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x40045004;}
default:return 0;}}
uint32_t ref_70(Cpu& c){switch(c.pc){
case 0x40046000:{ // INT_SUB:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x40046004;}
default:return 0;}}
uint32_t ref_71(Cpu& c){switch(c.pc){
case 0x40047000:{ // INT_SUB:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x40047004;}
default:return 0;}}
uint32_t ref_72(Cpu& c){switch(c.pc){
case 0x40048000:{ // INT_SUB:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40048004;}
default:return 0;}}
uint32_t ref_73(Cpu& c){switch(c.pc){
case 0x40049000:{ // INT_SUB:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40049004;}
default:return 0;}}
uint32_t ref_74(Cpu& c){switch(c.pc){
case 0x4004a000:{ // INT_SUB:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x4004a004;}
default:return 0;}}
uint32_t ref_75(Cpu& c){switch(c.pc){
case 0x4004b000:{ // INT_SUB:4<-4,4:cr:k=0
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x0ull,r<4>(c,0x600)));
return 0x4004b004;}
default:return 0;}}
uint32_t ref_76(Cpu& c){switch(c.pc){
case 0x4004c000:{ // INT_SUB:4<-4,4:cr:k=1
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x1ull,r<4>(c,0x600)));
return 0x4004c004;}
default:return 0;}}
uint32_t ref_77(Cpu& c){switch(c.pc){
case 0x4004d000:{ // INT_SUB:4<-4,4:cr:k=2
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x2ull,r<4>(c,0x600)));
return 0x4004d004;}
default:return 0;}}
uint32_t ref_78(Cpu& c){switch(c.pc){
case 0x4004e000:{ // INT_SUB:4<-4,4:cr:k=3
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x3ull,r<4>(c,0x600)));
return 0x4004e004;}
default:return 0;}}
uint32_t ref_79(Cpu& c){switch(c.pc){
case 0x4004f000:{ // INT_SUB:4<-4,4:cr:k=7
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x7ull,r<4>(c,0x600)));
return 0x4004f004;}
default:return 0;}}
uint32_t ref_80(Cpu& c){switch(c.pc){
case 0x40050000:{ // INT_SUB:4<-4,4:cr:k=8
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x8ull,r<4>(c,0x600)));
return 0x40050004;}
default:return 0;}}
uint32_t ref_81(Cpu& c){switch(c.pc){
case 0x40051000:{ // INT_SUB:4<-4,4:cr:k=31
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x1full,r<4>(c,0x600)));
return 0x40051004;}
default:return 0;}}
uint32_t ref_82(Cpu& c){switch(c.pc){
case 0x40052000:{ // INT_SUB:4<-4,4:cr:k=32
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x20ull,r<4>(c,0x600)));
return 0x40052004;}
default:return 0;}}
uint32_t ref_83(Cpu& c){switch(c.pc){
case 0x40053000:{ // INT_SUB:4<-4,4:cr:k=63
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x3full,r<4>(c,0x600)));
return 0x40053004;}
default:return 0;}}
uint32_t ref_84(Cpu& c){switch(c.pc){
case 0x40054000:{ // INT_SUB:4<-4,4:cr:k=127
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x7full,r<4>(c,0x600)));
return 0x40054004;}
default:return 0;}}
uint32_t ref_85(Cpu& c){switch(c.pc){
case 0x40055000:{ // INT_SUB:4<-4,4:cr:k=128
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x80ull,r<4>(c,0x600)));
return 0x40055004;}
default:return 0;}}
uint32_t ref_86(Cpu& c){switch(c.pc){
case 0x40056000:{ // INT_SUB:4<-4,4:cr:k=255
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0xffull,r<4>(c,0x600)));
return 0x40056004;}
default:return 0;}}
uint32_t ref_87(Cpu& c){switch(c.pc){
case 0x40057000:{ // INT_SUB:4<-4,4:cr:k=32767
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x7fffull,r<4>(c,0x600)));
return 0x40057004;}
default:return 0;}}
uint32_t ref_88(Cpu& c){switch(c.pc){
case 0x40058000:{ // INT_SUB:4<-4,4:cr:k=32768
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x8000ull,r<4>(c,0x600)));
return 0x40058004;}
default:return 0;}}
uint32_t ref_89(Cpu& c){switch(c.pc){
case 0x40059000:{ // INT_SUB:4<-4,4:cr:k=65535
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0xffffull,r<4>(c,0x600)));
return 0x40059004;}
default:return 0;}}
uint32_t ref_90(Cpu& c){switch(c.pc){
case 0x4005a000:{ // INT_SUB:4<-4,4:cr:k=2147483647
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x7fffffffull,r<4>(c,0x600)));
return 0x4005a004;}
default:return 0;}}
uint32_t ref_91(Cpu& c){switch(c.pc){
case 0x4005b000:{ // INT_SUB:4<-4,4:cr:k=2147483648
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0x80000000ull,r<4>(c,0x600)));
return 0x4005b004;}
default:return 0;}}
uint32_t ref_92(Cpu& c){switch(c.pc){
case 0x4005c000:{ // INT_SUB:4<-4,4:cr:k=4294967295
wr<4>(c,0x400,eval<Op::INT_SUB,4,4,4>(0xffffffffull,r<4>(c,0x600)));
return 0x4005c004;}
default:return 0;}}
uint32_t ref_93(Cpu& c){switch(c.pc){
case 0x4005d000:{ // INT_AND:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x4005d004;}
default:return 0;}}
uint32_t ref_94(Cpu& c){switch(c.pc){
case 0x4005e000:{ // INT_AND:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x4005e004;}
default:return 0;}}
uint32_t ref_95(Cpu& c){switch(c.pc){
case 0x4005f000:{ // INT_AND:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x4005f004;}
default:return 0;}}
uint32_t ref_96(Cpu& c){switch(c.pc){
case 0x40060000:{ // INT_AND:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40060004;}
default:return 0;}}
uint32_t ref_97(Cpu& c){switch(c.pc){
case 0x40061000:{ // INT_AND:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40061004;}
default:return 0;}}
uint32_t ref_98(Cpu& c){switch(c.pc){
case 0x40062000:{ // INT_AND:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40062004;}
default:return 0;}}
uint32_t ref_99(Cpu& c){switch(c.pc){
case 0x40063000:{ // INT_AND:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x40063004;}
default:return 0;}}
uint32_t ref_100(Cpu& c){switch(c.pc){
case 0x40064000:{ // INT_AND:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x1full));
return 0x40064004;}
default:return 0;}}
uint32_t ref_101(Cpu& c){switch(c.pc){
case 0x40065000:{ // INT_AND:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x40065004;}
default:return 0;}}
uint32_t ref_102(Cpu& c){switch(c.pc){
case 0x40066000:{ // INT_AND:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x3full));
return 0x40066004;}
default:return 0;}}
uint32_t ref_103(Cpu& c){switch(c.pc){
case 0x40067000:{ // INT_AND:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x7full));
return 0x40067004;}
default:return 0;}}
uint32_t ref_104(Cpu& c){switch(c.pc){
case 0x40068000:{ // INT_AND:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x40068004;}
default:return 0;}}
uint32_t ref_105(Cpu& c){switch(c.pc){
case 0x40069000:{ // INT_AND:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0xffull));
return 0x40069004;}
default:return 0;}}
uint32_t ref_106(Cpu& c){switch(c.pc){
case 0x4006a000:{ // INT_AND:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x4006a004;}
default:return 0;}}
uint32_t ref_107(Cpu& c){switch(c.pc){
case 0x4006b000:{ // INT_AND:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x4006b004;}
default:return 0;}}
uint32_t ref_108(Cpu& c){switch(c.pc){
case 0x4006c000:{ // INT_AND:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x4006c004;}
default:return 0;}}
uint32_t ref_109(Cpu& c){switch(c.pc){
case 0x4006d000:{ // INT_AND:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x4006d004;}
default:return 0;}}
uint32_t ref_110(Cpu& c){switch(c.pc){
case 0x4006e000:{ // INT_AND:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x4006e004;}
default:return 0;}}
uint32_t ref_111(Cpu& c){switch(c.pc){
case 0x4006f000:{ // INT_AND:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x4006f004;}
default:return 0;}}
uint32_t ref_112(Cpu& c){switch(c.pc){
case 0x40070000:{ // INT_AND:4<-4,4:cc:k=0
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x0ull,0x0ull));
return 0x40070004;}
default:return 0;}}
uint32_t ref_113(Cpu& c){switch(c.pc){
case 0x40071000:{ // INT_AND:4<-4,4:cc:k=1
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x1ull,0x1ull));
return 0x40071004;}
default:return 0;}}
uint32_t ref_114(Cpu& c){switch(c.pc){
case 0x40072000:{ // INT_AND:4<-4,4:cc:k=2
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x2ull,0x2ull));
return 0x40072004;}
default:return 0;}}
uint32_t ref_115(Cpu& c){switch(c.pc){
case 0x40073000:{ // INT_AND:4<-4,4:cc:k=3
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x3ull,0x3ull));
return 0x40073004;}
default:return 0;}}
uint32_t ref_116(Cpu& c){switch(c.pc){
case 0x40074000:{ // INT_AND:4<-4,4:cc:k=7
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x7ull,0x7ull));
return 0x40074004;}
default:return 0;}}
uint32_t ref_117(Cpu& c){switch(c.pc){
case 0x40075000:{ // INT_AND:4<-4,4:cc:k=8
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x8ull,0x8ull));
return 0x40075004;}
default:return 0;}}
uint32_t ref_118(Cpu& c){switch(c.pc){
case 0x40076000:{ // INT_AND:4<-4,4:cc:k=31
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x1full,0x1full));
return 0x40076004;}
default:return 0;}}
uint32_t ref_119(Cpu& c){switch(c.pc){
case 0x40077000:{ // INT_AND:4<-4,4:cc:k=32
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x20ull,0x20ull));
return 0x40077004;}
default:return 0;}}
uint32_t ref_120(Cpu& c){switch(c.pc){
case 0x40078000:{ // INT_AND:4<-4,4:cc:k=63
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x3full,0x3full));
return 0x40078004;}
default:return 0;}}
uint32_t ref_121(Cpu& c){switch(c.pc){
case 0x40079000:{ // INT_AND:4<-4,4:cc:k=127
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x7full,0x7full));
return 0x40079004;}
default:return 0;}}
uint32_t ref_122(Cpu& c){switch(c.pc){
case 0x4007a000:{ // INT_AND:4<-4,4:cc:k=128
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x80ull,0x80ull));
return 0x4007a004;}
default:return 0;}}
uint32_t ref_123(Cpu& c){switch(c.pc){
case 0x4007b000:{ // INT_AND:4<-4,4:cc:k=255
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0xffull,0xffull));
return 0x4007b004;}
default:return 0;}}
uint32_t ref_124(Cpu& c){switch(c.pc){
case 0x4007c000:{ // INT_AND:4<-4,4:cc:k=32767
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x7fffull,0x7fffull));
return 0x4007c004;}
default:return 0;}}
uint32_t ref_125(Cpu& c){switch(c.pc){
case 0x4007d000:{ // INT_AND:4<-4,4:cc:k=32768
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x8000ull,0x8000ull));
return 0x4007d004;}
default:return 0;}}
uint32_t ref_126(Cpu& c){switch(c.pc){
case 0x4007e000:{ // INT_AND:4<-4,4:cc:k=65535
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0xffffull,0xffffull));
return 0x4007e004;}
default:return 0;}}
uint32_t ref_127(Cpu& c){switch(c.pc){
case 0x4007f000:{ // INT_AND:4<-4,4:cc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x7fffffffull,0x7fffffffull));
return 0x4007f004;}
default:return 0;}}
uint32_t ref_128(Cpu& c){switch(c.pc){
case 0x40080000:{ // INT_AND:4<-4,4:cc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0x80000000ull,0x80000000ull));
return 0x40080004;}
default:return 0;}}
uint32_t ref_129(Cpu& c){switch(c.pc){
case 0x40081000:{ // INT_AND:4<-4,4:cc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_AND,4,4,4>(0xffffffffull,0xffffffffull));
return 0x40081004;}
default:return 0;}}
uint32_t ref_130(Cpu& c){switch(c.pc){
case 0x40082000:{ // INT_RIGHT:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40082004;}
default:return 0;}}
uint32_t ref_131(Cpu& c){switch(c.pc){
case 0x40083000:{ // INT_RIGHT:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x40083004;}
default:return 0;}}
uint32_t ref_132(Cpu& c){switch(c.pc){
case 0x40084000:{ // INT_RIGHT:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x40084004;}
default:return 0;}}
uint32_t ref_133(Cpu& c){switch(c.pc){
case 0x40085000:{ // INT_RIGHT:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40085004;}
default:return 0;}}
uint32_t ref_134(Cpu& c){switch(c.pc){
case 0x40086000:{ // INT_RIGHT:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40086004;}
default:return 0;}}
uint32_t ref_135(Cpu& c){switch(c.pc){
case 0x40087000:{ // INT_RIGHT:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40087004;}
default:return 0;}}
uint32_t ref_136(Cpu& c){switch(c.pc){
case 0x40088000:{ // INT_RIGHT:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x40088004;}
default:return 0;}}
uint32_t ref_137(Cpu& c){switch(c.pc){
case 0x40089000:{ // INT_RIGHT:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x1full));
return 0x40089004;}
default:return 0;}}
uint32_t ref_138(Cpu& c){switch(c.pc){
case 0x4008a000:{ // INT_RIGHT:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x4008a004;}
default:return 0;}}
uint32_t ref_139(Cpu& c){switch(c.pc){
case 0x4008b000:{ // INT_RIGHT:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x3full));
return 0x4008b004;}
default:return 0;}}
uint32_t ref_140(Cpu& c){switch(c.pc){
case 0x4008c000:{ // INT_RIGHT:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x7full));
return 0x4008c004;}
default:return 0;}}
uint32_t ref_141(Cpu& c){switch(c.pc){
case 0x4008d000:{ // INT_RIGHT:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x4008d004;}
default:return 0;}}
uint32_t ref_142(Cpu& c){switch(c.pc){
case 0x4008e000:{ // INT_RIGHT:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0xffull));
return 0x4008e004;}
default:return 0;}}
uint32_t ref_143(Cpu& c){switch(c.pc){
case 0x4008f000:{ // INT_RIGHT:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x4008f004;}
default:return 0;}}
uint32_t ref_144(Cpu& c){switch(c.pc){
case 0x40090000:{ // INT_RIGHT:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x40090004;}
default:return 0;}}
uint32_t ref_145(Cpu& c){switch(c.pc){
case 0x40091000:{ // INT_RIGHT:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x40091004;}
default:return 0;}}
uint32_t ref_146(Cpu& c){switch(c.pc){
case 0x40092000:{ // INT_RIGHT:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40092004;}
default:return 0;}}
uint32_t ref_147(Cpu& c){switch(c.pc){
case 0x40093000:{ // INT_RIGHT:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40093004;}
default:return 0;}}
uint32_t ref_148(Cpu& c){switch(c.pc){
case 0x40094000:{ // INT_RIGHT:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40094004;}
default:return 0;}}
uint32_t ref_149(Cpu& c){switch(c.pc){
case 0x40095000:{ // INT_EQUAL:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40095004;}
default:return 0;}}
uint32_t ref_150(Cpu& c){switch(c.pc){
case 0x40096000:{ // INT_EQUAL:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x40096004;}
default:return 0;}}
uint32_t ref_151(Cpu& c){switch(c.pc){
case 0x40097000:{ // INT_EQUAL:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x40097004;}
default:return 0;}}
uint32_t ref_152(Cpu& c){switch(c.pc){
case 0x40098000:{ // INT_EQUAL:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x40098004;}
default:return 0;}}
uint32_t ref_153(Cpu& c){switch(c.pc){
case 0x40099000:{ // INT_EQUAL:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x40099004;}
default:return 0;}}
uint32_t ref_154(Cpu& c){switch(c.pc){
case 0x4009a000:{ // INT_EQUAL:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x4009a004;}
default:return 0;}}
uint32_t ref_155(Cpu& c){switch(c.pc){
case 0x4009b000:{ // INT_EQUAL:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x4009b004;}
default:return 0;}}
uint32_t ref_156(Cpu& c){switch(c.pc){
case 0x4009c000:{ // INT_EQUAL:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x1full));
return 0x4009c004;}
default:return 0;}}
uint32_t ref_157(Cpu& c){switch(c.pc){
case 0x4009d000:{ // INT_EQUAL:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x4009d004;}
default:return 0;}}
uint32_t ref_158(Cpu& c){switch(c.pc){
case 0x4009e000:{ // INT_EQUAL:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x3full));
return 0x4009e004;}
default:return 0;}}
uint32_t ref_159(Cpu& c){switch(c.pc){
case 0x4009f000:{ // INT_EQUAL:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x7full));
return 0x4009f004;}
default:return 0;}}
uint32_t ref_160(Cpu& c){switch(c.pc){
case 0x400a0000:{ // INT_EQUAL:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x400a0004;}
default:return 0;}}
uint32_t ref_161(Cpu& c){switch(c.pc){
case 0x400a1000:{ // INT_EQUAL:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0xffull));
return 0x400a1004;}
default:return 0;}}
uint32_t ref_162(Cpu& c){switch(c.pc){
case 0x400a2000:{ // INT_EQUAL:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x400a2004;}
default:return 0;}}
uint32_t ref_163(Cpu& c){switch(c.pc){
case 0x400a3000:{ // INT_EQUAL:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x400a3004;}
default:return 0;}}
uint32_t ref_164(Cpu& c){switch(c.pc){
case 0x400a4000:{ // INT_EQUAL:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x400a4004;}
default:return 0;}}
uint32_t ref_165(Cpu& c){switch(c.pc){
case 0x400a5000:{ // INT_EQUAL:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x400a5004;}
default:return 0;}}
uint32_t ref_166(Cpu& c){switch(c.pc){
case 0x400a6000:{ // INT_EQUAL:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x400a6004;}
default:return 0;}}
uint32_t ref_167(Cpu& c){switch(c.pc){
case 0x400a7000:{ // INT_EQUAL:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x400a7004;}
default:return 0;}}
uint32_t ref_168(Cpu& c){switch(c.pc){
case 0x400a8000:{ // INT_NOTEQUAL:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x400a8004;}
default:return 0;}}
uint32_t ref_169(Cpu& c){switch(c.pc){
case 0x400a9000:{ // INT_NOTEQUAL:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x400a9004;}
default:return 0;}}
uint32_t ref_170(Cpu& c){switch(c.pc){
case 0x400aa000:{ // INT_NOTEQUAL:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x400aa004;}
default:return 0;}}
uint32_t ref_171(Cpu& c){switch(c.pc){
case 0x400ab000:{ // INT_NOTEQUAL:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x400ab004;}
default:return 0;}}
uint32_t ref_172(Cpu& c){switch(c.pc){
case 0x400ac000:{ // INT_NOTEQUAL:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x400ac004;}
default:return 0;}}
uint32_t ref_173(Cpu& c){switch(c.pc){
case 0x400ad000:{ // INT_NOTEQUAL:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x400ad004;}
default:return 0;}}
uint32_t ref_174(Cpu& c){switch(c.pc){
case 0x400ae000:{ // INT_NOTEQUAL:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x400ae004;}
default:return 0;}}
uint32_t ref_175(Cpu& c){switch(c.pc){
case 0x400af000:{ // INT_NOTEQUAL:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x1full));
return 0x400af004;}
default:return 0;}}
uint32_t ref_176(Cpu& c){switch(c.pc){
case 0x400b0000:{ // INT_NOTEQUAL:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x400b0004;}
default:return 0;}}
uint32_t ref_177(Cpu& c){switch(c.pc){
case 0x400b1000:{ // INT_NOTEQUAL:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x3full));
return 0x400b1004;}
default:return 0;}}
uint32_t ref_178(Cpu& c){switch(c.pc){
case 0x400b2000:{ // INT_NOTEQUAL:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x7full));
return 0x400b2004;}
default:return 0;}}
uint32_t ref_179(Cpu& c){switch(c.pc){
case 0x400b3000:{ // INT_NOTEQUAL:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x400b3004;}
default:return 0;}}
uint32_t ref_180(Cpu& c){switch(c.pc){
case 0x400b4000:{ // INT_NOTEQUAL:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0xffull));
return 0x400b4004;}
default:return 0;}}
uint32_t ref_181(Cpu& c){switch(c.pc){
case 0x400b5000:{ // INT_NOTEQUAL:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x400b5004;}
default:return 0;}}
uint32_t ref_182(Cpu& c){switch(c.pc){
case 0x400b6000:{ // INT_NOTEQUAL:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x400b6004;}
default:return 0;}}
uint32_t ref_183(Cpu& c){switch(c.pc){
case 0x400b7000:{ // INT_NOTEQUAL:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x400b7004;}
default:return 0;}}
uint32_t ref_184(Cpu& c){switch(c.pc){
case 0x400b8000:{ // INT_NOTEQUAL:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x400b8004;}
default:return 0;}}
uint32_t ref_185(Cpu& c){switch(c.pc){
case 0x400b9000:{ // INT_NOTEQUAL:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x400b9004;}
default:return 0;}}
uint32_t ref_186(Cpu& c){switch(c.pc){
case 0x400ba000:{ // INT_NOTEQUAL:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x400ba004;}
default:return 0;}}
uint32_t ref_187(Cpu& c){switch(c.pc){
case 0x400bb000:{ // COPY:1<-1:r
wr<1>(c,0x400,eval<Op::COPY,1,1>(r<1>(c,0x500)));
return 0x400bb004;}
default:return 0;}}
uint32_t ref_188(Cpu& c){switch(c.pc){
case 0x400bc000:{ // COPY:1<-1:c:k=0
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x0ull));
return 0x400bc004;}
default:return 0;}}
uint32_t ref_189(Cpu& c){switch(c.pc){
case 0x400bd000:{ // COPY:1<-1:c:k=1
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x1ull));
return 0x400bd004;}
default:return 0;}}
uint32_t ref_190(Cpu& c){switch(c.pc){
case 0x400be000:{ // COPY:1<-1:c:k=2
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x2ull));
return 0x400be004;}
default:return 0;}}
uint32_t ref_191(Cpu& c){switch(c.pc){
case 0x400bf000:{ // COPY:1<-1:c:k=3
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x3ull));
return 0x400bf004;}
default:return 0;}}
uint32_t ref_192(Cpu& c){switch(c.pc){
case 0x400c0000:{ // COPY:1<-1:c:k=7
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x7ull));
return 0x400c0004;}
default:return 0;}}
uint32_t ref_193(Cpu& c){switch(c.pc){
case 0x400c1000:{ // COPY:1<-1:c:k=8
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x8ull));
return 0x400c1004;}
default:return 0;}}
uint32_t ref_194(Cpu& c){switch(c.pc){
case 0x400c2000:{ // COPY:1<-1:c:k=31
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x1full));
return 0x400c2004;}
default:return 0;}}
uint32_t ref_195(Cpu& c){switch(c.pc){
case 0x400c3000:{ // COPY:1<-1:c:k=32
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x20ull));
return 0x400c3004;}
default:return 0;}}
uint32_t ref_196(Cpu& c){switch(c.pc){
case 0x400c4000:{ // COPY:1<-1:c:k=63
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x3full));
return 0x400c4004;}
default:return 0;}}
uint32_t ref_197(Cpu& c){switch(c.pc){
case 0x400c5000:{ // COPY:1<-1:c:k=127
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x7full));
return 0x400c5004;}
default:return 0;}}
uint32_t ref_198(Cpu& c){switch(c.pc){
case 0x400c6000:{ // COPY:1<-1:c:k=128
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x80ull));
return 0x400c6004;}
default:return 0;}}
uint32_t ref_199(Cpu& c){switch(c.pc){
case 0x400c7000:{ // COPY:1<-1:c:k=255
wr<1>(c,0x400,eval<Op::COPY,1,1>(0xffull));
return 0x400c7004;}
default:return 0;}}
uint32_t ref_200(Cpu& c){switch(c.pc){
case 0x400c8000:{ // COPY:1<-1:c:k=32767
wr<1>(c,0x400,eval<Op::COPY,1,1>(0xffull));
return 0x400c8004;}
default:return 0;}}
uint32_t ref_201(Cpu& c){switch(c.pc){
case 0x400c9000:{ // COPY:1<-1:c:k=32768
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x0ull));
return 0x400c9004;}
default:return 0;}}
uint32_t ref_202(Cpu& c){switch(c.pc){
case 0x400ca000:{ // COPY:1<-1:c:k=65535
wr<1>(c,0x400,eval<Op::COPY,1,1>(0xffull));
return 0x400ca004;}
default:return 0;}}
uint32_t ref_203(Cpu& c){switch(c.pc){
case 0x400cb000:{ // COPY:1<-1:c:k=2147483647
wr<1>(c,0x400,eval<Op::COPY,1,1>(0xffull));
return 0x400cb004;}
default:return 0;}}
uint32_t ref_204(Cpu& c){switch(c.pc){
case 0x400cc000:{ // COPY:1<-1:c:k=2147483648
wr<1>(c,0x400,eval<Op::COPY,1,1>(0x0ull));
return 0x400cc004;}
default:return 0;}}
uint32_t ref_205(Cpu& c){switch(c.pc){
case 0x400cd000:{ // COPY:1<-1:c:k=4294967295
wr<1>(c,0x400,eval<Op::COPY,1,1>(0xffull));
return 0x400cd004;}
default:return 0;}}
uint32_t ref_206(Cpu& c){switch(c.pc){
case 0x400ce000:{ // INT_MULT:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x400ce004;}
default:return 0;}}
uint32_t ref_207(Cpu& c){switch(c.pc){
case 0x400cf000:{ // INT_MULT:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x400cf004;}
default:return 0;}}
uint32_t ref_208(Cpu& c){switch(c.pc){
case 0x400d0000:{ // INT_MULT:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x400d0004;}
default:return 0;}}
uint32_t ref_209(Cpu& c){switch(c.pc){
case 0x400d1000:{ // INT_MULT:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x400d1004;}
default:return 0;}}
uint32_t ref_210(Cpu& c){switch(c.pc){
case 0x400d2000:{ // INT_MULT:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x400d2004;}
default:return 0;}}
uint32_t ref_211(Cpu& c){switch(c.pc){
case 0x400d3000:{ // INT_MULT:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x400d3004;}
default:return 0;}}
uint32_t ref_212(Cpu& c){switch(c.pc){
case 0x400d4000:{ // INT_MULT:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x400d4004;}
default:return 0;}}
uint32_t ref_213(Cpu& c){switch(c.pc){
case 0x400d5000:{ // INT_MULT:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x1full));
return 0x400d5004;}
default:return 0;}}
uint32_t ref_214(Cpu& c){switch(c.pc){
case 0x400d6000:{ // INT_MULT:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x400d6004;}
default:return 0;}}
uint32_t ref_215(Cpu& c){switch(c.pc){
case 0x400d7000:{ // INT_MULT:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x3full));
return 0x400d7004;}
default:return 0;}}
uint32_t ref_216(Cpu& c){switch(c.pc){
case 0x400d8000:{ // INT_MULT:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x7full));
return 0x400d8004;}
default:return 0;}}
uint32_t ref_217(Cpu& c){switch(c.pc){
case 0x400d9000:{ // INT_MULT:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x400d9004;}
default:return 0;}}
uint32_t ref_218(Cpu& c){switch(c.pc){
case 0x400da000:{ // INT_MULT:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400da004;}
default:return 0;}}
uint32_t ref_219(Cpu& c){switch(c.pc){
case 0x400db000:{ // INT_MULT:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400db004;}
default:return 0;}}
uint32_t ref_220(Cpu& c){switch(c.pc){
case 0x400dc000:{ // INT_MULT:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x400dc004;}
default:return 0;}}
uint32_t ref_221(Cpu& c){switch(c.pc){
case 0x400dd000:{ // INT_MULT:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400dd004;}
default:return 0;}}
uint32_t ref_222(Cpu& c){switch(c.pc){
case 0x400de000:{ // INT_MULT:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400de004;}
default:return 0;}}
uint32_t ref_223(Cpu& c){switch(c.pc){
case 0x400df000:{ // INT_MULT:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x400df004;}
default:return 0;}}
uint32_t ref_224(Cpu& c){switch(c.pc){
case 0x400e0000:{ // INT_MULT:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400e0004;}
default:return 0;}}
uint32_t ref_225(Cpu& c){switch(c.pc){
case 0x400e1000:{ // BOOL_NEGATE:1<-1:r
wr<1>(c,0x400,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x500)));
return 0x400e1004;}
default:return 0;}}
uint32_t ref_226(Cpu& c){switch(c.pc){
case 0x400e2000:{ // INT_OR:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x400e2004;}
default:return 0;}}
uint32_t ref_227(Cpu& c){switch(c.pc){
case 0x400e3000:{ // INT_OR:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x400e3004;}
default:return 0;}}
uint32_t ref_228(Cpu& c){switch(c.pc){
case 0x400e4000:{ // INT_OR:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x400e4004;}
default:return 0;}}
uint32_t ref_229(Cpu& c){switch(c.pc){
case 0x400e5000:{ // INT_OR:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x400e5004;}
default:return 0;}}
uint32_t ref_230(Cpu& c){switch(c.pc){
case 0x400e6000:{ // INT_OR:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x400e6004;}
default:return 0;}}
uint32_t ref_231(Cpu& c){switch(c.pc){
case 0x400e7000:{ // INT_OR:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x400e7004;}
default:return 0;}}
uint32_t ref_232(Cpu& c){switch(c.pc){
case 0x400e8000:{ // INT_OR:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x400e8004;}
default:return 0;}}
uint32_t ref_233(Cpu& c){switch(c.pc){
case 0x400e9000:{ // INT_OR:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x1full));
return 0x400e9004;}
default:return 0;}}
uint32_t ref_234(Cpu& c){switch(c.pc){
case 0x400ea000:{ // INT_OR:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x400ea004;}
default:return 0;}}
uint32_t ref_235(Cpu& c){switch(c.pc){
case 0x400eb000:{ // INT_OR:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x3full));
return 0x400eb004;}
default:return 0;}}
uint32_t ref_236(Cpu& c){switch(c.pc){
case 0x400ec000:{ // INT_OR:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x7full));
return 0x400ec004;}
default:return 0;}}
uint32_t ref_237(Cpu& c){switch(c.pc){
case 0x400ed000:{ // INT_OR:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x400ed004;}
default:return 0;}}
uint32_t ref_238(Cpu& c){switch(c.pc){
case 0x400ee000:{ // INT_OR:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400ee004;}
default:return 0;}}
uint32_t ref_239(Cpu& c){switch(c.pc){
case 0x400ef000:{ // INT_OR:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400ef004;}
default:return 0;}}
uint32_t ref_240(Cpu& c){switch(c.pc){
case 0x400f0000:{ // INT_OR:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x400f0004;}
default:return 0;}}
uint32_t ref_241(Cpu& c){switch(c.pc){
case 0x400f1000:{ // INT_OR:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400f1004;}
default:return 0;}}
uint32_t ref_242(Cpu& c){switch(c.pc){
case 0x400f2000:{ // INT_OR:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400f2004;}
default:return 0;}}
uint32_t ref_243(Cpu& c){switch(c.pc){
case 0x400f3000:{ // INT_OR:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x400f3004;}
default:return 0;}}
uint32_t ref_244(Cpu& c){switch(c.pc){
case 0x400f4000:{ // INT_OR:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x400f4004;}
default:return 0;}}
uint32_t ref_245(Cpu& c){switch(c.pc){
case 0x400f5000:{ // INT_SLESS:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x400f5004;}
default:return 0;}}
uint32_t ref_246(Cpu& c){switch(c.pc){
case 0x400f6000:{ // INT_SLESS:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x400f6004;}
default:return 0;}}
uint32_t ref_247(Cpu& c){switch(c.pc){
case 0x400f7000:{ // INT_SLESS:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x400f7004;}
default:return 0;}}
uint32_t ref_248(Cpu& c){switch(c.pc){
case 0x400f8000:{ // INT_SLESS:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x400f8004;}
default:return 0;}}
uint32_t ref_249(Cpu& c){switch(c.pc){
case 0x400f9000:{ // INT_SLESS:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x400f9004;}
default:return 0;}}
uint32_t ref_250(Cpu& c){switch(c.pc){
case 0x400fa000:{ // INT_SLESS:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x400fa004;}
default:return 0;}}
uint32_t ref_251(Cpu& c){switch(c.pc){
case 0x400fb000:{ // INT_SLESS:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x400fb004;}
default:return 0;}}
uint32_t ref_252(Cpu& c){switch(c.pc){
case 0x400fc000:{ // INT_SLESS:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x1full));
return 0x400fc004;}
default:return 0;}}
uint32_t ref_253(Cpu& c){switch(c.pc){
case 0x400fd000:{ // INT_SLESS:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x400fd004;}
default:return 0;}}
uint32_t ref_254(Cpu& c){switch(c.pc){
case 0x400fe000:{ // INT_SLESS:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x3full));
return 0x400fe004;}
default:return 0;}}
uint32_t ref_255(Cpu& c){switch(c.pc){
case 0x400ff000:{ // INT_SLESS:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x7full));
return 0x400ff004;}
default:return 0;}}
uint32_t ref_256(Cpu& c){switch(c.pc){
case 0x40100000:{ // INT_SLESS:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x40100004;}
default:return 0;}}
uint32_t ref_257(Cpu& c){switch(c.pc){
case 0x40101000:{ // INT_SLESS:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0xffull));
return 0x40101004;}
default:return 0;}}
uint32_t ref_258(Cpu& c){switch(c.pc){
case 0x40102000:{ // INT_SLESS:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x40102004;}
default:return 0;}}
uint32_t ref_259(Cpu& c){switch(c.pc){
case 0x40103000:{ // INT_SLESS:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x40103004;}
default:return 0;}}
uint32_t ref_260(Cpu& c){switch(c.pc){
case 0x40104000:{ // INT_SLESS:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x40104004;}
default:return 0;}}
uint32_t ref_261(Cpu& c){switch(c.pc){
case 0x40105000:{ // INT_SLESS:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40105004;}
default:return 0;}}
uint32_t ref_262(Cpu& c){switch(c.pc){
case 0x40106000:{ // INT_SLESS:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40106004;}
default:return 0;}}
uint32_t ref_263(Cpu& c){switch(c.pc){
case 0x40107000:{ // INT_SLESS:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40107004;}
default:return 0;}}
uint32_t ref_264(Cpu& c){switch(c.pc){
case 0x40108000:{ // INT_AND:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40108004;}
default:return 0;}}
uint32_t ref_265(Cpu& c){switch(c.pc){
case 0x40109000:{ // INT_AND:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40109004;}
default:return 0;}}
uint32_t ref_266(Cpu& c){switch(c.pc){
case 0x4010a000:{ // INT_AND:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x4010a004;}
default:return 0;}}
uint32_t ref_267(Cpu& c){switch(c.pc){
case 0x4010b000:{ // INT_AND:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x4010b004;}
default:return 0;}}
uint32_t ref_268(Cpu& c){switch(c.pc){
case 0x4010c000:{ // INT_AND:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x4010c004;}
default:return 0;}}
uint32_t ref_269(Cpu& c){switch(c.pc){
case 0x4010d000:{ // INT_AND:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x4010d004;}
default:return 0;}}
uint32_t ref_270(Cpu& c){switch(c.pc){
case 0x4010e000:{ // INT_AND:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x4010e004;}
default:return 0;}}
uint32_t ref_271(Cpu& c){switch(c.pc){
case 0x4010f000:{ // INT_AND:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x1full));
return 0x4010f004;}
default:return 0;}}
uint32_t ref_272(Cpu& c){switch(c.pc){
case 0x40110000:{ // INT_AND:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40110004;}
default:return 0;}}
uint32_t ref_273(Cpu& c){switch(c.pc){
case 0x40111000:{ // INT_AND:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40111004;}
default:return 0;}}
uint32_t ref_274(Cpu& c){switch(c.pc){
case 0x40112000:{ // INT_AND:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40112004;}
default:return 0;}}
uint32_t ref_275(Cpu& c){switch(c.pc){
case 0x40113000:{ // INT_AND:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40113004;}
default:return 0;}}
uint32_t ref_276(Cpu& c){switch(c.pc){
case 0x40114000:{ // INT_AND:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40114004;}
default:return 0;}}
uint32_t ref_277(Cpu& c){switch(c.pc){
case 0x40115000:{ // INT_AND:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40115004;}
default:return 0;}}
uint32_t ref_278(Cpu& c){switch(c.pc){
case 0x40116000:{ // INT_AND:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40116004;}
default:return 0;}}
uint32_t ref_279(Cpu& c){switch(c.pc){
case 0x40117000:{ // INT_AND:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40117004;}
default:return 0;}}
uint32_t ref_280(Cpu& c){switch(c.pc){
case 0x40118000:{ // INT_AND:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40118004;}
default:return 0;}}
uint32_t ref_281(Cpu& c){switch(c.pc){
case 0x40119000:{ // INT_AND:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40119004;}
default:return 0;}}
uint32_t ref_282(Cpu& c){switch(c.pc){
case 0x4011a000:{ // INT_AND:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4011a004;}
default:return 0;}}
uint32_t ref_283(Cpu& c){switch(c.pc){
case 0x4011b000:{ // INT_AND:1<-1,1:cc:k=0
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x0ull,0x0ull));
return 0x4011b004;}
default:return 0;}}
uint32_t ref_284(Cpu& c){switch(c.pc){
case 0x4011c000:{ // INT_AND:1<-1,1:cc:k=1
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x1ull,0x1ull));
return 0x4011c004;}
default:return 0;}}
uint32_t ref_285(Cpu& c){switch(c.pc){
case 0x4011d000:{ // INT_AND:1<-1,1:cc:k=2
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x2ull,0x2ull));
return 0x4011d004;}
default:return 0;}}
uint32_t ref_286(Cpu& c){switch(c.pc){
case 0x4011e000:{ // INT_AND:1<-1,1:cc:k=3
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x3ull,0x3ull));
return 0x4011e004;}
default:return 0;}}
uint32_t ref_287(Cpu& c){switch(c.pc){
case 0x4011f000:{ // INT_AND:1<-1,1:cc:k=7
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x7ull,0x7ull));
return 0x4011f004;}
default:return 0;}}
uint32_t ref_288(Cpu& c){switch(c.pc){
case 0x40120000:{ // INT_AND:1<-1,1:cc:k=8
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x8ull,0x8ull));
return 0x40120004;}
default:return 0;}}
uint32_t ref_289(Cpu& c){switch(c.pc){
case 0x40121000:{ // INT_AND:1<-1,1:cc:k=31
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x1full,0x1full));
return 0x40121004;}
default:return 0;}}
uint32_t ref_290(Cpu& c){switch(c.pc){
case 0x40122000:{ // INT_AND:1<-1,1:cc:k=32
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x20ull,0x20ull));
return 0x40122004;}
default:return 0;}}
uint32_t ref_291(Cpu& c){switch(c.pc){
case 0x40123000:{ // INT_AND:1<-1,1:cc:k=63
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x3full,0x3full));
return 0x40123004;}
default:return 0;}}
uint32_t ref_292(Cpu& c){switch(c.pc){
case 0x40124000:{ // INT_AND:1<-1,1:cc:k=127
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x7full,0x7full));
return 0x40124004;}
default:return 0;}}
uint32_t ref_293(Cpu& c){switch(c.pc){
case 0x40125000:{ // INT_AND:1<-1,1:cc:k=128
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x80ull,0x80ull));
return 0x40125004;}
default:return 0;}}
uint32_t ref_294(Cpu& c){switch(c.pc){
case 0x40126000:{ // INT_AND:1<-1,1:cc:k=255
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0xffull,0xffull));
return 0x40126004;}
default:return 0;}}
uint32_t ref_295(Cpu& c){switch(c.pc){
case 0x40127000:{ // INT_AND:1<-1,1:cc:k=32767
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0xffull,0xffull));
return 0x40127004;}
default:return 0;}}
uint32_t ref_296(Cpu& c){switch(c.pc){
case 0x40128000:{ // INT_AND:1<-1,1:cc:k=32768
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x0ull,0x0ull));
return 0x40128004;}
default:return 0;}}
uint32_t ref_297(Cpu& c){switch(c.pc){
case 0x40129000:{ // INT_AND:1<-1,1:cc:k=65535
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0xffull,0xffull));
return 0x40129004;}
default:return 0;}}
uint32_t ref_298(Cpu& c){switch(c.pc){
case 0x4012a000:{ // INT_AND:1<-1,1:cc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0xffull,0xffull));
return 0x4012a004;}
default:return 0;}}
uint32_t ref_299(Cpu& c){switch(c.pc){
case 0x4012b000:{ // INT_AND:1<-1,1:cc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0x0ull,0x0ull));
return 0x4012b004;}
default:return 0;}}
uint32_t ref_300(Cpu& c){switch(c.pc){
case 0x4012c000:{ // INT_AND:1<-1,1:cc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_AND,1,1,1>(0xffull,0xffull));
return 0x4012c004;}
default:return 0;}}
uint32_t ref_301(Cpu& c){switch(c.pc){
case 0x4012d000:{ // POPCOUNT:1<-4:r
wr<1>(c,0x400,eval<Op::POPCOUNT,1,4>(r<4>(c,0x500)));
return 0x4012d004;}
default:return 0;}}
uint32_t ref_302(Cpu& c){switch(c.pc){
case 0x4012e000:{ // INT_EQUAL:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x4012e004;}
default:return 0;}}
uint32_t ref_303(Cpu& c){switch(c.pc){
case 0x4012f000:{ // INT_EQUAL:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4012f004;}
default:return 0;}}
uint32_t ref_304(Cpu& c){switch(c.pc){
case 0x40130000:{ // INT_EQUAL:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40130004;}
default:return 0;}}
uint32_t ref_305(Cpu& c){switch(c.pc){
case 0x40131000:{ // INT_EQUAL:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40131004;}
default:return 0;}}
uint32_t ref_306(Cpu& c){switch(c.pc){
case 0x40132000:{ // INT_EQUAL:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40132004;}
default:return 0;}}
uint32_t ref_307(Cpu& c){switch(c.pc){
case 0x40133000:{ // INT_EQUAL:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40133004;}
default:return 0;}}
uint32_t ref_308(Cpu& c){switch(c.pc){
case 0x40134000:{ // INT_EQUAL:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x40134004;}
default:return 0;}}
uint32_t ref_309(Cpu& c){switch(c.pc){
case 0x40135000:{ // INT_EQUAL:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40135004;}
default:return 0;}}
uint32_t ref_310(Cpu& c){switch(c.pc){
case 0x40136000:{ // INT_EQUAL:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40136004;}
default:return 0;}}
uint32_t ref_311(Cpu& c){switch(c.pc){
case 0x40137000:{ // INT_EQUAL:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40137004;}
default:return 0;}}
uint32_t ref_312(Cpu& c){switch(c.pc){
case 0x40138000:{ // INT_EQUAL:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40138004;}
default:return 0;}}
uint32_t ref_313(Cpu& c){switch(c.pc){
case 0x40139000:{ // INT_EQUAL:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40139004;}
default:return 0;}}
uint32_t ref_314(Cpu& c){switch(c.pc){
case 0x4013a000:{ // INT_EQUAL:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4013a004;}
default:return 0;}}
uint32_t ref_315(Cpu& c){switch(c.pc){
case 0x4013b000:{ // INT_EQUAL:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4013b004;}
default:return 0;}}
uint32_t ref_316(Cpu& c){switch(c.pc){
case 0x4013c000:{ // INT_EQUAL:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4013c004;}
default:return 0;}}
uint32_t ref_317(Cpu& c){switch(c.pc){
case 0x4013d000:{ // INT_EQUAL:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4013d004;}
default:return 0;}}
uint32_t ref_318(Cpu& c){switch(c.pc){
case 0x4013e000:{ // INT_EQUAL:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4013e004;}
default:return 0;}}
uint32_t ref_319(Cpu& c){switch(c.pc){
case 0x4013f000:{ // INT_EQUAL:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4013f004;}
default:return 0;}}
uint32_t ref_320(Cpu& c){switch(c.pc){
case 0x40140000:{ // INT_EQUAL:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40140004;}
default:return 0;}}
uint32_t ref_321(Cpu& c){switch(c.pc){
case 0x40141000:{ // INT_EQUAL:1<-1,1:cc:k=0
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
return 0x40141004;}
default:return 0;}}
uint32_t ref_322(Cpu& c){switch(c.pc){
case 0x40142000:{ // INT_EQUAL:1<-1,1:cc:k=1
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
return 0x40142004;}
default:return 0;}}
uint32_t ref_323(Cpu& c){switch(c.pc){
case 0x40143000:{ // INT_EQUAL:1<-1,1:cc:k=2
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
return 0x40143004;}
default:return 0;}}
uint32_t ref_324(Cpu& c){switch(c.pc){
case 0x40144000:{ // INT_EQUAL:1<-1,1:cc:k=3
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
return 0x40144004;}
default:return 0;}}
uint32_t ref_325(Cpu& c){switch(c.pc){
case 0x40145000:{ // INT_EQUAL:1<-1,1:cc:k=7
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x7ull,0x7ull));
return 0x40145004;}
default:return 0;}}
uint32_t ref_326(Cpu& c){switch(c.pc){
case 0x40146000:{ // INT_EQUAL:1<-1,1:cc:k=8
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x8ull,0x8ull));
return 0x40146004;}
default:return 0;}}
uint32_t ref_327(Cpu& c){switch(c.pc){
case 0x40147000:{ // INT_EQUAL:1<-1,1:cc:k=31
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x1full,0x1full));
return 0x40147004;}
default:return 0;}}
uint32_t ref_328(Cpu& c){switch(c.pc){
case 0x40148000:{ // INT_EQUAL:1<-1,1:cc:k=32
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x20ull,0x20ull));
return 0x40148004;}
default:return 0;}}
uint32_t ref_329(Cpu& c){switch(c.pc){
case 0x40149000:{ // INT_EQUAL:1<-1,1:cc:k=63
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x3full,0x3full));
return 0x40149004;}
default:return 0;}}
uint32_t ref_330(Cpu& c){switch(c.pc){
case 0x4014a000:{ // INT_EQUAL:1<-1,1:cc:k=127
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x7full,0x7full));
return 0x4014a004;}
default:return 0;}}
uint32_t ref_331(Cpu& c){switch(c.pc){
case 0x4014b000:{ // INT_EQUAL:1<-1,1:cc:k=128
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x80ull,0x80ull));
return 0x4014b004;}
default:return 0;}}
uint32_t ref_332(Cpu& c){switch(c.pc){
case 0x4014c000:{ // INT_EQUAL:1<-1,1:cc:k=255
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0xffull,0xffull));
return 0x4014c004;}
default:return 0;}}
uint32_t ref_333(Cpu& c){switch(c.pc){
case 0x4014d000:{ // INT_EQUAL:1<-1,1:cc:k=32767
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0xffull,0xffull));
return 0x4014d004;}
default:return 0;}}
uint32_t ref_334(Cpu& c){switch(c.pc){
case 0x4014e000:{ // INT_EQUAL:1<-1,1:cc:k=32768
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
return 0x4014e004;}
default:return 0;}}
uint32_t ref_335(Cpu& c){switch(c.pc){
case 0x4014f000:{ // INT_EQUAL:1<-1,1:cc:k=65535
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0xffull,0xffull));
return 0x4014f004;}
default:return 0;}}
uint32_t ref_336(Cpu& c){switch(c.pc){
case 0x40150000:{ // INT_EQUAL:1<-1,1:cc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0xffull,0xffull));
return 0x40150004;}
default:return 0;}}
uint32_t ref_337(Cpu& c){switch(c.pc){
case 0x40151000:{ // INT_EQUAL:1<-1,1:cc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
return 0x40151004;}
default:return 0;}}
uint32_t ref_338(Cpu& c){switch(c.pc){
case 0x40152000:{ // INT_EQUAL:1<-1,1:cc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,1,1>(0xffull,0xffull));
return 0x40152004;}
default:return 0;}}
uint32_t ref_339(Cpu& c){switch(c.pc){
case 0x40153000:{ // INT_ZEXT:4<-1:r
wr<4>(c,0x400,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x500)));
return 0x40153004;}
default:return 0;}}
uint32_t ref_340(Cpu& c){switch(c.pc){
case 0x40154000:{ // INT_MULT:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40154004;}
default:return 0;}}
uint32_t ref_341(Cpu& c){switch(c.pc){
case 0x40155000:{ // INT_MULT:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x40155004;}
default:return 0;}}
uint32_t ref_342(Cpu& c){switch(c.pc){
case 0x40156000:{ // INT_MULT:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x40156004;}
default:return 0;}}
uint32_t ref_343(Cpu& c){switch(c.pc){
case 0x40157000:{ // INT_MULT:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40157004;}
default:return 0;}}
uint32_t ref_344(Cpu& c){switch(c.pc){
case 0x40158000:{ // INT_MULT:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40158004;}
default:return 0;}}
uint32_t ref_345(Cpu& c){switch(c.pc){
case 0x40159000:{ // INT_MULT:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40159004;}
default:return 0;}}
uint32_t ref_346(Cpu& c){switch(c.pc){
case 0x4015a000:{ // INT_MULT:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x4015a004;}
default:return 0;}}
uint32_t ref_347(Cpu& c){switch(c.pc){
case 0x4015b000:{ // INT_MULT:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x1full));
return 0x4015b004;}
default:return 0;}}
uint32_t ref_348(Cpu& c){switch(c.pc){
case 0x4015c000:{ // INT_MULT:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x4015c004;}
default:return 0;}}
uint32_t ref_349(Cpu& c){switch(c.pc){
case 0x4015d000:{ // INT_MULT:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x3full));
return 0x4015d004;}
default:return 0;}}
uint32_t ref_350(Cpu& c){switch(c.pc){
case 0x4015e000:{ // INT_MULT:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x7full));
return 0x4015e004;}
default:return 0;}}
uint32_t ref_351(Cpu& c){switch(c.pc){
case 0x4015f000:{ // INT_MULT:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x4015f004;}
default:return 0;}}
uint32_t ref_352(Cpu& c){switch(c.pc){
case 0x40160000:{ // INT_MULT:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0xffull));
return 0x40160004;}
default:return 0;}}
uint32_t ref_353(Cpu& c){switch(c.pc){
case 0x40161000:{ // INT_MULT:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x40161004;}
default:return 0;}}
uint32_t ref_354(Cpu& c){switch(c.pc){
case 0x40162000:{ // INT_MULT:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x40162004;}
default:return 0;}}
uint32_t ref_355(Cpu& c){switch(c.pc){
case 0x40163000:{ // INT_MULT:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x40163004;}
default:return 0;}}
uint32_t ref_356(Cpu& c){switch(c.pc){
case 0x40164000:{ // INT_MULT:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40164004;}
default:return 0;}}
uint32_t ref_357(Cpu& c){switch(c.pc){
case 0x40165000:{ // INT_MULT:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40165004;}
default:return 0;}}
uint32_t ref_358(Cpu& c){switch(c.pc){
case 0x40166000:{ // INT_MULT:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40166004;}
default:return 0;}}
uint32_t ref_359(Cpu& c){switch(c.pc){
case 0x40167000:{ // INT_MULT:4<-4,4:cr:k=0
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x0ull,r<4>(c,0x600)));
return 0x40167004;}
default:return 0;}}
uint32_t ref_360(Cpu& c){switch(c.pc){
case 0x40168000:{ // INT_MULT:4<-4,4:cr:k=1
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x1ull,r<4>(c,0x600)));
return 0x40168004;}
default:return 0;}}
uint32_t ref_361(Cpu& c){switch(c.pc){
case 0x40169000:{ // INT_MULT:4<-4,4:cr:k=2
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x2ull,r<4>(c,0x600)));
return 0x40169004;}
default:return 0;}}
uint32_t ref_362(Cpu& c){switch(c.pc){
case 0x4016a000:{ // INT_MULT:4<-4,4:cr:k=3
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x3ull,r<4>(c,0x600)));
return 0x4016a004;}
default:return 0;}}
uint32_t ref_363(Cpu& c){switch(c.pc){
case 0x4016b000:{ // INT_MULT:4<-4,4:cr:k=7
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7ull,r<4>(c,0x600)));
return 0x4016b004;}
default:return 0;}}
uint32_t ref_364(Cpu& c){switch(c.pc){
case 0x4016c000:{ // INT_MULT:4<-4,4:cr:k=8
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x8ull,r<4>(c,0x600)));
return 0x4016c004;}
default:return 0;}}
uint32_t ref_365(Cpu& c){switch(c.pc){
case 0x4016d000:{ // INT_MULT:4<-4,4:cr:k=31
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x1full,r<4>(c,0x600)));
return 0x4016d004;}
default:return 0;}}
uint32_t ref_366(Cpu& c){switch(c.pc){
case 0x4016e000:{ // INT_MULT:4<-4,4:cr:k=32
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x20ull,r<4>(c,0x600)));
return 0x4016e004;}
default:return 0;}}
uint32_t ref_367(Cpu& c){switch(c.pc){
case 0x4016f000:{ // INT_MULT:4<-4,4:cr:k=63
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x3full,r<4>(c,0x600)));
return 0x4016f004;}
default:return 0;}}
uint32_t ref_368(Cpu& c){switch(c.pc){
case 0x40170000:{ // INT_MULT:4<-4,4:cr:k=127
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7full,r<4>(c,0x600)));
return 0x40170004;}
default:return 0;}}
uint32_t ref_369(Cpu& c){switch(c.pc){
case 0x40171000:{ // INT_MULT:4<-4,4:cr:k=128
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x80ull,r<4>(c,0x600)));
return 0x40171004;}
default:return 0;}}
uint32_t ref_370(Cpu& c){switch(c.pc){
case 0x40172000:{ // INT_MULT:4<-4,4:cr:k=255
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0xffull,r<4>(c,0x600)));
return 0x40172004;}
default:return 0;}}
uint32_t ref_371(Cpu& c){switch(c.pc){
case 0x40173000:{ // INT_MULT:4<-4,4:cr:k=32767
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7fffull,r<4>(c,0x600)));
return 0x40173004;}
default:return 0;}}
uint32_t ref_372(Cpu& c){switch(c.pc){
case 0x40174000:{ // INT_MULT:4<-4,4:cr:k=32768
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x8000ull,r<4>(c,0x600)));
return 0x40174004;}
default:return 0;}}
uint32_t ref_373(Cpu& c){switch(c.pc){
case 0x40175000:{ // INT_MULT:4<-4,4:cr:k=65535
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0xffffull,r<4>(c,0x600)));
return 0x40175004;}
default:return 0;}}
uint32_t ref_374(Cpu& c){switch(c.pc){
case 0x40176000:{ // INT_MULT:4<-4,4:cr:k=2147483647
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7fffffffull,r<4>(c,0x600)));
return 0x40176004;}
default:return 0;}}
uint32_t ref_375(Cpu& c){switch(c.pc){
case 0x40177000:{ // INT_MULT:4<-4,4:cr:k=2147483648
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x80000000ull,r<4>(c,0x600)));
return 0x40177004;}
default:return 0;}}
uint32_t ref_376(Cpu& c){switch(c.pc){
case 0x40178000:{ // INT_MULT:4<-4,4:cr:k=4294967295
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0xffffffffull,r<4>(c,0x600)));
return 0x40178004;}
default:return 0;}}
uint32_t ref_377(Cpu& c){switch(c.pc){
case 0x40179000:{ // INT_MULT:4<-4,4:cc:k=0
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x0ull,0x0ull));
return 0x40179004;}
default:return 0;}}
uint32_t ref_378(Cpu& c){switch(c.pc){
case 0x4017a000:{ // INT_MULT:4<-4,4:cc:k=1
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x1ull,0x1ull));
return 0x4017a004;}
default:return 0;}}
uint32_t ref_379(Cpu& c){switch(c.pc){
case 0x4017b000:{ // INT_MULT:4<-4,4:cc:k=2
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x2ull,0x2ull));
return 0x4017b004;}
default:return 0;}}
uint32_t ref_380(Cpu& c){switch(c.pc){
case 0x4017c000:{ // INT_MULT:4<-4,4:cc:k=3
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x3ull,0x3ull));
return 0x4017c004;}
default:return 0;}}
uint32_t ref_381(Cpu& c){switch(c.pc){
case 0x4017d000:{ // INT_MULT:4<-4,4:cc:k=7
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7ull,0x7ull));
return 0x4017d004;}
default:return 0;}}
uint32_t ref_382(Cpu& c){switch(c.pc){
case 0x4017e000:{ // INT_MULT:4<-4,4:cc:k=8
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
return 0x4017e004;}
default:return 0;}}
uint32_t ref_383(Cpu& c){switch(c.pc){
case 0x4017f000:{ // INT_MULT:4<-4,4:cc:k=31
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x1full,0x1full));
return 0x4017f004;}
default:return 0;}}
uint32_t ref_384(Cpu& c){switch(c.pc){
case 0x40180000:{ // INT_MULT:4<-4,4:cc:k=32
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x20ull,0x20ull));
return 0x40180004;}
default:return 0;}}
uint32_t ref_385(Cpu& c){switch(c.pc){
case 0x40181000:{ // INT_MULT:4<-4,4:cc:k=63
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x3full,0x3full));
return 0x40181004;}
default:return 0;}}
uint32_t ref_386(Cpu& c){switch(c.pc){
case 0x40182000:{ // INT_MULT:4<-4,4:cc:k=127
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7full,0x7full));
return 0x40182004;}
default:return 0;}}
uint32_t ref_387(Cpu& c){switch(c.pc){
case 0x40183000:{ // INT_MULT:4<-4,4:cc:k=128
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x80ull,0x80ull));
return 0x40183004;}
default:return 0;}}
uint32_t ref_388(Cpu& c){switch(c.pc){
case 0x40184000:{ // INT_MULT:4<-4,4:cc:k=255
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0xffull,0xffull));
return 0x40184004;}
default:return 0;}}
uint32_t ref_389(Cpu& c){switch(c.pc){
case 0x40185000:{ // INT_MULT:4<-4,4:cc:k=32767
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7fffull,0x7fffull));
return 0x40185004;}
default:return 0;}}
uint32_t ref_390(Cpu& c){switch(c.pc){
case 0x40186000:{ // INT_MULT:4<-4,4:cc:k=32768
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x8000ull,0x8000ull));
return 0x40186004;}
default:return 0;}}
uint32_t ref_391(Cpu& c){switch(c.pc){
case 0x40187000:{ // INT_MULT:4<-4,4:cc:k=65535
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0xffffull,0xffffull));
return 0x40187004;}
default:return 0;}}
uint32_t ref_392(Cpu& c){switch(c.pc){
case 0x40188000:{ // INT_MULT:4<-4,4:cc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x7fffffffull,0x7fffffffull));
return 0x40188004;}
default:return 0;}}
uint32_t ref_393(Cpu& c){switch(c.pc){
case 0x40189000:{ // INT_MULT:4<-4,4:cc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0x80000000ull,0x80000000ull));
return 0x40189004;}
default:return 0;}}
uint32_t ref_394(Cpu& c){switch(c.pc){
case 0x4018a000:{ // INT_MULT:4<-4,4:cc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_MULT,4,4,4>(0xffffffffull,0xffffffffull));
return 0x4018a004;}
default:return 0;}}
uint32_t ref_395(Cpu& c){switch(c.pc){
case 0x4018b000:{ // COPY:10<-10:r
wr<10>(c,0x400,eval<Op::COPY,10,10>(r<10>(c,0x500)));
return 0x4018b004;}
default:return 0;}}
uint32_t ref_396(Cpu& c){switch(c.pc){
case 0x4018c000:{ // FLOAT2FLOAT:10<-4:r
wr<10>(c,0x400,float_op("FLOAT2FLOAT",r<4>(c,0x500),4,0x0ull,4,10));
return 0x4018c004;}
default:return 0;}}
uint32_t ref_397(Cpu& c){switch(c.pc){
case 0x4018d000:{ // FLOAT_MULT:10<-10,10:rr
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,r<10>(c,0x600),10,10));
return 0x4018d004;}
default:return 0;}}
uint32_t ref_398(Cpu& c){switch(c.pc){
case 0x4018e000:{ // FLOAT_MULT:10<-10,10:rc:k=0
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x0ull,10,10));
return 0x4018e004;}
default:return 0;}}
uint32_t ref_399(Cpu& c){switch(c.pc){
case 0x4018f000:{ // FLOAT_MULT:10<-10,10:rc:k=1
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x1ull,10,10));
return 0x4018f004;}
default:return 0;}}
uint32_t ref_400(Cpu& c){switch(c.pc){
case 0x40190000:{ // FLOAT_MULT:10<-10,10:rc:k=2
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x2ull,10,10));
return 0x40190004;}
default:return 0;}}
uint32_t ref_401(Cpu& c){switch(c.pc){
case 0x40191000:{ // FLOAT_MULT:10<-10,10:rc:k=3
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x3ull,10,10));
return 0x40191004;}
default:return 0;}}
uint32_t ref_402(Cpu& c){switch(c.pc){
case 0x40192000:{ // FLOAT_MULT:10<-10,10:rc:k=7
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x7ull,10,10));
return 0x40192004;}
default:return 0;}}
uint32_t ref_403(Cpu& c){switch(c.pc){
case 0x40193000:{ // FLOAT_MULT:10<-10,10:rc:k=8
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x8ull,10,10));
return 0x40193004;}
default:return 0;}}
uint32_t ref_404(Cpu& c){switch(c.pc){
case 0x40194000:{ // FLOAT_MULT:10<-10,10:rc:k=31
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x1full,10,10));
return 0x40194004;}
default:return 0;}}
uint32_t ref_405(Cpu& c){switch(c.pc){
case 0x40195000:{ // FLOAT_MULT:10<-10,10:rc:k=32
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x20ull,10,10));
return 0x40195004;}
default:return 0;}}
uint32_t ref_406(Cpu& c){switch(c.pc){
case 0x40196000:{ // FLOAT_MULT:10<-10,10:rc:k=63
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x3full,10,10));
return 0x40196004;}
default:return 0;}}
uint32_t ref_407(Cpu& c){switch(c.pc){
case 0x40197000:{ // FLOAT_MULT:10<-10,10:rc:k=127
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x7full,10,10));
return 0x40197004;}
default:return 0;}}
uint32_t ref_408(Cpu& c){switch(c.pc){
case 0x40198000:{ // FLOAT_MULT:10<-10,10:rc:k=128
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x80ull,10,10));
return 0x40198004;}
default:return 0;}}
uint32_t ref_409(Cpu& c){switch(c.pc){
case 0x40199000:{ // FLOAT_MULT:10<-10,10:rc:k=255
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0xffull,10,10));
return 0x40199004;}
default:return 0;}}
uint32_t ref_410(Cpu& c){switch(c.pc){
case 0x4019a000:{ // FLOAT_MULT:10<-10,10:rc:k=32767
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x7fffull,10,10));
return 0x4019a004;}
default:return 0;}}
uint32_t ref_411(Cpu& c){switch(c.pc){
case 0x4019b000:{ // FLOAT_MULT:10<-10,10:rc:k=32768
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x8000ull,10,10));
return 0x4019b004;}
default:return 0;}}
uint32_t ref_412(Cpu& c){switch(c.pc){
case 0x4019c000:{ // FLOAT_MULT:10<-10,10:rc:k=65535
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0xffffull,10,10));
return 0x4019c004;}
default:return 0;}}
uint32_t ref_413(Cpu& c){switch(c.pc){
case 0x4019d000:{ // FLOAT_MULT:10<-10,10:rc:k=2147483647
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x7fffffffull,10,10));
return 0x4019d004;}
default:return 0;}}
uint32_t ref_414(Cpu& c){switch(c.pc){
case 0x4019e000:{ // FLOAT_MULT:10<-10,10:rc:k=2147483648
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0x80000000ull,10,10));
return 0x4019e004;}
default:return 0;}}
uint32_t ref_415(Cpu& c){switch(c.pc){
case 0x4019f000:{ // FLOAT_MULT:10<-10,10:rc:k=4294967295
wr<10>(c,0x400,float_op("FLOAT_MULT",r<10>(c,0x500),10,0xffffffffull,10,10));
return 0x4019f004;}
default:return 0;}}
uint32_t ref_416(Cpu& c){switch(c.pc){
case 0x401a0000:{ // INT_SEXT:8<-4:r
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(r<4>(c,0x500)));
return 0x401a0004;}
default:return 0;}}
uint32_t ref_417(Cpu& c){switch(c.pc){
case 0x401a1000:{ // INT_SEXT:8<-4:c:k=0
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x0ull));
return 0x401a1004;}
default:return 0;}}
uint32_t ref_418(Cpu& c){switch(c.pc){
case 0x401a2000:{ // INT_SEXT:8<-4:c:k=1
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x1ull));
return 0x401a2004;}
default:return 0;}}
uint32_t ref_419(Cpu& c){switch(c.pc){
case 0x401a3000:{ // INT_SEXT:8<-4:c:k=2
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x2ull));
return 0x401a3004;}
default:return 0;}}
uint32_t ref_420(Cpu& c){switch(c.pc){
case 0x401a4000:{ // INT_SEXT:8<-4:c:k=3
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x3ull));
return 0x401a4004;}
default:return 0;}}
uint32_t ref_421(Cpu& c){switch(c.pc){
case 0x401a5000:{ // INT_SEXT:8<-4:c:k=7
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x7ull));
return 0x401a5004;}
default:return 0;}}
uint32_t ref_422(Cpu& c){switch(c.pc){
case 0x401a6000:{ // INT_SEXT:8<-4:c:k=8
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x8ull));
return 0x401a6004;}
default:return 0;}}
uint32_t ref_423(Cpu& c){switch(c.pc){
case 0x401a7000:{ // INT_SEXT:8<-4:c:k=31
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x1full));
return 0x401a7004;}
default:return 0;}}
uint32_t ref_424(Cpu& c){switch(c.pc){
case 0x401a8000:{ // INT_SEXT:8<-4:c:k=32
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x20ull));
return 0x401a8004;}
default:return 0;}}
uint32_t ref_425(Cpu& c){switch(c.pc){
case 0x401a9000:{ // INT_SEXT:8<-4:c:k=63
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x3full));
return 0x401a9004;}
default:return 0;}}
uint32_t ref_426(Cpu& c){switch(c.pc){
case 0x401aa000:{ // INT_SEXT:8<-4:c:k=127
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x7full));
return 0x401aa004;}
default:return 0;}}
uint32_t ref_427(Cpu& c){switch(c.pc){
case 0x401ab000:{ // INT_SEXT:8<-4:c:k=128
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x80ull));
return 0x401ab004;}
default:return 0;}}
uint32_t ref_428(Cpu& c){switch(c.pc){
case 0x401ac000:{ // INT_SEXT:8<-4:c:k=255
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0xffull));
return 0x401ac004;}
default:return 0;}}
uint32_t ref_429(Cpu& c){switch(c.pc){
case 0x401ad000:{ // INT_SEXT:8<-4:c:k=32767
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x7fffull));
return 0x401ad004;}
default:return 0;}}
uint32_t ref_430(Cpu& c){switch(c.pc){
case 0x401ae000:{ // INT_SEXT:8<-4:c:k=32768
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x8000ull));
return 0x401ae004;}
default:return 0;}}
uint32_t ref_431(Cpu& c){switch(c.pc){
case 0x401af000:{ // INT_SEXT:8<-4:c:k=65535
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0xffffull));
return 0x401af004;}
default:return 0;}}
uint32_t ref_432(Cpu& c){switch(c.pc){
case 0x401b0000:{ // INT_SEXT:8<-4:c:k=2147483647
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x7fffffffull));
return 0x401b0004;}
default:return 0;}}
uint32_t ref_433(Cpu& c){switch(c.pc){
case 0x401b1000:{ // INT_SEXT:8<-4:c:k=2147483648
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0x80000000ull));
return 0x401b1004;}
default:return 0;}}
uint32_t ref_434(Cpu& c){switch(c.pc){
case 0x401b2000:{ // INT_SEXT:8<-4:c:k=4294967295
wr<8>(c,0x400,eval<Op::INT_SEXT,8,4>(0xffffffffull));
return 0x401b2004;}
default:return 0;}}
uint32_t ref_435(Cpu& c){switch(c.pc){
case 0x401b3000:{ // INT_MULT:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x401b3004;}
default:return 0;}}
uint32_t ref_436(Cpu& c){switch(c.pc){
case 0x401b4000:{ // INT_MULT:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x401b4004;}
default:return 0;}}
uint32_t ref_437(Cpu& c){switch(c.pc){
case 0x401b5000:{ // INT_MULT:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x401b5004;}
default:return 0;}}
uint32_t ref_438(Cpu& c){switch(c.pc){
case 0x401b6000:{ // INT_MULT:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x401b6004;}
default:return 0;}}
uint32_t ref_439(Cpu& c){switch(c.pc){
case 0x401b7000:{ // INT_MULT:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x401b7004;}
default:return 0;}}
uint32_t ref_440(Cpu& c){switch(c.pc){
case 0x401b8000:{ // INT_MULT:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x401b8004;}
default:return 0;}}
uint32_t ref_441(Cpu& c){switch(c.pc){
case 0x401b9000:{ // INT_MULT:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x401b9004;}
default:return 0;}}
uint32_t ref_442(Cpu& c){switch(c.pc){
case 0x401ba000:{ // INT_MULT:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x1full));
return 0x401ba004;}
default:return 0;}}
uint32_t ref_443(Cpu& c){switch(c.pc){
case 0x401bb000:{ // INT_MULT:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x401bb004;}
default:return 0;}}
uint32_t ref_444(Cpu& c){switch(c.pc){
case 0x401bc000:{ // INT_MULT:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x3full));
return 0x401bc004;}
default:return 0;}}
uint32_t ref_445(Cpu& c){switch(c.pc){
case 0x401bd000:{ // INT_MULT:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x7full));
return 0x401bd004;}
default:return 0;}}
uint32_t ref_446(Cpu& c){switch(c.pc){
case 0x401be000:{ // INT_MULT:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x401be004;}
default:return 0;}}
uint32_t ref_447(Cpu& c){switch(c.pc){
case 0x401bf000:{ // INT_MULT:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0xffull));
return 0x401bf004;}
default:return 0;}}
uint32_t ref_448(Cpu& c){switch(c.pc){
case 0x401c0000:{ // INT_MULT:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x401c0004;}
default:return 0;}}
uint32_t ref_449(Cpu& c){switch(c.pc){
case 0x401c1000:{ // INT_MULT:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x401c1004;}
default:return 0;}}
uint32_t ref_450(Cpu& c){switch(c.pc){
case 0x401c2000:{ // INT_MULT:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x401c2004;}
default:return 0;}}
uint32_t ref_451(Cpu& c){switch(c.pc){
case 0x401c3000:{ // INT_MULT:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x401c3004;}
default:return 0;}}
uint32_t ref_452(Cpu& c){switch(c.pc){
case 0x401c4000:{ // INT_MULT:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x401c4004;}
default:return 0;}}
uint32_t ref_453(Cpu& c){switch(c.pc){
case 0x401c5000:{ // INT_MULT:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x401c5004;}
default:return 0;}}
uint32_t ref_454(Cpu& c){switch(c.pc){
case 0x401c6000:{ // SUBPIECE:4<-8,4:rr:k=0
wr<4>(c,0x400,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x500),r<4>(c,0x600)));
return 0x401c6004;}
default:return 0;}}
uint32_t ref_455(Cpu& c){switch(c.pc){
case 0x401c7000:{ // SUBPIECE:4<-8,4:rr:k=4
wr<4>(c,0x400,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x500),r<4>(c,0x600)));
return 0x401c7004;}
default:return 0;}}
uint32_t ref_456(Cpu& c){switch(c.pc){
case 0x401c8000:{ // SUBPIECE:4<-8,4:rc:k=0
wr<4>(c,0x400,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x500),0x0ull));
return 0x401c8004;}
default:return 0;}}
uint32_t ref_457(Cpu& c){switch(c.pc){
case 0x401c9000:{ // SUBPIECE:4<-8,4:rc:k=4
wr<4>(c,0x400,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x500),0x4ull));
return 0x401c9004;}
default:return 0;}}
uint32_t ref_458(Cpu& c){switch(c.pc){
case 0x401ca000:{ // INT_NOTEQUAL:1<-8,8:rr
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x401ca004;}
default:return 0;}}
uint32_t ref_459(Cpu& c){switch(c.pc){
case 0x401cb000:{ // INT_NOTEQUAL:1<-8,8:rc:k=0
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x0ull));
return 0x401cb004;}
default:return 0;}}
uint32_t ref_460(Cpu& c){switch(c.pc){
case 0x401cc000:{ // INT_NOTEQUAL:1<-8,8:rc:k=1
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x1ull));
return 0x401cc004;}
default:return 0;}}
uint32_t ref_461(Cpu& c){switch(c.pc){
case 0x401cd000:{ // INT_NOTEQUAL:1<-8,8:rc:k=2
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x2ull));
return 0x401cd004;}
default:return 0;}}
uint32_t ref_462(Cpu& c){switch(c.pc){
case 0x401ce000:{ // INT_NOTEQUAL:1<-8,8:rc:k=3
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x3ull));
return 0x401ce004;}
default:return 0;}}
uint32_t ref_463(Cpu& c){switch(c.pc){
case 0x401cf000:{ // INT_NOTEQUAL:1<-8,8:rc:k=7
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x7ull));
return 0x401cf004;}
default:return 0;}}
uint32_t ref_464(Cpu& c){switch(c.pc){
case 0x401d0000:{ // INT_NOTEQUAL:1<-8,8:rc:k=8
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x8ull));
return 0x401d0004;}
default:return 0;}}
uint32_t ref_465(Cpu& c){switch(c.pc){
case 0x401d1000:{ // INT_NOTEQUAL:1<-8,8:rc:k=31
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x1full));
return 0x401d1004;}
default:return 0;}}
uint32_t ref_466(Cpu& c){switch(c.pc){
case 0x401d2000:{ // INT_NOTEQUAL:1<-8,8:rc:k=32
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x20ull));
return 0x401d2004;}
default:return 0;}}
uint32_t ref_467(Cpu& c){switch(c.pc){
case 0x401d3000:{ // INT_NOTEQUAL:1<-8,8:rc:k=63
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x3full));
return 0x401d3004;}
default:return 0;}}
uint32_t ref_468(Cpu& c){switch(c.pc){
case 0x401d4000:{ // INT_NOTEQUAL:1<-8,8:rc:k=127
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x7full));
return 0x401d4004;}
default:return 0;}}
uint32_t ref_469(Cpu& c){switch(c.pc){
case 0x401d5000:{ // INT_NOTEQUAL:1<-8,8:rc:k=128
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x80ull));
return 0x401d5004;}
default:return 0;}}
uint32_t ref_470(Cpu& c){switch(c.pc){
case 0x401d6000:{ // INT_NOTEQUAL:1<-8,8:rc:k=255
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0xffull));
return 0x401d6004;}
default:return 0;}}
uint32_t ref_471(Cpu& c){switch(c.pc){
case 0x401d7000:{ // INT_NOTEQUAL:1<-8,8:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x7fffull));
return 0x401d7004;}
default:return 0;}}
uint32_t ref_472(Cpu& c){switch(c.pc){
case 0x401d8000:{ // INT_NOTEQUAL:1<-8,8:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x8000ull));
return 0x401d8004;}
default:return 0;}}
uint32_t ref_473(Cpu& c){switch(c.pc){
case 0x401d9000:{ // INT_NOTEQUAL:1<-8,8:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0xffffull));
return 0x401d9004;}
default:return 0;}}
uint32_t ref_474(Cpu& c){switch(c.pc){
case 0x401da000:{ // INT_NOTEQUAL:1<-8,8:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x401da004;}
default:return 0;}}
uint32_t ref_475(Cpu& c){switch(c.pc){
case 0x401db000:{ // INT_NOTEQUAL:1<-8,8:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x401db004;}
default:return 0;}}
uint32_t ref_476(Cpu& c){switch(c.pc){
case 0x401dc000:{ // INT_NOTEQUAL:1<-8,8:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x401dc004;}
default:return 0;}}
uint32_t ref_477(Cpu& c){switch(c.pc){
case 0x401dd000:{ // INT_CARRY:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x401dd004;}
default:return 0;}}
uint32_t ref_478(Cpu& c){switch(c.pc){
case 0x401de000:{ // INT_CARRY:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x401de004;}
default:return 0;}}
uint32_t ref_479(Cpu& c){switch(c.pc){
case 0x401df000:{ // INT_CARRY:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x401df004;}
default:return 0;}}
uint32_t ref_480(Cpu& c){switch(c.pc){
case 0x401e0000:{ // INT_CARRY:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x401e0004;}
default:return 0;}}
uint32_t ref_481(Cpu& c){switch(c.pc){
case 0x401e1000:{ // INT_CARRY:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x401e1004;}
default:return 0;}}
uint32_t ref_482(Cpu& c){switch(c.pc){
case 0x401e2000:{ // INT_CARRY:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x401e2004;}
default:return 0;}}
uint32_t ref_483(Cpu& c){switch(c.pc){
case 0x401e3000:{ // INT_CARRY:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x401e3004;}
default:return 0;}}
uint32_t ref_484(Cpu& c){switch(c.pc){
case 0x401e4000:{ // INT_CARRY:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x1full));
return 0x401e4004;}
default:return 0;}}
uint32_t ref_485(Cpu& c){switch(c.pc){
case 0x401e5000:{ // INT_CARRY:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x401e5004;}
default:return 0;}}
uint32_t ref_486(Cpu& c){switch(c.pc){
case 0x401e6000:{ // INT_CARRY:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x3full));
return 0x401e6004;}
default:return 0;}}
uint32_t ref_487(Cpu& c){switch(c.pc){
case 0x401e7000:{ // INT_CARRY:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x7full));
return 0x401e7004;}
default:return 0;}}
uint32_t ref_488(Cpu& c){switch(c.pc){
case 0x401e8000:{ // INT_CARRY:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x401e8004;}
default:return 0;}}
uint32_t ref_489(Cpu& c){switch(c.pc){
case 0x401e9000:{ // INT_CARRY:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0xffull));
return 0x401e9004;}
default:return 0;}}
uint32_t ref_490(Cpu& c){switch(c.pc){
case 0x401ea000:{ // INT_CARRY:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x401ea004;}
default:return 0;}}
uint32_t ref_491(Cpu& c){switch(c.pc){
case 0x401eb000:{ // INT_CARRY:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x401eb004;}
default:return 0;}}
uint32_t ref_492(Cpu& c){switch(c.pc){
case 0x401ec000:{ // INT_CARRY:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x401ec004;}
default:return 0;}}
uint32_t ref_493(Cpu& c){switch(c.pc){
case 0x401ed000:{ // INT_CARRY:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x401ed004;}
default:return 0;}}
uint32_t ref_494(Cpu& c){switch(c.pc){
case 0x401ee000:{ // INT_CARRY:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x401ee004;}
default:return 0;}}
uint32_t ref_495(Cpu& c){switch(c.pc){
case 0x401ef000:{ // INT_CARRY:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x401ef004;}
default:return 0;}}
uint32_t ref_496(Cpu& c){switch(c.pc){
case 0x401f0000:{ // INT_SCARRY:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x401f0004;}
default:return 0;}}
uint32_t ref_497(Cpu& c){switch(c.pc){
case 0x401f1000:{ // INT_SCARRY:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x401f1004;}
default:return 0;}}
uint32_t ref_498(Cpu& c){switch(c.pc){
case 0x401f2000:{ // INT_SCARRY:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x401f2004;}
default:return 0;}}
uint32_t ref_499(Cpu& c){switch(c.pc){
case 0x401f3000:{ // INT_SCARRY:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x401f3004;}
default:return 0;}}
uint32_t ref_500(Cpu& c){switch(c.pc){
case 0x401f4000:{ // INT_SCARRY:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x401f4004;}
default:return 0;}}
uint32_t ref_501(Cpu& c){switch(c.pc){
case 0x401f5000:{ // INT_SCARRY:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x401f5004;}
default:return 0;}}
uint32_t ref_502(Cpu& c){switch(c.pc){
case 0x401f6000:{ // INT_SCARRY:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x401f6004;}
default:return 0;}}
uint32_t ref_503(Cpu& c){switch(c.pc){
case 0x401f7000:{ // INT_SCARRY:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x1full));
return 0x401f7004;}
default:return 0;}}
uint32_t ref_504(Cpu& c){switch(c.pc){
case 0x401f8000:{ // INT_SCARRY:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x401f8004;}
default:return 0;}}
uint32_t ref_505(Cpu& c){switch(c.pc){
case 0x401f9000:{ // INT_SCARRY:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x3full));
return 0x401f9004;}
default:return 0;}}
uint32_t ref_506(Cpu& c){switch(c.pc){
case 0x401fa000:{ // INT_SCARRY:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x7full));
return 0x401fa004;}
default:return 0;}}
uint32_t ref_507(Cpu& c){switch(c.pc){
case 0x401fb000:{ // INT_SCARRY:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x401fb004;}
default:return 0;}}
uint32_t ref_508(Cpu& c){switch(c.pc){
case 0x401fc000:{ // INT_SCARRY:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0xffull));
return 0x401fc004;}
default:return 0;}}
uint32_t ref_509(Cpu& c){switch(c.pc){
case 0x401fd000:{ // INT_SCARRY:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x401fd004;}
default:return 0;}}
uint32_t ref_510(Cpu& c){switch(c.pc){
case 0x401fe000:{ // INT_SCARRY:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x401fe004;}
default:return 0;}}
uint32_t ref_511(Cpu& c){switch(c.pc){
case 0x401ff000:{ // INT_SCARRY:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x401ff004;}
default:return 0;}}
uint32_t ref_512(Cpu& c){switch(c.pc){
case 0x40200000:{ // INT_SCARRY:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40200004;}
default:return 0;}}
uint32_t ref_513(Cpu& c){switch(c.pc){
case 0x40201000:{ // INT_SCARRY:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40201004;}
default:return 0;}}
uint32_t ref_514(Cpu& c){switch(c.pc){
case 0x40202000:{ // INT_SCARRY:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40202004;}
default:return 0;}}
uint32_t ref_515(Cpu& c){switch(c.pc){
case 0x40203000:{ // INT_SRIGHT:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40203004;}
default:return 0;}}
uint32_t ref_516(Cpu& c){switch(c.pc){
case 0x40204000:{ // INT_SRIGHT:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x40204004;}
default:return 0;}}
uint32_t ref_517(Cpu& c){switch(c.pc){
case 0x40205000:{ // INT_SRIGHT:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x40205004;}
default:return 0;}}
uint32_t ref_518(Cpu& c){switch(c.pc){
case 0x40206000:{ // INT_SRIGHT:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40206004;}
default:return 0;}}
uint32_t ref_519(Cpu& c){switch(c.pc){
case 0x40207000:{ // INT_SRIGHT:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40207004;}
default:return 0;}}
uint32_t ref_520(Cpu& c){switch(c.pc){
case 0x40208000:{ // INT_SRIGHT:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40208004;}
default:return 0;}}
uint32_t ref_521(Cpu& c){switch(c.pc){
case 0x40209000:{ // INT_SRIGHT:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x40209004;}
default:return 0;}}
uint32_t ref_522(Cpu& c){switch(c.pc){
case 0x4020a000:{ // INT_SRIGHT:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x1full));
return 0x4020a004;}
default:return 0;}}
uint32_t ref_523(Cpu& c){switch(c.pc){
case 0x4020b000:{ // INT_SRIGHT:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x4020b004;}
default:return 0;}}
uint32_t ref_524(Cpu& c){switch(c.pc){
case 0x4020c000:{ // INT_SRIGHT:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x3full));
return 0x4020c004;}
default:return 0;}}
uint32_t ref_525(Cpu& c){switch(c.pc){
case 0x4020d000:{ // INT_SRIGHT:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x7full));
return 0x4020d004;}
default:return 0;}}
uint32_t ref_526(Cpu& c){switch(c.pc){
case 0x4020e000:{ // INT_SRIGHT:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x4020e004;}
default:return 0;}}
uint32_t ref_527(Cpu& c){switch(c.pc){
case 0x4020f000:{ // INT_SRIGHT:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0xffull));
return 0x4020f004;}
default:return 0;}}
uint32_t ref_528(Cpu& c){switch(c.pc){
case 0x40210000:{ // INT_SRIGHT:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x40210004;}
default:return 0;}}
uint32_t ref_529(Cpu& c){switch(c.pc){
case 0x40211000:{ // INT_SRIGHT:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x40211004;}
default:return 0;}}
uint32_t ref_530(Cpu& c){switch(c.pc){
case 0x40212000:{ // INT_SRIGHT:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x40212004;}
default:return 0;}}
uint32_t ref_531(Cpu& c){switch(c.pc){
case 0x40213000:{ // INT_SRIGHT:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40213004;}
default:return 0;}}
uint32_t ref_532(Cpu& c){switch(c.pc){
case 0x40214000:{ // INT_SRIGHT:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40214004;}
default:return 0;}}
uint32_t ref_533(Cpu& c){switch(c.pc){
case 0x40215000:{ // INT_SRIGHT:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40215004;}
default:return 0;}}
uint32_t ref_534(Cpu& c){switch(c.pc){
case 0x40216000:{ // FLOAT_NAN:1<-10:r
wr<1>(c,0x400,float_op("FLOAT_NAN",r<10>(c,0x500),10,0x0ull,4,1));
return 0x40216004;}
default:return 0;}}
uint32_t ref_535(Cpu& c){switch(c.pc){
case 0x40217000:{ // BOOL_OR:1<-1,1:rr
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40217004;}
default:return 0;}}
uint32_t ref_536(Cpu& c){switch(c.pc){
case 0x40218000:{ // BOOL_OR:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40218004;}
default:return 0;}}
uint32_t ref_537(Cpu& c){switch(c.pc){
case 0x40219000:{ // BOOL_OR:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40219004;}
default:return 0;}}
uint32_t ref_538(Cpu& c){switch(c.pc){
case 0x4021a000:{ // BOOL_OR:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x4021a004;}
default:return 0;}}
uint32_t ref_539(Cpu& c){switch(c.pc){
case 0x4021b000:{ // BOOL_OR:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x4021b004;}
default:return 0;}}
uint32_t ref_540(Cpu& c){switch(c.pc){
case 0x4021c000:{ // BOOL_OR:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x4021c004;}
default:return 0;}}
uint32_t ref_541(Cpu& c){switch(c.pc){
case 0x4021d000:{ // BOOL_OR:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x4021d004;}
default:return 0;}}
uint32_t ref_542(Cpu& c){switch(c.pc){
case 0x4021e000:{ // BOOL_OR:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x1full));
return 0x4021e004;}
default:return 0;}}
uint32_t ref_543(Cpu& c){switch(c.pc){
case 0x4021f000:{ // BOOL_OR:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x4021f004;}
default:return 0;}}
uint32_t ref_544(Cpu& c){switch(c.pc){
case 0x40220000:{ // BOOL_OR:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40220004;}
default:return 0;}}
uint32_t ref_545(Cpu& c){switch(c.pc){
case 0x40221000:{ // BOOL_OR:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40221004;}
default:return 0;}}
uint32_t ref_546(Cpu& c){switch(c.pc){
case 0x40222000:{ // BOOL_OR:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40222004;}
default:return 0;}}
uint32_t ref_547(Cpu& c){switch(c.pc){
case 0x40223000:{ // BOOL_OR:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40223004;}
default:return 0;}}
uint32_t ref_548(Cpu& c){switch(c.pc){
case 0x40224000:{ // BOOL_OR:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40224004;}
default:return 0;}}
uint32_t ref_549(Cpu& c){switch(c.pc){
case 0x40225000:{ // BOOL_OR:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40225004;}
default:return 0;}}
uint32_t ref_550(Cpu& c){switch(c.pc){
case 0x40226000:{ // BOOL_OR:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40226004;}
default:return 0;}}
uint32_t ref_551(Cpu& c){switch(c.pc){
case 0x40227000:{ // BOOL_OR:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40227004;}
default:return 0;}}
uint32_t ref_552(Cpu& c){switch(c.pc){
case 0x40228000:{ // BOOL_OR:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40228004;}
default:return 0;}}
uint32_t ref_553(Cpu& c){switch(c.pc){
case 0x40229000:{ // BOOL_OR:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40229004;}
default:return 0;}}
uint32_t ref_554(Cpu& c){switch(c.pc){
case 0x4022a000:{ // FLOAT_LESS:1<-10,10:rr
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,r<10>(c,0x600),10,1));
return 0x4022a004;}
default:return 0;}}
uint32_t ref_555(Cpu& c){switch(c.pc){
case 0x4022b000:{ // FLOAT_LESS:1<-10,10:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x0ull,10,1));
return 0x4022b004;}
default:return 0;}}
uint32_t ref_556(Cpu& c){switch(c.pc){
case 0x4022c000:{ // FLOAT_LESS:1<-10,10:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x1ull,10,1));
return 0x4022c004;}
default:return 0;}}
uint32_t ref_557(Cpu& c){switch(c.pc){
case 0x4022d000:{ // FLOAT_LESS:1<-10,10:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x2ull,10,1));
return 0x4022d004;}
default:return 0;}}
uint32_t ref_558(Cpu& c){switch(c.pc){
case 0x4022e000:{ // FLOAT_LESS:1<-10,10:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x3ull,10,1));
return 0x4022e004;}
default:return 0;}}
uint32_t ref_559(Cpu& c){switch(c.pc){
case 0x4022f000:{ // FLOAT_LESS:1<-10,10:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x7ull,10,1));
return 0x4022f004;}
default:return 0;}}
uint32_t ref_560(Cpu& c){switch(c.pc){
case 0x40230000:{ // FLOAT_LESS:1<-10,10:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x8ull,10,1));
return 0x40230004;}
default:return 0;}}
uint32_t ref_561(Cpu& c){switch(c.pc){
case 0x40231000:{ // FLOAT_LESS:1<-10,10:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x1full,10,1));
return 0x40231004;}
default:return 0;}}
uint32_t ref_562(Cpu& c){switch(c.pc){
case 0x40232000:{ // FLOAT_LESS:1<-10,10:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x20ull,10,1));
return 0x40232004;}
default:return 0;}}
uint32_t ref_563(Cpu& c){switch(c.pc){
case 0x40233000:{ // FLOAT_LESS:1<-10,10:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x3full,10,1));
return 0x40233004;}
default:return 0;}}
uint32_t ref_564(Cpu& c){switch(c.pc){
case 0x40234000:{ // FLOAT_LESS:1<-10,10:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x7full,10,1));
return 0x40234004;}
default:return 0;}}
uint32_t ref_565(Cpu& c){switch(c.pc){
case 0x40235000:{ // FLOAT_LESS:1<-10,10:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x80ull,10,1));
return 0x40235004;}
default:return 0;}}
uint32_t ref_566(Cpu& c){switch(c.pc){
case 0x40236000:{ // FLOAT_LESS:1<-10,10:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0xffull,10,1));
return 0x40236004;}
default:return 0;}}
uint32_t ref_567(Cpu& c){switch(c.pc){
case 0x40237000:{ // FLOAT_LESS:1<-10,10:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x7fffull,10,1));
return 0x40237004;}
default:return 0;}}
uint32_t ref_568(Cpu& c){switch(c.pc){
case 0x40238000:{ // FLOAT_LESS:1<-10,10:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x8000ull,10,1));
return 0x40238004;}
default:return 0;}}
uint32_t ref_569(Cpu& c){switch(c.pc){
case 0x40239000:{ // FLOAT_LESS:1<-10,10:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0xffffull,10,1));
return 0x40239004;}
default:return 0;}}
uint32_t ref_570(Cpu& c){switch(c.pc){
case 0x4023a000:{ // FLOAT_LESS:1<-10,10:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x7fffffffull,10,1));
return 0x4023a004;}
default:return 0;}}
uint32_t ref_571(Cpu& c){switch(c.pc){
case 0x4023b000:{ // FLOAT_LESS:1<-10,10:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0x80000000ull,10,1));
return 0x4023b004;}
default:return 0;}}
uint32_t ref_572(Cpu& c){switch(c.pc){
case 0x4023c000:{ // FLOAT_LESS:1<-10,10:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_LESS",r<10>(c,0x500),10,0xffffffffull,10,1));
return 0x4023c004;}
default:return 0;}}
uint32_t ref_573(Cpu& c){switch(c.pc){
case 0x4023d000:{ // FLOAT_EQUAL:1<-10,10:rr
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,r<10>(c,0x600),10,1));
return 0x4023d004;}
default:return 0;}}
uint32_t ref_574(Cpu& c){switch(c.pc){
case 0x4023e000:{ // FLOAT_EQUAL:1<-10,10:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x0ull,10,1));
return 0x4023e004;}
default:return 0;}}
uint32_t ref_575(Cpu& c){switch(c.pc){
case 0x4023f000:{ // FLOAT_EQUAL:1<-10,10:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x1ull,10,1));
return 0x4023f004;}
default:return 0;}}
uint32_t ref_576(Cpu& c){switch(c.pc){
case 0x40240000:{ // FLOAT_EQUAL:1<-10,10:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x2ull,10,1));
return 0x40240004;}
default:return 0;}}
uint32_t ref_577(Cpu& c){switch(c.pc){
case 0x40241000:{ // FLOAT_EQUAL:1<-10,10:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x3ull,10,1));
return 0x40241004;}
default:return 0;}}
uint32_t ref_578(Cpu& c){switch(c.pc){
case 0x40242000:{ // FLOAT_EQUAL:1<-10,10:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x7ull,10,1));
return 0x40242004;}
default:return 0;}}
uint32_t ref_579(Cpu& c){switch(c.pc){
case 0x40243000:{ // FLOAT_EQUAL:1<-10,10:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x8ull,10,1));
return 0x40243004;}
default:return 0;}}
uint32_t ref_580(Cpu& c){switch(c.pc){
case 0x40244000:{ // FLOAT_EQUAL:1<-10,10:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x1full,10,1));
return 0x40244004;}
default:return 0;}}
uint32_t ref_581(Cpu& c){switch(c.pc){
case 0x40245000:{ // FLOAT_EQUAL:1<-10,10:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x20ull,10,1));
return 0x40245004;}
default:return 0;}}
uint32_t ref_582(Cpu& c){switch(c.pc){
case 0x40246000:{ // FLOAT_EQUAL:1<-10,10:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x3full,10,1));
return 0x40246004;}
default:return 0;}}
uint32_t ref_583(Cpu& c){switch(c.pc){
case 0x40247000:{ // FLOAT_EQUAL:1<-10,10:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x7full,10,1));
return 0x40247004;}
default:return 0;}}
uint32_t ref_584(Cpu& c){switch(c.pc){
case 0x40248000:{ // FLOAT_EQUAL:1<-10,10:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x80ull,10,1));
return 0x40248004;}
default:return 0;}}
uint32_t ref_585(Cpu& c){switch(c.pc){
case 0x40249000:{ // FLOAT_EQUAL:1<-10,10:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0xffull,10,1));
return 0x40249004;}
default:return 0;}}
uint32_t ref_586(Cpu& c){switch(c.pc){
case 0x4024a000:{ // FLOAT_EQUAL:1<-10,10:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x7fffull,10,1));
return 0x4024a004;}
default:return 0;}}
uint32_t ref_587(Cpu& c){switch(c.pc){
case 0x4024b000:{ // FLOAT_EQUAL:1<-10,10:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x8000ull,10,1));
return 0x4024b004;}
default:return 0;}}
uint32_t ref_588(Cpu& c){switch(c.pc){
case 0x4024c000:{ // FLOAT_EQUAL:1<-10,10:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0xffffull,10,1));
return 0x4024c004;}
default:return 0;}}
uint32_t ref_589(Cpu& c){switch(c.pc){
case 0x4024d000:{ // FLOAT_EQUAL:1<-10,10:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x7fffffffull,10,1));
return 0x4024d004;}
default:return 0;}}
uint32_t ref_590(Cpu& c){switch(c.pc){
case 0x4024e000:{ // FLOAT_EQUAL:1<-10,10:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0x80000000ull,10,1));
return 0x4024e004;}
default:return 0;}}
uint32_t ref_591(Cpu& c){switch(c.pc){
case 0x4024f000:{ // FLOAT_EQUAL:1<-10,10:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<10>(c,0x500),10,0xffffffffull,10,1));
return 0x4024f004;}
default:return 0;}}
uint32_t ref_592(Cpu& c){switch(c.pc){
case 0x40250000:{ // INT_ZEXT:2<-1:r
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x500)));
return 0x40250004;}
default:return 0;}}
uint32_t ref_593(Cpu& c){switch(c.pc){
case 0x40251000:{ // INT_ZEXT:2<-1:c:k=0
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x0ull));
return 0x40251004;}
default:return 0;}}
uint32_t ref_594(Cpu& c){switch(c.pc){
case 0x40252000:{ // INT_ZEXT:2<-1:c:k=1
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x1ull));
return 0x40252004;}
default:return 0;}}
uint32_t ref_595(Cpu& c){switch(c.pc){
case 0x40253000:{ // INT_ZEXT:2<-1:c:k=2
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x2ull));
return 0x40253004;}
default:return 0;}}
uint32_t ref_596(Cpu& c){switch(c.pc){
case 0x40254000:{ // INT_ZEXT:2<-1:c:k=3
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x3ull));
return 0x40254004;}
default:return 0;}}
uint32_t ref_597(Cpu& c){switch(c.pc){
case 0x40255000:{ // INT_ZEXT:2<-1:c:k=7
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x7ull));
return 0x40255004;}
default:return 0;}}
uint32_t ref_598(Cpu& c){switch(c.pc){
case 0x40256000:{ // INT_ZEXT:2<-1:c:k=8
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x8ull));
return 0x40256004;}
default:return 0;}}
uint32_t ref_599(Cpu& c){switch(c.pc){
case 0x40257000:{ // INT_ZEXT:2<-1:c:k=31
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x1full));
return 0x40257004;}
default:return 0;}}
uint32_t ref_600(Cpu& c){switch(c.pc){
case 0x40258000:{ // INT_ZEXT:2<-1:c:k=32
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x20ull));
return 0x40258004;}
default:return 0;}}
uint32_t ref_601(Cpu& c){switch(c.pc){
case 0x40259000:{ // INT_ZEXT:2<-1:c:k=63
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x3full));
return 0x40259004;}
default:return 0;}}
uint32_t ref_602(Cpu& c){switch(c.pc){
case 0x4025a000:{ // INT_ZEXT:2<-1:c:k=127
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x7full));
return 0x4025a004;}
default:return 0;}}
uint32_t ref_603(Cpu& c){switch(c.pc){
case 0x4025b000:{ // INT_ZEXT:2<-1:c:k=128
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x80ull));
return 0x4025b004;}
default:return 0;}}
uint32_t ref_604(Cpu& c){switch(c.pc){
case 0x4025c000:{ // INT_ZEXT:2<-1:c:k=255
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0xffull));
return 0x4025c004;}
default:return 0;}}
uint32_t ref_605(Cpu& c){switch(c.pc){
case 0x4025d000:{ // INT_ZEXT:2<-1:c:k=32767
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0xffull));
return 0x4025d004;}
default:return 0;}}
uint32_t ref_606(Cpu& c){switch(c.pc){
case 0x4025e000:{ // INT_ZEXT:2<-1:c:k=32768
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x0ull));
return 0x4025e004;}
default:return 0;}}
uint32_t ref_607(Cpu& c){switch(c.pc){
case 0x4025f000:{ // INT_ZEXT:2<-1:c:k=65535
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0xffull));
return 0x4025f004;}
default:return 0;}}
uint32_t ref_608(Cpu& c){switch(c.pc){
case 0x40260000:{ // INT_ZEXT:2<-1:c:k=2147483647
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0xffull));
return 0x40260004;}
default:return 0;}}
uint32_t ref_609(Cpu& c){switch(c.pc){
case 0x40261000:{ // INT_ZEXT:2<-1:c:k=2147483648
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0x0ull));
return 0x40261004;}
default:return 0;}}
uint32_t ref_610(Cpu& c){switch(c.pc){
case 0x40262000:{ // INT_ZEXT:2<-1:c:k=4294967295
wr<2>(c,0x400,eval<Op::INT_ZEXT,2,1>(0xffull));
return 0x40262004;}
default:return 0;}}
uint32_t ref_611(Cpu& c){switch(c.pc){
case 0x40263000:{ // INT_LEFT:2<-2,4:rr
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),r<4>(c,0x600)));
return 0x40263004;}
default:return 0;}}
uint32_t ref_612(Cpu& c){switch(c.pc){
case 0x40264000:{ // INT_LEFT:2<-2,4:rc:k=0
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x0ull));
return 0x40264004;}
default:return 0;}}
uint32_t ref_613(Cpu& c){switch(c.pc){
case 0x40265000:{ // INT_LEFT:2<-2,4:rc:k=1
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x1ull));
return 0x40265004;}
default:return 0;}}
uint32_t ref_614(Cpu& c){switch(c.pc){
case 0x40266000:{ // INT_LEFT:2<-2,4:rc:k=2
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x2ull));
return 0x40266004;}
default:return 0;}}
uint32_t ref_615(Cpu& c){switch(c.pc){
case 0x40267000:{ // INT_LEFT:2<-2,4:rc:k=3
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x3ull));
return 0x40267004;}
default:return 0;}}
uint32_t ref_616(Cpu& c){switch(c.pc){
case 0x40268000:{ // INT_LEFT:2<-2,4:rc:k=7
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x7ull));
return 0x40268004;}
default:return 0;}}
uint32_t ref_617(Cpu& c){switch(c.pc){
case 0x40269000:{ // INT_LEFT:2<-2,4:rc:k=8
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x8ull));
return 0x40269004;}
default:return 0;}}
uint32_t ref_618(Cpu& c){switch(c.pc){
case 0x4026a000:{ // INT_LEFT:2<-2,4:rc:k=31
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x1full));
return 0x4026a004;}
default:return 0;}}
uint32_t ref_619(Cpu& c){switch(c.pc){
case 0x4026b000:{ // INT_LEFT:2<-2,4:rc:k=32
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x20ull));
return 0x4026b004;}
default:return 0;}}
uint32_t ref_620(Cpu& c){switch(c.pc){
case 0x4026c000:{ // INT_LEFT:2<-2,4:rc:k=63
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x3full));
return 0x4026c004;}
default:return 0;}}
uint32_t ref_621(Cpu& c){switch(c.pc){
case 0x4026d000:{ // INT_LEFT:2<-2,4:rc:k=127
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x7full));
return 0x4026d004;}
default:return 0;}}
uint32_t ref_622(Cpu& c){switch(c.pc){
case 0x4026e000:{ // INT_LEFT:2<-2,4:rc:k=128
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x80ull));
return 0x4026e004;}
default:return 0;}}
uint32_t ref_623(Cpu& c){switch(c.pc){
case 0x4026f000:{ // INT_LEFT:2<-2,4:rc:k=255
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0xffull));
return 0x4026f004;}
default:return 0;}}
uint32_t ref_624(Cpu& c){switch(c.pc){
case 0x40270000:{ // INT_LEFT:2<-2,4:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x7fffull));
return 0x40270004;}
default:return 0;}}
uint32_t ref_625(Cpu& c){switch(c.pc){
case 0x40271000:{ // INT_LEFT:2<-2,4:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x8000ull));
return 0x40271004;}
default:return 0;}}
uint32_t ref_626(Cpu& c){switch(c.pc){
case 0x40272000:{ // INT_LEFT:2<-2,4:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0xffffull));
return 0x40272004;}
default:return 0;}}
uint32_t ref_627(Cpu& c){switch(c.pc){
case 0x40273000:{ // INT_LEFT:2<-2,4:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x7fffffffull));
return 0x40273004;}
default:return 0;}}
uint32_t ref_628(Cpu& c){switch(c.pc){
case 0x40274000:{ // INT_LEFT:2<-2,4:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0x80000000ull));
return 0x40274004;}
default:return 0;}}
uint32_t ref_629(Cpu& c){switch(c.pc){
case 0x40275000:{ // INT_LEFT:2<-2,4:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,4>(r<2>(c,0x500),0xffffffffull));
return 0x40275004;}
default:return 0;}}
uint32_t ref_630(Cpu& c){switch(c.pc){
case 0x40276000:{ // INT_OR:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x40276004;}
default:return 0;}}
uint32_t ref_631(Cpu& c){switch(c.pc){
case 0x40277000:{ // INT_OR:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x40277004;}
default:return 0;}}
uint32_t ref_632(Cpu& c){switch(c.pc){
case 0x40278000:{ // INT_OR:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x40278004;}
default:return 0;}}
uint32_t ref_633(Cpu& c){switch(c.pc){
case 0x40279000:{ // INT_OR:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x40279004;}
default:return 0;}}
uint32_t ref_634(Cpu& c){switch(c.pc){
case 0x4027a000:{ // INT_OR:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x4027a004;}
default:return 0;}}
uint32_t ref_635(Cpu& c){switch(c.pc){
case 0x4027b000:{ // INT_OR:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x4027b004;}
default:return 0;}}
uint32_t ref_636(Cpu& c){switch(c.pc){
case 0x4027c000:{ // INT_OR:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x4027c004;}
default:return 0;}}
uint32_t ref_637(Cpu& c){switch(c.pc){
case 0x4027d000:{ // INT_OR:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x1full));
return 0x4027d004;}
default:return 0;}}
uint32_t ref_638(Cpu& c){switch(c.pc){
case 0x4027e000:{ // INT_OR:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x4027e004;}
default:return 0;}}
uint32_t ref_639(Cpu& c){switch(c.pc){
case 0x4027f000:{ // INT_OR:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x3full));
return 0x4027f004;}
default:return 0;}}
uint32_t ref_640(Cpu& c){switch(c.pc){
case 0x40280000:{ // INT_OR:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x7full));
return 0x40280004;}
default:return 0;}}
uint32_t ref_641(Cpu& c){switch(c.pc){
case 0x40281000:{ // INT_OR:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x40281004;}
default:return 0;}}
uint32_t ref_642(Cpu& c){switch(c.pc){
case 0x40282000:{ // INT_OR:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0xffull));
return 0x40282004;}
default:return 0;}}
uint32_t ref_643(Cpu& c){switch(c.pc){
case 0x40283000:{ // INT_OR:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40283004;}
default:return 0;}}
uint32_t ref_644(Cpu& c){switch(c.pc){
case 0x40284000:{ // INT_OR:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40284004;}
default:return 0;}}
uint32_t ref_645(Cpu& c){switch(c.pc){
case 0x40285000:{ // INT_OR:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x40285004;}
default:return 0;}}
uint32_t ref_646(Cpu& c){switch(c.pc){
case 0x40286000:{ // INT_OR:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x40286004;}
default:return 0;}}
uint32_t ref_647(Cpu& c){switch(c.pc){
case 0x40287000:{ // INT_OR:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x40287004;}
default:return 0;}}
uint32_t ref_648(Cpu& c){switch(c.pc){
case 0x40288000:{ // INT_OR:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_OR,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x40288004;}
default:return 0;}}
uint32_t ref_649(Cpu& c){switch(c.pc){
case 0x40289000:{ // COPY:2<-2:r
wr<2>(c,0x400,eval<Op::COPY,2,2>(r<2>(c,0x500)));
return 0x40289004;}
default:return 0;}}
uint32_t ref_650(Cpu& c){switch(c.pc){
case 0x4028a000:{ // COPY:2<-2:c:k=0
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x0ull));
return 0x4028a004;}
default:return 0;}}
uint32_t ref_651(Cpu& c){switch(c.pc){
case 0x4028b000:{ // COPY:2<-2:c:k=1
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x1ull));
return 0x4028b004;}
default:return 0;}}
uint32_t ref_652(Cpu& c){switch(c.pc){
case 0x4028c000:{ // COPY:2<-2:c:k=2
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x2ull));
return 0x4028c004;}
default:return 0;}}
uint32_t ref_653(Cpu& c){switch(c.pc){
case 0x4028d000:{ // COPY:2<-2:c:k=3
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x3ull));
return 0x4028d004;}
default:return 0;}}
uint32_t ref_654(Cpu& c){switch(c.pc){
case 0x4028e000:{ // COPY:2<-2:c:k=7
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x7ull));
return 0x4028e004;}
default:return 0;}}
uint32_t ref_655(Cpu& c){switch(c.pc){
case 0x4028f000:{ // COPY:2<-2:c:k=8
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x8ull));
return 0x4028f004;}
default:return 0;}}
uint32_t ref_656(Cpu& c){switch(c.pc){
case 0x40290000:{ // COPY:2<-2:c:k=31
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x1full));
return 0x40290004;}
default:return 0;}}
uint32_t ref_657(Cpu& c){switch(c.pc){
case 0x40291000:{ // COPY:2<-2:c:k=32
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x20ull));
return 0x40291004;}
default:return 0;}}
uint32_t ref_658(Cpu& c){switch(c.pc){
case 0x40292000:{ // COPY:2<-2:c:k=63
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x3full));
return 0x40292004;}
default:return 0;}}
uint32_t ref_659(Cpu& c){switch(c.pc){
case 0x40293000:{ // COPY:2<-2:c:k=127
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x7full));
return 0x40293004;}
default:return 0;}}
uint32_t ref_660(Cpu& c){switch(c.pc){
case 0x40294000:{ // COPY:2<-2:c:k=128
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x80ull));
return 0x40294004;}
default:return 0;}}
uint32_t ref_661(Cpu& c){switch(c.pc){
case 0x40295000:{ // COPY:2<-2:c:k=255
wr<2>(c,0x400,eval<Op::COPY,2,2>(0xffull));
return 0x40295004;}
default:return 0;}}
uint32_t ref_662(Cpu& c){switch(c.pc){
case 0x40296000:{ // COPY:2<-2:c:k=32767
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x7fffull));
return 0x40296004;}
default:return 0;}}
uint32_t ref_663(Cpu& c){switch(c.pc){
case 0x40297000:{ // COPY:2<-2:c:k=32768
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x8000ull));
return 0x40297004;}
default:return 0;}}
uint32_t ref_664(Cpu& c){switch(c.pc){
case 0x40298000:{ // COPY:2<-2:c:k=65535
wr<2>(c,0x400,eval<Op::COPY,2,2>(0xffffull));
return 0x40298004;}
default:return 0;}}
uint32_t ref_665(Cpu& c){switch(c.pc){
case 0x40299000:{ // COPY:2<-2:c:k=2147483647
wr<2>(c,0x400,eval<Op::COPY,2,2>(0xffffull));
return 0x40299004;}
default:return 0;}}
uint32_t ref_666(Cpu& c){switch(c.pc){
case 0x4029a000:{ // COPY:2<-2:c:k=2147483648
wr<2>(c,0x400,eval<Op::COPY,2,2>(0x0ull));
return 0x4029a004;}
default:return 0;}}
uint32_t ref_667(Cpu& c){switch(c.pc){
case 0x4029b000:{ // COPY:2<-2:c:k=4294967295
wr<2>(c,0x400,eval<Op::COPY,2,2>(0xffffull));
return 0x4029b004;}
default:return 0;}}
uint32_t ref_668(Cpu& c){switch(c.pc){
case 0x4029c000:{ // INT_SLESS:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x4029c004;}
default:return 0;}}
uint32_t ref_669(Cpu& c){switch(c.pc){
case 0x4029d000:{ // INT_SLESS:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4029d004;}
default:return 0;}}
uint32_t ref_670(Cpu& c){switch(c.pc){
case 0x4029e000:{ // INT_SLESS:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x4029e004;}
default:return 0;}}
uint32_t ref_671(Cpu& c){switch(c.pc){
case 0x4029f000:{ // INT_SLESS:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x4029f004;}
default:return 0;}}
uint32_t ref_672(Cpu& c){switch(c.pc){
case 0x402a0000:{ // INT_SLESS:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x402a0004;}
default:return 0;}}
uint32_t ref_673(Cpu& c){switch(c.pc){
case 0x402a1000:{ // INT_SLESS:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x402a1004;}
default:return 0;}}
uint32_t ref_674(Cpu& c){switch(c.pc){
case 0x402a2000:{ // INT_SLESS:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x402a2004;}
default:return 0;}}
uint32_t ref_675(Cpu& c){switch(c.pc){
case 0x402a3000:{ // INT_SLESS:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x1full));
return 0x402a3004;}
default:return 0;}}
uint32_t ref_676(Cpu& c){switch(c.pc){
case 0x402a4000:{ // INT_SLESS:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x402a4004;}
default:return 0;}}
uint32_t ref_677(Cpu& c){switch(c.pc){
case 0x402a5000:{ // INT_SLESS:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x3full));
return 0x402a5004;}
default:return 0;}}
uint32_t ref_678(Cpu& c){switch(c.pc){
case 0x402a6000:{ // INT_SLESS:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x7full));
return 0x402a6004;}
default:return 0;}}
uint32_t ref_679(Cpu& c){switch(c.pc){
case 0x402a7000:{ // INT_SLESS:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x402a7004;}
default:return 0;}}
uint32_t ref_680(Cpu& c){switch(c.pc){
case 0x402a8000:{ // INT_SLESS:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x402a8004;}
default:return 0;}}
uint32_t ref_681(Cpu& c){switch(c.pc){
case 0x402a9000:{ // INT_SLESS:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x402a9004;}
default:return 0;}}
uint32_t ref_682(Cpu& c){switch(c.pc){
case 0x402aa000:{ // INT_SLESS:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x402aa004;}
default:return 0;}}
uint32_t ref_683(Cpu& c){switch(c.pc){
case 0x402ab000:{ // INT_SLESS:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x402ab004;}
default:return 0;}}
uint32_t ref_684(Cpu& c){switch(c.pc){
case 0x402ac000:{ // INT_SLESS:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x402ac004;}
default:return 0;}}
uint32_t ref_685(Cpu& c){switch(c.pc){
case 0x402ad000:{ // INT_SLESS:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x402ad004;}
default:return 0;}}
uint32_t ref_686(Cpu& c){switch(c.pc){
case 0x402ae000:{ // INT_SLESS:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x402ae004;}
default:return 0;}}
uint32_t ref_687(Cpu& c){switch(c.pc){
case 0x402af000:{ // POPCOUNT:1<-1:r
wr<1>(c,0x400,eval<Op::POPCOUNT,1,1>(r<1>(c,0x500)));
return 0x402af004;}
default:return 0;}}
uint32_t ref_688(Cpu& c){switch(c.pc){
case 0x402b0000:{ // FLOAT_SUB:10<-10,10:rr
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,r<10>(c,0x600),10,10));
return 0x402b0004;}
default:return 0;}}
uint32_t ref_689(Cpu& c){switch(c.pc){
case 0x402b1000:{ // FLOAT_SUB:10<-10,10:rc:k=0
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x0ull,10,10));
return 0x402b1004;}
default:return 0;}}
uint32_t ref_690(Cpu& c){switch(c.pc){
case 0x402b2000:{ // FLOAT_SUB:10<-10,10:rc:k=1
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x1ull,10,10));
return 0x402b2004;}
default:return 0;}}
uint32_t ref_691(Cpu& c){switch(c.pc){
case 0x402b3000:{ // FLOAT_SUB:10<-10,10:rc:k=2
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x2ull,10,10));
return 0x402b3004;}
default:return 0;}}
uint32_t ref_692(Cpu& c){switch(c.pc){
case 0x402b4000:{ // FLOAT_SUB:10<-10,10:rc:k=3
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x3ull,10,10));
return 0x402b4004;}
default:return 0;}}
uint32_t ref_693(Cpu& c){switch(c.pc){
case 0x402b5000:{ // FLOAT_SUB:10<-10,10:rc:k=7
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x7ull,10,10));
return 0x402b5004;}
default:return 0;}}
uint32_t ref_694(Cpu& c){switch(c.pc){
case 0x402b6000:{ // FLOAT_SUB:10<-10,10:rc:k=8
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x8ull,10,10));
return 0x402b6004;}
default:return 0;}}
uint32_t ref_695(Cpu& c){switch(c.pc){
case 0x402b7000:{ // FLOAT_SUB:10<-10,10:rc:k=31
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x1full,10,10));
return 0x402b7004;}
default:return 0;}}
uint32_t ref_696(Cpu& c){switch(c.pc){
case 0x402b8000:{ // FLOAT_SUB:10<-10,10:rc:k=32
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x20ull,10,10));
return 0x402b8004;}
default:return 0;}}
uint32_t ref_697(Cpu& c){switch(c.pc){
case 0x402b9000:{ // FLOAT_SUB:10<-10,10:rc:k=63
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x3full,10,10));
return 0x402b9004;}
default:return 0;}}
uint32_t ref_698(Cpu& c){switch(c.pc){
case 0x402ba000:{ // FLOAT_SUB:10<-10,10:rc:k=127
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x7full,10,10));
return 0x402ba004;}
default:return 0;}}
uint32_t ref_699(Cpu& c){switch(c.pc){
case 0x402bb000:{ // FLOAT_SUB:10<-10,10:rc:k=128
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x80ull,10,10));
return 0x402bb004;}
default:return 0;}}
uint32_t ref_700(Cpu& c){switch(c.pc){
case 0x402bc000:{ // FLOAT_SUB:10<-10,10:rc:k=255
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0xffull,10,10));
return 0x402bc004;}
default:return 0;}}
uint32_t ref_701(Cpu& c){switch(c.pc){
case 0x402bd000:{ // FLOAT_SUB:10<-10,10:rc:k=32767
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x7fffull,10,10));
return 0x402bd004;}
default:return 0;}}
uint32_t ref_702(Cpu& c){switch(c.pc){
case 0x402be000:{ // FLOAT_SUB:10<-10,10:rc:k=32768
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x8000ull,10,10));
return 0x402be004;}
default:return 0;}}
uint32_t ref_703(Cpu& c){switch(c.pc){
case 0x402bf000:{ // FLOAT_SUB:10<-10,10:rc:k=65535
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0xffffull,10,10));
return 0x402bf004;}
default:return 0;}}
uint32_t ref_704(Cpu& c){switch(c.pc){
case 0x402c0000:{ // FLOAT_SUB:10<-10,10:rc:k=2147483647
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x7fffffffull,10,10));
return 0x402c0004;}
default:return 0;}}
uint32_t ref_705(Cpu& c){switch(c.pc){
case 0x402c1000:{ // FLOAT_SUB:10<-10,10:rc:k=2147483648
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0x80000000ull,10,10));
return 0x402c1004;}
default:return 0;}}
uint32_t ref_706(Cpu& c){switch(c.pc){
case 0x402c2000:{ // FLOAT_SUB:10<-10,10:rc:k=4294967295
wr<10>(c,0x400,float_op("FLOAT_SUB",r<10>(c,0x500),10,0xffffffffull,10,10));
return 0x402c2004;}
default:return 0;}}
uint32_t ref_707(Cpu& c){switch(c.pc){
case 0x402c3000:{ // FLOAT_ABS:10<-10:r
wr<10>(c,0x400,float_op("FLOAT_ABS",r<10>(c,0x500),10,0x0ull,4,10));
return 0x402c3004;}
default:return 0;}}
uint32_t ref_708(Cpu& c){switch(c.pc){
case 0x402c4000:{ // INT_XOR:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x402c4004;}
default:return 0;}}
uint32_t ref_709(Cpu& c){switch(c.pc){
case 0x402c5000:{ // INT_XOR:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x402c5004;}
default:return 0;}}
uint32_t ref_710(Cpu& c){switch(c.pc){
case 0x402c6000:{ // INT_XOR:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x402c6004;}
default:return 0;}}
uint32_t ref_711(Cpu& c){switch(c.pc){
case 0x402c7000:{ // INT_XOR:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x402c7004;}
default:return 0;}}
uint32_t ref_712(Cpu& c){switch(c.pc){
case 0x402c8000:{ // INT_XOR:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x402c8004;}
default:return 0;}}
uint32_t ref_713(Cpu& c){switch(c.pc){
case 0x402c9000:{ // INT_XOR:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x402c9004;}
default:return 0;}}
uint32_t ref_714(Cpu& c){switch(c.pc){
case 0x402ca000:{ // INT_XOR:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x402ca004;}
default:return 0;}}
uint32_t ref_715(Cpu& c){switch(c.pc){
case 0x402cb000:{ // INT_XOR:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x1full));
return 0x402cb004;}
default:return 0;}}
uint32_t ref_716(Cpu& c){switch(c.pc){
case 0x402cc000:{ // INT_XOR:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x402cc004;}
default:return 0;}}
uint32_t ref_717(Cpu& c){switch(c.pc){
case 0x402cd000:{ // INT_XOR:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x3full));
return 0x402cd004;}
default:return 0;}}
uint32_t ref_718(Cpu& c){switch(c.pc){
case 0x402ce000:{ // INT_XOR:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x7full));
return 0x402ce004;}
default:return 0;}}
uint32_t ref_719(Cpu& c){switch(c.pc){
case 0x402cf000:{ // INT_XOR:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x402cf004;}
default:return 0;}}
uint32_t ref_720(Cpu& c){switch(c.pc){
case 0x402d0000:{ // INT_XOR:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0xffull));
return 0x402d0004;}
default:return 0;}}
uint32_t ref_721(Cpu& c){switch(c.pc){
case 0x402d1000:{ // INT_XOR:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x402d1004;}
default:return 0;}}
uint32_t ref_722(Cpu& c){switch(c.pc){
case 0x402d2000:{ // INT_XOR:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x402d2004;}
default:return 0;}}
uint32_t ref_723(Cpu& c){switch(c.pc){
case 0x402d3000:{ // INT_XOR:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x402d3004;}
default:return 0;}}
uint32_t ref_724(Cpu& c){switch(c.pc){
case 0x402d4000:{ // INT_XOR:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x402d4004;}
default:return 0;}}
uint32_t ref_725(Cpu& c){switch(c.pc){
case 0x402d5000:{ // INT_XOR:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x402d5004;}
default:return 0;}}
uint32_t ref_726(Cpu& c){switch(c.pc){
case 0x402d6000:{ // INT_XOR:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x402d6004;}
default:return 0;}}
uint32_t ref_727(Cpu& c){switch(c.pc){
case 0x402d7000:{ // INT_LESS:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x402d7004;}
default:return 0;}}
uint32_t ref_728(Cpu& c){switch(c.pc){
case 0x402d8000:{ // INT_LESS:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x402d8004;}
default:return 0;}}
uint32_t ref_729(Cpu& c){switch(c.pc){
case 0x402d9000:{ // INT_LESS:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x402d9004;}
default:return 0;}}
uint32_t ref_730(Cpu& c){switch(c.pc){
case 0x402da000:{ // INT_LESS:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x402da004;}
default:return 0;}}
uint32_t ref_731(Cpu& c){switch(c.pc){
case 0x402db000:{ // INT_LESS:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x402db004;}
default:return 0;}}
uint32_t ref_732(Cpu& c){switch(c.pc){
case 0x402dc000:{ // INT_LESS:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x402dc004;}
default:return 0;}}
uint32_t ref_733(Cpu& c){switch(c.pc){
case 0x402dd000:{ // INT_LESS:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x402dd004;}
default:return 0;}}
uint32_t ref_734(Cpu& c){switch(c.pc){
case 0x402de000:{ // INT_LESS:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x1full));
return 0x402de004;}
default:return 0;}}
uint32_t ref_735(Cpu& c){switch(c.pc){
case 0x402df000:{ // INT_LESS:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x402df004;}
default:return 0;}}
uint32_t ref_736(Cpu& c){switch(c.pc){
case 0x402e0000:{ // INT_LESS:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x3full));
return 0x402e0004;}
default:return 0;}}
uint32_t ref_737(Cpu& c){switch(c.pc){
case 0x402e1000:{ // INT_LESS:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x7full));
return 0x402e1004;}
default:return 0;}}
uint32_t ref_738(Cpu& c){switch(c.pc){
case 0x402e2000:{ // INT_LESS:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x402e2004;}
default:return 0;}}
uint32_t ref_739(Cpu& c){switch(c.pc){
case 0x402e3000:{ // INT_LESS:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0xffull));
return 0x402e3004;}
default:return 0;}}
uint32_t ref_740(Cpu& c){switch(c.pc){
case 0x402e4000:{ // INT_LESS:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x402e4004;}
default:return 0;}}
uint32_t ref_741(Cpu& c){switch(c.pc){
case 0x402e5000:{ // INT_LESS:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x402e5004;}
default:return 0;}}
uint32_t ref_742(Cpu& c){switch(c.pc){
case 0x402e6000:{ // INT_LESS:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x402e6004;}
default:return 0;}}
uint32_t ref_743(Cpu& c){switch(c.pc){
case 0x402e7000:{ // INT_LESS:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x402e7004;}
default:return 0;}}
uint32_t ref_744(Cpu& c){switch(c.pc){
case 0x402e8000:{ // INT_LESS:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x402e8004;}
default:return 0;}}
uint32_t ref_745(Cpu& c){switch(c.pc){
case 0x402e9000:{ // INT_LESS:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x402e9004;}
default:return 0;}}
uint32_t ref_746(Cpu& c){switch(c.pc){
case 0x402ea000:{ // INT_SBORROW:1<-4,4:rr
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x402ea004;}
default:return 0;}}
uint32_t ref_747(Cpu& c){switch(c.pc){
case 0x402eb000:{ // INT_SBORROW:1<-4,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x0ull));
return 0x402eb004;}
default:return 0;}}
uint32_t ref_748(Cpu& c){switch(c.pc){
case 0x402ec000:{ // INT_SBORROW:1<-4,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x1ull));
return 0x402ec004;}
default:return 0;}}
uint32_t ref_749(Cpu& c){switch(c.pc){
case 0x402ed000:{ // INT_SBORROW:1<-4,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x2ull));
return 0x402ed004;}
default:return 0;}}
uint32_t ref_750(Cpu& c){switch(c.pc){
case 0x402ee000:{ // INT_SBORROW:1<-4,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x3ull));
return 0x402ee004;}
default:return 0;}}
uint32_t ref_751(Cpu& c){switch(c.pc){
case 0x402ef000:{ // INT_SBORROW:1<-4,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x7ull));
return 0x402ef004;}
default:return 0;}}
uint32_t ref_752(Cpu& c){switch(c.pc){
case 0x402f0000:{ // INT_SBORROW:1<-4,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x8ull));
return 0x402f0004;}
default:return 0;}}
uint32_t ref_753(Cpu& c){switch(c.pc){
case 0x402f1000:{ // INT_SBORROW:1<-4,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x1full));
return 0x402f1004;}
default:return 0;}}
uint32_t ref_754(Cpu& c){switch(c.pc){
case 0x402f2000:{ // INT_SBORROW:1<-4,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x20ull));
return 0x402f2004;}
default:return 0;}}
uint32_t ref_755(Cpu& c){switch(c.pc){
case 0x402f3000:{ // INT_SBORROW:1<-4,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x3full));
return 0x402f3004;}
default:return 0;}}
uint32_t ref_756(Cpu& c){switch(c.pc){
case 0x402f4000:{ // INT_SBORROW:1<-4,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x7full));
return 0x402f4004;}
default:return 0;}}
uint32_t ref_757(Cpu& c){switch(c.pc){
case 0x402f5000:{ // INT_SBORROW:1<-4,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x80ull));
return 0x402f5004;}
default:return 0;}}
uint32_t ref_758(Cpu& c){switch(c.pc){
case 0x402f6000:{ // INT_SBORROW:1<-4,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0xffull));
return 0x402f6004;}
default:return 0;}}
uint32_t ref_759(Cpu& c){switch(c.pc){
case 0x402f7000:{ // INT_SBORROW:1<-4,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x7fffull));
return 0x402f7004;}
default:return 0;}}
uint32_t ref_760(Cpu& c){switch(c.pc){
case 0x402f8000:{ // INT_SBORROW:1<-4,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x8000ull));
return 0x402f8004;}
default:return 0;}}
uint32_t ref_761(Cpu& c){switch(c.pc){
case 0x402f9000:{ // INT_SBORROW:1<-4,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0xffffull));
return 0x402f9004;}
default:return 0;}}
uint32_t ref_762(Cpu& c){switch(c.pc){
case 0x402fa000:{ // INT_SBORROW:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x402fa004;}
default:return 0;}}
uint32_t ref_763(Cpu& c){switch(c.pc){
case 0x402fb000:{ // INT_SBORROW:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x402fb004;}
default:return 0;}}
uint32_t ref_764(Cpu& c){switch(c.pc){
case 0x402fc000:{ // INT_SBORROW:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x402fc004;}
default:return 0;}}
uint32_t ref_765(Cpu& c){switch(c.pc){
case 0x402fd000:{ // INT_SBORROW:1<-4,4:cr:k=0
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x600)));
return 0x402fd004;}
default:return 0;}}
uint32_t ref_766(Cpu& c){switch(c.pc){
case 0x402fe000:{ // INT_SBORROW:1<-4,4:cr:k=1
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x1ull,r<4>(c,0x600)));
return 0x402fe004;}
default:return 0;}}
uint32_t ref_767(Cpu& c){switch(c.pc){
case 0x402ff000:{ // INT_SBORROW:1<-4,4:cr:k=2
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x2ull,r<4>(c,0x600)));
return 0x402ff004;}
default:return 0;}}
uint32_t ref_768(Cpu& c){switch(c.pc){
case 0x40300000:{ // INT_SBORROW:1<-4,4:cr:k=3
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x3ull,r<4>(c,0x600)));
return 0x40300004;}
default:return 0;}}
uint32_t ref_769(Cpu& c){switch(c.pc){
case 0x40301000:{ // INT_SBORROW:1<-4,4:cr:k=7
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x7ull,r<4>(c,0x600)));
return 0x40301004;}
default:return 0;}}
uint32_t ref_770(Cpu& c){switch(c.pc){
case 0x40302000:{ // INT_SBORROW:1<-4,4:cr:k=8
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x8ull,r<4>(c,0x600)));
return 0x40302004;}
default:return 0;}}
uint32_t ref_771(Cpu& c){switch(c.pc){
case 0x40303000:{ // INT_SBORROW:1<-4,4:cr:k=31
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x1full,r<4>(c,0x600)));
return 0x40303004;}
default:return 0;}}
uint32_t ref_772(Cpu& c){switch(c.pc){
case 0x40304000:{ // INT_SBORROW:1<-4,4:cr:k=32
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x20ull,r<4>(c,0x600)));
return 0x40304004;}
default:return 0;}}
uint32_t ref_773(Cpu& c){switch(c.pc){
case 0x40305000:{ // INT_SBORROW:1<-4,4:cr:k=63
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x3full,r<4>(c,0x600)));
return 0x40305004;}
default:return 0;}}
uint32_t ref_774(Cpu& c){switch(c.pc){
case 0x40306000:{ // INT_SBORROW:1<-4,4:cr:k=127
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x7full,r<4>(c,0x600)));
return 0x40306004;}
default:return 0;}}
uint32_t ref_775(Cpu& c){switch(c.pc){
case 0x40307000:{ // INT_SBORROW:1<-4,4:cr:k=128
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x80ull,r<4>(c,0x600)));
return 0x40307004;}
default:return 0;}}
uint32_t ref_776(Cpu& c){switch(c.pc){
case 0x40308000:{ // INT_SBORROW:1<-4,4:cr:k=255
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0xffull,r<4>(c,0x600)));
return 0x40308004;}
default:return 0;}}
uint32_t ref_777(Cpu& c){switch(c.pc){
case 0x40309000:{ // INT_SBORROW:1<-4,4:cr:k=32767
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x7fffull,r<4>(c,0x600)));
return 0x40309004;}
default:return 0;}}
uint32_t ref_778(Cpu& c){switch(c.pc){
case 0x4030a000:{ // INT_SBORROW:1<-4,4:cr:k=32768
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x8000ull,r<4>(c,0x600)));
return 0x4030a004;}
default:return 0;}}
uint32_t ref_779(Cpu& c){switch(c.pc){
case 0x4030b000:{ // INT_SBORROW:1<-4,4:cr:k=65535
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0xffffull,r<4>(c,0x600)));
return 0x4030b004;}
default:return 0;}}
uint32_t ref_780(Cpu& c){switch(c.pc){
case 0x4030c000:{ // INT_SBORROW:1<-4,4:cr:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x7fffffffull,r<4>(c,0x600)));
return 0x4030c004;}
default:return 0;}}
uint32_t ref_781(Cpu& c){switch(c.pc){
case 0x4030d000:{ // INT_SBORROW:1<-4,4:cr:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0x80000000ull,r<4>(c,0x600)));
return 0x4030d004;}
default:return 0;}}
uint32_t ref_782(Cpu& c){switch(c.pc){
case 0x4030e000:{ // INT_SBORROW:1<-4,4:cr:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,4,4>(0xffffffffull,r<4>(c,0x600)));
return 0x4030e004;}
default:return 0;}}
uint32_t ref_783(Cpu& c){switch(c.pc){
case 0x4030f000:{ // FLOAT_ADD:10<-10,10:rr
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,r<10>(c,0x600),10,10));
return 0x4030f004;}
default:return 0;}}
uint32_t ref_784(Cpu& c){switch(c.pc){
case 0x40310000:{ // FLOAT_ADD:10<-10,10:rc:k=0
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x0ull,10,10));
return 0x40310004;}
default:return 0;}}
uint32_t ref_785(Cpu& c){switch(c.pc){
case 0x40311000:{ // FLOAT_ADD:10<-10,10:rc:k=1
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x1ull,10,10));
return 0x40311004;}
default:return 0;}}
uint32_t ref_786(Cpu& c){switch(c.pc){
case 0x40312000:{ // FLOAT_ADD:10<-10,10:rc:k=2
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x2ull,10,10));
return 0x40312004;}
default:return 0;}}
uint32_t ref_787(Cpu& c){switch(c.pc){
case 0x40313000:{ // FLOAT_ADD:10<-10,10:rc:k=3
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x3ull,10,10));
return 0x40313004;}
default:return 0;}}
uint32_t ref_788(Cpu& c){switch(c.pc){
case 0x40314000:{ // FLOAT_ADD:10<-10,10:rc:k=7
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x7ull,10,10));
return 0x40314004;}
default:return 0;}}
uint32_t ref_789(Cpu& c){switch(c.pc){
case 0x40315000:{ // FLOAT_ADD:10<-10,10:rc:k=8
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x8ull,10,10));
return 0x40315004;}
default:return 0;}}
uint32_t ref_790(Cpu& c){switch(c.pc){
case 0x40316000:{ // FLOAT_ADD:10<-10,10:rc:k=31
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x1full,10,10));
return 0x40316004;}
default:return 0;}}
uint32_t ref_791(Cpu& c){switch(c.pc){
case 0x40317000:{ // FLOAT_ADD:10<-10,10:rc:k=32
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x20ull,10,10));
return 0x40317004;}
default:return 0;}}
uint32_t ref_792(Cpu& c){switch(c.pc){
case 0x40318000:{ // FLOAT_ADD:10<-10,10:rc:k=63
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x3full,10,10));
return 0x40318004;}
default:return 0;}}
uint32_t ref_793(Cpu& c){switch(c.pc){
case 0x40319000:{ // FLOAT_ADD:10<-10,10:rc:k=127
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x7full,10,10));
return 0x40319004;}
default:return 0;}}
uint32_t ref_794(Cpu& c){switch(c.pc){
case 0x4031a000:{ // FLOAT_ADD:10<-10,10:rc:k=128
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x80ull,10,10));
return 0x4031a004;}
default:return 0;}}
uint32_t ref_795(Cpu& c){switch(c.pc){
case 0x4031b000:{ // FLOAT_ADD:10<-10,10:rc:k=255
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0xffull,10,10));
return 0x4031b004;}
default:return 0;}}
uint32_t ref_796(Cpu& c){switch(c.pc){
case 0x4031c000:{ // FLOAT_ADD:10<-10,10:rc:k=32767
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x7fffull,10,10));
return 0x4031c004;}
default:return 0;}}
uint32_t ref_797(Cpu& c){switch(c.pc){
case 0x4031d000:{ // FLOAT_ADD:10<-10,10:rc:k=32768
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x8000ull,10,10));
return 0x4031d004;}
default:return 0;}}
uint32_t ref_798(Cpu& c){switch(c.pc){
case 0x4031e000:{ // FLOAT_ADD:10<-10,10:rc:k=65535
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0xffffull,10,10));
return 0x4031e004;}
default:return 0;}}
uint32_t ref_799(Cpu& c){switch(c.pc){
case 0x4031f000:{ // FLOAT_ADD:10<-10,10:rc:k=2147483647
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x7fffffffull,10,10));
return 0x4031f004;}
default:return 0;}}
uint32_t ref_800(Cpu& c){switch(c.pc){
case 0x40320000:{ // FLOAT_ADD:10<-10,10:rc:k=2147483648
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0x80000000ull,10,10));
return 0x40320004;}
default:return 0;}}
uint32_t ref_801(Cpu& c){switch(c.pc){
case 0x40321000:{ // FLOAT_ADD:10<-10,10:rc:k=4294967295
wr<10>(c,0x400,float_op("FLOAT_ADD",r<10>(c,0x500),10,0xffffffffull,10,10));
return 0x40321004;}
default:return 0;}}
uint32_t ref_802(Cpu& c){switch(c.pc){
case 0x40322000:{ // FLOAT2FLOAT:4<-10:r
wr<4>(c,0x400,float_op("FLOAT2FLOAT",r<10>(c,0x500),10,0x0ull,4,4));
return 0x40322004;}
default:return 0;}}
uint32_t ref_803(Cpu& c){switch(c.pc){
case 0x40323000:{ // FLOAT_SQRT:10<-10:r
wr<10>(c,0x400,float_op("FLOAT_SQRT",r<10>(c,0x500),10,0x0ull,4,10));
return 0x40323004;}
default:return 0;}}
uint32_t ref_804(Cpu& c){switch(c.pc){
case 0x40324000:{ // INT_NOTEQUAL:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40324004;}
default:return 0;}}
uint32_t ref_805(Cpu& c){switch(c.pc){
case 0x40325000:{ // INT_NOTEQUAL:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40325004;}
default:return 0;}}
uint32_t ref_806(Cpu& c){switch(c.pc){
case 0x40326000:{ // INT_NOTEQUAL:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40326004;}
default:return 0;}}
uint32_t ref_807(Cpu& c){switch(c.pc){
case 0x40327000:{ // INT_NOTEQUAL:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40327004;}
default:return 0;}}
uint32_t ref_808(Cpu& c){switch(c.pc){
case 0x40328000:{ // INT_NOTEQUAL:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40328004;}
default:return 0;}}
uint32_t ref_809(Cpu& c){switch(c.pc){
case 0x40329000:{ // INT_NOTEQUAL:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40329004;}
default:return 0;}}
uint32_t ref_810(Cpu& c){switch(c.pc){
case 0x4032a000:{ // INT_NOTEQUAL:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x4032a004;}
default:return 0;}}
uint32_t ref_811(Cpu& c){switch(c.pc){
case 0x4032b000:{ // INT_NOTEQUAL:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x1full));
return 0x4032b004;}
default:return 0;}}
uint32_t ref_812(Cpu& c){switch(c.pc){
case 0x4032c000:{ // INT_NOTEQUAL:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x4032c004;}
default:return 0;}}
uint32_t ref_813(Cpu& c){switch(c.pc){
case 0x4032d000:{ // INT_NOTEQUAL:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x3full));
return 0x4032d004;}
default:return 0;}}
uint32_t ref_814(Cpu& c){switch(c.pc){
case 0x4032e000:{ // INT_NOTEQUAL:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x7full));
return 0x4032e004;}
default:return 0;}}
uint32_t ref_815(Cpu& c){switch(c.pc){
case 0x4032f000:{ // INT_NOTEQUAL:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x4032f004;}
default:return 0;}}
uint32_t ref_816(Cpu& c){switch(c.pc){
case 0x40330000:{ // INT_NOTEQUAL:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40330004;}
default:return 0;}}
uint32_t ref_817(Cpu& c){switch(c.pc){
case 0x40331000:{ // INT_NOTEQUAL:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40331004;}
default:return 0;}}
uint32_t ref_818(Cpu& c){switch(c.pc){
case 0x40332000:{ // INT_NOTEQUAL:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40332004;}
default:return 0;}}
uint32_t ref_819(Cpu& c){switch(c.pc){
case 0x40333000:{ // INT_NOTEQUAL:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40333004;}
default:return 0;}}
uint32_t ref_820(Cpu& c){switch(c.pc){
case 0x40334000:{ // INT_NOTEQUAL:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40334004;}
default:return 0;}}
uint32_t ref_821(Cpu& c){switch(c.pc){
case 0x40335000:{ // INT_NOTEQUAL:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40335004;}
default:return 0;}}
uint32_t ref_822(Cpu& c){switch(c.pc){
case 0x40336000:{ // INT_NOTEQUAL:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40336004;}
default:return 0;}}
uint32_t ref_823(Cpu& c){switch(c.pc){
case 0x40337000:{ // FLOAT_DIV:10<-10,10:rr
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,r<10>(c,0x600),10,10));
return 0x40337004;}
default:return 0;}}
uint32_t ref_824(Cpu& c){switch(c.pc){
case 0x40338000:{ // FLOAT_DIV:10<-10,10:rc:k=0
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x0ull,10,10));
return 0x40338004;}
default:return 0;}}
uint32_t ref_825(Cpu& c){switch(c.pc){
case 0x40339000:{ // FLOAT_DIV:10<-10,10:rc:k=1
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x1ull,10,10));
return 0x40339004;}
default:return 0;}}
uint32_t ref_826(Cpu& c){switch(c.pc){
case 0x4033a000:{ // FLOAT_DIV:10<-10,10:rc:k=2
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x2ull,10,10));
return 0x4033a004;}
default:return 0;}}
uint32_t ref_827(Cpu& c){switch(c.pc){
case 0x4033b000:{ // FLOAT_DIV:10<-10,10:rc:k=3
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x3ull,10,10));
return 0x4033b004;}
default:return 0;}}
uint32_t ref_828(Cpu& c){switch(c.pc){
case 0x4033c000:{ // FLOAT_DIV:10<-10,10:rc:k=7
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x7ull,10,10));
return 0x4033c004;}
default:return 0;}}
uint32_t ref_829(Cpu& c){switch(c.pc){
case 0x4033d000:{ // FLOAT_DIV:10<-10,10:rc:k=8
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x8ull,10,10));
return 0x4033d004;}
default:return 0;}}
uint32_t ref_830(Cpu& c){switch(c.pc){
case 0x4033e000:{ // FLOAT_DIV:10<-10,10:rc:k=31
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x1full,10,10));
return 0x4033e004;}
default:return 0;}}
uint32_t ref_831(Cpu& c){switch(c.pc){
case 0x4033f000:{ // FLOAT_DIV:10<-10,10:rc:k=32
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x20ull,10,10));
return 0x4033f004;}
default:return 0;}}
uint32_t ref_832(Cpu& c){switch(c.pc){
case 0x40340000:{ // FLOAT_DIV:10<-10,10:rc:k=63
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x3full,10,10));
return 0x40340004;}
default:return 0;}}
uint32_t ref_833(Cpu& c){switch(c.pc){
case 0x40341000:{ // FLOAT_DIV:10<-10,10:rc:k=127
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x7full,10,10));
return 0x40341004;}
default:return 0;}}
uint32_t ref_834(Cpu& c){switch(c.pc){
case 0x40342000:{ // FLOAT_DIV:10<-10,10:rc:k=128
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x80ull,10,10));
return 0x40342004;}
default:return 0;}}
uint32_t ref_835(Cpu& c){switch(c.pc){
case 0x40343000:{ // FLOAT_DIV:10<-10,10:rc:k=255
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0xffull,10,10));
return 0x40343004;}
default:return 0;}}
uint32_t ref_836(Cpu& c){switch(c.pc){
case 0x40344000:{ // FLOAT_DIV:10<-10,10:rc:k=32767
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x7fffull,10,10));
return 0x40344004;}
default:return 0;}}
uint32_t ref_837(Cpu& c){switch(c.pc){
case 0x40345000:{ // FLOAT_DIV:10<-10,10:rc:k=32768
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x8000ull,10,10));
return 0x40345004;}
default:return 0;}}
uint32_t ref_838(Cpu& c){switch(c.pc){
case 0x40346000:{ // FLOAT_DIV:10<-10,10:rc:k=65535
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0xffffull,10,10));
return 0x40346004;}
default:return 0;}}
uint32_t ref_839(Cpu& c){switch(c.pc){
case 0x40347000:{ // FLOAT_DIV:10<-10,10:rc:k=2147483647
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x7fffffffull,10,10));
return 0x40347004;}
default:return 0;}}
uint32_t ref_840(Cpu& c){switch(c.pc){
case 0x40348000:{ // FLOAT_DIV:10<-10,10:rc:k=2147483648
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0x80000000ull,10,10));
return 0x40348004;}
default:return 0;}}
uint32_t ref_841(Cpu& c){switch(c.pc){
case 0x40349000:{ // FLOAT_DIV:10<-10,10:rc:k=4294967295
wr<10>(c,0x400,float_op("FLOAT_DIV",r<10>(c,0x500),10,0xffffffffull,10,10));
return 0x40349004;}
default:return 0;}}
uint32_t ref_842(Cpu& c){switch(c.pc){
case 0x4034a000:{ // INT2FLOAT:10<-4:r
wr<10>(c,0x400,float_op("INT2FLOAT",r<4>(c,0x500),4,0x0ull,4,10));
return 0x4034a004;}
default:return 0;}}
uint32_t ref_843(Cpu& c){switch(c.pc){
case 0x4034b000:{ // INT2FLOAT:10<-4:c:k=0
wr<10>(c,0x400,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
return 0x4034b004;}
default:return 0;}}
uint32_t ref_844(Cpu& c){switch(c.pc){
case 0x4034c000:{ // INT2FLOAT:10<-4:c:k=1
wr<10>(c,0x400,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
return 0x4034c004;}
default:return 0;}}
uint32_t ref_845(Cpu& c){switch(c.pc){
case 0x4034d000:{ // INT2FLOAT:10<-4:c:k=2
wr<10>(c,0x400,float_op("INT2FLOAT",0x2ull,4,0x0ull,4,10));
return 0x4034d004;}
default:return 0;}}
uint32_t ref_846(Cpu& c){switch(c.pc){
case 0x4034e000:{ // INT2FLOAT:10<-4:c:k=3
wr<10>(c,0x400,float_op("INT2FLOAT",0x3ull,4,0x0ull,4,10));
return 0x4034e004;}
default:return 0;}}
uint32_t ref_847(Cpu& c){switch(c.pc){
case 0x4034f000:{ // INT2FLOAT:10<-4:c:k=7
wr<10>(c,0x400,float_op("INT2FLOAT",0x7ull,4,0x0ull,4,10));
return 0x4034f004;}
default:return 0;}}
uint32_t ref_848(Cpu& c){switch(c.pc){
case 0x40350000:{ // INT2FLOAT:10<-4:c:k=8
wr<10>(c,0x400,float_op("INT2FLOAT",0x8ull,4,0x0ull,4,10));
return 0x40350004;}
default:return 0;}}
uint32_t ref_849(Cpu& c){switch(c.pc){
case 0x40351000:{ // INT2FLOAT:10<-4:c:k=31
wr<10>(c,0x400,float_op("INT2FLOAT",0x1full,4,0x0ull,4,10));
return 0x40351004;}
default:return 0;}}
uint32_t ref_850(Cpu& c){switch(c.pc){
case 0x40352000:{ // INT2FLOAT:10<-4:c:k=32
wr<10>(c,0x400,float_op("INT2FLOAT",0x20ull,4,0x0ull,4,10));
return 0x40352004;}
default:return 0;}}
uint32_t ref_851(Cpu& c){switch(c.pc){
case 0x40353000:{ // INT2FLOAT:10<-4:c:k=63
wr<10>(c,0x400,float_op("INT2FLOAT",0x3full,4,0x0ull,4,10));
return 0x40353004;}
default:return 0;}}
uint32_t ref_852(Cpu& c){switch(c.pc){
case 0x40354000:{ // INT2FLOAT:10<-4:c:k=127
wr<10>(c,0x400,float_op("INT2FLOAT",0x7full,4,0x0ull,4,10));
return 0x40354004;}
default:return 0;}}
uint32_t ref_853(Cpu& c){switch(c.pc){
case 0x40355000:{ // INT2FLOAT:10<-4:c:k=128
wr<10>(c,0x400,float_op("INT2FLOAT",0x80ull,4,0x0ull,4,10));
return 0x40355004;}
default:return 0;}}
uint32_t ref_854(Cpu& c){switch(c.pc){
case 0x40356000:{ // INT2FLOAT:10<-4:c:k=255
wr<10>(c,0x400,float_op("INT2FLOAT",0xffull,4,0x0ull,4,10));
return 0x40356004;}
default:return 0;}}
uint32_t ref_855(Cpu& c){switch(c.pc){
case 0x40357000:{ // INT2FLOAT:10<-4:c:k=32767
wr<10>(c,0x400,float_op("INT2FLOAT",0x7fffull,4,0x0ull,4,10));
return 0x40357004;}
default:return 0;}}
uint32_t ref_856(Cpu& c){switch(c.pc){
case 0x40358000:{ // INT2FLOAT:10<-4:c:k=32768
wr<10>(c,0x400,float_op("INT2FLOAT",0x8000ull,4,0x0ull,4,10));
return 0x40358004;}
default:return 0;}}
uint32_t ref_857(Cpu& c){switch(c.pc){
case 0x40359000:{ // INT2FLOAT:10<-4:c:k=65535
wr<10>(c,0x400,float_op("INT2FLOAT",0xffffull,4,0x0ull,4,10));
return 0x40359004;}
default:return 0;}}
uint32_t ref_858(Cpu& c){switch(c.pc){
case 0x4035a000:{ // INT2FLOAT:10<-4:c:k=2147483647
wr<10>(c,0x400,float_op("INT2FLOAT",0x7fffffffull,4,0x0ull,4,10));
return 0x4035a004;}
default:return 0;}}
uint32_t ref_859(Cpu& c){switch(c.pc){
case 0x4035b000:{ // INT2FLOAT:10<-4:c:k=2147483648
wr<10>(c,0x400,float_op("INT2FLOAT",0x80000000ull,4,0x0ull,4,10));
return 0x4035b004;}
default:return 0;}}
uint32_t ref_860(Cpu& c){switch(c.pc){
case 0x4035c000:{ // INT2FLOAT:10<-4:c:k=4294967295
wr<10>(c,0x400,float_op("INT2FLOAT",0xffffffffull,4,0x0ull,4,10));
return 0x4035c004;}
default:return 0;}}
uint32_t ref_861(Cpu& c){switch(c.pc){
case 0x4035d000:{ // INT_XOR:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x4035d004;}
default:return 0;}}
uint32_t ref_862(Cpu& c){switch(c.pc){
case 0x4035e000:{ // INT_XOR:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4035e004;}
default:return 0;}}
uint32_t ref_863(Cpu& c){switch(c.pc){
case 0x4035f000:{ // INT_XOR:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x4035f004;}
default:return 0;}}
uint32_t ref_864(Cpu& c){switch(c.pc){
case 0x40360000:{ // INT_XOR:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40360004;}
default:return 0;}}
uint32_t ref_865(Cpu& c){switch(c.pc){
case 0x40361000:{ // INT_XOR:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40361004;}
default:return 0;}}
uint32_t ref_866(Cpu& c){switch(c.pc){
case 0x40362000:{ // INT_XOR:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40362004;}
default:return 0;}}
uint32_t ref_867(Cpu& c){switch(c.pc){
case 0x40363000:{ // INT_XOR:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x40363004;}
default:return 0;}}
uint32_t ref_868(Cpu& c){switch(c.pc){
case 0x40364000:{ // INT_XOR:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40364004;}
default:return 0;}}
uint32_t ref_869(Cpu& c){switch(c.pc){
case 0x40365000:{ // INT_XOR:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40365004;}
default:return 0;}}
uint32_t ref_870(Cpu& c){switch(c.pc){
case 0x40366000:{ // INT_XOR:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40366004;}
default:return 0;}}
uint32_t ref_871(Cpu& c){switch(c.pc){
case 0x40367000:{ // INT_XOR:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40367004;}
default:return 0;}}
uint32_t ref_872(Cpu& c){switch(c.pc){
case 0x40368000:{ // INT_XOR:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40368004;}
default:return 0;}}
uint32_t ref_873(Cpu& c){switch(c.pc){
case 0x40369000:{ // INT_XOR:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40369004;}
default:return 0;}}
uint32_t ref_874(Cpu& c){switch(c.pc){
case 0x4036a000:{ // INT_XOR:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4036a004;}
default:return 0;}}
uint32_t ref_875(Cpu& c){switch(c.pc){
case 0x4036b000:{ // INT_XOR:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4036b004;}
default:return 0;}}
uint32_t ref_876(Cpu& c){switch(c.pc){
case 0x4036c000:{ // INT_XOR:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4036c004;}
default:return 0;}}
uint32_t ref_877(Cpu& c){switch(c.pc){
case 0x4036d000:{ // INT_XOR:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4036d004;}
default:return 0;}}
uint32_t ref_878(Cpu& c){switch(c.pc){
case 0x4036e000:{ // INT_XOR:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4036e004;}
default:return 0;}}
uint32_t ref_879(Cpu& c){switch(c.pc){
case 0x4036f000:{ // INT_XOR:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4036f004;}
default:return 0;}}
uint32_t ref_880(Cpu& c){switch(c.pc){
case 0x40370000:{ // INT_SEXT:4<-2:r
wr<4>(c,0x400,eval<Op::INT_SEXT,4,2>(r<2>(c,0x500)));
return 0x40370004;}
default:return 0;}}
uint32_t ref_881(Cpu& c){switch(c.pc){
case 0x40371000:{ // INT_LEFT:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x40371004;}
default:return 0;}}
uint32_t ref_882(Cpu& c){switch(c.pc){
case 0x40372000:{ // INT_LEFT:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x40372004;}
default:return 0;}}
uint32_t ref_883(Cpu& c){switch(c.pc){
case 0x40373000:{ // INT_LEFT:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x40373004;}
default:return 0;}}
uint32_t ref_884(Cpu& c){switch(c.pc){
case 0x40374000:{ // INT_LEFT:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40374004;}
default:return 0;}}
uint32_t ref_885(Cpu& c){switch(c.pc){
case 0x40375000:{ // INT_LEFT:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40375004;}
default:return 0;}}
uint32_t ref_886(Cpu& c){switch(c.pc){
case 0x40376000:{ // INT_LEFT:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40376004;}
default:return 0;}}
uint32_t ref_887(Cpu& c){switch(c.pc){
case 0x40377000:{ // INT_LEFT:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x40377004;}
default:return 0;}}
uint32_t ref_888(Cpu& c){switch(c.pc){
case 0x40378000:{ // INT_LEFT:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x1full));
return 0x40378004;}
default:return 0;}}
uint32_t ref_889(Cpu& c){switch(c.pc){
case 0x40379000:{ // INT_LEFT:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x40379004;}
default:return 0;}}
uint32_t ref_890(Cpu& c){switch(c.pc){
case 0x4037a000:{ // INT_LEFT:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x3full));
return 0x4037a004;}
default:return 0;}}
uint32_t ref_891(Cpu& c){switch(c.pc){
case 0x4037b000:{ // INT_LEFT:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x7full));
return 0x4037b004;}
default:return 0;}}
uint32_t ref_892(Cpu& c){switch(c.pc){
case 0x4037c000:{ // INT_LEFT:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x4037c004;}
default:return 0;}}
uint32_t ref_893(Cpu& c){switch(c.pc){
case 0x4037d000:{ // INT_LEFT:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0xffull));
return 0x4037d004;}
default:return 0;}}
uint32_t ref_894(Cpu& c){switch(c.pc){
case 0x4037e000:{ // INT_LEFT:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x4037e004;}
default:return 0;}}
uint32_t ref_895(Cpu& c){switch(c.pc){
case 0x4037f000:{ // INT_LEFT:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x4037f004;}
default:return 0;}}
uint32_t ref_896(Cpu& c){switch(c.pc){
case 0x40380000:{ // INT_LEFT:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x40380004;}
default:return 0;}}
uint32_t ref_897(Cpu& c){switch(c.pc){
case 0x40381000:{ // INT_LEFT:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x40381004;}
default:return 0;}}
uint32_t ref_898(Cpu& c){switch(c.pc){
case 0x40382000:{ // INT_LEFT:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x40382004;}
default:return 0;}}
uint32_t ref_899(Cpu& c){switch(c.pc){
case 0x40383000:{ // INT_LEFT:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x40383004;}
default:return 0;}}
uint32_t ref_900(Cpu& c){switch(c.pc){
case 0x40384000:{ // INT_ZEXT:4<-2:r
wr<4>(c,0x400,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x500)));
return 0x40384004;}
default:return 0;}}
uint32_t ref_901(Cpu& c){switch(c.pc){
case 0x40385000:{ // FLOAT_NEG:10<-10:r
wr<10>(c,0x400,float_op("FLOAT_NEG",r<10>(c,0x500),10,0x0ull,4,10));
return 0x40385004;}
default:return 0;}}
uint32_t ref_902(Cpu& c){switch(c.pc){
case 0x40386000:{ // INT_SEXT:4<-1:r
wr<4>(c,0x400,eval<Op::INT_SEXT,4,1>(r<1>(c,0x500)));
return 0x40386004;}
default:return 0;}}
uint32_t ref_903(Cpu& c){switch(c.pc){
case 0x40387000:{ // INT_LESS:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x40387004;}
default:return 0;}}
uint32_t ref_904(Cpu& c){switch(c.pc){
case 0x40388000:{ // INT_LESS:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40388004;}
default:return 0;}}
uint32_t ref_905(Cpu& c){switch(c.pc){
case 0x40389000:{ // INT_LESS:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x40389004;}
default:return 0;}}
uint32_t ref_906(Cpu& c){switch(c.pc){
case 0x4038a000:{ // INT_LESS:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x4038a004;}
default:return 0;}}
uint32_t ref_907(Cpu& c){switch(c.pc){
case 0x4038b000:{ // INT_LESS:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x4038b004;}
default:return 0;}}
uint32_t ref_908(Cpu& c){switch(c.pc){
case 0x4038c000:{ // INT_LESS:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x4038c004;}
default:return 0;}}
uint32_t ref_909(Cpu& c){switch(c.pc){
case 0x4038d000:{ // INT_LESS:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x4038d004;}
default:return 0;}}
uint32_t ref_910(Cpu& c){switch(c.pc){
case 0x4038e000:{ // INT_LESS:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x1full));
return 0x4038e004;}
default:return 0;}}
uint32_t ref_911(Cpu& c){switch(c.pc){
case 0x4038f000:{ // INT_LESS:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x4038f004;}
default:return 0;}}
uint32_t ref_912(Cpu& c){switch(c.pc){
case 0x40390000:{ // INT_LESS:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x3full));
return 0x40390004;}
default:return 0;}}
uint32_t ref_913(Cpu& c){switch(c.pc){
case 0x40391000:{ // INT_LESS:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x7full));
return 0x40391004;}
default:return 0;}}
uint32_t ref_914(Cpu& c){switch(c.pc){
case 0x40392000:{ // INT_LESS:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x40392004;}
default:return 0;}}
uint32_t ref_915(Cpu& c){switch(c.pc){
case 0x40393000:{ // INT_LESS:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0xffull));
return 0x40393004;}
default:return 0;}}
uint32_t ref_916(Cpu& c){switch(c.pc){
case 0x40394000:{ // INT_LESS:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40394004;}
default:return 0;}}
uint32_t ref_917(Cpu& c){switch(c.pc){
case 0x40395000:{ // INT_LESS:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40395004;}
default:return 0;}}
uint32_t ref_918(Cpu& c){switch(c.pc){
case 0x40396000:{ // INT_LESS:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40396004;}
default:return 0;}}
uint32_t ref_919(Cpu& c){switch(c.pc){
case 0x40397000:{ // INT_LESS:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40397004;}
default:return 0;}}
uint32_t ref_920(Cpu& c){switch(c.pc){
case 0x40398000:{ // INT_LESS:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40398004;}
default:return 0;}}
uint32_t ref_921(Cpu& c){switch(c.pc){
case 0x40399000:{ // INT_LESS:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40399004;}
default:return 0;}}
uint32_t ref_922(Cpu& c){switch(c.pc){
case 0x4039a000:{ // INT_SBORROW:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x4039a004;}
default:return 0;}}
uint32_t ref_923(Cpu& c){switch(c.pc){
case 0x4039b000:{ // INT_SBORROW:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x4039b004;}
default:return 0;}}
uint32_t ref_924(Cpu& c){switch(c.pc){
case 0x4039c000:{ // INT_SBORROW:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x4039c004;}
default:return 0;}}
uint32_t ref_925(Cpu& c){switch(c.pc){
case 0x4039d000:{ // INT_SBORROW:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x4039d004;}
default:return 0;}}
uint32_t ref_926(Cpu& c){switch(c.pc){
case 0x4039e000:{ // INT_SBORROW:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x4039e004;}
default:return 0;}}
uint32_t ref_927(Cpu& c){switch(c.pc){
case 0x4039f000:{ // INT_SBORROW:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x4039f004;}
default:return 0;}}
uint32_t ref_928(Cpu& c){switch(c.pc){
case 0x403a0000:{ // INT_SBORROW:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x403a0004;}
default:return 0;}}
uint32_t ref_929(Cpu& c){switch(c.pc){
case 0x403a1000:{ // INT_SBORROW:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x1full));
return 0x403a1004;}
default:return 0;}}
uint32_t ref_930(Cpu& c){switch(c.pc){
case 0x403a2000:{ // INT_SBORROW:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x403a2004;}
default:return 0;}}
uint32_t ref_931(Cpu& c){switch(c.pc){
case 0x403a3000:{ // INT_SBORROW:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x3full));
return 0x403a3004;}
default:return 0;}}
uint32_t ref_932(Cpu& c){switch(c.pc){
case 0x403a4000:{ // INT_SBORROW:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x7full));
return 0x403a4004;}
default:return 0;}}
uint32_t ref_933(Cpu& c){switch(c.pc){
case 0x403a5000:{ // INT_SBORROW:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x403a5004;}
default:return 0;}}
uint32_t ref_934(Cpu& c){switch(c.pc){
case 0x403a6000:{ // INT_SBORROW:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0xffull));
return 0x403a6004;}
default:return 0;}}
uint32_t ref_935(Cpu& c){switch(c.pc){
case 0x403a7000:{ // INT_SBORROW:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x403a7004;}
default:return 0;}}
uint32_t ref_936(Cpu& c){switch(c.pc){
case 0x403a8000:{ // INT_SBORROW:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x403a8004;}
default:return 0;}}
uint32_t ref_937(Cpu& c){switch(c.pc){
case 0x403a9000:{ // INT_SBORROW:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x403a9004;}
default:return 0;}}
uint32_t ref_938(Cpu& c){switch(c.pc){
case 0x403aa000:{ // INT_SBORROW:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x403aa004;}
default:return 0;}}
uint32_t ref_939(Cpu& c){switch(c.pc){
case 0x403ab000:{ // INT_SBORROW:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x403ab004;}
default:return 0;}}
uint32_t ref_940(Cpu& c){switch(c.pc){
case 0x403ac000:{ // INT_SBORROW:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x403ac004;}
default:return 0;}}
uint32_t ref_941(Cpu& c){switch(c.pc){
case 0x403ad000:{ // INT_SBORROW:1<-2,2:cr:k=0
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x0ull,r<2>(c,0x600)));
return 0x403ad004;}
default:return 0;}}
uint32_t ref_942(Cpu& c){switch(c.pc){
case 0x403ae000:{ // INT_SBORROW:1<-2,2:cr:k=1
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x1ull,r<2>(c,0x600)));
return 0x403ae004;}
default:return 0;}}
uint32_t ref_943(Cpu& c){switch(c.pc){
case 0x403af000:{ // INT_SBORROW:1<-2,2:cr:k=2
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x2ull,r<2>(c,0x600)));
return 0x403af004;}
default:return 0;}}
uint32_t ref_944(Cpu& c){switch(c.pc){
case 0x403b0000:{ // INT_SBORROW:1<-2,2:cr:k=3
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x3ull,r<2>(c,0x600)));
return 0x403b0004;}
default:return 0;}}
uint32_t ref_945(Cpu& c){switch(c.pc){
case 0x403b1000:{ // INT_SBORROW:1<-2,2:cr:k=7
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x7ull,r<2>(c,0x600)));
return 0x403b1004;}
default:return 0;}}
uint32_t ref_946(Cpu& c){switch(c.pc){
case 0x403b2000:{ // INT_SBORROW:1<-2,2:cr:k=8
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x8ull,r<2>(c,0x600)));
return 0x403b2004;}
default:return 0;}}
uint32_t ref_947(Cpu& c){switch(c.pc){
case 0x403b3000:{ // INT_SBORROW:1<-2,2:cr:k=31
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x1full,r<2>(c,0x600)));
return 0x403b3004;}
default:return 0;}}
uint32_t ref_948(Cpu& c){switch(c.pc){
case 0x403b4000:{ // INT_SBORROW:1<-2,2:cr:k=32
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x20ull,r<2>(c,0x600)));
return 0x403b4004;}
default:return 0;}}
uint32_t ref_949(Cpu& c){switch(c.pc){
case 0x403b5000:{ // INT_SBORROW:1<-2,2:cr:k=63
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x3full,r<2>(c,0x600)));
return 0x403b5004;}
default:return 0;}}
uint32_t ref_950(Cpu& c){switch(c.pc){
case 0x403b6000:{ // INT_SBORROW:1<-2,2:cr:k=127
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x7full,r<2>(c,0x600)));
return 0x403b6004;}
default:return 0;}}
uint32_t ref_951(Cpu& c){switch(c.pc){
case 0x403b7000:{ // INT_SBORROW:1<-2,2:cr:k=128
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x80ull,r<2>(c,0x600)));
return 0x403b7004;}
default:return 0;}}
uint32_t ref_952(Cpu& c){switch(c.pc){
case 0x403b8000:{ // INT_SBORROW:1<-2,2:cr:k=255
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0xffull,r<2>(c,0x600)));
return 0x403b8004;}
default:return 0;}}
uint32_t ref_953(Cpu& c){switch(c.pc){
case 0x403b9000:{ // INT_SBORROW:1<-2,2:cr:k=32767
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x7fffull,r<2>(c,0x600)));
return 0x403b9004;}
default:return 0;}}
uint32_t ref_954(Cpu& c){switch(c.pc){
case 0x403ba000:{ // INT_SBORROW:1<-2,2:cr:k=32768
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x8000ull,r<2>(c,0x600)));
return 0x403ba004;}
default:return 0;}}
uint32_t ref_955(Cpu& c){switch(c.pc){
case 0x403bb000:{ // INT_SBORROW:1<-2,2:cr:k=65535
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0xffffull,r<2>(c,0x600)));
return 0x403bb004;}
default:return 0;}}
uint32_t ref_956(Cpu& c){switch(c.pc){
case 0x403bc000:{ // INT_SBORROW:1<-2,2:cr:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0xffffull,r<2>(c,0x600)));
return 0x403bc004;}
default:return 0;}}
uint32_t ref_957(Cpu& c){switch(c.pc){
case 0x403bd000:{ // INT_SBORROW:1<-2,2:cr:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0x0ull,r<2>(c,0x600)));
return 0x403bd004;}
default:return 0;}}
uint32_t ref_958(Cpu& c){switch(c.pc){
case 0x403be000:{ // INT_SBORROW:1<-2,2:cr:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,2,2>(0xffffull,r<2>(c,0x600)));
return 0x403be004;}
default:return 0;}}
uint32_t ref_959(Cpu& c){switch(c.pc){
case 0x403bf000:{ // INT_SUB:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x403bf004;}
default:return 0;}}
uint32_t ref_960(Cpu& c){switch(c.pc){
case 0x403c0000:{ // INT_SUB:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x403c0004;}
default:return 0;}}
uint32_t ref_961(Cpu& c){switch(c.pc){
case 0x403c1000:{ // INT_SUB:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x403c1004;}
default:return 0;}}
uint32_t ref_962(Cpu& c){switch(c.pc){
case 0x403c2000:{ // INT_SUB:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x403c2004;}
default:return 0;}}
uint32_t ref_963(Cpu& c){switch(c.pc){
case 0x403c3000:{ // INT_SUB:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x403c3004;}
default:return 0;}}
uint32_t ref_964(Cpu& c){switch(c.pc){
case 0x403c4000:{ // INT_SUB:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x403c4004;}
default:return 0;}}
uint32_t ref_965(Cpu& c){switch(c.pc){
case 0x403c5000:{ // INT_SUB:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x403c5004;}
default:return 0;}}
uint32_t ref_966(Cpu& c){switch(c.pc){
case 0x403c6000:{ // INT_SUB:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x1full));
return 0x403c6004;}
default:return 0;}}
uint32_t ref_967(Cpu& c){switch(c.pc){
case 0x403c7000:{ // INT_SUB:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x403c7004;}
default:return 0;}}
uint32_t ref_968(Cpu& c){switch(c.pc){
case 0x403c8000:{ // INT_SUB:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x3full));
return 0x403c8004;}
default:return 0;}}
uint32_t ref_969(Cpu& c){switch(c.pc){
case 0x403c9000:{ // INT_SUB:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x7full));
return 0x403c9004;}
default:return 0;}}
uint32_t ref_970(Cpu& c){switch(c.pc){
case 0x403ca000:{ // INT_SUB:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x403ca004;}
default:return 0;}}
uint32_t ref_971(Cpu& c){switch(c.pc){
case 0x403cb000:{ // INT_SUB:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0xffull));
return 0x403cb004;}
default:return 0;}}
uint32_t ref_972(Cpu& c){switch(c.pc){
case 0x403cc000:{ // INT_SUB:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x403cc004;}
default:return 0;}}
uint32_t ref_973(Cpu& c){switch(c.pc){
case 0x403cd000:{ // INT_SUB:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x403cd004;}
default:return 0;}}
uint32_t ref_974(Cpu& c){switch(c.pc){
case 0x403ce000:{ // INT_SUB:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x403ce004;}
default:return 0;}}
uint32_t ref_975(Cpu& c){switch(c.pc){
case 0x403cf000:{ // INT_SUB:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x403cf004;}
default:return 0;}}
uint32_t ref_976(Cpu& c){switch(c.pc){
case 0x403d0000:{ // INT_SUB:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x403d0004;}
default:return 0;}}
uint32_t ref_977(Cpu& c){switch(c.pc){
case 0x403d1000:{ // INT_SUB:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x403d1004;}
default:return 0;}}
uint32_t ref_978(Cpu& c){switch(c.pc){
case 0x403d2000:{ // INT_SLESS:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x403d2004;}
default:return 0;}}
uint32_t ref_979(Cpu& c){switch(c.pc){
case 0x403d3000:{ // INT_SLESS:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x403d3004;}
default:return 0;}}
uint32_t ref_980(Cpu& c){switch(c.pc){
case 0x403d4000:{ // INT_SLESS:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x403d4004;}
default:return 0;}}
uint32_t ref_981(Cpu& c){switch(c.pc){
case 0x403d5000:{ // INT_SLESS:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x403d5004;}
default:return 0;}}
uint32_t ref_982(Cpu& c){switch(c.pc){
case 0x403d6000:{ // INT_SLESS:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x403d6004;}
default:return 0;}}
uint32_t ref_983(Cpu& c){switch(c.pc){
case 0x403d7000:{ // INT_SLESS:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x403d7004;}
default:return 0;}}
uint32_t ref_984(Cpu& c){switch(c.pc){
case 0x403d8000:{ // INT_SLESS:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x403d8004;}
default:return 0;}}
uint32_t ref_985(Cpu& c){switch(c.pc){
case 0x403d9000:{ // INT_SLESS:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x1full));
return 0x403d9004;}
default:return 0;}}
uint32_t ref_986(Cpu& c){switch(c.pc){
case 0x403da000:{ // INT_SLESS:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x403da004;}
default:return 0;}}
uint32_t ref_987(Cpu& c){switch(c.pc){
case 0x403db000:{ // INT_SLESS:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x3full));
return 0x403db004;}
default:return 0;}}
uint32_t ref_988(Cpu& c){switch(c.pc){
case 0x403dc000:{ // INT_SLESS:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x7full));
return 0x403dc004;}
default:return 0;}}
uint32_t ref_989(Cpu& c){switch(c.pc){
case 0x403dd000:{ // INT_SLESS:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x403dd004;}
default:return 0;}}
uint32_t ref_990(Cpu& c){switch(c.pc){
case 0x403de000:{ // INT_SLESS:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0xffull));
return 0x403de004;}
default:return 0;}}
uint32_t ref_991(Cpu& c){switch(c.pc){
case 0x403df000:{ // INT_SLESS:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x403df004;}
default:return 0;}}
uint32_t ref_992(Cpu& c){switch(c.pc){
case 0x403e0000:{ // INT_SLESS:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x403e0004;}
default:return 0;}}
uint32_t ref_993(Cpu& c){switch(c.pc){
case 0x403e1000:{ // INT_SLESS:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x403e1004;}
default:return 0;}}
uint32_t ref_994(Cpu& c){switch(c.pc){
case 0x403e2000:{ // INT_SLESS:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x403e2004;}
default:return 0;}}
uint32_t ref_995(Cpu& c){switch(c.pc){
case 0x403e3000:{ // INT_SLESS:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x403e3004;}
default:return 0;}}
uint32_t ref_996(Cpu& c){switch(c.pc){
case 0x403e4000:{ // INT_SLESS:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x403e4004;}
default:return 0;}}
uint32_t ref_997(Cpu& c){switch(c.pc){
case 0x403e5000:{ // INT_SLESS:1<-2,2:cr:k=0
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x0ull,r<2>(c,0x600)));
return 0x403e5004;}
default:return 0;}}
uint32_t ref_998(Cpu& c){switch(c.pc){
case 0x403e6000:{ // INT_SLESS:1<-2,2:cr:k=1
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x1ull,r<2>(c,0x600)));
return 0x403e6004;}
default:return 0;}}
uint32_t ref_999(Cpu& c){switch(c.pc){
case 0x403e7000:{ // INT_SLESS:1<-2,2:cr:k=2
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x2ull,r<2>(c,0x600)));
return 0x403e7004;}
default:return 0;}}
uint32_t ref_1000(Cpu& c){switch(c.pc){
case 0x403e8000:{ // INT_SLESS:1<-2,2:cr:k=3
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x3ull,r<2>(c,0x600)));
return 0x403e8004;}
default:return 0;}}
uint32_t ref_1001(Cpu& c){switch(c.pc){
case 0x403e9000:{ // INT_SLESS:1<-2,2:cr:k=7
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x7ull,r<2>(c,0x600)));
return 0x403e9004;}
default:return 0;}}
uint32_t ref_1002(Cpu& c){switch(c.pc){
case 0x403ea000:{ // INT_SLESS:1<-2,2:cr:k=8
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x8ull,r<2>(c,0x600)));
return 0x403ea004;}
default:return 0;}}
uint32_t ref_1003(Cpu& c){switch(c.pc){
case 0x403eb000:{ // INT_SLESS:1<-2,2:cr:k=31
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x1full,r<2>(c,0x600)));
return 0x403eb004;}
default:return 0;}}
uint32_t ref_1004(Cpu& c){switch(c.pc){
case 0x403ec000:{ // INT_SLESS:1<-2,2:cr:k=32
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x20ull,r<2>(c,0x600)));
return 0x403ec004;}
default:return 0;}}
uint32_t ref_1005(Cpu& c){switch(c.pc){
case 0x403ed000:{ // INT_SLESS:1<-2,2:cr:k=63
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x3full,r<2>(c,0x600)));
return 0x403ed004;}
default:return 0;}}
uint32_t ref_1006(Cpu& c){switch(c.pc){
case 0x403ee000:{ // INT_SLESS:1<-2,2:cr:k=127
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x7full,r<2>(c,0x600)));
return 0x403ee004;}
default:return 0;}}
uint32_t ref_1007(Cpu& c){switch(c.pc){
case 0x403ef000:{ // INT_SLESS:1<-2,2:cr:k=128
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x80ull,r<2>(c,0x600)));
return 0x403ef004;}
default:return 0;}}
uint32_t ref_1008(Cpu& c){switch(c.pc){
case 0x403f0000:{ // INT_SLESS:1<-2,2:cr:k=255
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0xffull,r<2>(c,0x600)));
return 0x403f0004;}
default:return 0;}}
uint32_t ref_1009(Cpu& c){switch(c.pc){
case 0x403f1000:{ // INT_SLESS:1<-2,2:cr:k=32767
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x7fffull,r<2>(c,0x600)));
return 0x403f1004;}
default:return 0;}}
uint32_t ref_1010(Cpu& c){switch(c.pc){
case 0x403f2000:{ // INT_SLESS:1<-2,2:cr:k=32768
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x8000ull,r<2>(c,0x600)));
return 0x403f2004;}
default:return 0;}}
uint32_t ref_1011(Cpu& c){switch(c.pc){
case 0x403f3000:{ // INT_SLESS:1<-2,2:cr:k=65535
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0xffffull,r<2>(c,0x600)));
return 0x403f3004;}
default:return 0;}}
uint32_t ref_1012(Cpu& c){switch(c.pc){
case 0x403f4000:{ // INT_SLESS:1<-2,2:cr:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0xffffull,r<2>(c,0x600)));
return 0x403f4004;}
default:return 0;}}
uint32_t ref_1013(Cpu& c){switch(c.pc){
case 0x403f5000:{ // INT_SLESS:1<-2,2:cr:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0x0ull,r<2>(c,0x600)));
return 0x403f5004;}
default:return 0;}}
uint32_t ref_1014(Cpu& c){switch(c.pc){
case 0x403f6000:{ // INT_SLESS:1<-2,2:cr:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SLESS,1,2,2>(0xffffull,r<2>(c,0x600)));
return 0x403f6004;}
default:return 0;}}
uint32_t ref_1015(Cpu& c){switch(c.pc){
case 0x403f7000:{ // INT_EQUAL:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x403f7004;}
default:return 0;}}
uint32_t ref_1016(Cpu& c){switch(c.pc){
case 0x403f8000:{ // INT_EQUAL:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x403f8004;}
default:return 0;}}
uint32_t ref_1017(Cpu& c){switch(c.pc){
case 0x403f9000:{ // INT_EQUAL:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x403f9004;}
default:return 0;}}
uint32_t ref_1018(Cpu& c){switch(c.pc){
case 0x403fa000:{ // INT_EQUAL:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x403fa004;}
default:return 0;}}
uint32_t ref_1019(Cpu& c){switch(c.pc){
case 0x403fb000:{ // INT_EQUAL:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x403fb004;}
default:return 0;}}
uint32_t ref_1020(Cpu& c){switch(c.pc){
case 0x403fc000:{ // INT_EQUAL:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x403fc004;}
default:return 0;}}
uint32_t ref_1021(Cpu& c){switch(c.pc){
case 0x403fd000:{ // INT_EQUAL:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x403fd004;}
default:return 0;}}
uint32_t ref_1022(Cpu& c){switch(c.pc){
case 0x403fe000:{ // INT_EQUAL:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x1full));
return 0x403fe004;}
default:return 0;}}
uint32_t ref_1023(Cpu& c){switch(c.pc){
case 0x403ff000:{ // INT_EQUAL:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x403ff004;}
default:return 0;}}
uint32_t ref_1024(Cpu& c){switch(c.pc){
case 0x40400000:{ // INT_EQUAL:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x3full));
return 0x40400004;}
default:return 0;}}
uint32_t ref_1025(Cpu& c){switch(c.pc){
case 0x40401000:{ // INT_EQUAL:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x7full));
return 0x40401004;}
default:return 0;}}
uint32_t ref_1026(Cpu& c){switch(c.pc){
case 0x40402000:{ // INT_EQUAL:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x40402004;}
default:return 0;}}
uint32_t ref_1027(Cpu& c){switch(c.pc){
case 0x40403000:{ // INT_EQUAL:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0xffull));
return 0x40403004;}
default:return 0;}}
uint32_t ref_1028(Cpu& c){switch(c.pc){
case 0x40404000:{ // INT_EQUAL:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40404004;}
default:return 0;}}
uint32_t ref_1029(Cpu& c){switch(c.pc){
case 0x40405000:{ // INT_EQUAL:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40405004;}
default:return 0;}}
uint32_t ref_1030(Cpu& c){switch(c.pc){
case 0x40406000:{ // INT_EQUAL:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40406004;}
default:return 0;}}
uint32_t ref_1031(Cpu& c){switch(c.pc){
case 0x40407000:{ // INT_EQUAL:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40407004;}
default:return 0;}}
uint32_t ref_1032(Cpu& c){switch(c.pc){
case 0x40408000:{ // INT_EQUAL:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40408004;}
default:return 0;}}
uint32_t ref_1033(Cpu& c){switch(c.pc){
case 0x40409000:{ // INT_EQUAL:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40409004;}
default:return 0;}}
uint32_t ref_1034(Cpu& c){switch(c.pc){
case 0x4040a000:{ // INT_AND:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x4040a004;}
default:return 0;}}
uint32_t ref_1035(Cpu& c){switch(c.pc){
case 0x4040b000:{ // INT_AND:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x4040b004;}
default:return 0;}}
uint32_t ref_1036(Cpu& c){switch(c.pc){
case 0x4040c000:{ // INT_AND:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x4040c004;}
default:return 0;}}
uint32_t ref_1037(Cpu& c){switch(c.pc){
case 0x4040d000:{ // INT_AND:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x4040d004;}
default:return 0;}}
uint32_t ref_1038(Cpu& c){switch(c.pc){
case 0x4040e000:{ // INT_AND:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x4040e004;}
default:return 0;}}
uint32_t ref_1039(Cpu& c){switch(c.pc){
case 0x4040f000:{ // INT_AND:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x4040f004;}
default:return 0;}}
uint32_t ref_1040(Cpu& c){switch(c.pc){
case 0x40410000:{ // INT_AND:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x40410004;}
default:return 0;}}
uint32_t ref_1041(Cpu& c){switch(c.pc){
case 0x40411000:{ // INT_AND:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x1full));
return 0x40411004;}
default:return 0;}}
uint32_t ref_1042(Cpu& c){switch(c.pc){
case 0x40412000:{ // INT_AND:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x40412004;}
default:return 0;}}
uint32_t ref_1043(Cpu& c){switch(c.pc){
case 0x40413000:{ // INT_AND:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x3full));
return 0x40413004;}
default:return 0;}}
uint32_t ref_1044(Cpu& c){switch(c.pc){
case 0x40414000:{ // INT_AND:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x7full));
return 0x40414004;}
default:return 0;}}
uint32_t ref_1045(Cpu& c){switch(c.pc){
case 0x40415000:{ // INT_AND:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x40415004;}
default:return 0;}}
uint32_t ref_1046(Cpu& c){switch(c.pc){
case 0x40416000:{ // INT_AND:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0xffull));
return 0x40416004;}
default:return 0;}}
uint32_t ref_1047(Cpu& c){switch(c.pc){
case 0x40417000:{ // INT_AND:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40417004;}
default:return 0;}}
uint32_t ref_1048(Cpu& c){switch(c.pc){
case 0x40418000:{ // INT_AND:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40418004;}
default:return 0;}}
uint32_t ref_1049(Cpu& c){switch(c.pc){
case 0x40419000:{ // INT_AND:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x40419004;}
default:return 0;}}
uint32_t ref_1050(Cpu& c){switch(c.pc){
case 0x4041a000:{ // INT_AND:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x4041a004;}
default:return 0;}}
uint32_t ref_1051(Cpu& c){switch(c.pc){
case 0x4041b000:{ // INT_AND:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x4041b004;}
default:return 0;}}
uint32_t ref_1052(Cpu& c){switch(c.pc){
case 0x4041c000:{ // INT_AND:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x4041c004;}
default:return 0;}}
uint32_t ref_1053(Cpu& c){switch(c.pc){
case 0x4041d000:{ // POPCOUNT:1<-2:r
wr<1>(c,0x400,eval<Op::POPCOUNT,1,2>(r<2>(c,0x500)));
return 0x4041d004;}
default:return 0;}}
uint32_t ref_1054(Cpu& c){switch(c.pc){
case 0x4041e000:{ // BOOL_AND:1<-1,1:rr
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x4041e004;}
default:return 0;}}
uint32_t ref_1055(Cpu& c){switch(c.pc){
case 0x4041f000:{ // BOOL_AND:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4041f004;}
default:return 0;}}
uint32_t ref_1056(Cpu& c){switch(c.pc){
case 0x40420000:{ // BOOL_AND:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40420004;}
default:return 0;}}
uint32_t ref_1057(Cpu& c){switch(c.pc){
case 0x40421000:{ // BOOL_AND:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40421004;}
default:return 0;}}
uint32_t ref_1058(Cpu& c){switch(c.pc){
case 0x40422000:{ // BOOL_AND:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40422004;}
default:return 0;}}
uint32_t ref_1059(Cpu& c){switch(c.pc){
case 0x40423000:{ // BOOL_AND:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40423004;}
default:return 0;}}
uint32_t ref_1060(Cpu& c){switch(c.pc){
case 0x40424000:{ // BOOL_AND:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x40424004;}
default:return 0;}}
uint32_t ref_1061(Cpu& c){switch(c.pc){
case 0x40425000:{ // BOOL_AND:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40425004;}
default:return 0;}}
uint32_t ref_1062(Cpu& c){switch(c.pc){
case 0x40426000:{ // BOOL_AND:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40426004;}
default:return 0;}}
uint32_t ref_1063(Cpu& c){switch(c.pc){
case 0x40427000:{ // BOOL_AND:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40427004;}
default:return 0;}}
uint32_t ref_1064(Cpu& c){switch(c.pc){
case 0x40428000:{ // BOOL_AND:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40428004;}
default:return 0;}}
uint32_t ref_1065(Cpu& c){switch(c.pc){
case 0x40429000:{ // BOOL_AND:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40429004;}
default:return 0;}}
uint32_t ref_1066(Cpu& c){switch(c.pc){
case 0x4042a000:{ // BOOL_AND:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4042a004;}
default:return 0;}}
uint32_t ref_1067(Cpu& c){switch(c.pc){
case 0x4042b000:{ // BOOL_AND:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4042b004;}
default:return 0;}}
uint32_t ref_1068(Cpu& c){switch(c.pc){
case 0x4042c000:{ // BOOL_AND:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4042c004;}
default:return 0;}}
uint32_t ref_1069(Cpu& c){switch(c.pc){
case 0x4042d000:{ // BOOL_AND:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4042d004;}
default:return 0;}}
uint32_t ref_1070(Cpu& c){switch(c.pc){
case 0x4042e000:{ // BOOL_AND:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4042e004;}
default:return 0;}}
uint32_t ref_1071(Cpu& c){switch(c.pc){
case 0x4042f000:{ // BOOL_AND:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4042f004;}
default:return 0;}}
uint32_t ref_1072(Cpu& c){switch(c.pc){
case 0x40430000:{ // BOOL_AND:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::BOOL_AND,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40430004;}
default:return 0;}}
uint32_t ref_1073(Cpu& c){switch(c.pc){
case 0x40431000:{ // INT_LESS:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40431004;}
default:return 0;}}
uint32_t ref_1074(Cpu& c){switch(c.pc){
case 0x40432000:{ // INT_LESS:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40432004;}
default:return 0;}}
uint32_t ref_1075(Cpu& c){switch(c.pc){
case 0x40433000:{ // INT_LESS:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40433004;}
default:return 0;}}
uint32_t ref_1076(Cpu& c){switch(c.pc){
case 0x40434000:{ // INT_LESS:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40434004;}
default:return 0;}}
uint32_t ref_1077(Cpu& c){switch(c.pc){
case 0x40435000:{ // INT_LESS:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40435004;}
default:return 0;}}
uint32_t ref_1078(Cpu& c){switch(c.pc){
case 0x40436000:{ // INT_LESS:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40436004;}
default:return 0;}}
uint32_t ref_1079(Cpu& c){switch(c.pc){
case 0x40437000:{ // INT_LESS:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x40437004;}
default:return 0;}}
uint32_t ref_1080(Cpu& c){switch(c.pc){
case 0x40438000:{ // INT_LESS:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40438004;}
default:return 0;}}
uint32_t ref_1081(Cpu& c){switch(c.pc){
case 0x40439000:{ // INT_LESS:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40439004;}
default:return 0;}}
uint32_t ref_1082(Cpu& c){switch(c.pc){
case 0x4043a000:{ // INT_LESS:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x3full));
return 0x4043a004;}
default:return 0;}}
uint32_t ref_1083(Cpu& c){switch(c.pc){
case 0x4043b000:{ // INT_LESS:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x7full));
return 0x4043b004;}
default:return 0;}}
uint32_t ref_1084(Cpu& c){switch(c.pc){
case 0x4043c000:{ // INT_LESS:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x4043c004;}
default:return 0;}}
uint32_t ref_1085(Cpu& c){switch(c.pc){
case 0x4043d000:{ // INT_LESS:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4043d004;}
default:return 0;}}
uint32_t ref_1086(Cpu& c){switch(c.pc){
case 0x4043e000:{ // INT_LESS:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4043e004;}
default:return 0;}}
uint32_t ref_1087(Cpu& c){switch(c.pc){
case 0x4043f000:{ // INT_LESS:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4043f004;}
default:return 0;}}
uint32_t ref_1088(Cpu& c){switch(c.pc){
case 0x40440000:{ // INT_LESS:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40440004;}
default:return 0;}}
uint32_t ref_1089(Cpu& c){switch(c.pc){
case 0x40441000:{ // INT_LESS:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40441004;}
default:return 0;}}
uint32_t ref_1090(Cpu& c){switch(c.pc){
case 0x40442000:{ // INT_LESS:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40442004;}
default:return 0;}}
uint32_t ref_1091(Cpu& c){switch(c.pc){
case 0x40443000:{ // INT_LESS:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40443004;}
default:return 0;}}
uint32_t ref_1092(Cpu& c){switch(c.pc){
case 0x40444000:{ // INT_SBORROW:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40444004;}
default:return 0;}}
uint32_t ref_1093(Cpu& c){switch(c.pc){
case 0x40445000:{ // INT_SBORROW:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40445004;}
default:return 0;}}
uint32_t ref_1094(Cpu& c){switch(c.pc){
case 0x40446000:{ // INT_SBORROW:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40446004;}
default:return 0;}}
uint32_t ref_1095(Cpu& c){switch(c.pc){
case 0x40447000:{ // INT_SBORROW:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40447004;}
default:return 0;}}
uint32_t ref_1096(Cpu& c){switch(c.pc){
case 0x40448000:{ // INT_SBORROW:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40448004;}
default:return 0;}}
uint32_t ref_1097(Cpu& c){switch(c.pc){
case 0x40449000:{ // INT_SBORROW:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40449004;}
default:return 0;}}
uint32_t ref_1098(Cpu& c){switch(c.pc){
case 0x4044a000:{ // INT_SBORROW:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x4044a004;}
default:return 0;}}
uint32_t ref_1099(Cpu& c){switch(c.pc){
case 0x4044b000:{ // INT_SBORROW:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x1full));
return 0x4044b004;}
default:return 0;}}
uint32_t ref_1100(Cpu& c){switch(c.pc){
case 0x4044c000:{ // INT_SBORROW:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x4044c004;}
default:return 0;}}
uint32_t ref_1101(Cpu& c){switch(c.pc){
case 0x4044d000:{ // INT_SBORROW:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x3full));
return 0x4044d004;}
default:return 0;}}
uint32_t ref_1102(Cpu& c){switch(c.pc){
case 0x4044e000:{ // INT_SBORROW:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x7full));
return 0x4044e004;}
default:return 0;}}
uint32_t ref_1103(Cpu& c){switch(c.pc){
case 0x4044f000:{ // INT_SBORROW:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x4044f004;}
default:return 0;}}
uint32_t ref_1104(Cpu& c){switch(c.pc){
case 0x40450000:{ // INT_SBORROW:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40450004;}
default:return 0;}}
uint32_t ref_1105(Cpu& c){switch(c.pc){
case 0x40451000:{ // INT_SBORROW:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40451004;}
default:return 0;}}
uint32_t ref_1106(Cpu& c){switch(c.pc){
case 0x40452000:{ // INT_SBORROW:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40452004;}
default:return 0;}}
uint32_t ref_1107(Cpu& c){switch(c.pc){
case 0x40453000:{ // INT_SBORROW:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40453004;}
default:return 0;}}
uint32_t ref_1108(Cpu& c){switch(c.pc){
case 0x40454000:{ // INT_SBORROW:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40454004;}
default:return 0;}}
uint32_t ref_1109(Cpu& c){switch(c.pc){
case 0x40455000:{ // INT_SBORROW:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40455004;}
default:return 0;}}
uint32_t ref_1110(Cpu& c){switch(c.pc){
case 0x40456000:{ // INT_SBORROW:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40456004;}
default:return 0;}}
uint32_t ref_1111(Cpu& c){switch(c.pc){
case 0x40457000:{ // INT_SBORROW:1<-1,1:cr:k=0
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x0ull,r<1>(c,0x600)));
return 0x40457004;}
default:return 0;}}
uint32_t ref_1112(Cpu& c){switch(c.pc){
case 0x40458000:{ // INT_SBORROW:1<-1,1:cr:k=1
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x1ull,r<1>(c,0x600)));
return 0x40458004;}
default:return 0;}}
uint32_t ref_1113(Cpu& c){switch(c.pc){
case 0x40459000:{ // INT_SBORROW:1<-1,1:cr:k=2
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x2ull,r<1>(c,0x600)));
return 0x40459004;}
default:return 0;}}
uint32_t ref_1114(Cpu& c){switch(c.pc){
case 0x4045a000:{ // INT_SBORROW:1<-1,1:cr:k=3
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x3ull,r<1>(c,0x600)));
return 0x4045a004;}
default:return 0;}}
uint32_t ref_1115(Cpu& c){switch(c.pc){
case 0x4045b000:{ // INT_SBORROW:1<-1,1:cr:k=7
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x7ull,r<1>(c,0x600)));
return 0x4045b004;}
default:return 0;}}
uint32_t ref_1116(Cpu& c){switch(c.pc){
case 0x4045c000:{ // INT_SBORROW:1<-1,1:cr:k=8
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x8ull,r<1>(c,0x600)));
return 0x4045c004;}
default:return 0;}}
uint32_t ref_1117(Cpu& c){switch(c.pc){
case 0x4045d000:{ // INT_SBORROW:1<-1,1:cr:k=31
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x1full,r<1>(c,0x600)));
return 0x4045d004;}
default:return 0;}}
uint32_t ref_1118(Cpu& c){switch(c.pc){
case 0x4045e000:{ // INT_SBORROW:1<-1,1:cr:k=32
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x20ull,r<1>(c,0x600)));
return 0x4045e004;}
default:return 0;}}
uint32_t ref_1119(Cpu& c){switch(c.pc){
case 0x4045f000:{ // INT_SBORROW:1<-1,1:cr:k=63
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x3full,r<1>(c,0x600)));
return 0x4045f004;}
default:return 0;}}
uint32_t ref_1120(Cpu& c){switch(c.pc){
case 0x40460000:{ // INT_SBORROW:1<-1,1:cr:k=127
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x7full,r<1>(c,0x600)));
return 0x40460004;}
default:return 0;}}
uint32_t ref_1121(Cpu& c){switch(c.pc){
case 0x40461000:{ // INT_SBORROW:1<-1,1:cr:k=128
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x80ull,r<1>(c,0x600)));
return 0x40461004;}
default:return 0;}}
uint32_t ref_1122(Cpu& c){switch(c.pc){
case 0x40462000:{ // INT_SBORROW:1<-1,1:cr:k=255
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40462004;}
default:return 0;}}
uint32_t ref_1123(Cpu& c){switch(c.pc){
case 0x40463000:{ // INT_SBORROW:1<-1,1:cr:k=32767
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40463004;}
default:return 0;}}
uint32_t ref_1124(Cpu& c){switch(c.pc){
case 0x40464000:{ // INT_SBORROW:1<-1,1:cr:k=32768
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x0ull,r<1>(c,0x600)));
return 0x40464004;}
default:return 0;}}
uint32_t ref_1125(Cpu& c){switch(c.pc){
case 0x40465000:{ // INT_SBORROW:1<-1,1:cr:k=65535
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40465004;}
default:return 0;}}
uint32_t ref_1126(Cpu& c){switch(c.pc){
case 0x40466000:{ // INT_SBORROW:1<-1,1:cr:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40466004;}
default:return 0;}}
uint32_t ref_1127(Cpu& c){switch(c.pc){
case 0x40467000:{ // INT_SBORROW:1<-1,1:cr:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0x0ull,r<1>(c,0x600)));
return 0x40467004;}
default:return 0;}}
uint32_t ref_1128(Cpu& c){switch(c.pc){
case 0x40468000:{ // INT_SBORROW:1<-1,1:cr:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SBORROW,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40468004;}
default:return 0;}}
uint32_t ref_1129(Cpu& c){switch(c.pc){
case 0x40469000:{ // INT_SUB:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40469004;}
default:return 0;}}
uint32_t ref_1130(Cpu& c){switch(c.pc){
case 0x4046a000:{ // INT_SUB:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4046a004;}
default:return 0;}}
uint32_t ref_1131(Cpu& c){switch(c.pc){
case 0x4046b000:{ // INT_SUB:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x4046b004;}
default:return 0;}}
uint32_t ref_1132(Cpu& c){switch(c.pc){
case 0x4046c000:{ // INT_SUB:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x4046c004;}
default:return 0;}}
uint32_t ref_1133(Cpu& c){switch(c.pc){
case 0x4046d000:{ // INT_SUB:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x4046d004;}
default:return 0;}}
uint32_t ref_1134(Cpu& c){switch(c.pc){
case 0x4046e000:{ // INT_SUB:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x4046e004;}
default:return 0;}}
uint32_t ref_1135(Cpu& c){switch(c.pc){
case 0x4046f000:{ // INT_SUB:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x4046f004;}
default:return 0;}}
uint32_t ref_1136(Cpu& c){switch(c.pc){
case 0x40470000:{ // INT_SUB:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40470004;}
default:return 0;}}
uint32_t ref_1137(Cpu& c){switch(c.pc){
case 0x40471000:{ // INT_SUB:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40471004;}
default:return 0;}}
uint32_t ref_1138(Cpu& c){switch(c.pc){
case 0x40472000:{ // INT_SUB:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40472004;}
default:return 0;}}
uint32_t ref_1139(Cpu& c){switch(c.pc){
case 0x40473000:{ // INT_SUB:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40473004;}
default:return 0;}}
uint32_t ref_1140(Cpu& c){switch(c.pc){
case 0x40474000:{ // INT_SUB:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40474004;}
default:return 0;}}
uint32_t ref_1141(Cpu& c){switch(c.pc){
case 0x40475000:{ // INT_SUB:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40475004;}
default:return 0;}}
uint32_t ref_1142(Cpu& c){switch(c.pc){
case 0x40476000:{ // INT_SUB:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40476004;}
default:return 0;}}
uint32_t ref_1143(Cpu& c){switch(c.pc){
case 0x40477000:{ // INT_SUB:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40477004;}
default:return 0;}}
uint32_t ref_1144(Cpu& c){switch(c.pc){
case 0x40478000:{ // INT_SUB:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40478004;}
default:return 0;}}
uint32_t ref_1145(Cpu& c){switch(c.pc){
case 0x40479000:{ // INT_SUB:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40479004;}
default:return 0;}}
uint32_t ref_1146(Cpu& c){switch(c.pc){
case 0x4047a000:{ // INT_SUB:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4047a004;}
default:return 0;}}
uint32_t ref_1147(Cpu& c){switch(c.pc){
case 0x4047b000:{ // INT_SUB:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4047b004;}
default:return 0;}}
uint32_t ref_1148(Cpu& c){switch(c.pc){
case 0x4047c000:{ // INT_SUB:1<-1,1:cr:k=0
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x0ull,r<1>(c,0x600)));
return 0x4047c004;}
default:return 0;}}
uint32_t ref_1149(Cpu& c){switch(c.pc){
case 0x4047d000:{ // INT_SUB:1<-1,1:cr:k=1
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x1ull,r<1>(c,0x600)));
return 0x4047d004;}
default:return 0;}}
uint32_t ref_1150(Cpu& c){switch(c.pc){
case 0x4047e000:{ // INT_SUB:1<-1,1:cr:k=2
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x2ull,r<1>(c,0x600)));
return 0x4047e004;}
default:return 0;}}
uint32_t ref_1151(Cpu& c){switch(c.pc){
case 0x4047f000:{ // INT_SUB:1<-1,1:cr:k=3
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x3ull,r<1>(c,0x600)));
return 0x4047f004;}
default:return 0;}}
uint32_t ref_1152(Cpu& c){switch(c.pc){
case 0x40480000:{ // INT_SUB:1<-1,1:cr:k=7
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x7ull,r<1>(c,0x600)));
return 0x40480004;}
default:return 0;}}
uint32_t ref_1153(Cpu& c){switch(c.pc){
case 0x40481000:{ // INT_SUB:1<-1,1:cr:k=8
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x8ull,r<1>(c,0x600)));
return 0x40481004;}
default:return 0;}}
uint32_t ref_1154(Cpu& c){switch(c.pc){
case 0x40482000:{ // INT_SUB:1<-1,1:cr:k=31
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x1full,r<1>(c,0x600)));
return 0x40482004;}
default:return 0;}}
uint32_t ref_1155(Cpu& c){switch(c.pc){
case 0x40483000:{ // INT_SUB:1<-1,1:cr:k=32
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x20ull,r<1>(c,0x600)));
return 0x40483004;}
default:return 0;}}
uint32_t ref_1156(Cpu& c){switch(c.pc){
case 0x40484000:{ // INT_SUB:1<-1,1:cr:k=63
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x3full,r<1>(c,0x600)));
return 0x40484004;}
default:return 0;}}
uint32_t ref_1157(Cpu& c){switch(c.pc){
case 0x40485000:{ // INT_SUB:1<-1,1:cr:k=127
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x7full,r<1>(c,0x600)));
return 0x40485004;}
default:return 0;}}
uint32_t ref_1158(Cpu& c){switch(c.pc){
case 0x40486000:{ // INT_SUB:1<-1,1:cr:k=128
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x80ull,r<1>(c,0x600)));
return 0x40486004;}
default:return 0;}}
uint32_t ref_1159(Cpu& c){switch(c.pc){
case 0x40487000:{ // INT_SUB:1<-1,1:cr:k=255
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40487004;}
default:return 0;}}
uint32_t ref_1160(Cpu& c){switch(c.pc){
case 0x40488000:{ // INT_SUB:1<-1,1:cr:k=32767
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x40488004;}
default:return 0;}}
uint32_t ref_1161(Cpu& c){switch(c.pc){
case 0x40489000:{ // INT_SUB:1<-1,1:cr:k=32768
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x0ull,r<1>(c,0x600)));
return 0x40489004;}
default:return 0;}}
uint32_t ref_1162(Cpu& c){switch(c.pc){
case 0x4048a000:{ // INT_SUB:1<-1,1:cr:k=65535
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x4048a004;}
default:return 0;}}
uint32_t ref_1163(Cpu& c){switch(c.pc){
case 0x4048b000:{ // INT_SUB:1<-1,1:cr:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x4048b004;}
default:return 0;}}
uint32_t ref_1164(Cpu& c){switch(c.pc){
case 0x4048c000:{ // INT_SUB:1<-1,1:cr:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0x0ull,r<1>(c,0x600)));
return 0x4048c004;}
default:return 0;}}
uint32_t ref_1165(Cpu& c){switch(c.pc){
case 0x4048d000:{ // INT_SUB:1<-1,1:cr:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SUB,1,1,1>(0xffull,r<1>(c,0x600)));
return 0x4048d004;}
default:return 0;}}
uint32_t ref_1166(Cpu& c){switch(c.pc){
case 0x4048e000:{ // INT_OR:4<-4,4:rr
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x4048e004;}
default:return 0;}}
uint32_t ref_1167(Cpu& c){switch(c.pc){
case 0x4048f000:{ // INT_OR:4<-4,4:rc:k=0
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x0ull));
return 0x4048f004;}
default:return 0;}}
uint32_t ref_1168(Cpu& c){switch(c.pc){
case 0x40490000:{ // INT_OR:4<-4,4:rc:k=1
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x1ull));
return 0x40490004;}
default:return 0;}}
uint32_t ref_1169(Cpu& c){switch(c.pc){
case 0x40491000:{ // INT_OR:4<-4,4:rc:k=2
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x2ull));
return 0x40491004;}
default:return 0;}}
uint32_t ref_1170(Cpu& c){switch(c.pc){
case 0x40492000:{ // INT_OR:4<-4,4:rc:k=3
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x3ull));
return 0x40492004;}
default:return 0;}}
uint32_t ref_1171(Cpu& c){switch(c.pc){
case 0x40493000:{ // INT_OR:4<-4,4:rc:k=7
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x7ull));
return 0x40493004;}
default:return 0;}}
uint32_t ref_1172(Cpu& c){switch(c.pc){
case 0x40494000:{ // INT_OR:4<-4,4:rc:k=8
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x8ull));
return 0x40494004;}
default:return 0;}}
uint32_t ref_1173(Cpu& c){switch(c.pc){
case 0x40495000:{ // INT_OR:4<-4,4:rc:k=31
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x1full));
return 0x40495004;}
default:return 0;}}
uint32_t ref_1174(Cpu& c){switch(c.pc){
case 0x40496000:{ // INT_OR:4<-4,4:rc:k=32
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x20ull));
return 0x40496004;}
default:return 0;}}
uint32_t ref_1175(Cpu& c){switch(c.pc){
case 0x40497000:{ // INT_OR:4<-4,4:rc:k=63
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x3full));
return 0x40497004;}
default:return 0;}}
uint32_t ref_1176(Cpu& c){switch(c.pc){
case 0x40498000:{ // INT_OR:4<-4,4:rc:k=127
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x7full));
return 0x40498004;}
default:return 0;}}
uint32_t ref_1177(Cpu& c){switch(c.pc){
case 0x40499000:{ // INT_OR:4<-4,4:rc:k=128
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x80ull));
return 0x40499004;}
default:return 0;}}
uint32_t ref_1178(Cpu& c){switch(c.pc){
case 0x4049a000:{ // INT_OR:4<-4,4:rc:k=255
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0xffull));
return 0x4049a004;}
default:return 0;}}
uint32_t ref_1179(Cpu& c){switch(c.pc){
case 0x4049b000:{ // INT_OR:4<-4,4:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x7fffull));
return 0x4049b004;}
default:return 0;}}
uint32_t ref_1180(Cpu& c){switch(c.pc){
case 0x4049c000:{ // INT_OR:4<-4,4:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x8000ull));
return 0x4049c004;}
default:return 0;}}
uint32_t ref_1181(Cpu& c){switch(c.pc){
case 0x4049d000:{ // INT_OR:4<-4,4:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0xffffull));
return 0x4049d004;}
default:return 0;}}
uint32_t ref_1182(Cpu& c){switch(c.pc){
case 0x4049e000:{ // INT_OR:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x7fffffffull));
return 0x4049e004;}
default:return 0;}}
uint32_t ref_1183(Cpu& c){switch(c.pc){
case 0x4049f000:{ // INT_OR:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0x80000000ull));
return 0x4049f004;}
default:return 0;}}
uint32_t ref_1184(Cpu& c){switch(c.pc){
case 0x404a0000:{ // INT_OR:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_OR,4,4,4>(r<4>(c,0x500),0xffffffffull));
return 0x404a0004;}
default:return 0;}}
uint32_t ref_1185(Cpu& c){switch(c.pc){
case 0x404a1000:{ // INT_SCARRY:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x404a1004;}
default:return 0;}}
uint32_t ref_1186(Cpu& c){switch(c.pc){
case 0x404a2000:{ // INT_SCARRY:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404a2004;}
default:return 0;}}
uint32_t ref_1187(Cpu& c){switch(c.pc){
case 0x404a3000:{ // INT_SCARRY:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x404a3004;}
default:return 0;}}
uint32_t ref_1188(Cpu& c){switch(c.pc){
case 0x404a4000:{ // INT_SCARRY:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x404a4004;}
default:return 0;}}
uint32_t ref_1189(Cpu& c){switch(c.pc){
case 0x404a5000:{ // INT_SCARRY:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x404a5004;}
default:return 0;}}
uint32_t ref_1190(Cpu& c){switch(c.pc){
case 0x404a6000:{ // INT_SCARRY:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x404a6004;}
default:return 0;}}
uint32_t ref_1191(Cpu& c){switch(c.pc){
case 0x404a7000:{ // INT_SCARRY:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x404a7004;}
default:return 0;}}
uint32_t ref_1192(Cpu& c){switch(c.pc){
case 0x404a8000:{ // INT_SCARRY:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x1full));
return 0x404a8004;}
default:return 0;}}
uint32_t ref_1193(Cpu& c){switch(c.pc){
case 0x404a9000:{ // INT_SCARRY:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x404a9004;}
default:return 0;}}
uint32_t ref_1194(Cpu& c){switch(c.pc){
case 0x404aa000:{ // INT_SCARRY:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x3full));
return 0x404aa004;}
default:return 0;}}
uint32_t ref_1195(Cpu& c){switch(c.pc){
case 0x404ab000:{ // INT_SCARRY:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x7full));
return 0x404ab004;}
default:return 0;}}
uint32_t ref_1196(Cpu& c){switch(c.pc){
case 0x404ac000:{ // INT_SCARRY:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x404ac004;}
default:return 0;}}
uint32_t ref_1197(Cpu& c){switch(c.pc){
case 0x404ad000:{ // INT_SCARRY:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404ad004;}
default:return 0;}}
uint32_t ref_1198(Cpu& c){switch(c.pc){
case 0x404ae000:{ // INT_SCARRY:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404ae004;}
default:return 0;}}
uint32_t ref_1199(Cpu& c){switch(c.pc){
case 0x404af000:{ // INT_SCARRY:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404af004;}
default:return 0;}}
uint32_t ref_1200(Cpu& c){switch(c.pc){
case 0x404b0000:{ // INT_SCARRY:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404b0004;}
default:return 0;}}
uint32_t ref_1201(Cpu& c){switch(c.pc){
case 0x404b1000:{ // INT_SCARRY:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404b1004;}
default:return 0;}}
uint32_t ref_1202(Cpu& c){switch(c.pc){
case 0x404b2000:{ // INT_SCARRY:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404b2004;}
default:return 0;}}
uint32_t ref_1203(Cpu& c){switch(c.pc){
case 0x404b3000:{ // INT_SCARRY:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404b3004;}
default:return 0;}}
uint32_t ref_1204(Cpu& c){switch(c.pc){
case 0x404b4000:{ // INT_ADD:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x404b4004;}
default:return 0;}}
uint32_t ref_1205(Cpu& c){switch(c.pc){
case 0x404b5000:{ // INT_ADD:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404b5004;}
default:return 0;}}
uint32_t ref_1206(Cpu& c){switch(c.pc){
case 0x404b6000:{ // INT_ADD:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x404b6004;}
default:return 0;}}
uint32_t ref_1207(Cpu& c){switch(c.pc){
case 0x404b7000:{ // INT_ADD:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x404b7004;}
default:return 0;}}
uint32_t ref_1208(Cpu& c){switch(c.pc){
case 0x404b8000:{ // INT_ADD:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x404b8004;}
default:return 0;}}
uint32_t ref_1209(Cpu& c){switch(c.pc){
case 0x404b9000:{ // INT_ADD:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x404b9004;}
default:return 0;}}
uint32_t ref_1210(Cpu& c){switch(c.pc){
case 0x404ba000:{ // INT_ADD:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x404ba004;}
default:return 0;}}
uint32_t ref_1211(Cpu& c){switch(c.pc){
case 0x404bb000:{ // INT_ADD:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x1full));
return 0x404bb004;}
default:return 0;}}
uint32_t ref_1212(Cpu& c){switch(c.pc){
case 0x404bc000:{ // INT_ADD:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x404bc004;}
default:return 0;}}
uint32_t ref_1213(Cpu& c){switch(c.pc){
case 0x404bd000:{ // INT_ADD:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x3full));
return 0x404bd004;}
default:return 0;}}
uint32_t ref_1214(Cpu& c){switch(c.pc){
case 0x404be000:{ // INT_ADD:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x7full));
return 0x404be004;}
default:return 0;}}
uint32_t ref_1215(Cpu& c){switch(c.pc){
case 0x404bf000:{ // INT_ADD:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x404bf004;}
default:return 0;}}
uint32_t ref_1216(Cpu& c){switch(c.pc){
case 0x404c0000:{ // INT_ADD:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404c0004;}
default:return 0;}}
uint32_t ref_1217(Cpu& c){switch(c.pc){
case 0x404c1000:{ // INT_ADD:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404c1004;}
default:return 0;}}
uint32_t ref_1218(Cpu& c){switch(c.pc){
case 0x404c2000:{ // INT_ADD:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404c2004;}
default:return 0;}}
uint32_t ref_1219(Cpu& c){switch(c.pc){
case 0x404c3000:{ // INT_ADD:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404c3004;}
default:return 0;}}
uint32_t ref_1220(Cpu& c){switch(c.pc){
case 0x404c4000:{ // INT_ADD:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404c4004;}
default:return 0;}}
uint32_t ref_1221(Cpu& c){switch(c.pc){
case 0x404c5000:{ // INT_ADD:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404c5004;}
default:return 0;}}
uint32_t ref_1222(Cpu& c){switch(c.pc){
case 0x404c6000:{ // INT_ADD:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404c6004;}
default:return 0;}}
uint32_t ref_1223(Cpu& c){switch(c.pc){
case 0x404c7000:{ // INT_XOR:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x404c7004;}
default:return 0;}}
uint32_t ref_1224(Cpu& c){switch(c.pc){
case 0x404c8000:{ // INT_XOR:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x404c8004;}
default:return 0;}}
uint32_t ref_1225(Cpu& c){switch(c.pc){
case 0x404c9000:{ // INT_XOR:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x404c9004;}
default:return 0;}}
uint32_t ref_1226(Cpu& c){switch(c.pc){
case 0x404ca000:{ // INT_XOR:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x404ca004;}
default:return 0;}}
uint32_t ref_1227(Cpu& c){switch(c.pc){
case 0x404cb000:{ // INT_XOR:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x404cb004;}
default:return 0;}}
uint32_t ref_1228(Cpu& c){switch(c.pc){
case 0x404cc000:{ // INT_XOR:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x404cc004;}
default:return 0;}}
uint32_t ref_1229(Cpu& c){switch(c.pc){
case 0x404cd000:{ // INT_XOR:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x404cd004;}
default:return 0;}}
uint32_t ref_1230(Cpu& c){switch(c.pc){
case 0x404ce000:{ // INT_XOR:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x1full));
return 0x404ce004;}
default:return 0;}}
uint32_t ref_1231(Cpu& c){switch(c.pc){
case 0x404cf000:{ // INT_XOR:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x404cf004;}
default:return 0;}}
uint32_t ref_1232(Cpu& c){switch(c.pc){
case 0x404d0000:{ // INT_XOR:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x3full));
return 0x404d0004;}
default:return 0;}}
uint32_t ref_1233(Cpu& c){switch(c.pc){
case 0x404d1000:{ // INT_XOR:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x7full));
return 0x404d1004;}
default:return 0;}}
uint32_t ref_1234(Cpu& c){switch(c.pc){
case 0x404d2000:{ // INT_XOR:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x404d2004;}
default:return 0;}}
uint32_t ref_1235(Cpu& c){switch(c.pc){
case 0x404d3000:{ // INT_XOR:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0xffull));
return 0x404d3004;}
default:return 0;}}
uint32_t ref_1236(Cpu& c){switch(c.pc){
case 0x404d4000:{ // INT_XOR:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x404d4004;}
default:return 0;}}
uint32_t ref_1237(Cpu& c){switch(c.pc){
case 0x404d5000:{ // INT_XOR:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x404d5004;}
default:return 0;}}
uint32_t ref_1238(Cpu& c){switch(c.pc){
case 0x404d6000:{ // INT_XOR:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x404d6004;}
default:return 0;}}
uint32_t ref_1239(Cpu& c){switch(c.pc){
case 0x404d7000:{ // INT_XOR:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x404d7004;}
default:return 0;}}
uint32_t ref_1240(Cpu& c){switch(c.pc){
case 0x404d8000:{ // INT_XOR:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x404d8004;}
default:return 0;}}
uint32_t ref_1241(Cpu& c){switch(c.pc){
case 0x404d9000:{ // INT_XOR:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_XOR,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x404d9004;}
default:return 0;}}
uint32_t ref_1242(Cpu& c){switch(c.pc){
case 0x404da000:{ // INT_LEFT:4<-4,1:rr
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),r<1>(c,0x600)));
return 0x404da004;}
default:return 0;}}
uint32_t ref_1243(Cpu& c){switch(c.pc){
case 0x404db000:{ // INT_LEFT:4<-4,1:rc:k=0
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x404db004;}
default:return 0;}}
uint32_t ref_1244(Cpu& c){switch(c.pc){
case 0x404dc000:{ // INT_LEFT:4<-4,1:rc:k=1
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x1ull));
return 0x404dc004;}
default:return 0;}}
uint32_t ref_1245(Cpu& c){switch(c.pc){
case 0x404dd000:{ // INT_LEFT:4<-4,1:rc:k=2
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x2ull));
return 0x404dd004;}
default:return 0;}}
uint32_t ref_1246(Cpu& c){switch(c.pc){
case 0x404de000:{ // INT_LEFT:4<-4,1:rc:k=3
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x3ull));
return 0x404de004;}
default:return 0;}}
uint32_t ref_1247(Cpu& c){switch(c.pc){
case 0x404df000:{ // INT_LEFT:4<-4,1:rc:k=7
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x7ull));
return 0x404df004;}
default:return 0;}}
uint32_t ref_1248(Cpu& c){switch(c.pc){
case 0x404e0000:{ // INT_LEFT:4<-4,1:rc:k=8
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x8ull));
return 0x404e0004;}
default:return 0;}}
uint32_t ref_1249(Cpu& c){switch(c.pc){
case 0x404e1000:{ // INT_LEFT:4<-4,1:rc:k=31
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x1full));
return 0x404e1004;}
default:return 0;}}
uint32_t ref_1250(Cpu& c){switch(c.pc){
case 0x404e2000:{ // INT_LEFT:4<-4,1:rc:k=32
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x20ull));
return 0x404e2004;}
default:return 0;}}
uint32_t ref_1251(Cpu& c){switch(c.pc){
case 0x404e3000:{ // INT_LEFT:4<-4,1:rc:k=63
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x3full));
return 0x404e3004;}
default:return 0;}}
uint32_t ref_1252(Cpu& c){switch(c.pc){
case 0x404e4000:{ // INT_LEFT:4<-4,1:rc:k=127
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x7full));
return 0x404e4004;}
default:return 0;}}
uint32_t ref_1253(Cpu& c){switch(c.pc){
case 0x404e5000:{ // INT_LEFT:4<-4,1:rc:k=128
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x80ull));
return 0x404e5004;}
default:return 0;}}
uint32_t ref_1254(Cpu& c){switch(c.pc){
case 0x404e6000:{ // INT_LEFT:4<-4,1:rc:k=255
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x404e6004;}
default:return 0;}}
uint32_t ref_1255(Cpu& c){switch(c.pc){
case 0x404e7000:{ // INT_LEFT:4<-4,1:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x404e7004;}
default:return 0;}}
uint32_t ref_1256(Cpu& c){switch(c.pc){
case 0x404e8000:{ // INT_LEFT:4<-4,1:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x404e8004;}
default:return 0;}}
uint32_t ref_1257(Cpu& c){switch(c.pc){
case 0x404e9000:{ // INT_LEFT:4<-4,1:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x404e9004;}
default:return 0;}}
uint32_t ref_1258(Cpu& c){switch(c.pc){
case 0x404ea000:{ // INT_LEFT:4<-4,1:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x404ea004;}
default:return 0;}}
uint32_t ref_1259(Cpu& c){switch(c.pc){
case 0x404eb000:{ // INT_LEFT:4<-4,1:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x404eb004;}
default:return 0;}}
uint32_t ref_1260(Cpu& c){switch(c.pc){
case 0x404ec000:{ // INT_LEFT:4<-4,1:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_LEFT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x404ec004;}
default:return 0;}}
uint32_t ref_1261(Cpu& c){switch(c.pc){
case 0x404ed000:{ // INT_CARRY:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x404ed004;}
default:return 0;}}
uint32_t ref_1262(Cpu& c){switch(c.pc){
case 0x404ee000:{ // INT_CARRY:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404ee004;}
default:return 0;}}
uint32_t ref_1263(Cpu& c){switch(c.pc){
case 0x404ef000:{ // INT_CARRY:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x404ef004;}
default:return 0;}}
uint32_t ref_1264(Cpu& c){switch(c.pc){
case 0x404f0000:{ // INT_CARRY:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x404f0004;}
default:return 0;}}
uint32_t ref_1265(Cpu& c){switch(c.pc){
case 0x404f1000:{ // INT_CARRY:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x404f1004;}
default:return 0;}}
uint32_t ref_1266(Cpu& c){switch(c.pc){
case 0x404f2000:{ // INT_CARRY:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x404f2004;}
default:return 0;}}
uint32_t ref_1267(Cpu& c){switch(c.pc){
case 0x404f3000:{ // INT_CARRY:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x404f3004;}
default:return 0;}}
uint32_t ref_1268(Cpu& c){switch(c.pc){
case 0x404f4000:{ // INT_CARRY:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x1full));
return 0x404f4004;}
default:return 0;}}
uint32_t ref_1269(Cpu& c){switch(c.pc){
case 0x404f5000:{ // INT_CARRY:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x404f5004;}
default:return 0;}}
uint32_t ref_1270(Cpu& c){switch(c.pc){
case 0x404f6000:{ // INT_CARRY:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x3full));
return 0x404f6004;}
default:return 0;}}
uint32_t ref_1271(Cpu& c){switch(c.pc){
case 0x404f7000:{ // INT_CARRY:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x7full));
return 0x404f7004;}
default:return 0;}}
uint32_t ref_1272(Cpu& c){switch(c.pc){
case 0x404f8000:{ // INT_CARRY:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x404f8004;}
default:return 0;}}
uint32_t ref_1273(Cpu& c){switch(c.pc){
case 0x404f9000:{ // INT_CARRY:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404f9004;}
default:return 0;}}
uint32_t ref_1274(Cpu& c){switch(c.pc){
case 0x404fa000:{ // INT_CARRY:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404fa004;}
default:return 0;}}
uint32_t ref_1275(Cpu& c){switch(c.pc){
case 0x404fb000:{ // INT_CARRY:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404fb004;}
default:return 0;}}
uint32_t ref_1276(Cpu& c){switch(c.pc){
case 0x404fc000:{ // INT_CARRY:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404fc004;}
default:return 0;}}
uint32_t ref_1277(Cpu& c){switch(c.pc){
case 0x404fd000:{ // INT_CARRY:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404fd004;}
default:return 0;}}
uint32_t ref_1278(Cpu& c){switch(c.pc){
case 0x404fe000:{ // INT_CARRY:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x404fe004;}
default:return 0;}}
uint32_t ref_1279(Cpu& c){switch(c.pc){
case 0x404ff000:{ // INT_CARRY:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x500),0xffull));
return 0x404ff004;}
default:return 0;}}
uint32_t ref_1280(Cpu& c){switch(c.pc){
case 0x40500000:{ // INT_2COMP:4<-4:r
wr<4>(c,0x400,eval<Op::INT_2COMP,4,4>(r<4>(c,0x500)));
return 0x40500004;}
default:return 0;}}
uint32_t ref_1281(Cpu& c){switch(c.pc){
case 0x40501000:{ // BOOL_XOR:1<-1,1:rr
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40501004;}
default:return 0;}}
uint32_t ref_1282(Cpu& c){switch(c.pc){
case 0x40502000:{ // BOOL_XOR:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40502004;}
default:return 0;}}
uint32_t ref_1283(Cpu& c){switch(c.pc){
case 0x40503000:{ // BOOL_XOR:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40503004;}
default:return 0;}}
uint32_t ref_1284(Cpu& c){switch(c.pc){
case 0x40504000:{ // BOOL_XOR:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40504004;}
default:return 0;}}
uint32_t ref_1285(Cpu& c){switch(c.pc){
case 0x40505000:{ // BOOL_XOR:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40505004;}
default:return 0;}}
uint32_t ref_1286(Cpu& c){switch(c.pc){
case 0x40506000:{ // BOOL_XOR:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40506004;}
default:return 0;}}
uint32_t ref_1287(Cpu& c){switch(c.pc){
case 0x40507000:{ // BOOL_XOR:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x40507004;}
default:return 0;}}
uint32_t ref_1288(Cpu& c){switch(c.pc){
case 0x40508000:{ // BOOL_XOR:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40508004;}
default:return 0;}}
uint32_t ref_1289(Cpu& c){switch(c.pc){
case 0x40509000:{ // BOOL_XOR:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40509004;}
default:return 0;}}
uint32_t ref_1290(Cpu& c){switch(c.pc){
case 0x4050a000:{ // BOOL_XOR:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x3full));
return 0x4050a004;}
default:return 0;}}
uint32_t ref_1291(Cpu& c){switch(c.pc){
case 0x4050b000:{ // BOOL_XOR:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x7full));
return 0x4050b004;}
default:return 0;}}
uint32_t ref_1292(Cpu& c){switch(c.pc){
case 0x4050c000:{ // BOOL_XOR:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x4050c004;}
default:return 0;}}
uint32_t ref_1293(Cpu& c){switch(c.pc){
case 0x4050d000:{ // BOOL_XOR:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4050d004;}
default:return 0;}}
uint32_t ref_1294(Cpu& c){switch(c.pc){
case 0x4050e000:{ // BOOL_XOR:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4050e004;}
default:return 0;}}
uint32_t ref_1295(Cpu& c){switch(c.pc){
case 0x4050f000:{ // BOOL_XOR:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4050f004;}
default:return 0;}}
uint32_t ref_1296(Cpu& c){switch(c.pc){
case 0x40510000:{ // BOOL_XOR:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40510004;}
default:return 0;}}
uint32_t ref_1297(Cpu& c){switch(c.pc){
case 0x40511000:{ // BOOL_XOR:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40511004;}
default:return 0;}}
uint32_t ref_1298(Cpu& c){switch(c.pc){
case 0x40512000:{ // BOOL_XOR:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40512004;}
default:return 0;}}
uint32_t ref_1299(Cpu& c){switch(c.pc){
case 0x40513000:{ // BOOL_XOR:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40513004;}
default:return 0;}}
uint32_t ref_1300(Cpu& c){switch(c.pc){
case 0x40514000:{ // INT_NEGATE:1<-1:r
wr<1>(c,0x400,eval<Op::INT_NEGATE,1,1>(r<1>(c,0x500)));
return 0x40514004;}
default:return 0;}}
uint32_t ref_1301(Cpu& c){switch(c.pc){
case 0x40515000:{ // INT_2COMP:1<-1:r
wr<1>(c,0x400,eval<Op::INT_2COMP,1,1>(r<1>(c,0x500)));
return 0x40515004;}
default:return 0;}}
uint32_t ref_1302(Cpu& c){switch(c.pc){
case 0x40516000:{ // INT_ZEXT:8<-4:r
wr<8>(c,0x400,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x500)));
return 0x40516004;}
default:return 0;}}
uint32_t ref_1303(Cpu& c){switch(c.pc){
case 0x40517000:{ // INT_LEFT:8<-8,4:rr
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),r<4>(c,0x600)));
return 0x40517004;}
default:return 0;}}
uint32_t ref_1304(Cpu& c){switch(c.pc){
case 0x40518000:{ // INT_LEFT:8<-8,4:rc:k=0
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x0ull));
return 0x40518004;}
default:return 0;}}
uint32_t ref_1305(Cpu& c){switch(c.pc){
case 0x40519000:{ // INT_LEFT:8<-8,4:rc:k=1
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x1ull));
return 0x40519004;}
default:return 0;}}
uint32_t ref_1306(Cpu& c){switch(c.pc){
case 0x4051a000:{ // INT_LEFT:8<-8,4:rc:k=2
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x2ull));
return 0x4051a004;}
default:return 0;}}
uint32_t ref_1307(Cpu& c){switch(c.pc){
case 0x4051b000:{ // INT_LEFT:8<-8,4:rc:k=3
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x3ull));
return 0x4051b004;}
default:return 0;}}
uint32_t ref_1308(Cpu& c){switch(c.pc){
case 0x4051c000:{ // INT_LEFT:8<-8,4:rc:k=7
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x7ull));
return 0x4051c004;}
default:return 0;}}
uint32_t ref_1309(Cpu& c){switch(c.pc){
case 0x4051d000:{ // INT_LEFT:8<-8,4:rc:k=8
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x8ull));
return 0x4051d004;}
default:return 0;}}
uint32_t ref_1310(Cpu& c){switch(c.pc){
case 0x4051e000:{ // INT_LEFT:8<-8,4:rc:k=31
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x1full));
return 0x4051e004;}
default:return 0;}}
uint32_t ref_1311(Cpu& c){switch(c.pc){
case 0x4051f000:{ // INT_LEFT:8<-8,4:rc:k=32
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x20ull));
return 0x4051f004;}
default:return 0;}}
uint32_t ref_1312(Cpu& c){switch(c.pc){
case 0x40520000:{ // INT_LEFT:8<-8,4:rc:k=63
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x3full));
return 0x40520004;}
default:return 0;}}
uint32_t ref_1313(Cpu& c){switch(c.pc){
case 0x40521000:{ // INT_LEFT:8<-8,4:rc:k=127
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x7full));
return 0x40521004;}
default:return 0;}}
uint32_t ref_1314(Cpu& c){switch(c.pc){
case 0x40522000:{ // INT_LEFT:8<-8,4:rc:k=128
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x80ull));
return 0x40522004;}
default:return 0;}}
uint32_t ref_1315(Cpu& c){switch(c.pc){
case 0x40523000:{ // INT_LEFT:8<-8,4:rc:k=255
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0xffull));
return 0x40523004;}
default:return 0;}}
uint32_t ref_1316(Cpu& c){switch(c.pc){
case 0x40524000:{ // INT_LEFT:8<-8,4:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x7fffull));
return 0x40524004;}
default:return 0;}}
uint32_t ref_1317(Cpu& c){switch(c.pc){
case 0x40525000:{ // INT_LEFT:8<-8,4:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x8000ull));
return 0x40525004;}
default:return 0;}}
uint32_t ref_1318(Cpu& c){switch(c.pc){
case 0x40526000:{ // INT_LEFT:8<-8,4:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0xffffull));
return 0x40526004;}
default:return 0;}}
uint32_t ref_1319(Cpu& c){switch(c.pc){
case 0x40527000:{ // INT_LEFT:8<-8,4:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x7fffffffull));
return 0x40527004;}
default:return 0;}}
uint32_t ref_1320(Cpu& c){switch(c.pc){
case 0x40528000:{ // INT_LEFT:8<-8,4:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0x80000000ull));
return 0x40528004;}
default:return 0;}}
uint32_t ref_1321(Cpu& c){switch(c.pc){
case 0x40529000:{ // INT_LEFT:8<-8,4:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x500),0xffffffffull));
return 0x40529004;}
default:return 0;}}
uint32_t ref_1322(Cpu& c){switch(c.pc){
case 0x4052a000:{ // INT_OR:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x4052a004;}
default:return 0;}}
uint32_t ref_1323(Cpu& c){switch(c.pc){
case 0x4052b000:{ // INT_OR:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x4052b004;}
default:return 0;}}
uint32_t ref_1324(Cpu& c){switch(c.pc){
case 0x4052c000:{ // INT_OR:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x4052c004;}
default:return 0;}}
uint32_t ref_1325(Cpu& c){switch(c.pc){
case 0x4052d000:{ // INT_OR:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x4052d004;}
default:return 0;}}
uint32_t ref_1326(Cpu& c){switch(c.pc){
case 0x4052e000:{ // INT_OR:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x4052e004;}
default:return 0;}}
uint32_t ref_1327(Cpu& c){switch(c.pc){
case 0x4052f000:{ // INT_OR:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x4052f004;}
default:return 0;}}
uint32_t ref_1328(Cpu& c){switch(c.pc){
case 0x40530000:{ // INT_OR:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x40530004;}
default:return 0;}}
uint32_t ref_1329(Cpu& c){switch(c.pc){
case 0x40531000:{ // INT_OR:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x1full));
return 0x40531004;}
default:return 0;}}
uint32_t ref_1330(Cpu& c){switch(c.pc){
case 0x40532000:{ // INT_OR:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x40532004;}
default:return 0;}}
uint32_t ref_1331(Cpu& c){switch(c.pc){
case 0x40533000:{ // INT_OR:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x3full));
return 0x40533004;}
default:return 0;}}
uint32_t ref_1332(Cpu& c){switch(c.pc){
case 0x40534000:{ // INT_OR:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x7full));
return 0x40534004;}
default:return 0;}}
uint32_t ref_1333(Cpu& c){switch(c.pc){
case 0x40535000:{ // INT_OR:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x40535004;}
default:return 0;}}
uint32_t ref_1334(Cpu& c){switch(c.pc){
case 0x40536000:{ // INT_OR:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0xffull));
return 0x40536004;}
default:return 0;}}
uint32_t ref_1335(Cpu& c){switch(c.pc){
case 0x40537000:{ // INT_OR:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x40537004;}
default:return 0;}}
uint32_t ref_1336(Cpu& c){switch(c.pc){
case 0x40538000:{ // INT_OR:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x40538004;}
default:return 0;}}
uint32_t ref_1337(Cpu& c){switch(c.pc){
case 0x40539000:{ // INT_OR:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x40539004;}
default:return 0;}}
uint32_t ref_1338(Cpu& c){switch(c.pc){
case 0x4053a000:{ // INT_OR:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x4053a004;}
default:return 0;}}
uint32_t ref_1339(Cpu& c){switch(c.pc){
case 0x4053b000:{ // INT_OR:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x4053b004;}
default:return 0;}}
uint32_t ref_1340(Cpu& c){switch(c.pc){
case 0x4053c000:{ // INT_OR:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_OR,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x4053c004;}
default:return 0;}}
uint32_t ref_1341(Cpu& c){switch(c.pc){
case 0x4053d000:{ // INT_SDIV:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x4053d004;}
default:return 0;}}
uint32_t ref_1342(Cpu& c){switch(c.pc){
case 0x4053e000:{ // INT_SDIV:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x4053e004;}
default:return 0;}}
uint32_t ref_1343(Cpu& c){switch(c.pc){
case 0x4053f000:{ // INT_SDIV:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x4053f004;}
default:return 0;}}
uint32_t ref_1344(Cpu& c){switch(c.pc){
case 0x40540000:{ // INT_SDIV:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x40540004;}
default:return 0;}}
uint32_t ref_1345(Cpu& c){switch(c.pc){
case 0x40541000:{ // INT_SDIV:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x40541004;}
default:return 0;}}
uint32_t ref_1346(Cpu& c){switch(c.pc){
case 0x40542000:{ // INT_SDIV:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x40542004;}
default:return 0;}}
uint32_t ref_1347(Cpu& c){switch(c.pc){
case 0x40543000:{ // INT_SDIV:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x40543004;}
default:return 0;}}
uint32_t ref_1348(Cpu& c){switch(c.pc){
case 0x40544000:{ // INT_SDIV:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x1full));
return 0x40544004;}
default:return 0;}}
uint32_t ref_1349(Cpu& c){switch(c.pc){
case 0x40545000:{ // INT_SDIV:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x40545004;}
default:return 0;}}
uint32_t ref_1350(Cpu& c){switch(c.pc){
case 0x40546000:{ // INT_SDIV:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x3full));
return 0x40546004;}
default:return 0;}}
uint32_t ref_1351(Cpu& c){switch(c.pc){
case 0x40547000:{ // INT_SDIV:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x7full));
return 0x40547004;}
default:return 0;}}
uint32_t ref_1352(Cpu& c){switch(c.pc){
case 0x40548000:{ // INT_SDIV:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x40548004;}
default:return 0;}}
uint32_t ref_1353(Cpu& c){switch(c.pc){
case 0x40549000:{ // INT_SDIV:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0xffull));
return 0x40549004;}
default:return 0;}}
uint32_t ref_1354(Cpu& c){switch(c.pc){
case 0x4054a000:{ // INT_SDIV:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x4054a004;}
default:return 0;}}
uint32_t ref_1355(Cpu& c){switch(c.pc){
case 0x4054b000:{ // INT_SDIV:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x4054b004;}
default:return 0;}}
uint32_t ref_1356(Cpu& c){switch(c.pc){
case 0x4054c000:{ // INT_SDIV:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x4054c004;}
default:return 0;}}
uint32_t ref_1357(Cpu& c){switch(c.pc){
case 0x4054d000:{ // INT_SDIV:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x4054d004;}
default:return 0;}}
uint32_t ref_1358(Cpu& c){switch(c.pc){
case 0x4054e000:{ // INT_SDIV:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x4054e004;}
default:return 0;}}
uint32_t ref_1359(Cpu& c){switch(c.pc){
case 0x4054f000:{ // INT_SDIV:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_SDIV,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x4054f004;}
default:return 0;}}
uint32_t ref_1360(Cpu& c){switch(c.pc){
case 0x40550000:{ // INT_SREM:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x40550004;}
default:return 0;}}
uint32_t ref_1361(Cpu& c){switch(c.pc){
case 0x40551000:{ // INT_SREM:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x40551004;}
default:return 0;}}
uint32_t ref_1362(Cpu& c){switch(c.pc){
case 0x40552000:{ // INT_SREM:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x40552004;}
default:return 0;}}
uint32_t ref_1363(Cpu& c){switch(c.pc){
case 0x40553000:{ // INT_SREM:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x40553004;}
default:return 0;}}
uint32_t ref_1364(Cpu& c){switch(c.pc){
case 0x40554000:{ // INT_SREM:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x40554004;}
default:return 0;}}
uint32_t ref_1365(Cpu& c){switch(c.pc){
case 0x40555000:{ // INT_SREM:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x40555004;}
default:return 0;}}
uint32_t ref_1366(Cpu& c){switch(c.pc){
case 0x40556000:{ // INT_SREM:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x40556004;}
default:return 0;}}
uint32_t ref_1367(Cpu& c){switch(c.pc){
case 0x40557000:{ // INT_SREM:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x1full));
return 0x40557004;}
default:return 0;}}
uint32_t ref_1368(Cpu& c){switch(c.pc){
case 0x40558000:{ // INT_SREM:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x40558004;}
default:return 0;}}
uint32_t ref_1369(Cpu& c){switch(c.pc){
case 0x40559000:{ // INT_SREM:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x3full));
return 0x40559004;}
default:return 0;}}
uint32_t ref_1370(Cpu& c){switch(c.pc){
case 0x4055a000:{ // INT_SREM:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x7full));
return 0x4055a004;}
default:return 0;}}
uint32_t ref_1371(Cpu& c){switch(c.pc){
case 0x4055b000:{ // INT_SREM:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x4055b004;}
default:return 0;}}
uint32_t ref_1372(Cpu& c){switch(c.pc){
case 0x4055c000:{ // INT_SREM:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0xffull));
return 0x4055c004;}
default:return 0;}}
uint32_t ref_1373(Cpu& c){switch(c.pc){
case 0x4055d000:{ // INT_SREM:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x4055d004;}
default:return 0;}}
uint32_t ref_1374(Cpu& c){switch(c.pc){
case 0x4055e000:{ // INT_SREM:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x4055e004;}
default:return 0;}}
uint32_t ref_1375(Cpu& c){switch(c.pc){
case 0x4055f000:{ // INT_SREM:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x4055f004;}
default:return 0;}}
uint32_t ref_1376(Cpu& c){switch(c.pc){
case 0x40560000:{ // INT_SREM:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x40560004;}
default:return 0;}}
uint32_t ref_1377(Cpu& c){switch(c.pc){
case 0x40561000:{ // INT_SREM:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x40561004;}
default:return 0;}}
uint32_t ref_1378(Cpu& c){switch(c.pc){
case 0x40562000:{ // INT_SREM:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_SREM,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x40562004;}
default:return 0;}}
uint32_t ref_1379(Cpu& c){switch(c.pc){
case 0x40563000:{ // INT_CARRY:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x40563004;}
default:return 0;}}
uint32_t ref_1380(Cpu& c){switch(c.pc){
case 0x40564000:{ // INT_CARRY:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40564004;}
default:return 0;}}
uint32_t ref_1381(Cpu& c){switch(c.pc){
case 0x40565000:{ // INT_CARRY:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x40565004;}
default:return 0;}}
uint32_t ref_1382(Cpu& c){switch(c.pc){
case 0x40566000:{ // INT_CARRY:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x40566004;}
default:return 0;}}
uint32_t ref_1383(Cpu& c){switch(c.pc){
case 0x40567000:{ // INT_CARRY:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x40567004;}
default:return 0;}}
uint32_t ref_1384(Cpu& c){switch(c.pc){
case 0x40568000:{ // INT_CARRY:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x40568004;}
default:return 0;}}
uint32_t ref_1385(Cpu& c){switch(c.pc){
case 0x40569000:{ // INT_CARRY:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x40569004;}
default:return 0;}}
uint32_t ref_1386(Cpu& c){switch(c.pc){
case 0x4056a000:{ // INT_CARRY:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x1full));
return 0x4056a004;}
default:return 0;}}
uint32_t ref_1387(Cpu& c){switch(c.pc){
case 0x4056b000:{ // INT_CARRY:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x4056b004;}
default:return 0;}}
uint32_t ref_1388(Cpu& c){switch(c.pc){
case 0x4056c000:{ // INT_CARRY:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x3full));
return 0x4056c004;}
default:return 0;}}
uint32_t ref_1389(Cpu& c){switch(c.pc){
case 0x4056d000:{ // INT_CARRY:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x7full));
return 0x4056d004;}
default:return 0;}}
uint32_t ref_1390(Cpu& c){switch(c.pc){
case 0x4056e000:{ // INT_CARRY:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x4056e004;}
default:return 0;}}
uint32_t ref_1391(Cpu& c){switch(c.pc){
case 0x4056f000:{ // INT_CARRY:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0xffull));
return 0x4056f004;}
default:return 0;}}
uint32_t ref_1392(Cpu& c){switch(c.pc){
case 0x40570000:{ // INT_CARRY:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40570004;}
default:return 0;}}
uint32_t ref_1393(Cpu& c){switch(c.pc){
case 0x40571000:{ // INT_CARRY:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40571004;}
default:return 0;}}
uint32_t ref_1394(Cpu& c){switch(c.pc){
case 0x40572000:{ // INT_CARRY:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40572004;}
default:return 0;}}
uint32_t ref_1395(Cpu& c){switch(c.pc){
case 0x40573000:{ // INT_CARRY:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40573004;}
default:return 0;}}
uint32_t ref_1396(Cpu& c){switch(c.pc){
case 0x40574000:{ // INT_CARRY:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40574004;}
default:return 0;}}
uint32_t ref_1397(Cpu& c){switch(c.pc){
case 0x40575000:{ // INT_CARRY:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40575004;}
default:return 0;}}
uint32_t ref_1398(Cpu& c){switch(c.pc){
case 0x40576000:{ // INT_SCARRY:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x40576004;}
default:return 0;}}
uint32_t ref_1399(Cpu& c){switch(c.pc){
case 0x40577000:{ // INT_SCARRY:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40577004;}
default:return 0;}}
uint32_t ref_1400(Cpu& c){switch(c.pc){
case 0x40578000:{ // INT_SCARRY:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x40578004;}
default:return 0;}}
uint32_t ref_1401(Cpu& c){switch(c.pc){
case 0x40579000:{ // INT_SCARRY:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x40579004;}
default:return 0;}}
uint32_t ref_1402(Cpu& c){switch(c.pc){
case 0x4057a000:{ // INT_SCARRY:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x4057a004;}
default:return 0;}}
uint32_t ref_1403(Cpu& c){switch(c.pc){
case 0x4057b000:{ // INT_SCARRY:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x4057b004;}
default:return 0;}}
uint32_t ref_1404(Cpu& c){switch(c.pc){
case 0x4057c000:{ // INT_SCARRY:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x4057c004;}
default:return 0;}}
uint32_t ref_1405(Cpu& c){switch(c.pc){
case 0x4057d000:{ // INT_SCARRY:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x1full));
return 0x4057d004;}
default:return 0;}}
uint32_t ref_1406(Cpu& c){switch(c.pc){
case 0x4057e000:{ // INT_SCARRY:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x4057e004;}
default:return 0;}}
uint32_t ref_1407(Cpu& c){switch(c.pc){
case 0x4057f000:{ // INT_SCARRY:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x3full));
return 0x4057f004;}
default:return 0;}}
uint32_t ref_1408(Cpu& c){switch(c.pc){
case 0x40580000:{ // INT_SCARRY:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x7full));
return 0x40580004;}
default:return 0;}}
uint32_t ref_1409(Cpu& c){switch(c.pc){
case 0x40581000:{ // INT_SCARRY:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x40581004;}
default:return 0;}}
uint32_t ref_1410(Cpu& c){switch(c.pc){
case 0x40582000:{ // INT_SCARRY:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0xffull));
return 0x40582004;}
default:return 0;}}
uint32_t ref_1411(Cpu& c){switch(c.pc){
case 0x40583000:{ // INT_SCARRY:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40583004;}
default:return 0;}}
uint32_t ref_1412(Cpu& c){switch(c.pc){
case 0x40584000:{ // INT_SCARRY:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40584004;}
default:return 0;}}
uint32_t ref_1413(Cpu& c){switch(c.pc){
case 0x40585000:{ // INT_SCARRY:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40585004;}
default:return 0;}}
uint32_t ref_1414(Cpu& c){switch(c.pc){
case 0x40586000:{ // INT_SCARRY:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40586004;}
default:return 0;}}
uint32_t ref_1415(Cpu& c){switch(c.pc){
case 0x40587000:{ // INT_SCARRY:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x40587004;}
default:return 0;}}
uint32_t ref_1416(Cpu& c){switch(c.pc){
case 0x40588000:{ // INT_SCARRY:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x40588004;}
default:return 0;}}
uint32_t ref_1417(Cpu& c){switch(c.pc){
case 0x40589000:{ // INT_ADD:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x40589004;}
default:return 0;}}
uint32_t ref_1418(Cpu& c){switch(c.pc){
case 0x4058a000:{ // INT_ADD:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x4058a004;}
default:return 0;}}
uint32_t ref_1419(Cpu& c){switch(c.pc){
case 0x4058b000:{ // INT_ADD:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x4058b004;}
default:return 0;}}
uint32_t ref_1420(Cpu& c){switch(c.pc){
case 0x4058c000:{ // INT_ADD:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x4058c004;}
default:return 0;}}
uint32_t ref_1421(Cpu& c){switch(c.pc){
case 0x4058d000:{ // INT_ADD:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x4058d004;}
default:return 0;}}
uint32_t ref_1422(Cpu& c){switch(c.pc){
case 0x4058e000:{ // INT_ADD:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x4058e004;}
default:return 0;}}
uint32_t ref_1423(Cpu& c){switch(c.pc){
case 0x4058f000:{ // INT_ADD:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x4058f004;}
default:return 0;}}
uint32_t ref_1424(Cpu& c){switch(c.pc){
case 0x40590000:{ // INT_ADD:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x1full));
return 0x40590004;}
default:return 0;}}
uint32_t ref_1425(Cpu& c){switch(c.pc){
case 0x40591000:{ // INT_ADD:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x40591004;}
default:return 0;}}
uint32_t ref_1426(Cpu& c){switch(c.pc){
case 0x40592000:{ // INT_ADD:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x3full));
return 0x40592004;}
default:return 0;}}
uint32_t ref_1427(Cpu& c){switch(c.pc){
case 0x40593000:{ // INT_ADD:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x7full));
return 0x40593004;}
default:return 0;}}
uint32_t ref_1428(Cpu& c){switch(c.pc){
case 0x40594000:{ // INT_ADD:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x40594004;}
default:return 0;}}
uint32_t ref_1429(Cpu& c){switch(c.pc){
case 0x40595000:{ // INT_ADD:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0xffull));
return 0x40595004;}
default:return 0;}}
uint32_t ref_1430(Cpu& c){switch(c.pc){
case 0x40596000:{ // INT_ADD:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x40596004;}
default:return 0;}}
uint32_t ref_1431(Cpu& c){switch(c.pc){
case 0x40597000:{ // INT_ADD:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x40597004;}
default:return 0;}}
uint32_t ref_1432(Cpu& c){switch(c.pc){
case 0x40598000:{ // INT_ADD:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x40598004;}
default:return 0;}}
uint32_t ref_1433(Cpu& c){switch(c.pc){
case 0x40599000:{ // INT_ADD:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x40599004;}
default:return 0;}}
uint32_t ref_1434(Cpu& c){switch(c.pc){
case 0x4059a000:{ // INT_ADD:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x4059a004;}
default:return 0;}}
uint32_t ref_1435(Cpu& c){switch(c.pc){
case 0x4059b000:{ // INT_ADD:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x4059b004;}
default:return 0;}}
uint32_t ref_1436(Cpu& c){switch(c.pc){
case 0x4059c000:{ // FLOAT2FLOAT:10<-8:r
wr<10>(c,0x400,float_op("FLOAT2FLOAT",r<8>(c,0x500),8,0x0ull,4,10));
return 0x4059c004;}
default:return 0;}}
uint32_t ref_1437(Cpu& c){switch(c.pc){
case 0x4059d000:{ // FLOAT2FLOAT:10<-8:c:k=0
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x0ull,8,0x0ull,4,10));
return 0x4059d004;}
default:return 0;}}
uint32_t ref_1438(Cpu& c){switch(c.pc){
case 0x4059e000:{ // FLOAT2FLOAT:10<-8:c:k=1
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x1ull,8,0x0ull,4,10));
return 0x4059e004;}
default:return 0;}}
uint32_t ref_1439(Cpu& c){switch(c.pc){
case 0x4059f000:{ // FLOAT2FLOAT:10<-8:c:k=2
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x2ull,8,0x0ull,4,10));
return 0x4059f004;}
default:return 0;}}
uint32_t ref_1440(Cpu& c){switch(c.pc){
case 0x405a0000:{ // FLOAT2FLOAT:10<-8:c:k=3
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x3ull,8,0x0ull,4,10));
return 0x405a0004;}
default:return 0;}}
uint32_t ref_1441(Cpu& c){switch(c.pc){
case 0x405a1000:{ // FLOAT2FLOAT:10<-8:c:k=7
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x7ull,8,0x0ull,4,10));
return 0x405a1004;}
default:return 0;}}
uint32_t ref_1442(Cpu& c){switch(c.pc){
case 0x405a2000:{ // FLOAT2FLOAT:10<-8:c:k=8
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x8ull,8,0x0ull,4,10));
return 0x405a2004;}
default:return 0;}}
uint32_t ref_1443(Cpu& c){switch(c.pc){
case 0x405a3000:{ // FLOAT2FLOAT:10<-8:c:k=31
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x1full,8,0x0ull,4,10));
return 0x405a3004;}
default:return 0;}}
uint32_t ref_1444(Cpu& c){switch(c.pc){
case 0x405a4000:{ // FLOAT2FLOAT:10<-8:c:k=32
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x20ull,8,0x0ull,4,10));
return 0x405a4004;}
default:return 0;}}
uint32_t ref_1445(Cpu& c){switch(c.pc){
case 0x405a5000:{ // FLOAT2FLOAT:10<-8:c:k=63
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x3full,8,0x0ull,4,10));
return 0x405a5004;}
default:return 0;}}
uint32_t ref_1446(Cpu& c){switch(c.pc){
case 0x405a6000:{ // FLOAT2FLOAT:10<-8:c:k=127
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x7full,8,0x0ull,4,10));
return 0x405a6004;}
default:return 0;}}
uint32_t ref_1447(Cpu& c){switch(c.pc){
case 0x405a7000:{ // FLOAT2FLOAT:10<-8:c:k=128
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x80ull,8,0x0ull,4,10));
return 0x405a7004;}
default:return 0;}}
uint32_t ref_1448(Cpu& c){switch(c.pc){
case 0x405a8000:{ // FLOAT2FLOAT:10<-8:c:k=255
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0xffull,8,0x0ull,4,10));
return 0x405a8004;}
default:return 0;}}
uint32_t ref_1449(Cpu& c){switch(c.pc){
case 0x405a9000:{ // FLOAT2FLOAT:10<-8:c:k=32767
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x7fffull,8,0x0ull,4,10));
return 0x405a9004;}
default:return 0;}}
uint32_t ref_1450(Cpu& c){switch(c.pc){
case 0x405aa000:{ // FLOAT2FLOAT:10<-8:c:k=32768
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x8000ull,8,0x0ull,4,10));
return 0x405aa004;}
default:return 0;}}
uint32_t ref_1451(Cpu& c){switch(c.pc){
case 0x405ab000:{ // FLOAT2FLOAT:10<-8:c:k=65535
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0xffffull,8,0x0ull,4,10));
return 0x405ab004;}
default:return 0;}}
uint32_t ref_1452(Cpu& c){switch(c.pc){
case 0x405ac000:{ // FLOAT2FLOAT:10<-8:c:k=2147483647
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x7fffffffull,8,0x0ull,4,10));
return 0x405ac004;}
default:return 0;}}
uint32_t ref_1453(Cpu& c){switch(c.pc){
case 0x405ad000:{ // FLOAT2FLOAT:10<-8:c:k=2147483648
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0x80000000ull,8,0x0ull,4,10));
return 0x405ad004;}
default:return 0;}}
uint32_t ref_1454(Cpu& c){switch(c.pc){
case 0x405ae000:{ // FLOAT2FLOAT:10<-8:c:k=4294967295
wr<10>(c,0x400,float_op("FLOAT2FLOAT",0xffffffffull,8,0x0ull,4,10));
return 0x405ae004;}
default:return 0;}}
uint32_t ref_1455(Cpu& c){switch(c.pc){
case 0x405af000:{ // INT_NEGATE:4<-4:r
wr<4>(c,0x400,eval<Op::INT_NEGATE,4,4>(r<4>(c,0x500)));
return 0x405af004;}
default:return 0;}}
uint32_t ref_1456(Cpu& c){switch(c.pc){
case 0x405b0000:{ // INT2FLOAT:10<-8:r
wr<10>(c,0x400,float_op("INT2FLOAT",r<8>(c,0x500),8,0x0ull,4,10));
return 0x405b0004;}
default:return 0;}}
uint32_t ref_1457(Cpu& c){switch(c.pc){
case 0x405b1000:{ // INT_DIV:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x405b1004;}
default:return 0;}}
uint32_t ref_1458(Cpu& c){switch(c.pc){
case 0x405b2000:{ // INT_DIV:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x405b2004;}
default:return 0;}}
uint32_t ref_1459(Cpu& c){switch(c.pc){
case 0x405b3000:{ // INT_DIV:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x405b3004;}
default:return 0;}}
uint32_t ref_1460(Cpu& c){switch(c.pc){
case 0x405b4000:{ // INT_DIV:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x405b4004;}
default:return 0;}}
uint32_t ref_1461(Cpu& c){switch(c.pc){
case 0x405b5000:{ // INT_DIV:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x405b5004;}
default:return 0;}}
uint32_t ref_1462(Cpu& c){switch(c.pc){
case 0x405b6000:{ // INT_DIV:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x405b6004;}
default:return 0;}}
uint32_t ref_1463(Cpu& c){switch(c.pc){
case 0x405b7000:{ // INT_DIV:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x405b7004;}
default:return 0;}}
uint32_t ref_1464(Cpu& c){switch(c.pc){
case 0x405b8000:{ // INT_DIV:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x1full));
return 0x405b8004;}
default:return 0;}}
uint32_t ref_1465(Cpu& c){switch(c.pc){
case 0x405b9000:{ // INT_DIV:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x405b9004;}
default:return 0;}}
uint32_t ref_1466(Cpu& c){switch(c.pc){
case 0x405ba000:{ // INT_DIV:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x3full));
return 0x405ba004;}
default:return 0;}}
uint32_t ref_1467(Cpu& c){switch(c.pc){
case 0x405bb000:{ // INT_DIV:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x7full));
return 0x405bb004;}
default:return 0;}}
uint32_t ref_1468(Cpu& c){switch(c.pc){
case 0x405bc000:{ // INT_DIV:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x405bc004;}
default:return 0;}}
uint32_t ref_1469(Cpu& c){switch(c.pc){
case 0x405bd000:{ // INT_DIV:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0xffull));
return 0x405bd004;}
default:return 0;}}
uint32_t ref_1470(Cpu& c){switch(c.pc){
case 0x405be000:{ // INT_DIV:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x405be004;}
default:return 0;}}
uint32_t ref_1471(Cpu& c){switch(c.pc){
case 0x405bf000:{ // INT_DIV:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x405bf004;}
default:return 0;}}
uint32_t ref_1472(Cpu& c){switch(c.pc){
case 0x405c0000:{ // INT_DIV:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x405c0004;}
default:return 0;}}
uint32_t ref_1473(Cpu& c){switch(c.pc){
case 0x405c1000:{ // INT_DIV:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x405c1004;}
default:return 0;}}
uint32_t ref_1474(Cpu& c){switch(c.pc){
case 0x405c2000:{ // INT_DIV:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x405c2004;}
default:return 0;}}
uint32_t ref_1475(Cpu& c){switch(c.pc){
case 0x405c3000:{ // INT_DIV:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_DIV,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x405c3004;}
default:return 0;}}
uint32_t ref_1476(Cpu& c){switch(c.pc){
case 0x405c4000:{ // INT_REM:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x405c4004;}
default:return 0;}}
uint32_t ref_1477(Cpu& c){switch(c.pc){
case 0x405c5000:{ // INT_REM:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x405c5004;}
default:return 0;}}
uint32_t ref_1478(Cpu& c){switch(c.pc){
case 0x405c6000:{ // INT_REM:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x405c6004;}
default:return 0;}}
uint32_t ref_1479(Cpu& c){switch(c.pc){
case 0x405c7000:{ // INT_REM:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x405c7004;}
default:return 0;}}
uint32_t ref_1480(Cpu& c){switch(c.pc){
case 0x405c8000:{ // INT_REM:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x405c8004;}
default:return 0;}}
uint32_t ref_1481(Cpu& c){switch(c.pc){
case 0x405c9000:{ // INT_REM:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x405c9004;}
default:return 0;}}
uint32_t ref_1482(Cpu& c){switch(c.pc){
case 0x405ca000:{ // INT_REM:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x405ca004;}
default:return 0;}}
uint32_t ref_1483(Cpu& c){switch(c.pc){
case 0x405cb000:{ // INT_REM:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x1full));
return 0x405cb004;}
default:return 0;}}
uint32_t ref_1484(Cpu& c){switch(c.pc){
case 0x405cc000:{ // INT_REM:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x405cc004;}
default:return 0;}}
uint32_t ref_1485(Cpu& c){switch(c.pc){
case 0x405cd000:{ // INT_REM:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x3full));
return 0x405cd004;}
default:return 0;}}
uint32_t ref_1486(Cpu& c){switch(c.pc){
case 0x405ce000:{ // INT_REM:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x7full));
return 0x405ce004;}
default:return 0;}}
uint32_t ref_1487(Cpu& c){switch(c.pc){
case 0x405cf000:{ // INT_REM:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x405cf004;}
default:return 0;}}
uint32_t ref_1488(Cpu& c){switch(c.pc){
case 0x405d0000:{ // INT_REM:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0xffull));
return 0x405d0004;}
default:return 0;}}
uint32_t ref_1489(Cpu& c){switch(c.pc){
case 0x405d1000:{ // INT_REM:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x405d1004;}
default:return 0;}}
uint32_t ref_1490(Cpu& c){switch(c.pc){
case 0x405d2000:{ // INT_REM:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x405d2004;}
default:return 0;}}
uint32_t ref_1491(Cpu& c){switch(c.pc){
case 0x405d3000:{ // INT_REM:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x405d3004;}
default:return 0;}}
uint32_t ref_1492(Cpu& c){switch(c.pc){
case 0x405d4000:{ // INT_REM:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x405d4004;}
default:return 0;}}
uint32_t ref_1493(Cpu& c){switch(c.pc){
case 0x405d5000:{ // INT_REM:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x405d5004;}
default:return 0;}}
uint32_t ref_1494(Cpu& c){switch(c.pc){
case 0x405d6000:{ // INT_REM:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_REM,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x405d6004;}
default:return 0;}}
uint32_t ref_1495(Cpu& c){switch(c.pc){
case 0x405d7000:{ // INT_SRIGHT:4<-4,1:rr
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),r<1>(c,0x600)));
return 0x405d7004;}
default:return 0;}}
uint32_t ref_1496(Cpu& c){switch(c.pc){
case 0x405d8000:{ // INT_SRIGHT:4<-4,1:rc:k=0
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x405d8004;}
default:return 0;}}
uint32_t ref_1497(Cpu& c){switch(c.pc){
case 0x405d9000:{ // INT_SRIGHT:4<-4,1:rc:k=1
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x1ull));
return 0x405d9004;}
default:return 0;}}
uint32_t ref_1498(Cpu& c){switch(c.pc){
case 0x405da000:{ // INT_SRIGHT:4<-4,1:rc:k=2
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x2ull));
return 0x405da004;}
default:return 0;}}
uint32_t ref_1499(Cpu& c){switch(c.pc){
case 0x405db000:{ // INT_SRIGHT:4<-4,1:rc:k=3
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x3ull));
return 0x405db004;}
default:return 0;}}
uint32_t ref_1500(Cpu& c){switch(c.pc){
case 0x405dc000:{ // INT_SRIGHT:4<-4,1:rc:k=7
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x7ull));
return 0x405dc004;}
default:return 0;}}
uint32_t ref_1501(Cpu& c){switch(c.pc){
case 0x405dd000:{ // INT_SRIGHT:4<-4,1:rc:k=8
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x8ull));
return 0x405dd004;}
default:return 0;}}
uint32_t ref_1502(Cpu& c){switch(c.pc){
case 0x405de000:{ // INT_SRIGHT:4<-4,1:rc:k=31
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x1full));
return 0x405de004;}
default:return 0;}}
uint32_t ref_1503(Cpu& c){switch(c.pc){
case 0x405df000:{ // INT_SRIGHT:4<-4,1:rc:k=32
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x20ull));
return 0x405df004;}
default:return 0;}}
uint32_t ref_1504(Cpu& c){switch(c.pc){
case 0x405e0000:{ // INT_SRIGHT:4<-4,1:rc:k=63
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x3full));
return 0x405e0004;}
default:return 0;}}
uint32_t ref_1505(Cpu& c){switch(c.pc){
case 0x405e1000:{ // INT_SRIGHT:4<-4,1:rc:k=127
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x7full));
return 0x405e1004;}
default:return 0;}}
uint32_t ref_1506(Cpu& c){switch(c.pc){
case 0x405e2000:{ // INT_SRIGHT:4<-4,1:rc:k=128
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x80ull));
return 0x405e2004;}
default:return 0;}}
uint32_t ref_1507(Cpu& c){switch(c.pc){
case 0x405e3000:{ // INT_SRIGHT:4<-4,1:rc:k=255
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x405e3004;}
default:return 0;}}
uint32_t ref_1508(Cpu& c){switch(c.pc){
case 0x405e4000:{ // INT_SRIGHT:4<-4,1:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x405e4004;}
default:return 0;}}
uint32_t ref_1509(Cpu& c){switch(c.pc){
case 0x405e5000:{ // INT_SRIGHT:4<-4,1:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x405e5004;}
default:return 0;}}
uint32_t ref_1510(Cpu& c){switch(c.pc){
case 0x405e6000:{ // INT_SRIGHT:4<-4,1:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x405e6004;}
default:return 0;}}
uint32_t ref_1511(Cpu& c){switch(c.pc){
case 0x405e7000:{ // INT_SRIGHT:4<-4,1:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x405e7004;}
default:return 0;}}
uint32_t ref_1512(Cpu& c){switch(c.pc){
case 0x405e8000:{ // INT_SRIGHT:4<-4,1:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x405e8004;}
default:return 0;}}
uint32_t ref_1513(Cpu& c){switch(c.pc){
case 0x405e9000:{ // INT_SRIGHT:4<-4,1:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x405e9004;}
default:return 0;}}
uint32_t ref_1514(Cpu& c){switch(c.pc){
case 0x405ea000:{ // INT_SEXT:2<-1:r
wr<2>(c,0x400,eval<Op::INT_SEXT,2,1>(r<1>(c,0x500)));
return 0x405ea004;}
default:return 0;}}
uint32_t ref_1515(Cpu& c){switch(c.pc){
case 0x405eb000:{ // FLOAT2FLOAT:8<-10:r
wr<8>(c,0x400,float_op("FLOAT2FLOAT",r<10>(c,0x500),10,0x0ull,4,8));
return 0x405eb004;}
default:return 0;}}
uint32_t ref_1516(Cpu& c){switch(c.pc){
case 0x405ec000:{ // INT_NOTEQUAL:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x405ec004;}
default:return 0;}}
uint32_t ref_1517(Cpu& c){switch(c.pc){
case 0x405ed000:{ // INT_NOTEQUAL:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x405ed004;}
default:return 0;}}
uint32_t ref_1518(Cpu& c){switch(c.pc){
case 0x405ee000:{ // INT_NOTEQUAL:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x405ee004;}
default:return 0;}}
uint32_t ref_1519(Cpu& c){switch(c.pc){
case 0x405ef000:{ // INT_NOTEQUAL:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x405ef004;}
default:return 0;}}
uint32_t ref_1520(Cpu& c){switch(c.pc){
case 0x405f0000:{ // INT_NOTEQUAL:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x405f0004;}
default:return 0;}}
uint32_t ref_1521(Cpu& c){switch(c.pc){
case 0x405f1000:{ // INT_NOTEQUAL:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x405f1004;}
default:return 0;}}
uint32_t ref_1522(Cpu& c){switch(c.pc){
case 0x405f2000:{ // INT_NOTEQUAL:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x405f2004;}
default:return 0;}}
uint32_t ref_1523(Cpu& c){switch(c.pc){
case 0x405f3000:{ // INT_NOTEQUAL:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x1full));
return 0x405f3004;}
default:return 0;}}
uint32_t ref_1524(Cpu& c){switch(c.pc){
case 0x405f4000:{ // INT_NOTEQUAL:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x405f4004;}
default:return 0;}}
uint32_t ref_1525(Cpu& c){switch(c.pc){
case 0x405f5000:{ // INT_NOTEQUAL:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x3full));
return 0x405f5004;}
default:return 0;}}
uint32_t ref_1526(Cpu& c){switch(c.pc){
case 0x405f6000:{ // INT_NOTEQUAL:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x7full));
return 0x405f6004;}
default:return 0;}}
uint32_t ref_1527(Cpu& c){switch(c.pc){
case 0x405f7000:{ // INT_NOTEQUAL:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x405f7004;}
default:return 0;}}
uint32_t ref_1528(Cpu& c){switch(c.pc){
case 0x405f8000:{ // INT_NOTEQUAL:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0xffull));
return 0x405f8004;}
default:return 0;}}
uint32_t ref_1529(Cpu& c){switch(c.pc){
case 0x405f9000:{ // INT_NOTEQUAL:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x405f9004;}
default:return 0;}}
uint32_t ref_1530(Cpu& c){switch(c.pc){
case 0x405fa000:{ // INT_NOTEQUAL:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x405fa004;}
default:return 0;}}
uint32_t ref_1531(Cpu& c){switch(c.pc){
case 0x405fb000:{ // INT_NOTEQUAL:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x405fb004;}
default:return 0;}}
uint32_t ref_1532(Cpu& c){switch(c.pc){
case 0x405fc000:{ // INT_NOTEQUAL:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x405fc004;}
default:return 0;}}
uint32_t ref_1533(Cpu& c){switch(c.pc){
case 0x405fd000:{ // INT_NOTEQUAL:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x405fd004;}
default:return 0;}}
uint32_t ref_1534(Cpu& c){switch(c.pc){
case 0x405fe000:{ // INT_NOTEQUAL:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_NOTEQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x405fe004;}
default:return 0;}}
uint32_t ref_1535(Cpu& c){switch(c.pc){
case 0x405ff000:{ // INT_RIGHT:2<-2,4:rr
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),r<4>(c,0x600)));
return 0x405ff004;}
default:return 0;}}
uint32_t ref_1536(Cpu& c){switch(c.pc){
case 0x40600000:{ // INT_RIGHT:2<-2,4:rc:k=0
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x0ull));
return 0x40600004;}
default:return 0;}}
uint32_t ref_1537(Cpu& c){switch(c.pc){
case 0x40601000:{ // INT_RIGHT:2<-2,4:rc:k=1
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x1ull));
return 0x40601004;}
default:return 0;}}
uint32_t ref_1538(Cpu& c){switch(c.pc){
case 0x40602000:{ // INT_RIGHT:2<-2,4:rc:k=2
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x2ull));
return 0x40602004;}
default:return 0;}}
uint32_t ref_1539(Cpu& c){switch(c.pc){
case 0x40603000:{ // INT_RIGHT:2<-2,4:rc:k=3
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x3ull));
return 0x40603004;}
default:return 0;}}
uint32_t ref_1540(Cpu& c){switch(c.pc){
case 0x40604000:{ // INT_RIGHT:2<-2,4:rc:k=7
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x7ull));
return 0x40604004;}
default:return 0;}}
uint32_t ref_1541(Cpu& c){switch(c.pc){
case 0x40605000:{ // INT_RIGHT:2<-2,4:rc:k=8
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x8ull));
return 0x40605004;}
default:return 0;}}
uint32_t ref_1542(Cpu& c){switch(c.pc){
case 0x40606000:{ // INT_RIGHT:2<-2,4:rc:k=31
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x1full));
return 0x40606004;}
default:return 0;}}
uint32_t ref_1543(Cpu& c){switch(c.pc){
case 0x40607000:{ // INT_RIGHT:2<-2,4:rc:k=32
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x20ull));
return 0x40607004;}
default:return 0;}}
uint32_t ref_1544(Cpu& c){switch(c.pc){
case 0x40608000:{ // INT_RIGHT:2<-2,4:rc:k=63
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x3full));
return 0x40608004;}
default:return 0;}}
uint32_t ref_1545(Cpu& c){switch(c.pc){
case 0x40609000:{ // INT_RIGHT:2<-2,4:rc:k=127
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x7full));
return 0x40609004;}
default:return 0;}}
uint32_t ref_1546(Cpu& c){switch(c.pc){
case 0x4060a000:{ // INT_RIGHT:2<-2,4:rc:k=128
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x80ull));
return 0x4060a004;}
default:return 0;}}
uint32_t ref_1547(Cpu& c){switch(c.pc){
case 0x4060b000:{ // INT_RIGHT:2<-2,4:rc:k=255
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0xffull));
return 0x4060b004;}
default:return 0;}}
uint32_t ref_1548(Cpu& c){switch(c.pc){
case 0x4060c000:{ // INT_RIGHT:2<-2,4:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x7fffull));
return 0x4060c004;}
default:return 0;}}
uint32_t ref_1549(Cpu& c){switch(c.pc){
case 0x4060d000:{ // INT_RIGHT:2<-2,4:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x8000ull));
return 0x4060d004;}
default:return 0;}}
uint32_t ref_1550(Cpu& c){switch(c.pc){
case 0x4060e000:{ // INT_RIGHT:2<-2,4:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0xffffull));
return 0x4060e004;}
default:return 0;}}
uint32_t ref_1551(Cpu& c){switch(c.pc){
case 0x4060f000:{ // INT_RIGHT:2<-2,4:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x7fffffffull));
return 0x4060f004;}
default:return 0;}}
uint32_t ref_1552(Cpu& c){switch(c.pc){
case 0x40610000:{ // INT_RIGHT:2<-2,4:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0x80000000ull));
return 0x40610004;}
default:return 0;}}
uint32_t ref_1553(Cpu& c){switch(c.pc){
case 0x40611000:{ // INT_RIGHT:2<-2,4:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x500),0xffffffffull));
return 0x40611004;}
default:return 0;}}
uint32_t ref_1554(Cpu& c){switch(c.pc){
case 0x40612000:{ // ROUND:10<-10:r
wr<10>(c,0x400,float_op("ROUND",r<10>(c,0x500),10,0x0ull,4,10));
return 0x40612004;}
default:return 0;}}
uint32_t ref_1555(Cpu& c){switch(c.pc){
case 0x40613000:{ // TRUNC:4<-10:r
wr<4>(c,0x400,float_op("TRUNC",r<10>(c,0x500),10,0x0ull,4,4));
return 0x40613004;}
default:return 0;}}
uint32_t ref_1556(Cpu& c){switch(c.pc){
case 0x40614000:{ // TRUNC:2<-10:r
wr<2>(c,0x400,float_op("TRUNC",r<10>(c,0x500),10,0x0ull,4,2));
return 0x40614004;}
default:return 0;}}
uint32_t ref_1557(Cpu& c){switch(c.pc){
case 0x40615000:{ // INT_LEFT:1<-1,4:rr
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),r<4>(c,0x600)));
return 0x40615004;}
default:return 0;}}
uint32_t ref_1558(Cpu& c){switch(c.pc){
case 0x40616000:{ // INT_LEFT:1<-1,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x0ull));
return 0x40616004;}
default:return 0;}}
uint32_t ref_1559(Cpu& c){switch(c.pc){
case 0x40617000:{ // INT_LEFT:1<-1,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x1ull));
return 0x40617004;}
default:return 0;}}
uint32_t ref_1560(Cpu& c){switch(c.pc){
case 0x40618000:{ // INT_LEFT:1<-1,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x2ull));
return 0x40618004;}
default:return 0;}}
uint32_t ref_1561(Cpu& c){switch(c.pc){
case 0x40619000:{ // INT_LEFT:1<-1,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x3ull));
return 0x40619004;}
default:return 0;}}
uint32_t ref_1562(Cpu& c){switch(c.pc){
case 0x4061a000:{ // INT_LEFT:1<-1,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x7ull));
return 0x4061a004;}
default:return 0;}}
uint32_t ref_1563(Cpu& c){switch(c.pc){
case 0x4061b000:{ // INT_LEFT:1<-1,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x8ull));
return 0x4061b004;}
default:return 0;}}
uint32_t ref_1564(Cpu& c){switch(c.pc){
case 0x4061c000:{ // INT_LEFT:1<-1,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x1full));
return 0x4061c004;}
default:return 0;}}
uint32_t ref_1565(Cpu& c){switch(c.pc){
case 0x4061d000:{ // INT_LEFT:1<-1,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x20ull));
return 0x4061d004;}
default:return 0;}}
uint32_t ref_1566(Cpu& c){switch(c.pc){
case 0x4061e000:{ // INT_LEFT:1<-1,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x3full));
return 0x4061e004;}
default:return 0;}}
uint32_t ref_1567(Cpu& c){switch(c.pc){
case 0x4061f000:{ // INT_LEFT:1<-1,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x7full));
return 0x4061f004;}
default:return 0;}}
uint32_t ref_1568(Cpu& c){switch(c.pc){
case 0x40620000:{ // INT_LEFT:1<-1,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x80ull));
return 0x40620004;}
default:return 0;}}
uint32_t ref_1569(Cpu& c){switch(c.pc){
case 0x40621000:{ // INT_LEFT:1<-1,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0xffull));
return 0x40621004;}
default:return 0;}}
uint32_t ref_1570(Cpu& c){switch(c.pc){
case 0x40622000:{ // INT_LEFT:1<-1,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x7fffull));
return 0x40622004;}
default:return 0;}}
uint32_t ref_1571(Cpu& c){switch(c.pc){
case 0x40623000:{ // INT_LEFT:1<-1,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x8000ull));
return 0x40623004;}
default:return 0;}}
uint32_t ref_1572(Cpu& c){switch(c.pc){
case 0x40624000:{ // INT_LEFT:1<-1,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0xffffull));
return 0x40624004;}
default:return 0;}}
uint32_t ref_1573(Cpu& c){switch(c.pc){
case 0x40625000:{ // INT_LEFT:1<-1,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x7fffffffull));
return 0x40625004;}
default:return 0;}}
uint32_t ref_1574(Cpu& c){switch(c.pc){
case 0x40626000:{ // INT_LEFT:1<-1,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0x80000000ull));
return 0x40626004;}
default:return 0;}}
uint32_t ref_1575(Cpu& c){switch(c.pc){
case 0x40627000:{ // INT_LEFT:1<-1,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x500),0xffffffffull));
return 0x40627004;}
default:return 0;}}
uint32_t ref_1576(Cpu& c){switch(c.pc){
case 0x40628000:{ // INT_LEFT:1<-1,4:cr:k=0
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x0ull,r<4>(c,0x600)));
return 0x40628004;}
default:return 0;}}
uint32_t ref_1577(Cpu& c){switch(c.pc){
case 0x40629000:{ // INT_LEFT:1<-1,4:cr:k=1
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x1ull,r<4>(c,0x600)));
return 0x40629004;}
default:return 0;}}
uint32_t ref_1578(Cpu& c){switch(c.pc){
case 0x4062a000:{ // INT_LEFT:1<-1,4:cr:k=2
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x2ull,r<4>(c,0x600)));
return 0x4062a004;}
default:return 0;}}
uint32_t ref_1579(Cpu& c){switch(c.pc){
case 0x4062b000:{ // INT_LEFT:1<-1,4:cr:k=3
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x3ull,r<4>(c,0x600)));
return 0x4062b004;}
default:return 0;}}
uint32_t ref_1580(Cpu& c){switch(c.pc){
case 0x4062c000:{ // INT_LEFT:1<-1,4:cr:k=7
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x7ull,r<4>(c,0x600)));
return 0x4062c004;}
default:return 0;}}
uint32_t ref_1581(Cpu& c){switch(c.pc){
case 0x4062d000:{ // INT_LEFT:1<-1,4:cr:k=8
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x8ull,r<4>(c,0x600)));
return 0x4062d004;}
default:return 0;}}
uint32_t ref_1582(Cpu& c){switch(c.pc){
case 0x4062e000:{ // INT_LEFT:1<-1,4:cr:k=31
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x1full,r<4>(c,0x600)));
return 0x4062e004;}
default:return 0;}}
uint32_t ref_1583(Cpu& c){switch(c.pc){
case 0x4062f000:{ // INT_LEFT:1<-1,4:cr:k=32
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x20ull,r<4>(c,0x600)));
return 0x4062f004;}
default:return 0;}}
uint32_t ref_1584(Cpu& c){switch(c.pc){
case 0x40630000:{ // INT_LEFT:1<-1,4:cr:k=63
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x3full,r<4>(c,0x600)));
return 0x40630004;}
default:return 0;}}
uint32_t ref_1585(Cpu& c){switch(c.pc){
case 0x40631000:{ // INT_LEFT:1<-1,4:cr:k=127
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x7full,r<4>(c,0x600)));
return 0x40631004;}
default:return 0;}}
uint32_t ref_1586(Cpu& c){switch(c.pc){
case 0x40632000:{ // INT_LEFT:1<-1,4:cr:k=128
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x80ull,r<4>(c,0x600)));
return 0x40632004;}
default:return 0;}}
uint32_t ref_1587(Cpu& c){switch(c.pc){
case 0x40633000:{ // INT_LEFT:1<-1,4:cr:k=255
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0xffull,r<4>(c,0x600)));
return 0x40633004;}
default:return 0;}}
uint32_t ref_1588(Cpu& c){switch(c.pc){
case 0x40634000:{ // INT_LEFT:1<-1,4:cr:k=32767
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0xffull,r<4>(c,0x600)));
return 0x40634004;}
default:return 0;}}
uint32_t ref_1589(Cpu& c){switch(c.pc){
case 0x40635000:{ // INT_LEFT:1<-1,4:cr:k=32768
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x0ull,r<4>(c,0x600)));
return 0x40635004;}
default:return 0;}}
uint32_t ref_1590(Cpu& c){switch(c.pc){
case 0x40636000:{ // INT_LEFT:1<-1,4:cr:k=65535
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0xffull,r<4>(c,0x600)));
return 0x40636004;}
default:return 0;}}
uint32_t ref_1591(Cpu& c){switch(c.pc){
case 0x40637000:{ // INT_LEFT:1<-1,4:cr:k=2147483647
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0xffull,r<4>(c,0x600)));
return 0x40637004;}
default:return 0;}}
uint32_t ref_1592(Cpu& c){switch(c.pc){
case 0x40638000:{ // INT_LEFT:1<-1,4:cr:k=2147483648
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0x0ull,r<4>(c,0x600)));
return 0x40638004;}
default:return 0;}}
uint32_t ref_1593(Cpu& c){switch(c.pc){
case 0x40639000:{ // INT_LEFT:1<-1,4:cr:k=4294967295
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,4>(0xffull,r<4>(c,0x600)));
return 0x40639004;}
default:return 0;}}
uint32_t ref_1594(Cpu& c){switch(c.pc){
case 0x4063a000:{ // INT_RIGHT:1<-1,4:rr
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),r<4>(c,0x600)));
return 0x4063a004;}
default:return 0;}}
uint32_t ref_1595(Cpu& c){switch(c.pc){
case 0x4063b000:{ // INT_RIGHT:1<-1,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x0ull));
return 0x4063b004;}
default:return 0;}}
uint32_t ref_1596(Cpu& c){switch(c.pc){
case 0x4063c000:{ // INT_RIGHT:1<-1,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x1ull));
return 0x4063c004;}
default:return 0;}}
uint32_t ref_1597(Cpu& c){switch(c.pc){
case 0x4063d000:{ // INT_RIGHT:1<-1,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x2ull));
return 0x4063d004;}
default:return 0;}}
uint32_t ref_1598(Cpu& c){switch(c.pc){
case 0x4063e000:{ // INT_RIGHT:1<-1,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x3ull));
return 0x4063e004;}
default:return 0;}}
uint32_t ref_1599(Cpu& c){switch(c.pc){
case 0x4063f000:{ // INT_RIGHT:1<-1,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x7ull));
return 0x4063f004;}
default:return 0;}}
uint32_t ref_1600(Cpu& c){switch(c.pc){
case 0x40640000:{ // INT_RIGHT:1<-1,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x8ull));
return 0x40640004;}
default:return 0;}}
uint32_t ref_1601(Cpu& c){switch(c.pc){
case 0x40641000:{ // INT_RIGHT:1<-1,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x1full));
return 0x40641004;}
default:return 0;}}
uint32_t ref_1602(Cpu& c){switch(c.pc){
case 0x40642000:{ // INT_RIGHT:1<-1,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x20ull));
return 0x40642004;}
default:return 0;}}
uint32_t ref_1603(Cpu& c){switch(c.pc){
case 0x40643000:{ // INT_RIGHT:1<-1,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x3full));
return 0x40643004;}
default:return 0;}}
uint32_t ref_1604(Cpu& c){switch(c.pc){
case 0x40644000:{ // INT_RIGHT:1<-1,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x7full));
return 0x40644004;}
default:return 0;}}
uint32_t ref_1605(Cpu& c){switch(c.pc){
case 0x40645000:{ // INT_RIGHT:1<-1,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x80ull));
return 0x40645004;}
default:return 0;}}
uint32_t ref_1606(Cpu& c){switch(c.pc){
case 0x40646000:{ // INT_RIGHT:1<-1,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0xffull));
return 0x40646004;}
default:return 0;}}
uint32_t ref_1607(Cpu& c){switch(c.pc){
case 0x40647000:{ // INT_RIGHT:1<-1,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x7fffull));
return 0x40647004;}
default:return 0;}}
uint32_t ref_1608(Cpu& c){switch(c.pc){
case 0x40648000:{ // INT_RIGHT:1<-1,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x8000ull));
return 0x40648004;}
default:return 0;}}
uint32_t ref_1609(Cpu& c){switch(c.pc){
case 0x40649000:{ // INT_RIGHT:1<-1,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0xffffull));
return 0x40649004;}
default:return 0;}}
uint32_t ref_1610(Cpu& c){switch(c.pc){
case 0x4064a000:{ // INT_RIGHT:1<-1,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x7fffffffull));
return 0x4064a004;}
default:return 0;}}
uint32_t ref_1611(Cpu& c){switch(c.pc){
case 0x4064b000:{ // INT_RIGHT:1<-1,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0x80000000ull));
return 0x4064b004;}
default:return 0;}}
uint32_t ref_1612(Cpu& c){switch(c.pc){
case 0x4064c000:{ // INT_RIGHT:1<-1,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,4>(r<1>(c,0x500),0xffffffffull));
return 0x4064c004;}
default:return 0;}}
uint32_t ref_1613(Cpu& c){switch(c.pc){
case 0x4064d000:{ // INT_LEFT:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x4064d004;}
default:return 0;}}
uint32_t ref_1614(Cpu& c){switch(c.pc){
case 0x4064e000:{ // INT_LEFT:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4064e004;}
default:return 0;}}
uint32_t ref_1615(Cpu& c){switch(c.pc){
case 0x4064f000:{ // INT_LEFT:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x4064f004;}
default:return 0;}}
uint32_t ref_1616(Cpu& c){switch(c.pc){
case 0x40650000:{ // INT_LEFT:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40650004;}
default:return 0;}}
uint32_t ref_1617(Cpu& c){switch(c.pc){
case 0x40651000:{ // INT_LEFT:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x40651004;}
default:return 0;}}
uint32_t ref_1618(Cpu& c){switch(c.pc){
case 0x40652000:{ // INT_LEFT:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x40652004;}
default:return 0;}}
uint32_t ref_1619(Cpu& c){switch(c.pc){
case 0x40653000:{ // INT_LEFT:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x40653004;}
default:return 0;}}
uint32_t ref_1620(Cpu& c){switch(c.pc){
case 0x40654000:{ // INT_LEFT:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x1full));
return 0x40654004;}
default:return 0;}}
uint32_t ref_1621(Cpu& c){switch(c.pc){
case 0x40655000:{ // INT_LEFT:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x40655004;}
default:return 0;}}
uint32_t ref_1622(Cpu& c){switch(c.pc){
case 0x40656000:{ // INT_LEFT:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x3full));
return 0x40656004;}
default:return 0;}}
uint32_t ref_1623(Cpu& c){switch(c.pc){
case 0x40657000:{ // INT_LEFT:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40657004;}
default:return 0;}}
uint32_t ref_1624(Cpu& c){switch(c.pc){
case 0x40658000:{ // INT_LEFT:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40658004;}
default:return 0;}}
uint32_t ref_1625(Cpu& c){switch(c.pc){
case 0x40659000:{ // INT_LEFT:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40659004;}
default:return 0;}}
uint32_t ref_1626(Cpu& c){switch(c.pc){
case 0x4065a000:{ // INT_LEFT:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4065a004;}
default:return 0;}}
uint32_t ref_1627(Cpu& c){switch(c.pc){
case 0x4065b000:{ // INT_LEFT:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4065b004;}
default:return 0;}}
uint32_t ref_1628(Cpu& c){switch(c.pc){
case 0x4065c000:{ // INT_LEFT:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4065c004;}
default:return 0;}}
uint32_t ref_1629(Cpu& c){switch(c.pc){
case 0x4065d000:{ // INT_LEFT:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4065d004;}
default:return 0;}}
uint32_t ref_1630(Cpu& c){switch(c.pc){
case 0x4065e000:{ // INT_LEFT:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x4065e004;}
default:return 0;}}
uint32_t ref_1631(Cpu& c){switch(c.pc){
case 0x4065f000:{ // INT_LEFT:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_LEFT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x4065f004;}
default:return 0;}}
uint32_t ref_1632(Cpu& c){switch(c.pc){
case 0x40660000:{ // INT_RIGHT:4<-4,1:rr
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),r<1>(c,0x600)));
return 0x40660004;}
default:return 0;}}
uint32_t ref_1633(Cpu& c){switch(c.pc){
case 0x40661000:{ // INT_RIGHT:4<-4,1:rc:k=0
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x40661004;}
default:return 0;}}
uint32_t ref_1634(Cpu& c){switch(c.pc){
case 0x40662000:{ // INT_RIGHT:4<-4,1:rc:k=1
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x1ull));
return 0x40662004;}
default:return 0;}}
uint32_t ref_1635(Cpu& c){switch(c.pc){
case 0x40663000:{ // INT_RIGHT:4<-4,1:rc:k=2
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x2ull));
return 0x40663004;}
default:return 0;}}
uint32_t ref_1636(Cpu& c){switch(c.pc){
case 0x40664000:{ // INT_RIGHT:4<-4,1:rc:k=3
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x3ull));
return 0x40664004;}
default:return 0;}}
uint32_t ref_1637(Cpu& c){switch(c.pc){
case 0x40665000:{ // INT_RIGHT:4<-4,1:rc:k=7
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x7ull));
return 0x40665004;}
default:return 0;}}
uint32_t ref_1638(Cpu& c){switch(c.pc){
case 0x40666000:{ // INT_RIGHT:4<-4,1:rc:k=8
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x8ull));
return 0x40666004;}
default:return 0;}}
uint32_t ref_1639(Cpu& c){switch(c.pc){
case 0x40667000:{ // INT_RIGHT:4<-4,1:rc:k=31
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x1full));
return 0x40667004;}
default:return 0;}}
uint32_t ref_1640(Cpu& c){switch(c.pc){
case 0x40668000:{ // INT_RIGHT:4<-4,1:rc:k=32
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x20ull));
return 0x40668004;}
default:return 0;}}
uint32_t ref_1641(Cpu& c){switch(c.pc){
case 0x40669000:{ // INT_RIGHT:4<-4,1:rc:k=63
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x3full));
return 0x40669004;}
default:return 0;}}
uint32_t ref_1642(Cpu& c){switch(c.pc){
case 0x4066a000:{ // INT_RIGHT:4<-4,1:rc:k=127
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x7full));
return 0x4066a004;}
default:return 0;}}
uint32_t ref_1643(Cpu& c){switch(c.pc){
case 0x4066b000:{ // INT_RIGHT:4<-4,1:rc:k=128
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x80ull));
return 0x4066b004;}
default:return 0;}}
uint32_t ref_1644(Cpu& c){switch(c.pc){
case 0x4066c000:{ // INT_RIGHT:4<-4,1:rc:k=255
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x4066c004;}
default:return 0;}}
uint32_t ref_1645(Cpu& c){switch(c.pc){
case 0x4066d000:{ // INT_RIGHT:4<-4,1:rc:k=32767
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x4066d004;}
default:return 0;}}
uint32_t ref_1646(Cpu& c){switch(c.pc){
case 0x4066e000:{ // INT_RIGHT:4<-4,1:rc:k=32768
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x4066e004;}
default:return 0;}}
uint32_t ref_1647(Cpu& c){switch(c.pc){
case 0x4066f000:{ // INT_RIGHT:4<-4,1:rc:k=65535
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x4066f004;}
default:return 0;}}
uint32_t ref_1648(Cpu& c){switch(c.pc){
case 0x40670000:{ // INT_RIGHT:4<-4,1:rc:k=2147483647
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x40670004;}
default:return 0;}}
uint32_t ref_1649(Cpu& c){switch(c.pc){
case 0x40671000:{ // INT_RIGHT:4<-4,1:rc:k=2147483648
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0x0ull));
return 0x40671004;}
default:return 0;}}
uint32_t ref_1650(Cpu& c){switch(c.pc){
case 0x40672000:{ // INT_RIGHT:4<-4,1:rc:k=4294967295
wr<4>(c,0x400,eval<Op::INT_RIGHT,4,4,1>(r<4>(c,0x500),0xffull));
return 0x40672004;}
default:return 0;}}
uint32_t ref_1651(Cpu& c){switch(c.pc){
case 0x40673000:{ // INT_SRIGHT:2<-2,4:rr
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),r<4>(c,0x600)));
return 0x40673004;}
default:return 0;}}
uint32_t ref_1652(Cpu& c){switch(c.pc){
case 0x40674000:{ // INT_SRIGHT:2<-2,4:rc:k=0
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x0ull));
return 0x40674004;}
default:return 0;}}
uint32_t ref_1653(Cpu& c){switch(c.pc){
case 0x40675000:{ // INT_SRIGHT:2<-2,4:rc:k=1
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x1ull));
return 0x40675004;}
default:return 0;}}
uint32_t ref_1654(Cpu& c){switch(c.pc){
case 0x40676000:{ // INT_SRIGHT:2<-2,4:rc:k=2
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x2ull));
return 0x40676004;}
default:return 0;}}
uint32_t ref_1655(Cpu& c){switch(c.pc){
case 0x40677000:{ // INT_SRIGHT:2<-2,4:rc:k=3
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x3ull));
return 0x40677004;}
default:return 0;}}
uint32_t ref_1656(Cpu& c){switch(c.pc){
case 0x40678000:{ // INT_SRIGHT:2<-2,4:rc:k=7
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x7ull));
return 0x40678004;}
default:return 0;}}
uint32_t ref_1657(Cpu& c){switch(c.pc){
case 0x40679000:{ // INT_SRIGHT:2<-2,4:rc:k=8
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x8ull));
return 0x40679004;}
default:return 0;}}
uint32_t ref_1658(Cpu& c){switch(c.pc){
case 0x4067a000:{ // INT_SRIGHT:2<-2,4:rc:k=31
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x1full));
return 0x4067a004;}
default:return 0;}}
uint32_t ref_1659(Cpu& c){switch(c.pc){
case 0x4067b000:{ // INT_SRIGHT:2<-2,4:rc:k=32
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x20ull));
return 0x4067b004;}
default:return 0;}}
uint32_t ref_1660(Cpu& c){switch(c.pc){
case 0x4067c000:{ // INT_SRIGHT:2<-2,4:rc:k=63
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x3full));
return 0x4067c004;}
default:return 0;}}
uint32_t ref_1661(Cpu& c){switch(c.pc){
case 0x4067d000:{ // INT_SRIGHT:2<-2,4:rc:k=127
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x7full));
return 0x4067d004;}
default:return 0;}}
uint32_t ref_1662(Cpu& c){switch(c.pc){
case 0x4067e000:{ // INT_SRIGHT:2<-2,4:rc:k=128
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x80ull));
return 0x4067e004;}
default:return 0;}}
uint32_t ref_1663(Cpu& c){switch(c.pc){
case 0x4067f000:{ // INT_SRIGHT:2<-2,4:rc:k=255
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0xffull));
return 0x4067f004;}
default:return 0;}}
uint32_t ref_1664(Cpu& c){switch(c.pc){
case 0x40680000:{ // INT_SRIGHT:2<-2,4:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x7fffull));
return 0x40680004;}
default:return 0;}}
uint32_t ref_1665(Cpu& c){switch(c.pc){
case 0x40681000:{ // INT_SRIGHT:2<-2,4:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x8000ull));
return 0x40681004;}
default:return 0;}}
uint32_t ref_1666(Cpu& c){switch(c.pc){
case 0x40682000:{ // INT_SRIGHT:2<-2,4:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0xffffull));
return 0x40682004;}
default:return 0;}}
uint32_t ref_1667(Cpu& c){switch(c.pc){
case 0x40683000:{ // INT_SRIGHT:2<-2,4:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x7fffffffull));
return 0x40683004;}
default:return 0;}}
uint32_t ref_1668(Cpu& c){switch(c.pc){
case 0x40684000:{ // INT_SRIGHT:2<-2,4:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0x80000000ull));
return 0x40684004;}
default:return 0;}}
uint32_t ref_1669(Cpu& c){switch(c.pc){
case 0x40685000:{ // INT_SRIGHT:2<-2,4:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_SRIGHT,2,2,4>(r<2>(c,0x500),0xffffffffull));
return 0x40685004;}
default:return 0;}}
uint32_t ref_1670(Cpu& c){switch(c.pc){
case 0x40686000:{ // INT_RIGHT:1<-1,1:rr
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),r<1>(c,0x600)));
return 0x40686004;}
default:return 0;}}
uint32_t ref_1671(Cpu& c){switch(c.pc){
case 0x40687000:{ // INT_RIGHT:1<-1,1:rc:k=0
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40687004;}
default:return 0;}}
uint32_t ref_1672(Cpu& c){switch(c.pc){
case 0x40688000:{ // INT_RIGHT:1<-1,1:rc:k=1
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x1ull));
return 0x40688004;}
default:return 0;}}
uint32_t ref_1673(Cpu& c){switch(c.pc){
case 0x40689000:{ // INT_RIGHT:1<-1,1:rc:k=2
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x2ull));
return 0x40689004;}
default:return 0;}}
uint32_t ref_1674(Cpu& c){switch(c.pc){
case 0x4068a000:{ // INT_RIGHT:1<-1,1:rc:k=3
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x3ull));
return 0x4068a004;}
default:return 0;}}
uint32_t ref_1675(Cpu& c){switch(c.pc){
case 0x4068b000:{ // INT_RIGHT:1<-1,1:rc:k=7
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x7ull));
return 0x4068b004;}
default:return 0;}}
uint32_t ref_1676(Cpu& c){switch(c.pc){
case 0x4068c000:{ // INT_RIGHT:1<-1,1:rc:k=8
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x8ull));
return 0x4068c004;}
default:return 0;}}
uint32_t ref_1677(Cpu& c){switch(c.pc){
case 0x4068d000:{ // INT_RIGHT:1<-1,1:rc:k=31
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x1full));
return 0x4068d004;}
default:return 0;}}
uint32_t ref_1678(Cpu& c){switch(c.pc){
case 0x4068e000:{ // INT_RIGHT:1<-1,1:rc:k=32
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x20ull));
return 0x4068e004;}
default:return 0;}}
uint32_t ref_1679(Cpu& c){switch(c.pc){
case 0x4068f000:{ // INT_RIGHT:1<-1,1:rc:k=63
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x3full));
return 0x4068f004;}
default:return 0;}}
uint32_t ref_1680(Cpu& c){switch(c.pc){
case 0x40690000:{ // INT_RIGHT:1<-1,1:rc:k=127
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x7full));
return 0x40690004;}
default:return 0;}}
uint32_t ref_1681(Cpu& c){switch(c.pc){
case 0x40691000:{ // INT_RIGHT:1<-1,1:rc:k=128
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x80ull));
return 0x40691004;}
default:return 0;}}
uint32_t ref_1682(Cpu& c){switch(c.pc){
case 0x40692000:{ // INT_RIGHT:1<-1,1:rc:k=255
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40692004;}
default:return 0;}}
uint32_t ref_1683(Cpu& c){switch(c.pc){
case 0x40693000:{ // INT_RIGHT:1<-1,1:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40693004;}
default:return 0;}}
uint32_t ref_1684(Cpu& c){switch(c.pc){
case 0x40694000:{ // INT_RIGHT:1<-1,1:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40694004;}
default:return 0;}}
uint32_t ref_1685(Cpu& c){switch(c.pc){
case 0x40695000:{ // INT_RIGHT:1<-1,1:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40695004;}
default:return 0;}}
uint32_t ref_1686(Cpu& c){switch(c.pc){
case 0x40696000:{ // INT_RIGHT:1<-1,1:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40696004;}
default:return 0;}}
uint32_t ref_1687(Cpu& c){switch(c.pc){
case 0x40697000:{ // INT_RIGHT:1<-1,1:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0x0ull));
return 0x40697004;}
default:return 0;}}
uint32_t ref_1688(Cpu& c){switch(c.pc){
case 0x40698000:{ // INT_RIGHT:1<-1,1:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_RIGHT,1,1,1>(r<1>(c,0x500),0xffull));
return 0x40698004;}
default:return 0;}}
uint32_t ref_1689(Cpu& c){switch(c.pc){
case 0x40699000:{ // INT_MULT:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x40699004;}
default:return 0;}}
uint32_t ref_1690(Cpu& c){switch(c.pc){
case 0x4069a000:{ // INT_MULT:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x4069a004;}
default:return 0;}}
uint32_t ref_1691(Cpu& c){switch(c.pc){
case 0x4069b000:{ // INT_MULT:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x4069b004;}
default:return 0;}}
uint32_t ref_1692(Cpu& c){switch(c.pc){
case 0x4069c000:{ // INT_MULT:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x4069c004;}
default:return 0;}}
uint32_t ref_1693(Cpu& c){switch(c.pc){
case 0x4069d000:{ // INT_MULT:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x4069d004;}
default:return 0;}}
uint32_t ref_1694(Cpu& c){switch(c.pc){
case 0x4069e000:{ // INT_MULT:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x4069e004;}
default:return 0;}}
uint32_t ref_1695(Cpu& c){switch(c.pc){
case 0x4069f000:{ // INT_MULT:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x4069f004;}
default:return 0;}}
uint32_t ref_1696(Cpu& c){switch(c.pc){
case 0x406a0000:{ // INT_MULT:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x1full));
return 0x406a0004;}
default:return 0;}}
uint32_t ref_1697(Cpu& c){switch(c.pc){
case 0x406a1000:{ // INT_MULT:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x406a1004;}
default:return 0;}}
uint32_t ref_1698(Cpu& c){switch(c.pc){
case 0x406a2000:{ // INT_MULT:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x3full));
return 0x406a2004;}
default:return 0;}}
uint32_t ref_1699(Cpu& c){switch(c.pc){
case 0x406a3000:{ // INT_MULT:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x7full));
return 0x406a3004;}
default:return 0;}}
uint32_t ref_1700(Cpu& c){switch(c.pc){
case 0x406a4000:{ // INT_MULT:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x406a4004;}
default:return 0;}}
uint32_t ref_1701(Cpu& c){switch(c.pc){
case 0x406a5000:{ // INT_MULT:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0xffull));
return 0x406a5004;}
default:return 0;}}
uint32_t ref_1702(Cpu& c){switch(c.pc){
case 0x406a6000:{ // INT_MULT:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x406a6004;}
default:return 0;}}
uint32_t ref_1703(Cpu& c){switch(c.pc){
case 0x406a7000:{ // INT_MULT:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x406a7004;}
default:return 0;}}
uint32_t ref_1704(Cpu& c){switch(c.pc){
case 0x406a8000:{ // INT_MULT:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x406a8004;}
default:return 0;}}
uint32_t ref_1705(Cpu& c){switch(c.pc){
case 0x406a9000:{ // INT_MULT:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x406a9004;}
default:return 0;}}
uint32_t ref_1706(Cpu& c){switch(c.pc){
case 0x406aa000:{ // INT_MULT:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x406aa004;}
default:return 0;}}
uint32_t ref_1707(Cpu& c){switch(c.pc){
case 0x406ab000:{ // INT_MULT:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x406ab004;}
default:return 0;}}
uint32_t ref_1708(Cpu& c){switch(c.pc){
case 0x406ac000:{ // INT_2COMP:2<-2:r
wr<2>(c,0x400,eval<Op::INT_2COMP,2,2>(r<2>(c,0x500)));
return 0x406ac004;}
default:return 0;}}
uint32_t ref_1709(Cpu& c){switch(c.pc){
case 0x406ad000:{ // COPY:8<-8:r
wr<8>(c,0x400,eval<Op::COPY,8,8>(r<8>(c,0x500)));
return 0x406ad004;}
default:return 0;}}
uint32_t ref_1710(Cpu& c){switch(c.pc){
case 0x406ae000:{ // FLOAT_MULT:4<-4,4:rr
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,r<4>(c,0x600),4,4));
return 0x406ae004;}
default:return 0;}}
uint32_t ref_1711(Cpu& c){switch(c.pc){
case 0x406af000:{ // FLOAT_MULT:4<-4,4:rc:k=0
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x0ull,4,4));
return 0x406af004;}
default:return 0;}}
uint32_t ref_1712(Cpu& c){switch(c.pc){
case 0x406b0000:{ // FLOAT_MULT:4<-4,4:rc:k=1
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x1ull,4,4));
return 0x406b0004;}
default:return 0;}}
uint32_t ref_1713(Cpu& c){switch(c.pc){
case 0x406b1000:{ // FLOAT_MULT:4<-4,4:rc:k=2
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x2ull,4,4));
return 0x406b1004;}
default:return 0;}}
uint32_t ref_1714(Cpu& c){switch(c.pc){
case 0x406b2000:{ // FLOAT_MULT:4<-4,4:rc:k=3
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x3ull,4,4));
return 0x406b2004;}
default:return 0;}}
uint32_t ref_1715(Cpu& c){switch(c.pc){
case 0x406b3000:{ // FLOAT_MULT:4<-4,4:rc:k=7
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x7ull,4,4));
return 0x406b3004;}
default:return 0;}}
uint32_t ref_1716(Cpu& c){switch(c.pc){
case 0x406b4000:{ // FLOAT_MULT:4<-4,4:rc:k=8
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x8ull,4,4));
return 0x406b4004;}
default:return 0;}}
uint32_t ref_1717(Cpu& c){switch(c.pc){
case 0x406b5000:{ // FLOAT_MULT:4<-4,4:rc:k=31
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x1full,4,4));
return 0x406b5004;}
default:return 0;}}
uint32_t ref_1718(Cpu& c){switch(c.pc){
case 0x406b6000:{ // FLOAT_MULT:4<-4,4:rc:k=32
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x20ull,4,4));
return 0x406b6004;}
default:return 0;}}
uint32_t ref_1719(Cpu& c){switch(c.pc){
case 0x406b7000:{ // FLOAT_MULT:4<-4,4:rc:k=63
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x3full,4,4));
return 0x406b7004;}
default:return 0;}}
uint32_t ref_1720(Cpu& c){switch(c.pc){
case 0x406b8000:{ // FLOAT_MULT:4<-4,4:rc:k=127
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x7full,4,4));
return 0x406b8004;}
default:return 0;}}
uint32_t ref_1721(Cpu& c){switch(c.pc){
case 0x406b9000:{ // FLOAT_MULT:4<-4,4:rc:k=128
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x80ull,4,4));
return 0x406b9004;}
default:return 0;}}
uint32_t ref_1722(Cpu& c){switch(c.pc){
case 0x406ba000:{ // FLOAT_MULT:4<-4,4:rc:k=255
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0xffull,4,4));
return 0x406ba004;}
default:return 0;}}
uint32_t ref_1723(Cpu& c){switch(c.pc){
case 0x406bb000:{ // FLOAT_MULT:4<-4,4:rc:k=32767
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x7fffull,4,4));
return 0x406bb004;}
default:return 0;}}
uint32_t ref_1724(Cpu& c){switch(c.pc){
case 0x406bc000:{ // FLOAT_MULT:4<-4,4:rc:k=32768
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x8000ull,4,4));
return 0x406bc004;}
default:return 0;}}
uint32_t ref_1725(Cpu& c){switch(c.pc){
case 0x406bd000:{ // FLOAT_MULT:4<-4,4:rc:k=65535
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0xffffull,4,4));
return 0x406bd004;}
default:return 0;}}
uint32_t ref_1726(Cpu& c){switch(c.pc){
case 0x406be000:{ // FLOAT_MULT:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x7fffffffull,4,4));
return 0x406be004;}
default:return 0;}}
uint32_t ref_1727(Cpu& c){switch(c.pc){
case 0x406bf000:{ // FLOAT_MULT:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0x80000000ull,4,4));
return 0x406bf004;}
default:return 0;}}
uint32_t ref_1728(Cpu& c){switch(c.pc){
case 0x406c0000:{ // FLOAT_MULT:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,float_op("FLOAT_MULT",r<4>(c,0x500),4,0xffffffffull,4,4));
return 0x406c0004;}
default:return 0;}}
uint32_t ref_1729(Cpu& c){switch(c.pc){
case 0x406c1000:{ // COPY:16<-16:r
wr<16>(c,0x400,eval<Op::COPY,16,16>(r<16>(c,0x500)));
return 0x406c1004;}
default:return 0;}}
uint32_t ref_1730(Cpu& c){switch(c.pc){
case 0x406c2000:{ // FLOAT_ADD:4<-4,4:rr
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,r<4>(c,0x600),4,4));
return 0x406c2004;}
default:return 0;}}
uint32_t ref_1731(Cpu& c){switch(c.pc){
case 0x406c3000:{ // FLOAT_ADD:4<-4,4:rc:k=0
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x0ull,4,4));
return 0x406c3004;}
default:return 0;}}
uint32_t ref_1732(Cpu& c){switch(c.pc){
case 0x406c4000:{ // FLOAT_ADD:4<-4,4:rc:k=1
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x1ull,4,4));
return 0x406c4004;}
default:return 0;}}
uint32_t ref_1733(Cpu& c){switch(c.pc){
case 0x406c5000:{ // FLOAT_ADD:4<-4,4:rc:k=2
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x2ull,4,4));
return 0x406c5004;}
default:return 0;}}
uint32_t ref_1734(Cpu& c){switch(c.pc){
case 0x406c6000:{ // FLOAT_ADD:4<-4,4:rc:k=3
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x3ull,4,4));
return 0x406c6004;}
default:return 0;}}
uint32_t ref_1735(Cpu& c){switch(c.pc){
case 0x406c7000:{ // FLOAT_ADD:4<-4,4:rc:k=7
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x7ull,4,4));
return 0x406c7004;}
default:return 0;}}
uint32_t ref_1736(Cpu& c){switch(c.pc){
case 0x406c8000:{ // FLOAT_ADD:4<-4,4:rc:k=8
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x8ull,4,4));
return 0x406c8004;}
default:return 0;}}
uint32_t ref_1737(Cpu& c){switch(c.pc){
case 0x406c9000:{ // FLOAT_ADD:4<-4,4:rc:k=31
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x1full,4,4));
return 0x406c9004;}
default:return 0;}}
uint32_t ref_1738(Cpu& c){switch(c.pc){
case 0x406ca000:{ // FLOAT_ADD:4<-4,4:rc:k=32
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x20ull,4,4));
return 0x406ca004;}
default:return 0;}}
uint32_t ref_1739(Cpu& c){switch(c.pc){
case 0x406cb000:{ // FLOAT_ADD:4<-4,4:rc:k=63
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x3full,4,4));
return 0x406cb004;}
default:return 0;}}
uint32_t ref_1740(Cpu& c){switch(c.pc){
case 0x406cc000:{ // FLOAT_ADD:4<-4,4:rc:k=127
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x7full,4,4));
return 0x406cc004;}
default:return 0;}}
uint32_t ref_1741(Cpu& c){switch(c.pc){
case 0x406cd000:{ // FLOAT_ADD:4<-4,4:rc:k=128
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x80ull,4,4));
return 0x406cd004;}
default:return 0;}}
uint32_t ref_1742(Cpu& c){switch(c.pc){
case 0x406ce000:{ // FLOAT_ADD:4<-4,4:rc:k=255
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0xffull,4,4));
return 0x406ce004;}
default:return 0;}}
uint32_t ref_1743(Cpu& c){switch(c.pc){
case 0x406cf000:{ // FLOAT_ADD:4<-4,4:rc:k=32767
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x7fffull,4,4));
return 0x406cf004;}
default:return 0;}}
uint32_t ref_1744(Cpu& c){switch(c.pc){
case 0x406d0000:{ // FLOAT_ADD:4<-4,4:rc:k=32768
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x8000ull,4,4));
return 0x406d0004;}
default:return 0;}}
uint32_t ref_1745(Cpu& c){switch(c.pc){
case 0x406d1000:{ // FLOAT_ADD:4<-4,4:rc:k=65535
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0xffffull,4,4));
return 0x406d1004;}
default:return 0;}}
uint32_t ref_1746(Cpu& c){switch(c.pc){
case 0x406d2000:{ // FLOAT_ADD:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x7fffffffull,4,4));
return 0x406d2004;}
default:return 0;}}
uint32_t ref_1747(Cpu& c){switch(c.pc){
case 0x406d3000:{ // FLOAT_ADD:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0x80000000ull,4,4));
return 0x406d3004;}
default:return 0;}}
uint32_t ref_1748(Cpu& c){switch(c.pc){
case 0x406d4000:{ // FLOAT_ADD:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,float_op("FLOAT_ADD",r<4>(c,0x500),4,0xffffffffull,4,4));
return 0x406d4004;}
default:return 0;}}
uint32_t ref_1749(Cpu& c){switch(c.pc){
case 0x406d5000:{ // FLOAT_SUB:4<-4,4:rr
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,r<4>(c,0x600),4,4));
return 0x406d5004;}
default:return 0;}}
uint32_t ref_1750(Cpu& c){switch(c.pc){
case 0x406d6000:{ // FLOAT_SUB:4<-4,4:rc:k=0
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x0ull,4,4));
return 0x406d6004;}
default:return 0;}}
uint32_t ref_1751(Cpu& c){switch(c.pc){
case 0x406d7000:{ // FLOAT_SUB:4<-4,4:rc:k=1
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x1ull,4,4));
return 0x406d7004;}
default:return 0;}}
uint32_t ref_1752(Cpu& c){switch(c.pc){
case 0x406d8000:{ // FLOAT_SUB:4<-4,4:rc:k=2
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x2ull,4,4));
return 0x406d8004;}
default:return 0;}}
uint32_t ref_1753(Cpu& c){switch(c.pc){
case 0x406d9000:{ // FLOAT_SUB:4<-4,4:rc:k=3
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x3ull,4,4));
return 0x406d9004;}
default:return 0;}}
uint32_t ref_1754(Cpu& c){switch(c.pc){
case 0x406da000:{ // FLOAT_SUB:4<-4,4:rc:k=7
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x7ull,4,4));
return 0x406da004;}
default:return 0;}}
uint32_t ref_1755(Cpu& c){switch(c.pc){
case 0x406db000:{ // FLOAT_SUB:4<-4,4:rc:k=8
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x8ull,4,4));
return 0x406db004;}
default:return 0;}}
uint32_t ref_1756(Cpu& c){switch(c.pc){
case 0x406dc000:{ // FLOAT_SUB:4<-4,4:rc:k=31
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x1full,4,4));
return 0x406dc004;}
default:return 0;}}
uint32_t ref_1757(Cpu& c){switch(c.pc){
case 0x406dd000:{ // FLOAT_SUB:4<-4,4:rc:k=32
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x20ull,4,4));
return 0x406dd004;}
default:return 0;}}
uint32_t ref_1758(Cpu& c){switch(c.pc){
case 0x406de000:{ // FLOAT_SUB:4<-4,4:rc:k=63
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x3full,4,4));
return 0x406de004;}
default:return 0;}}
uint32_t ref_1759(Cpu& c){switch(c.pc){
case 0x406df000:{ // FLOAT_SUB:4<-4,4:rc:k=127
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x7full,4,4));
return 0x406df004;}
default:return 0;}}
uint32_t ref_1760(Cpu& c){switch(c.pc){
case 0x406e0000:{ // FLOAT_SUB:4<-4,4:rc:k=128
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x80ull,4,4));
return 0x406e0004;}
default:return 0;}}
uint32_t ref_1761(Cpu& c){switch(c.pc){
case 0x406e1000:{ // FLOAT_SUB:4<-4,4:rc:k=255
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0xffull,4,4));
return 0x406e1004;}
default:return 0;}}
uint32_t ref_1762(Cpu& c){switch(c.pc){
case 0x406e2000:{ // FLOAT_SUB:4<-4,4:rc:k=32767
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x7fffull,4,4));
return 0x406e2004;}
default:return 0;}}
uint32_t ref_1763(Cpu& c){switch(c.pc){
case 0x406e3000:{ // FLOAT_SUB:4<-4,4:rc:k=32768
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x8000ull,4,4));
return 0x406e3004;}
default:return 0;}}
uint32_t ref_1764(Cpu& c){switch(c.pc){
case 0x406e4000:{ // FLOAT_SUB:4<-4,4:rc:k=65535
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0xffffull,4,4));
return 0x406e4004;}
default:return 0;}}
uint32_t ref_1765(Cpu& c){switch(c.pc){
case 0x406e5000:{ // FLOAT_SUB:4<-4,4:rc:k=2147483647
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x7fffffffull,4,4));
return 0x406e5004;}
default:return 0;}}
uint32_t ref_1766(Cpu& c){switch(c.pc){
case 0x406e6000:{ // FLOAT_SUB:4<-4,4:rc:k=2147483648
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0x80000000ull,4,4));
return 0x406e6004;}
default:return 0;}}
uint32_t ref_1767(Cpu& c){switch(c.pc){
case 0x406e7000:{ // FLOAT_SUB:4<-4,4:rc:k=4294967295
wr<4>(c,0x400,float_op("FLOAT_SUB",r<4>(c,0x500),4,0xffffffffull,4,4));
return 0x406e7004;}
default:return 0;}}
uint32_t ref_1768(Cpu& c){switch(c.pc){
case 0x406e8000:{ // FLOAT_NAN:1<-4:r
wr<1>(c,0x400,float_op("FLOAT_NAN",r<4>(c,0x500),4,0x0ull,4,1));
return 0x406e8004;}
default:return 0;}}
uint32_t ref_1769(Cpu& c){switch(c.pc){
case 0x406e9000:{ // FLOAT_EQUAL:1<-4,4:rr
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,r<4>(c,0x600),4,1));
return 0x406e9004;}
default:return 0;}}
uint32_t ref_1770(Cpu& c){switch(c.pc){
case 0x406ea000:{ // FLOAT_EQUAL:1<-4,4:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x0ull,4,1));
return 0x406ea004;}
default:return 0;}}
uint32_t ref_1771(Cpu& c){switch(c.pc){
case 0x406eb000:{ // FLOAT_EQUAL:1<-4,4:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x1ull,4,1));
return 0x406eb004;}
default:return 0;}}
uint32_t ref_1772(Cpu& c){switch(c.pc){
case 0x406ec000:{ // FLOAT_EQUAL:1<-4,4:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x2ull,4,1));
return 0x406ec004;}
default:return 0;}}
uint32_t ref_1773(Cpu& c){switch(c.pc){
case 0x406ed000:{ // FLOAT_EQUAL:1<-4,4:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x3ull,4,1));
return 0x406ed004;}
default:return 0;}}
uint32_t ref_1774(Cpu& c){switch(c.pc){
case 0x406ee000:{ // FLOAT_EQUAL:1<-4,4:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x7ull,4,1));
return 0x406ee004;}
default:return 0;}}
uint32_t ref_1775(Cpu& c){switch(c.pc){
case 0x406ef000:{ // FLOAT_EQUAL:1<-4,4:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x8ull,4,1));
return 0x406ef004;}
default:return 0;}}
uint32_t ref_1776(Cpu& c){switch(c.pc){
case 0x406f0000:{ // FLOAT_EQUAL:1<-4,4:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x1full,4,1));
return 0x406f0004;}
default:return 0;}}
uint32_t ref_1777(Cpu& c){switch(c.pc){
case 0x406f1000:{ // FLOAT_EQUAL:1<-4,4:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x20ull,4,1));
return 0x406f1004;}
default:return 0;}}
uint32_t ref_1778(Cpu& c){switch(c.pc){
case 0x406f2000:{ // FLOAT_EQUAL:1<-4,4:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x3full,4,1));
return 0x406f2004;}
default:return 0;}}
uint32_t ref_1779(Cpu& c){switch(c.pc){
case 0x406f3000:{ // FLOAT_EQUAL:1<-4,4:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x7full,4,1));
return 0x406f3004;}
default:return 0;}}
uint32_t ref_1780(Cpu& c){switch(c.pc){
case 0x406f4000:{ // FLOAT_EQUAL:1<-4,4:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x80ull,4,1));
return 0x406f4004;}
default:return 0;}}
uint32_t ref_1781(Cpu& c){switch(c.pc){
case 0x406f5000:{ // FLOAT_EQUAL:1<-4,4:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0xffull,4,1));
return 0x406f5004;}
default:return 0;}}
uint32_t ref_1782(Cpu& c){switch(c.pc){
case 0x406f6000:{ // FLOAT_EQUAL:1<-4,4:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x7fffull,4,1));
return 0x406f6004;}
default:return 0;}}
uint32_t ref_1783(Cpu& c){switch(c.pc){
case 0x406f7000:{ // FLOAT_EQUAL:1<-4,4:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x8000ull,4,1));
return 0x406f7004;}
default:return 0;}}
uint32_t ref_1784(Cpu& c){switch(c.pc){
case 0x406f8000:{ // FLOAT_EQUAL:1<-4,4:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0xffffull,4,1));
return 0x406f8004;}
default:return 0;}}
uint32_t ref_1785(Cpu& c){switch(c.pc){
case 0x406f9000:{ // FLOAT_EQUAL:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x7fffffffull,4,1));
return 0x406f9004;}
default:return 0;}}
uint32_t ref_1786(Cpu& c){switch(c.pc){
case 0x406fa000:{ // FLOAT_EQUAL:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0x80000000ull,4,1));
return 0x406fa004;}
default:return 0;}}
uint32_t ref_1787(Cpu& c){switch(c.pc){
case 0x406fb000:{ // FLOAT_EQUAL:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<4>(c,0x500),4,0xffffffffull,4,1));
return 0x406fb004;}
default:return 0;}}
uint32_t ref_1788(Cpu& c){switch(c.pc){
case 0x406fc000:{ // FLOAT_LESS:1<-4,4:rr
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,r<4>(c,0x600),4,1));
return 0x406fc004;}
default:return 0;}}
uint32_t ref_1789(Cpu& c){switch(c.pc){
case 0x406fd000:{ // FLOAT_LESS:1<-4,4:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x0ull,4,1));
return 0x406fd004;}
default:return 0;}}
uint32_t ref_1790(Cpu& c){switch(c.pc){
case 0x406fe000:{ // FLOAT_LESS:1<-4,4:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x1ull,4,1));
return 0x406fe004;}
default:return 0;}}
uint32_t ref_1791(Cpu& c){switch(c.pc){
case 0x406ff000:{ // FLOAT_LESS:1<-4,4:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x2ull,4,1));
return 0x406ff004;}
default:return 0;}}
uint32_t ref_1792(Cpu& c){switch(c.pc){
case 0x40700000:{ // FLOAT_LESS:1<-4,4:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x3ull,4,1));
return 0x40700004;}
default:return 0;}}
uint32_t ref_1793(Cpu& c){switch(c.pc){
case 0x40701000:{ // FLOAT_LESS:1<-4,4:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x7ull,4,1));
return 0x40701004;}
default:return 0;}}
uint32_t ref_1794(Cpu& c){switch(c.pc){
case 0x40702000:{ // FLOAT_LESS:1<-4,4:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x8ull,4,1));
return 0x40702004;}
default:return 0;}}
uint32_t ref_1795(Cpu& c){switch(c.pc){
case 0x40703000:{ // FLOAT_LESS:1<-4,4:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x1full,4,1));
return 0x40703004;}
default:return 0;}}
uint32_t ref_1796(Cpu& c){switch(c.pc){
case 0x40704000:{ // FLOAT_LESS:1<-4,4:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x20ull,4,1));
return 0x40704004;}
default:return 0;}}
uint32_t ref_1797(Cpu& c){switch(c.pc){
case 0x40705000:{ // FLOAT_LESS:1<-4,4:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x3full,4,1));
return 0x40705004;}
default:return 0;}}
uint32_t ref_1798(Cpu& c){switch(c.pc){
case 0x40706000:{ // FLOAT_LESS:1<-4,4:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x7full,4,1));
return 0x40706004;}
default:return 0;}}
uint32_t ref_1799(Cpu& c){switch(c.pc){
case 0x40707000:{ // FLOAT_LESS:1<-4,4:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x80ull,4,1));
return 0x40707004;}
default:return 0;}}
uint32_t ref_1800(Cpu& c){switch(c.pc){
case 0x40708000:{ // FLOAT_LESS:1<-4,4:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0xffull,4,1));
return 0x40708004;}
default:return 0;}}
uint32_t ref_1801(Cpu& c){switch(c.pc){
case 0x40709000:{ // FLOAT_LESS:1<-4,4:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x7fffull,4,1));
return 0x40709004;}
default:return 0;}}
uint32_t ref_1802(Cpu& c){switch(c.pc){
case 0x4070a000:{ // FLOAT_LESS:1<-4,4:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x8000ull,4,1));
return 0x4070a004;}
default:return 0;}}
uint32_t ref_1803(Cpu& c){switch(c.pc){
case 0x4070b000:{ // FLOAT_LESS:1<-4,4:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0xffffull,4,1));
return 0x4070b004;}
default:return 0;}}
uint32_t ref_1804(Cpu& c){switch(c.pc){
case 0x4070c000:{ // FLOAT_LESS:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x7fffffffull,4,1));
return 0x4070c004;}
default:return 0;}}
uint32_t ref_1805(Cpu& c){switch(c.pc){
case 0x4070d000:{ // FLOAT_LESS:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0x80000000ull,4,1));
return 0x4070d004;}
default:return 0;}}
uint32_t ref_1806(Cpu& c){switch(c.pc){
case 0x4070e000:{ // FLOAT_LESS:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_LESS",r<4>(c,0x500),4,0xffffffffull,4,1));
return 0x4070e004;}
default:return 0;}}
uint32_t ref_1807(Cpu& c){switch(c.pc){
case 0x4070f000:{ // INT_XOR:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x4070f004;}
default:return 0;}}
uint32_t ref_1808(Cpu& c){switch(c.pc){
case 0x40710000:{ // INT_XOR:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x40710004;}
default:return 0;}}
uint32_t ref_1809(Cpu& c){switch(c.pc){
case 0x40711000:{ // INT_XOR:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x40711004;}
default:return 0;}}
uint32_t ref_1810(Cpu& c){switch(c.pc){
case 0x40712000:{ // INT_XOR:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x40712004;}
default:return 0;}}
uint32_t ref_1811(Cpu& c){switch(c.pc){
case 0x40713000:{ // INT_XOR:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x40713004;}
default:return 0;}}
uint32_t ref_1812(Cpu& c){switch(c.pc){
case 0x40714000:{ // INT_XOR:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x40714004;}
default:return 0;}}
uint32_t ref_1813(Cpu& c){switch(c.pc){
case 0x40715000:{ // INT_XOR:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x40715004;}
default:return 0;}}
uint32_t ref_1814(Cpu& c){switch(c.pc){
case 0x40716000:{ // INT_XOR:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x1full));
return 0x40716004;}
default:return 0;}}
uint32_t ref_1815(Cpu& c){switch(c.pc){
case 0x40717000:{ // INT_XOR:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x40717004;}
default:return 0;}}
uint32_t ref_1816(Cpu& c){switch(c.pc){
case 0x40718000:{ // INT_XOR:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x3full));
return 0x40718004;}
default:return 0;}}
uint32_t ref_1817(Cpu& c){switch(c.pc){
case 0x40719000:{ // INT_XOR:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x7full));
return 0x40719004;}
default:return 0;}}
uint32_t ref_1818(Cpu& c){switch(c.pc){
case 0x4071a000:{ // INT_XOR:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x4071a004;}
default:return 0;}}
uint32_t ref_1819(Cpu& c){switch(c.pc){
case 0x4071b000:{ // INT_XOR:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0xffull));
return 0x4071b004;}
default:return 0;}}
uint32_t ref_1820(Cpu& c){switch(c.pc){
case 0x4071c000:{ // INT_XOR:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x4071c004;}
default:return 0;}}
uint32_t ref_1821(Cpu& c){switch(c.pc){
case 0x4071d000:{ // INT_XOR:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x4071d004;}
default:return 0;}}
uint32_t ref_1822(Cpu& c){switch(c.pc){
case 0x4071e000:{ // INT_XOR:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x4071e004;}
default:return 0;}}
uint32_t ref_1823(Cpu& c){switch(c.pc){
case 0x4071f000:{ // INT_XOR:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x4071f004;}
default:return 0;}}
uint32_t ref_1824(Cpu& c){switch(c.pc){
case 0x40720000:{ // INT_XOR:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x40720004;}
default:return 0;}}
uint32_t ref_1825(Cpu& c){switch(c.pc){
case 0x40721000:{ // INT_XOR:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x40721004;}
default:return 0;}}
uint32_t ref_1826(Cpu& c){switch(c.pc){
case 0x40722000:{ // INT_AND:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x40722004;}
default:return 0;}}
uint32_t ref_1827(Cpu& c){switch(c.pc){
case 0x40723000:{ // INT_AND:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x40723004;}
default:return 0;}}
uint32_t ref_1828(Cpu& c){switch(c.pc){
case 0x40724000:{ // INT_AND:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x40724004;}
default:return 0;}}
uint32_t ref_1829(Cpu& c){switch(c.pc){
case 0x40725000:{ // INT_AND:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x40725004;}
default:return 0;}}
uint32_t ref_1830(Cpu& c){switch(c.pc){
case 0x40726000:{ // INT_AND:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x40726004;}
default:return 0;}}
uint32_t ref_1831(Cpu& c){switch(c.pc){
case 0x40727000:{ // INT_AND:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x40727004;}
default:return 0;}}
uint32_t ref_1832(Cpu& c){switch(c.pc){
case 0x40728000:{ // INT_AND:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x40728004;}
default:return 0;}}
uint32_t ref_1833(Cpu& c){switch(c.pc){
case 0x40729000:{ // INT_AND:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x1full));
return 0x40729004;}
default:return 0;}}
uint32_t ref_1834(Cpu& c){switch(c.pc){
case 0x4072a000:{ // INT_AND:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x4072a004;}
default:return 0;}}
uint32_t ref_1835(Cpu& c){switch(c.pc){
case 0x4072b000:{ // INT_AND:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x3full));
return 0x4072b004;}
default:return 0;}}
uint32_t ref_1836(Cpu& c){switch(c.pc){
case 0x4072c000:{ // INT_AND:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x7full));
return 0x4072c004;}
default:return 0;}}
uint32_t ref_1837(Cpu& c){switch(c.pc){
case 0x4072d000:{ // INT_AND:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x4072d004;}
default:return 0;}}
uint32_t ref_1838(Cpu& c){switch(c.pc){
case 0x4072e000:{ // INT_AND:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0xffull));
return 0x4072e004;}
default:return 0;}}
uint32_t ref_1839(Cpu& c){switch(c.pc){
case 0x4072f000:{ // INT_AND:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x4072f004;}
default:return 0;}}
uint32_t ref_1840(Cpu& c){switch(c.pc){
case 0x40730000:{ // INT_AND:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x40730004;}
default:return 0;}}
uint32_t ref_1841(Cpu& c){switch(c.pc){
case 0x40731000:{ // INT_AND:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x40731004;}
default:return 0;}}
uint32_t ref_1842(Cpu& c){switch(c.pc){
case 0x40732000:{ // INT_AND:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x40732004;}
default:return 0;}}
uint32_t ref_1843(Cpu& c){switch(c.pc){
case 0x40733000:{ // INT_AND:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x40733004;}
default:return 0;}}
uint32_t ref_1844(Cpu& c){switch(c.pc){
case 0x40734000:{ // INT_AND:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_AND,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x40734004;}
default:return 0;}}
uint32_t ref_1845(Cpu& c){switch(c.pc){
case 0x40735000:{ // INT_NEGATE:8<-8:r
wr<8>(c,0x400,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x500)));
return 0x40735004;}
default:return 0;}}
uint32_t ref_1846(Cpu& c){switch(c.pc){
case 0x40736000:{ // INT2FLOAT:4<-4:r
wr<4>(c,0x400,float_op("INT2FLOAT",r<4>(c,0x500),4,0x0ull,4,4));
return 0x40736004;}
default:return 0;}}
uint32_t ref_1847(Cpu& c){switch(c.pc){
case 0x40737000:{ // INT_XOR:16<-16,16:rr
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),r<16>(c,0x600)));
return 0x40737004;}
default:return 0;}}
uint32_t ref_1848(Cpu& c){switch(c.pc){
case 0x40738000:{ // INT_XOR:16<-16,16:rc:k=0
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x0ull));
return 0x40738004;}
default:return 0;}}
uint32_t ref_1849(Cpu& c){switch(c.pc){
case 0x40739000:{ // INT_XOR:16<-16,16:rc:k=1
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x1ull));
return 0x40739004;}
default:return 0;}}
uint32_t ref_1850(Cpu& c){switch(c.pc){
case 0x4073a000:{ // INT_XOR:16<-16,16:rc:k=2
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x2ull));
return 0x4073a004;}
default:return 0;}}
uint32_t ref_1851(Cpu& c){switch(c.pc){
case 0x4073b000:{ // INT_XOR:16<-16,16:rc:k=3
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x3ull));
return 0x4073b004;}
default:return 0;}}
uint32_t ref_1852(Cpu& c){switch(c.pc){
case 0x4073c000:{ // INT_XOR:16<-16,16:rc:k=7
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x7ull));
return 0x4073c004;}
default:return 0;}}
uint32_t ref_1853(Cpu& c){switch(c.pc){
case 0x4073d000:{ // INT_XOR:16<-16,16:rc:k=8
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x8ull));
return 0x4073d004;}
default:return 0;}}
uint32_t ref_1854(Cpu& c){switch(c.pc){
case 0x4073e000:{ // INT_XOR:16<-16,16:rc:k=31
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x1full));
return 0x4073e004;}
default:return 0;}}
uint32_t ref_1855(Cpu& c){switch(c.pc){
case 0x4073f000:{ // INT_XOR:16<-16,16:rc:k=32
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x20ull));
return 0x4073f004;}
default:return 0;}}
uint32_t ref_1856(Cpu& c){switch(c.pc){
case 0x40740000:{ // INT_XOR:16<-16,16:rc:k=63
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x3full));
return 0x40740004;}
default:return 0;}}
uint32_t ref_1857(Cpu& c){switch(c.pc){
case 0x40741000:{ // INT_XOR:16<-16,16:rc:k=127
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x7full));
return 0x40741004;}
default:return 0;}}
uint32_t ref_1858(Cpu& c){switch(c.pc){
case 0x40742000:{ // INT_XOR:16<-16,16:rc:k=128
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x80ull));
return 0x40742004;}
default:return 0;}}
uint32_t ref_1859(Cpu& c){switch(c.pc){
case 0x40743000:{ // INT_XOR:16<-16,16:rc:k=255
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0xffull));
return 0x40743004;}
default:return 0;}}
uint32_t ref_1860(Cpu& c){switch(c.pc){
case 0x40744000:{ // INT_XOR:16<-16,16:rc:k=32767
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x7fffull));
return 0x40744004;}
default:return 0;}}
uint32_t ref_1861(Cpu& c){switch(c.pc){
case 0x40745000:{ // INT_XOR:16<-16,16:rc:k=32768
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x8000ull));
return 0x40745004;}
default:return 0;}}
uint32_t ref_1862(Cpu& c){switch(c.pc){
case 0x40746000:{ // INT_XOR:16<-16,16:rc:k=65535
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0xffffull));
return 0x40746004;}
default:return 0;}}
uint32_t ref_1863(Cpu& c){switch(c.pc){
case 0x40747000:{ // INT_XOR:16<-16,16:rc:k=2147483647
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x7fffffffull));
return 0x40747004;}
default:return 0;}}
uint32_t ref_1864(Cpu& c){switch(c.pc){
case 0x40748000:{ // INT_XOR:16<-16,16:rc:k=2147483648
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0x80000000ull));
return 0x40748004;}
default:return 0;}}
uint32_t ref_1865(Cpu& c){switch(c.pc){
case 0x40749000:{ // INT_XOR:16<-16,16:rc:k=4294967295
wr<16>(c,0x400,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x500),0xffffffffull));
return 0x40749004;}
default:return 0;}}
uint32_t ref_1866(Cpu& c){switch(c.pc){
case 0x4074a000:{ // INT_AND:16<-16,16:rr
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),r<16>(c,0x600)));
return 0x4074a004;}
default:return 0;}}
uint32_t ref_1867(Cpu& c){switch(c.pc){
case 0x4074b000:{ // INT_AND:16<-16,16:rc:k=0
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x0ull));
return 0x4074b004;}
default:return 0;}}
uint32_t ref_1868(Cpu& c){switch(c.pc){
case 0x4074c000:{ // INT_AND:16<-16,16:rc:k=1
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x1ull));
return 0x4074c004;}
default:return 0;}}
uint32_t ref_1869(Cpu& c){switch(c.pc){
case 0x4074d000:{ // INT_AND:16<-16,16:rc:k=2
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x2ull));
return 0x4074d004;}
default:return 0;}}
uint32_t ref_1870(Cpu& c){switch(c.pc){
case 0x4074e000:{ // INT_AND:16<-16,16:rc:k=3
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x3ull));
return 0x4074e004;}
default:return 0;}}
uint32_t ref_1871(Cpu& c){switch(c.pc){
case 0x4074f000:{ // INT_AND:16<-16,16:rc:k=7
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x7ull));
return 0x4074f004;}
default:return 0;}}
uint32_t ref_1872(Cpu& c){switch(c.pc){
case 0x40750000:{ // INT_AND:16<-16,16:rc:k=8
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x8ull));
return 0x40750004;}
default:return 0;}}
uint32_t ref_1873(Cpu& c){switch(c.pc){
case 0x40751000:{ // INT_AND:16<-16,16:rc:k=31
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x1full));
return 0x40751004;}
default:return 0;}}
uint32_t ref_1874(Cpu& c){switch(c.pc){
case 0x40752000:{ // INT_AND:16<-16,16:rc:k=32
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x20ull));
return 0x40752004;}
default:return 0;}}
uint32_t ref_1875(Cpu& c){switch(c.pc){
case 0x40753000:{ // INT_AND:16<-16,16:rc:k=63
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x3full));
return 0x40753004;}
default:return 0;}}
uint32_t ref_1876(Cpu& c){switch(c.pc){
case 0x40754000:{ // INT_AND:16<-16,16:rc:k=127
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x7full));
return 0x40754004;}
default:return 0;}}
uint32_t ref_1877(Cpu& c){switch(c.pc){
case 0x40755000:{ // INT_AND:16<-16,16:rc:k=128
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x80ull));
return 0x40755004;}
default:return 0;}}
uint32_t ref_1878(Cpu& c){switch(c.pc){
case 0x40756000:{ // INT_AND:16<-16,16:rc:k=255
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0xffull));
return 0x40756004;}
default:return 0;}}
uint32_t ref_1879(Cpu& c){switch(c.pc){
case 0x40757000:{ // INT_AND:16<-16,16:rc:k=32767
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x7fffull));
return 0x40757004;}
default:return 0;}}
uint32_t ref_1880(Cpu& c){switch(c.pc){
case 0x40758000:{ // INT_AND:16<-16,16:rc:k=32768
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x8000ull));
return 0x40758004;}
default:return 0;}}
uint32_t ref_1881(Cpu& c){switch(c.pc){
case 0x40759000:{ // INT_AND:16<-16,16:rc:k=65535
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0xffffull));
return 0x40759004;}
default:return 0;}}
uint32_t ref_1882(Cpu& c){switch(c.pc){
case 0x4075a000:{ // INT_AND:16<-16,16:rc:k=2147483647
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x7fffffffull));
return 0x4075a004;}
default:return 0;}}
uint32_t ref_1883(Cpu& c){switch(c.pc){
case 0x4075b000:{ // INT_AND:16<-16,16:rc:k=2147483648
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0x80000000ull));
return 0x4075b004;}
default:return 0;}}
uint32_t ref_1884(Cpu& c){switch(c.pc){
case 0x4075c000:{ // INT_AND:16<-16,16:rc:k=4294967295
wr<16>(c,0x400,eval<Op::INT_AND,16,16,16>(r<16>(c,0x500),0xffffffffull));
return 0x4075c004;}
default:return 0;}}
uint32_t ref_1885(Cpu& c){switch(c.pc){
case 0x4075d000:{ // INT_RIGHT:16<-16,4:rr
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),r<4>(c,0x600)));
return 0x4075d004;}
default:return 0;}}
uint32_t ref_1886(Cpu& c){switch(c.pc){
case 0x4075e000:{ // INT_RIGHT:16<-16,4:rc:k=0
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x0ull));
return 0x4075e004;}
default:return 0;}}
uint32_t ref_1887(Cpu& c){switch(c.pc){
case 0x4075f000:{ // INT_RIGHT:16<-16,4:rc:k=1
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x1ull));
return 0x4075f004;}
default:return 0;}}
uint32_t ref_1888(Cpu& c){switch(c.pc){
case 0x40760000:{ // INT_RIGHT:16<-16,4:rc:k=2
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x2ull));
return 0x40760004;}
default:return 0;}}
uint32_t ref_1889(Cpu& c){switch(c.pc){
case 0x40761000:{ // INT_RIGHT:16<-16,4:rc:k=3
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x3ull));
return 0x40761004;}
default:return 0;}}
uint32_t ref_1890(Cpu& c){switch(c.pc){
case 0x40762000:{ // INT_RIGHT:16<-16,4:rc:k=7
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x7ull));
return 0x40762004;}
default:return 0;}}
uint32_t ref_1891(Cpu& c){switch(c.pc){
case 0x40763000:{ // INT_RIGHT:16<-16,4:rc:k=8
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x8ull));
return 0x40763004;}
default:return 0;}}
uint32_t ref_1892(Cpu& c){switch(c.pc){
case 0x40764000:{ // INT_RIGHT:16<-16,4:rc:k=31
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x1full));
return 0x40764004;}
default:return 0;}}
uint32_t ref_1893(Cpu& c){switch(c.pc){
case 0x40765000:{ // INT_RIGHT:16<-16,4:rc:k=32
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x20ull));
return 0x40765004;}
default:return 0;}}
uint32_t ref_1894(Cpu& c){switch(c.pc){
case 0x40766000:{ // INT_RIGHT:16<-16,4:rc:k=63
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x3full));
return 0x40766004;}
default:return 0;}}
uint32_t ref_1895(Cpu& c){switch(c.pc){
case 0x40767000:{ // INT_RIGHT:16<-16,4:rc:k=127
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x7full));
return 0x40767004;}
default:return 0;}}
uint32_t ref_1896(Cpu& c){switch(c.pc){
case 0x40768000:{ // INT_RIGHT:16<-16,4:rc:k=128
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x80ull));
return 0x40768004;}
default:return 0;}}
uint32_t ref_1897(Cpu& c){switch(c.pc){
case 0x40769000:{ // INT_RIGHT:16<-16,4:rc:k=255
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0xffull));
return 0x40769004;}
default:return 0;}}
uint32_t ref_1898(Cpu& c){switch(c.pc){
case 0x4076a000:{ // INT_RIGHT:16<-16,4:rc:k=32767
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x7fffull));
return 0x4076a004;}
default:return 0;}}
uint32_t ref_1899(Cpu& c){switch(c.pc){
case 0x4076b000:{ // INT_RIGHT:16<-16,4:rc:k=32768
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x8000ull));
return 0x4076b004;}
default:return 0;}}
uint32_t ref_1900(Cpu& c){switch(c.pc){
case 0x4076c000:{ // INT_RIGHT:16<-16,4:rc:k=65535
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0xffffull));
return 0x4076c004;}
default:return 0;}}
uint32_t ref_1901(Cpu& c){switch(c.pc){
case 0x4076d000:{ // INT_RIGHT:16<-16,4:rc:k=2147483647
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x7fffffffull));
return 0x4076d004;}
default:return 0;}}
uint32_t ref_1902(Cpu& c){switch(c.pc){
case 0x4076e000:{ // INT_RIGHT:16<-16,4:rc:k=2147483648
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0x80000000ull));
return 0x4076e004;}
default:return 0;}}
uint32_t ref_1903(Cpu& c){switch(c.pc){
case 0x4076f000:{ // INT_RIGHT:16<-16,4:rc:k=4294967295
wr<16>(c,0x400,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x500),0xffffffffull));
return 0x4076f004;}
default:return 0;}}
uint32_t ref_1904(Cpu& c){switch(c.pc){
case 0x40770000:{ // SUBPIECE:1<-16,4:rr:k=0
wr<1>(c,0x400,eval<Op::SUBPIECE,1,16,4>(r<16>(c,0x500),r<4>(c,0x600)));
return 0x40770004;}
default:return 0;}}
uint32_t ref_1905(Cpu& c){switch(c.pc){
case 0x40771000:{ // SUBPIECE:1<-16,4:rc:k=0
wr<1>(c,0x400,eval<Op::SUBPIECE,1,16,4>(r<16>(c,0x500),0x0ull));
return 0x40771004;}
default:return 0;}}
uint32_t ref_1906(Cpu& c){switch(c.pc){
case 0x40772000:{ // INT_NEGATE:16<-16:r
wr<16>(c,0x400,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x500)));
return 0x40772004;}
default:return 0;}}
uint32_t ref_1907(Cpu& c){switch(c.pc){
case 0x40773000:{ // INT_OR:16<-16,16:rr
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),r<16>(c,0x600)));
return 0x40773004;}
default:return 0;}}
uint32_t ref_1908(Cpu& c){switch(c.pc){
case 0x40774000:{ // INT_OR:16<-16,16:rc:k=0
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x0ull));
return 0x40774004;}
default:return 0;}}
uint32_t ref_1909(Cpu& c){switch(c.pc){
case 0x40775000:{ // INT_OR:16<-16,16:rc:k=1
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x1ull));
return 0x40775004;}
default:return 0;}}
uint32_t ref_1910(Cpu& c){switch(c.pc){
case 0x40776000:{ // INT_OR:16<-16,16:rc:k=2
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x2ull));
return 0x40776004;}
default:return 0;}}
uint32_t ref_1911(Cpu& c){switch(c.pc){
case 0x40777000:{ // INT_OR:16<-16,16:rc:k=3
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x3ull));
return 0x40777004;}
default:return 0;}}
uint32_t ref_1912(Cpu& c){switch(c.pc){
case 0x40778000:{ // INT_OR:16<-16,16:rc:k=7
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x7ull));
return 0x40778004;}
default:return 0;}}
uint32_t ref_1913(Cpu& c){switch(c.pc){
case 0x40779000:{ // INT_OR:16<-16,16:rc:k=8
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x8ull));
return 0x40779004;}
default:return 0;}}
uint32_t ref_1914(Cpu& c){switch(c.pc){
case 0x4077a000:{ // INT_OR:16<-16,16:rc:k=31
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x1full));
return 0x4077a004;}
default:return 0;}}
uint32_t ref_1915(Cpu& c){switch(c.pc){
case 0x4077b000:{ // INT_OR:16<-16,16:rc:k=32
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x20ull));
return 0x4077b004;}
default:return 0;}}
uint32_t ref_1916(Cpu& c){switch(c.pc){
case 0x4077c000:{ // INT_OR:16<-16,16:rc:k=63
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x3full));
return 0x4077c004;}
default:return 0;}}
uint32_t ref_1917(Cpu& c){switch(c.pc){
case 0x4077d000:{ // INT_OR:16<-16,16:rc:k=127
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x7full));
return 0x4077d004;}
default:return 0;}}
uint32_t ref_1918(Cpu& c){switch(c.pc){
case 0x4077e000:{ // INT_OR:16<-16,16:rc:k=128
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x80ull));
return 0x4077e004;}
default:return 0;}}
uint32_t ref_1919(Cpu& c){switch(c.pc){
case 0x4077f000:{ // INT_OR:16<-16,16:rc:k=255
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0xffull));
return 0x4077f004;}
default:return 0;}}
uint32_t ref_1920(Cpu& c){switch(c.pc){
case 0x40780000:{ // INT_OR:16<-16,16:rc:k=32767
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x7fffull));
return 0x40780004;}
default:return 0;}}
uint32_t ref_1921(Cpu& c){switch(c.pc){
case 0x40781000:{ // INT_OR:16<-16,16:rc:k=32768
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x8000ull));
return 0x40781004;}
default:return 0;}}
uint32_t ref_1922(Cpu& c){switch(c.pc){
case 0x40782000:{ // INT_OR:16<-16,16:rc:k=65535
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0xffffull));
return 0x40782004;}
default:return 0;}}
uint32_t ref_1923(Cpu& c){switch(c.pc){
case 0x40783000:{ // INT_OR:16<-16,16:rc:k=2147483647
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x7fffffffull));
return 0x40783004;}
default:return 0;}}
uint32_t ref_1924(Cpu& c){switch(c.pc){
case 0x40784000:{ // INT_OR:16<-16,16:rc:k=2147483648
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0x80000000ull));
return 0x40784004;}
default:return 0;}}
uint32_t ref_1925(Cpu& c){switch(c.pc){
case 0x40785000:{ // INT_OR:16<-16,16:rc:k=4294967295
wr<16>(c,0x400,eval<Op::INT_OR,16,16,16>(r<16>(c,0x500),0xffffffffull));
return 0x40785004;}
default:return 0;}}
uint32_t ref_1926(Cpu& c){switch(c.pc){
case 0x40786000:{ // INT_RIGHT:8<-8,4:rr
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),r<4>(c,0x600)));
return 0x40786004;}
default:return 0;}}
uint32_t ref_1927(Cpu& c){switch(c.pc){
case 0x40787000:{ // INT_RIGHT:8<-8,4:rc:k=0
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x0ull));
return 0x40787004;}
default:return 0;}}
uint32_t ref_1928(Cpu& c){switch(c.pc){
case 0x40788000:{ // INT_RIGHT:8<-8,4:rc:k=1
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x1ull));
return 0x40788004;}
default:return 0;}}
uint32_t ref_1929(Cpu& c){switch(c.pc){
case 0x40789000:{ // INT_RIGHT:8<-8,4:rc:k=2
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x2ull));
return 0x40789004;}
default:return 0;}}
uint32_t ref_1930(Cpu& c){switch(c.pc){
case 0x4078a000:{ // INT_RIGHT:8<-8,4:rc:k=3
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x3ull));
return 0x4078a004;}
default:return 0;}}
uint32_t ref_1931(Cpu& c){switch(c.pc){
case 0x4078b000:{ // INT_RIGHT:8<-8,4:rc:k=7
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x7ull));
return 0x4078b004;}
default:return 0;}}
uint32_t ref_1932(Cpu& c){switch(c.pc){
case 0x4078c000:{ // INT_RIGHT:8<-8,4:rc:k=8
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x8ull));
return 0x4078c004;}
default:return 0;}}
uint32_t ref_1933(Cpu& c){switch(c.pc){
case 0x4078d000:{ // INT_RIGHT:8<-8,4:rc:k=31
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x1full));
return 0x4078d004;}
default:return 0;}}
uint32_t ref_1934(Cpu& c){switch(c.pc){
case 0x4078e000:{ // INT_RIGHT:8<-8,4:rc:k=32
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x20ull));
return 0x4078e004;}
default:return 0;}}
uint32_t ref_1935(Cpu& c){switch(c.pc){
case 0x4078f000:{ // INT_RIGHT:8<-8,4:rc:k=63
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x3full));
return 0x4078f004;}
default:return 0;}}
uint32_t ref_1936(Cpu& c){switch(c.pc){
case 0x40790000:{ // INT_RIGHT:8<-8,4:rc:k=127
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x7full));
return 0x40790004;}
default:return 0;}}
uint32_t ref_1937(Cpu& c){switch(c.pc){
case 0x40791000:{ // INT_RIGHT:8<-8,4:rc:k=128
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x80ull));
return 0x40791004;}
default:return 0;}}
uint32_t ref_1938(Cpu& c){switch(c.pc){
case 0x40792000:{ // INT_RIGHT:8<-8,4:rc:k=255
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0xffull));
return 0x40792004;}
default:return 0;}}
uint32_t ref_1939(Cpu& c){switch(c.pc){
case 0x40793000:{ // INT_RIGHT:8<-8,4:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x7fffull));
return 0x40793004;}
default:return 0;}}
uint32_t ref_1940(Cpu& c){switch(c.pc){
case 0x40794000:{ // INT_RIGHT:8<-8,4:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x8000ull));
return 0x40794004;}
default:return 0;}}
uint32_t ref_1941(Cpu& c){switch(c.pc){
case 0x40795000:{ // INT_RIGHT:8<-8,4:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0xffffull));
return 0x40795004;}
default:return 0;}}
uint32_t ref_1942(Cpu& c){switch(c.pc){
case 0x40796000:{ // INT_RIGHT:8<-8,4:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x7fffffffull));
return 0x40796004;}
default:return 0;}}
uint32_t ref_1943(Cpu& c){switch(c.pc){
case 0x40797000:{ // INT_RIGHT:8<-8,4:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0x80000000ull));
return 0x40797004;}
default:return 0;}}
uint32_t ref_1944(Cpu& c){switch(c.pc){
case 0x40798000:{ // INT_RIGHT:8<-8,4:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x500),0xffffffffull));
return 0x40798004;}
default:return 0;}}
uint32_t ref_1945(Cpu& c){switch(c.pc){
case 0x40799000:{ // SUBPIECE:1<-8,4:rr:k=0
wr<1>(c,0x400,eval<Op::SUBPIECE,1,8,4>(r<8>(c,0x500),r<4>(c,0x600)));
return 0x40799004;}
default:return 0;}}
uint32_t ref_1946(Cpu& c){switch(c.pc){
case 0x4079a000:{ // SUBPIECE:1<-8,4:rc:k=0
wr<1>(c,0x400,eval<Op::SUBPIECE,1,8,4>(r<8>(c,0x500),0x0ull));
return 0x4079a004;}
default:return 0;}}
uint32_t ref_1947(Cpu& c){switch(c.pc){
case 0x4079b000:{ // INT_LEFT:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x4079b004;}
default:return 0;}}
uint32_t ref_1948(Cpu& c){switch(c.pc){
case 0x4079c000:{ // INT_LEFT:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x4079c004;}
default:return 0;}}
uint32_t ref_1949(Cpu& c){switch(c.pc){
case 0x4079d000:{ // INT_LEFT:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x4079d004;}
default:return 0;}}
uint32_t ref_1950(Cpu& c){switch(c.pc){
case 0x4079e000:{ // INT_LEFT:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x4079e004;}
default:return 0;}}
uint32_t ref_1951(Cpu& c){switch(c.pc){
case 0x4079f000:{ // INT_LEFT:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x4079f004;}
default:return 0;}}
uint32_t ref_1952(Cpu& c){switch(c.pc){
case 0x407a0000:{ // INT_LEFT:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x407a0004;}
default:return 0;}}
uint32_t ref_1953(Cpu& c){switch(c.pc){
case 0x407a1000:{ // INT_LEFT:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x407a1004;}
default:return 0;}}
uint32_t ref_1954(Cpu& c){switch(c.pc){
case 0x407a2000:{ // INT_LEFT:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x1full));
return 0x407a2004;}
default:return 0;}}
uint32_t ref_1955(Cpu& c){switch(c.pc){
case 0x407a3000:{ // INT_LEFT:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x407a3004;}
default:return 0;}}
uint32_t ref_1956(Cpu& c){switch(c.pc){
case 0x407a4000:{ // INT_LEFT:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x3full));
return 0x407a4004;}
default:return 0;}}
uint32_t ref_1957(Cpu& c){switch(c.pc){
case 0x407a5000:{ // INT_LEFT:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x7full));
return 0x407a5004;}
default:return 0;}}
uint32_t ref_1958(Cpu& c){switch(c.pc){
case 0x407a6000:{ // INT_LEFT:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x407a6004;}
default:return 0;}}
uint32_t ref_1959(Cpu& c){switch(c.pc){
case 0x407a7000:{ // INT_LEFT:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0xffull));
return 0x407a7004;}
default:return 0;}}
uint32_t ref_1960(Cpu& c){switch(c.pc){
case 0x407a8000:{ // INT_LEFT:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x407a8004;}
default:return 0;}}
uint32_t ref_1961(Cpu& c){switch(c.pc){
case 0x407a9000:{ // INT_LEFT:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x407a9004;}
default:return 0;}}
uint32_t ref_1962(Cpu& c){switch(c.pc){
case 0x407aa000:{ // INT_LEFT:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x407aa004;}
default:return 0;}}
uint32_t ref_1963(Cpu& c){switch(c.pc){
case 0x407ab000:{ // INT_LEFT:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x407ab004;}
default:return 0;}}
uint32_t ref_1964(Cpu& c){switch(c.pc){
case 0x407ac000:{ // INT_LEFT:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x407ac004;}
default:return 0;}}
uint32_t ref_1965(Cpu& c){switch(c.pc){
case 0x407ad000:{ // INT_LEFT:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x407ad004;}
default:return 0;}}
uint32_t ref_1966(Cpu& c){switch(c.pc){
case 0x407ae000:{ // SUBPIECE:2<-4,4:rr:k=0
wr<2>(c,0x400,eval<Op::SUBPIECE,2,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x407ae004;}
default:return 0;}}
uint32_t ref_1967(Cpu& c){switch(c.pc){
case 0x407af000:{ // SUBPIECE:2<-4,4:rr:k=2
wr<2>(c,0x400,eval<Op::SUBPIECE,2,4,4>(r<4>(c,0x500),r<4>(c,0x600)));
return 0x407af004;}
default:return 0;}}
uint32_t ref_1968(Cpu& c){switch(c.pc){
case 0x407b0000:{ // SUBPIECE:2<-4,4:rc:k=0
wr<2>(c,0x400,eval<Op::SUBPIECE,2,4,4>(r<4>(c,0x500),0x0ull));
return 0x407b0004;}
default:return 0;}}
uint32_t ref_1969(Cpu& c){switch(c.pc){
case 0x407b1000:{ // SUBPIECE:2<-4,4:rc:k=2
wr<2>(c,0x400,eval<Op::SUBPIECE,2,4,4>(r<4>(c,0x500),0x2ull));
return 0x407b1004;}
default:return 0;}}
uint32_t ref_1970(Cpu& c){switch(c.pc){
case 0x407b2000:{ // FLOAT_NOTEQUAL:1<-4,4:rr
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,r<4>(c,0x600),4,1));
return 0x407b2004;}
default:return 0;}}
uint32_t ref_1971(Cpu& c){switch(c.pc){
case 0x407b3000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x0ull,4,1));
return 0x407b3004;}
default:return 0;}}
uint32_t ref_1972(Cpu& c){switch(c.pc){
case 0x407b4000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x1ull,4,1));
return 0x407b4004;}
default:return 0;}}
uint32_t ref_1973(Cpu& c){switch(c.pc){
case 0x407b5000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x2ull,4,1));
return 0x407b5004;}
default:return 0;}}
uint32_t ref_1974(Cpu& c){switch(c.pc){
case 0x407b6000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x3ull,4,1));
return 0x407b6004;}
default:return 0;}}
uint32_t ref_1975(Cpu& c){switch(c.pc){
case 0x407b7000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x7ull,4,1));
return 0x407b7004;}
default:return 0;}}
uint32_t ref_1976(Cpu& c){switch(c.pc){
case 0x407b8000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x8ull,4,1));
return 0x407b8004;}
default:return 0;}}
uint32_t ref_1977(Cpu& c){switch(c.pc){
case 0x407b9000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x1full,4,1));
return 0x407b9004;}
default:return 0;}}
uint32_t ref_1978(Cpu& c){switch(c.pc){
case 0x407ba000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x20ull,4,1));
return 0x407ba004;}
default:return 0;}}
uint32_t ref_1979(Cpu& c){switch(c.pc){
case 0x407bb000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x3full,4,1));
return 0x407bb004;}
default:return 0;}}
uint32_t ref_1980(Cpu& c){switch(c.pc){
case 0x407bc000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x7full,4,1));
return 0x407bc004;}
default:return 0;}}
uint32_t ref_1981(Cpu& c){switch(c.pc){
case 0x407bd000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x80ull,4,1));
return 0x407bd004;}
default:return 0;}}
uint32_t ref_1982(Cpu& c){switch(c.pc){
case 0x407be000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0xffull,4,1));
return 0x407be004;}
default:return 0;}}
uint32_t ref_1983(Cpu& c){switch(c.pc){
case 0x407bf000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x7fffull,4,1));
return 0x407bf004;}
default:return 0;}}
uint32_t ref_1984(Cpu& c){switch(c.pc){
case 0x407c0000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x8000ull,4,1));
return 0x407c0004;}
default:return 0;}}
uint32_t ref_1985(Cpu& c){switch(c.pc){
case 0x407c1000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0xffffull,4,1));
return 0x407c1004;}
default:return 0;}}
uint32_t ref_1986(Cpu& c){switch(c.pc){
case 0x407c2000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x7fffffffull,4,1));
return 0x407c2004;}
default:return 0;}}
uint32_t ref_1987(Cpu& c){switch(c.pc){
case 0x407c3000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0x80000000ull,4,1));
return 0x407c3004;}
default:return 0;}}
uint32_t ref_1988(Cpu& c){switch(c.pc){
case 0x407c4000:{ // FLOAT_NOTEQUAL:1<-4,4:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<4>(c,0x500),4,0xffffffffull,4,1));
return 0x407c4004;}
default:return 0;}}
uint32_t ref_1989(Cpu& c){switch(c.pc){
case 0x407c5000:{ // INT_DIV:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x407c5004;}
default:return 0;}}
uint32_t ref_1990(Cpu& c){switch(c.pc){
case 0x407c6000:{ // INT_DIV:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x407c6004;}
default:return 0;}}
uint32_t ref_1991(Cpu& c){switch(c.pc){
case 0x407c7000:{ // INT_DIV:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x407c7004;}
default:return 0;}}
uint32_t ref_1992(Cpu& c){switch(c.pc){
case 0x407c8000:{ // INT_DIV:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x407c8004;}
default:return 0;}}
uint32_t ref_1993(Cpu& c){switch(c.pc){
case 0x407c9000:{ // INT_DIV:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x407c9004;}
default:return 0;}}
uint32_t ref_1994(Cpu& c){switch(c.pc){
case 0x407ca000:{ // INT_DIV:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x407ca004;}
default:return 0;}}
uint32_t ref_1995(Cpu& c){switch(c.pc){
case 0x407cb000:{ // INT_DIV:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x407cb004;}
default:return 0;}}
uint32_t ref_1996(Cpu& c){switch(c.pc){
case 0x407cc000:{ // INT_DIV:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x1full));
return 0x407cc004;}
default:return 0;}}
uint32_t ref_1997(Cpu& c){switch(c.pc){
case 0x407cd000:{ // INT_DIV:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x407cd004;}
default:return 0;}}
uint32_t ref_1998(Cpu& c){switch(c.pc){
case 0x407ce000:{ // INT_DIV:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x3full));
return 0x407ce004;}
default:return 0;}}
uint32_t ref_1999(Cpu& c){switch(c.pc){
case 0x407cf000:{ // INT_DIV:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x7full));
return 0x407cf004;}
default:return 0;}}
uint32_t ref_2000(Cpu& c){switch(c.pc){
case 0x407d0000:{ // INT_DIV:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x407d0004;}
default:return 0;}}
uint32_t ref_2001(Cpu& c){switch(c.pc){
case 0x407d1000:{ // INT_DIV:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0xffull));
return 0x407d1004;}
default:return 0;}}
uint32_t ref_2002(Cpu& c){switch(c.pc){
case 0x407d2000:{ // INT_DIV:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x407d2004;}
default:return 0;}}
uint32_t ref_2003(Cpu& c){switch(c.pc){
case 0x407d3000:{ // INT_DIV:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x407d3004;}
default:return 0;}}
uint32_t ref_2004(Cpu& c){switch(c.pc){
case 0x407d4000:{ // INT_DIV:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x407d4004;}
default:return 0;}}
uint32_t ref_2005(Cpu& c){switch(c.pc){
case 0x407d5000:{ // INT_DIV:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x407d5004;}
default:return 0;}}
uint32_t ref_2006(Cpu& c){switch(c.pc){
case 0x407d6000:{ // INT_DIV:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x407d6004;}
default:return 0;}}
uint32_t ref_2007(Cpu& c){switch(c.pc){
case 0x407d7000:{ // INT_DIV:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_DIV,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x407d7004;}
default:return 0;}}
uint32_t ref_2008(Cpu& c){switch(c.pc){
case 0x407d8000:{ // INT_REM:2<-2,2:rr
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x407d8004;}
default:return 0;}}
uint32_t ref_2009(Cpu& c){switch(c.pc){
case 0x407d9000:{ // INT_REM:2<-2,2:rc:k=0
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x407d9004;}
default:return 0;}}
uint32_t ref_2010(Cpu& c){switch(c.pc){
case 0x407da000:{ // INT_REM:2<-2,2:rc:k=1
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x1ull));
return 0x407da004;}
default:return 0;}}
uint32_t ref_2011(Cpu& c){switch(c.pc){
case 0x407db000:{ // INT_REM:2<-2,2:rc:k=2
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x2ull));
return 0x407db004;}
default:return 0;}}
uint32_t ref_2012(Cpu& c){switch(c.pc){
case 0x407dc000:{ // INT_REM:2<-2,2:rc:k=3
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x3ull));
return 0x407dc004;}
default:return 0;}}
uint32_t ref_2013(Cpu& c){switch(c.pc){
case 0x407dd000:{ // INT_REM:2<-2,2:rc:k=7
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x7ull));
return 0x407dd004;}
default:return 0;}}
uint32_t ref_2014(Cpu& c){switch(c.pc){
case 0x407de000:{ // INT_REM:2<-2,2:rc:k=8
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x8ull));
return 0x407de004;}
default:return 0;}}
uint32_t ref_2015(Cpu& c){switch(c.pc){
case 0x407df000:{ // INT_REM:2<-2,2:rc:k=31
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x1full));
return 0x407df004;}
default:return 0;}}
uint32_t ref_2016(Cpu& c){switch(c.pc){
case 0x407e0000:{ // INT_REM:2<-2,2:rc:k=32
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x20ull));
return 0x407e0004;}
default:return 0;}}
uint32_t ref_2017(Cpu& c){switch(c.pc){
case 0x407e1000:{ // INT_REM:2<-2,2:rc:k=63
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x3full));
return 0x407e1004;}
default:return 0;}}
uint32_t ref_2018(Cpu& c){switch(c.pc){
case 0x407e2000:{ // INT_REM:2<-2,2:rc:k=127
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x7full));
return 0x407e2004;}
default:return 0;}}
uint32_t ref_2019(Cpu& c){switch(c.pc){
case 0x407e3000:{ // INT_REM:2<-2,2:rc:k=128
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x80ull));
return 0x407e3004;}
default:return 0;}}
uint32_t ref_2020(Cpu& c){switch(c.pc){
case 0x407e4000:{ // INT_REM:2<-2,2:rc:k=255
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0xffull));
return 0x407e4004;}
default:return 0;}}
uint32_t ref_2021(Cpu& c){switch(c.pc){
case 0x407e5000:{ // INT_REM:2<-2,2:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x7fffull));
return 0x407e5004;}
default:return 0;}}
uint32_t ref_2022(Cpu& c){switch(c.pc){
case 0x407e6000:{ // INT_REM:2<-2,2:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x8000ull));
return 0x407e6004;}
default:return 0;}}
uint32_t ref_2023(Cpu& c){switch(c.pc){
case 0x407e7000:{ // INT_REM:2<-2,2:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x407e7004;}
default:return 0;}}
uint32_t ref_2024(Cpu& c){switch(c.pc){
case 0x407e8000:{ // INT_REM:2<-2,2:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x407e8004;}
default:return 0;}}
uint32_t ref_2025(Cpu& c){switch(c.pc){
case 0x407e9000:{ // INT_REM:2<-2,2:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0x0ull));
return 0x407e9004;}
default:return 0;}}
uint32_t ref_2026(Cpu& c){switch(c.pc){
case 0x407ea000:{ // INT_REM:2<-2,2:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_REM,2,2,2>(r<2>(c,0x500),0xffffull));
return 0x407ea004;}
default:return 0;}}
uint32_t ref_2027(Cpu& c){switch(c.pc){
case 0x407eb000:{ // SUBPIECE:1<-2,4:rr:k=0
wr<1>(c,0x400,eval<Op::SUBPIECE,1,2,4>(r<2>(c,0x500),r<4>(c,0x600)));
return 0x407eb004;}
default:return 0;}}
uint32_t ref_2028(Cpu& c){switch(c.pc){
case 0x407ec000:{ // SUBPIECE:1<-2,4:rc:k=0
wr<1>(c,0x400,eval<Op::SUBPIECE,1,2,4>(r<2>(c,0x500),0x0ull));
return 0x407ec004;}
default:return 0;}}
uint32_t ref_2029(Cpu& c){switch(c.pc){
case 0x407ed000:{ // INT_SLESSEQUAL:1<-2,2:rr
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),r<2>(c,0x600)));
return 0x407ed004;}
default:return 0;}}
uint32_t ref_2030(Cpu& c){switch(c.pc){
case 0x407ee000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x407ee004;}
default:return 0;}}
uint32_t ref_2031(Cpu& c){switch(c.pc){
case 0x407ef000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x1ull));
return 0x407ef004;}
default:return 0;}}
uint32_t ref_2032(Cpu& c){switch(c.pc){
case 0x407f0000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x2ull));
return 0x407f0004;}
default:return 0;}}
uint32_t ref_2033(Cpu& c){switch(c.pc){
case 0x407f1000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x3ull));
return 0x407f1004;}
default:return 0;}}
uint32_t ref_2034(Cpu& c){switch(c.pc){
case 0x407f2000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x7ull));
return 0x407f2004;}
default:return 0;}}
uint32_t ref_2035(Cpu& c){switch(c.pc){
case 0x407f3000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x8ull));
return 0x407f3004;}
default:return 0;}}
uint32_t ref_2036(Cpu& c){switch(c.pc){
case 0x407f4000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x1full));
return 0x407f4004;}
default:return 0;}}
uint32_t ref_2037(Cpu& c){switch(c.pc){
case 0x407f5000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x20ull));
return 0x407f5004;}
default:return 0;}}
uint32_t ref_2038(Cpu& c){switch(c.pc){
case 0x407f6000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x3full));
return 0x407f6004;}
default:return 0;}}
uint32_t ref_2039(Cpu& c){switch(c.pc){
case 0x407f7000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x7full));
return 0x407f7004;}
default:return 0;}}
uint32_t ref_2040(Cpu& c){switch(c.pc){
case 0x407f8000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x80ull));
return 0x407f8004;}
default:return 0;}}
uint32_t ref_2041(Cpu& c){switch(c.pc){
case 0x407f9000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0xffull));
return 0x407f9004;}
default:return 0;}}
uint32_t ref_2042(Cpu& c){switch(c.pc){
case 0x407fa000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x7fffull));
return 0x407fa004;}
default:return 0;}}
uint32_t ref_2043(Cpu& c){switch(c.pc){
case 0x407fb000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x8000ull));
return 0x407fb004;}
default:return 0;}}
uint32_t ref_2044(Cpu& c){switch(c.pc){
case 0x407fc000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x407fc004;}
default:return 0;}}
uint32_t ref_2045(Cpu& c){switch(c.pc){
case 0x407fd000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x407fd004;}
default:return 0;}}
uint32_t ref_2046(Cpu& c){switch(c.pc){
case 0x407fe000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0x0ull));
return 0x407fe004;}
default:return 0;}}
uint32_t ref_2047(Cpu& c){switch(c.pc){
case 0x407ff000:{ // INT_SLESSEQUAL:1<-2,2:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SLESSEQUAL,1,2,2>(r<2>(c,0x500),0xffffull));
return 0x407ff004;}
default:return 0;}}
uint32_t ref_2048(Cpu& c){switch(c.pc){
case 0x40800000:{ // INT_ZEXT:16<-8:r
wr<16>(c,0x400,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x500)));
return 0x40800004;}
default:return 0;}}
uint32_t ref_2049(Cpu& c){switch(c.pc){
case 0x40801000:{ // INT_ZEXT:16<-4:r
wr<16>(c,0x400,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x500)));
return 0x40801004;}
default:return 0;}}
uint32_t ref_2050(Cpu& c){switch(c.pc){
case 0x40802000:{ // INT2FLOAT:10<-2:r
wr<10>(c,0x400,float_op("INT2FLOAT",r<2>(c,0x500),2,0x0ull,4,10));
return 0x40802004;}
default:return 0;}}
uint32_t ref_2051(Cpu& c){switch(c.pc){
case 0x40803000:{ // TRUNC:8<-10:r
wr<8>(c,0x400,float_op("TRUNC",r<10>(c,0x500),10,0x0ull,4,8));
return 0x40803004;}
default:return 0;}}
uint32_t ref_2052(Cpu& c){switch(c.pc){
case 0x40804000:{ // SUBPIECE:4<-16,4:rr:k=0
wr<4>(c,0x400,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x500),r<4>(c,0x600)));
return 0x40804004;}
default:return 0;}}
uint32_t ref_2053(Cpu& c){switch(c.pc){
case 0x40805000:{ // SUBPIECE:4<-16,4:rc:k=0
wr<4>(c,0x400,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x500),0x0ull));
return 0x40805004;}
default:return 0;}}
uint32_t ref_2054(Cpu& c){switch(c.pc){
case 0x40806000:{ // INT_RIGHT:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x40806004;}
default:return 0;}}
uint32_t ref_2055(Cpu& c){switch(c.pc){
case 0x40807000:{ // INT_RIGHT:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x40807004;}
default:return 0;}}
uint32_t ref_2056(Cpu& c){switch(c.pc){
case 0x40808000:{ // INT_RIGHT:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x40808004;}
default:return 0;}}
uint32_t ref_2057(Cpu& c){switch(c.pc){
case 0x40809000:{ // INT_RIGHT:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x40809004;}
default:return 0;}}
uint32_t ref_2058(Cpu& c){switch(c.pc){
case 0x4080a000:{ // INT_RIGHT:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x4080a004;}
default:return 0;}}
uint32_t ref_2059(Cpu& c){switch(c.pc){
case 0x4080b000:{ // INT_RIGHT:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x4080b004;}
default:return 0;}}
uint32_t ref_2060(Cpu& c){switch(c.pc){
case 0x4080c000:{ // INT_RIGHT:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x4080c004;}
default:return 0;}}
uint32_t ref_2061(Cpu& c){switch(c.pc){
case 0x4080d000:{ // INT_RIGHT:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x1full));
return 0x4080d004;}
default:return 0;}}
uint32_t ref_2062(Cpu& c){switch(c.pc){
case 0x4080e000:{ // INT_RIGHT:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x4080e004;}
default:return 0;}}
uint32_t ref_2063(Cpu& c){switch(c.pc){
case 0x4080f000:{ // INT_RIGHT:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x3full));
return 0x4080f004;}
default:return 0;}}
uint32_t ref_2064(Cpu& c){switch(c.pc){
case 0x40810000:{ // INT_RIGHT:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x7full));
return 0x40810004;}
default:return 0;}}
uint32_t ref_2065(Cpu& c){switch(c.pc){
case 0x40811000:{ // INT_RIGHT:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x40811004;}
default:return 0;}}
uint32_t ref_2066(Cpu& c){switch(c.pc){
case 0x40812000:{ // INT_RIGHT:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0xffull));
return 0x40812004;}
default:return 0;}}
uint32_t ref_2067(Cpu& c){switch(c.pc){
case 0x40813000:{ // INT_RIGHT:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x40813004;}
default:return 0;}}
uint32_t ref_2068(Cpu& c){switch(c.pc){
case 0x40814000:{ // INT_RIGHT:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x40814004;}
default:return 0;}}
uint32_t ref_2069(Cpu& c){switch(c.pc){
case 0x40815000:{ // INT_RIGHT:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x40815004;}
default:return 0;}}
uint32_t ref_2070(Cpu& c){switch(c.pc){
case 0x40816000:{ // INT_RIGHT:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x40816004;}
default:return 0;}}
uint32_t ref_2071(Cpu& c){switch(c.pc){
case 0x40817000:{ // INT_RIGHT:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x40817004;}
default:return 0;}}
uint32_t ref_2072(Cpu& c){switch(c.pc){
case 0x40818000:{ // INT_RIGHT:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x40818004;}
default:return 0;}}
uint32_t ref_2073(Cpu& c){switch(c.pc){
case 0x40819000:{ // FLOAT_NAN:1<-8:r
wr<1>(c,0x400,float_op("FLOAT_NAN",r<8>(c,0x500),8,0x0ull,4,1));
return 0x40819004;}
default:return 0;}}
uint32_t ref_2074(Cpu& c){switch(c.pc){
case 0x4081a000:{ // FLOAT_EQUAL:1<-8,8:rr
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,r<8>(c,0x600),8,1));
return 0x4081a004;}
default:return 0;}}
uint32_t ref_2075(Cpu& c){switch(c.pc){
case 0x4081b000:{ // FLOAT_EQUAL:1<-8,8:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x0ull,8,1));
return 0x4081b004;}
default:return 0;}}
uint32_t ref_2076(Cpu& c){switch(c.pc){
case 0x4081c000:{ // FLOAT_EQUAL:1<-8,8:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x1ull,8,1));
return 0x4081c004;}
default:return 0;}}
uint32_t ref_2077(Cpu& c){switch(c.pc){
case 0x4081d000:{ // FLOAT_EQUAL:1<-8,8:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x2ull,8,1));
return 0x4081d004;}
default:return 0;}}
uint32_t ref_2078(Cpu& c){switch(c.pc){
case 0x4081e000:{ // FLOAT_EQUAL:1<-8,8:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x3ull,8,1));
return 0x4081e004;}
default:return 0;}}
uint32_t ref_2079(Cpu& c){switch(c.pc){
case 0x4081f000:{ // FLOAT_EQUAL:1<-8,8:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x7ull,8,1));
return 0x4081f004;}
default:return 0;}}
uint32_t ref_2080(Cpu& c){switch(c.pc){
case 0x40820000:{ // FLOAT_EQUAL:1<-8,8:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x8ull,8,1));
return 0x40820004;}
default:return 0;}}
uint32_t ref_2081(Cpu& c){switch(c.pc){
case 0x40821000:{ // FLOAT_EQUAL:1<-8,8:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x1full,8,1));
return 0x40821004;}
default:return 0;}}
uint32_t ref_2082(Cpu& c){switch(c.pc){
case 0x40822000:{ // FLOAT_EQUAL:1<-8,8:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x20ull,8,1));
return 0x40822004;}
default:return 0;}}
uint32_t ref_2083(Cpu& c){switch(c.pc){
case 0x40823000:{ // FLOAT_EQUAL:1<-8,8:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x3full,8,1));
return 0x40823004;}
default:return 0;}}
uint32_t ref_2084(Cpu& c){switch(c.pc){
case 0x40824000:{ // FLOAT_EQUAL:1<-8,8:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x7full,8,1));
return 0x40824004;}
default:return 0;}}
uint32_t ref_2085(Cpu& c){switch(c.pc){
case 0x40825000:{ // FLOAT_EQUAL:1<-8,8:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x80ull,8,1));
return 0x40825004;}
default:return 0;}}
uint32_t ref_2086(Cpu& c){switch(c.pc){
case 0x40826000:{ // FLOAT_EQUAL:1<-8,8:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0xffull,8,1));
return 0x40826004;}
default:return 0;}}
uint32_t ref_2087(Cpu& c){switch(c.pc){
case 0x40827000:{ // FLOAT_EQUAL:1<-8,8:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x7fffull,8,1));
return 0x40827004;}
default:return 0;}}
uint32_t ref_2088(Cpu& c){switch(c.pc){
case 0x40828000:{ // FLOAT_EQUAL:1<-8,8:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x8000ull,8,1));
return 0x40828004;}
default:return 0;}}
uint32_t ref_2089(Cpu& c){switch(c.pc){
case 0x40829000:{ // FLOAT_EQUAL:1<-8,8:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0xffffull,8,1));
return 0x40829004;}
default:return 0;}}
uint32_t ref_2090(Cpu& c){switch(c.pc){
case 0x4082a000:{ // FLOAT_EQUAL:1<-8,8:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x7fffffffull,8,1));
return 0x4082a004;}
default:return 0;}}
uint32_t ref_2091(Cpu& c){switch(c.pc){
case 0x4082b000:{ // FLOAT_EQUAL:1<-8,8:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0x80000000ull,8,1));
return 0x4082b004;}
default:return 0;}}
uint32_t ref_2092(Cpu& c){switch(c.pc){
case 0x4082c000:{ // FLOAT_EQUAL:1<-8,8:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_EQUAL",r<8>(c,0x500),8,0xffffffffull,8,1));
return 0x4082c004;}
default:return 0;}}
uint32_t ref_2093(Cpu& c){switch(c.pc){
case 0x4082d000:{ // FLOAT_LESS:1<-8,8:rr
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,r<8>(c,0x600),8,1));
return 0x4082d004;}
default:return 0;}}
uint32_t ref_2094(Cpu& c){switch(c.pc){
case 0x4082e000:{ // FLOAT_LESS:1<-8,8:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x0ull,8,1));
return 0x4082e004;}
default:return 0;}}
uint32_t ref_2095(Cpu& c){switch(c.pc){
case 0x4082f000:{ // FLOAT_LESS:1<-8,8:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x1ull,8,1));
return 0x4082f004;}
default:return 0;}}
uint32_t ref_2096(Cpu& c){switch(c.pc){
case 0x40830000:{ // FLOAT_LESS:1<-8,8:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x2ull,8,1));
return 0x40830004;}
default:return 0;}}
uint32_t ref_2097(Cpu& c){switch(c.pc){
case 0x40831000:{ // FLOAT_LESS:1<-8,8:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x3ull,8,1));
return 0x40831004;}
default:return 0;}}
uint32_t ref_2098(Cpu& c){switch(c.pc){
case 0x40832000:{ // FLOAT_LESS:1<-8,8:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x7ull,8,1));
return 0x40832004;}
default:return 0;}}
uint32_t ref_2099(Cpu& c){switch(c.pc){
case 0x40833000:{ // FLOAT_LESS:1<-8,8:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x8ull,8,1));
return 0x40833004;}
default:return 0;}}
uint32_t ref_2100(Cpu& c){switch(c.pc){
case 0x40834000:{ // FLOAT_LESS:1<-8,8:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x1full,8,1));
return 0x40834004;}
default:return 0;}}
uint32_t ref_2101(Cpu& c){switch(c.pc){
case 0x40835000:{ // FLOAT_LESS:1<-8,8:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x20ull,8,1));
return 0x40835004;}
default:return 0;}}
uint32_t ref_2102(Cpu& c){switch(c.pc){
case 0x40836000:{ // FLOAT_LESS:1<-8,8:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x3full,8,1));
return 0x40836004;}
default:return 0;}}
uint32_t ref_2103(Cpu& c){switch(c.pc){
case 0x40837000:{ // FLOAT_LESS:1<-8,8:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x7full,8,1));
return 0x40837004;}
default:return 0;}}
uint32_t ref_2104(Cpu& c){switch(c.pc){
case 0x40838000:{ // FLOAT_LESS:1<-8,8:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x80ull,8,1));
return 0x40838004;}
default:return 0;}}
uint32_t ref_2105(Cpu& c){switch(c.pc){
case 0x40839000:{ // FLOAT_LESS:1<-8,8:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0xffull,8,1));
return 0x40839004;}
default:return 0;}}
uint32_t ref_2106(Cpu& c){switch(c.pc){
case 0x4083a000:{ // FLOAT_LESS:1<-8,8:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x7fffull,8,1));
return 0x4083a004;}
default:return 0;}}
uint32_t ref_2107(Cpu& c){switch(c.pc){
case 0x4083b000:{ // FLOAT_LESS:1<-8,8:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x8000ull,8,1));
return 0x4083b004;}
default:return 0;}}
uint32_t ref_2108(Cpu& c){switch(c.pc){
case 0x4083c000:{ // FLOAT_LESS:1<-8,8:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0xffffull,8,1));
return 0x4083c004;}
default:return 0;}}
uint32_t ref_2109(Cpu& c){switch(c.pc){
case 0x4083d000:{ // FLOAT_LESS:1<-8,8:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x7fffffffull,8,1));
return 0x4083d004;}
default:return 0;}}
uint32_t ref_2110(Cpu& c){switch(c.pc){
case 0x4083e000:{ // FLOAT_LESS:1<-8,8:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0x80000000ull,8,1));
return 0x4083e004;}
default:return 0;}}
uint32_t ref_2111(Cpu& c){switch(c.pc){
case 0x4083f000:{ // FLOAT_LESS:1<-8,8:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_LESS",r<8>(c,0x500),8,0xffffffffull,8,1));
return 0x4083f004;}
default:return 0;}}
uint32_t ref_2112(Cpu& c){switch(c.pc){
case 0x40840000:{ // INT_ZEXT:8<-1:r
wr<8>(c,0x400,eval<Op::INT_ZEXT,8,1>(r<1>(c,0x500)));
return 0x40840004;}
default:return 0;}}
uint32_t ref_2113(Cpu& c){switch(c.pc){
case 0x40841000:{ // FLOAT_SUB:8<-8,8:rr
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,r<8>(c,0x600),8,8));
return 0x40841004;}
default:return 0;}}
uint32_t ref_2114(Cpu& c){switch(c.pc){
case 0x40842000:{ // FLOAT_SUB:8<-8,8:rc:k=0
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x0ull,8,8));
return 0x40842004;}
default:return 0;}}
uint32_t ref_2115(Cpu& c){switch(c.pc){
case 0x40843000:{ // FLOAT_SUB:8<-8,8:rc:k=1
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x1ull,8,8));
return 0x40843004;}
default:return 0;}}
uint32_t ref_2116(Cpu& c){switch(c.pc){
case 0x40844000:{ // FLOAT_SUB:8<-8,8:rc:k=2
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x2ull,8,8));
return 0x40844004;}
default:return 0;}}
uint32_t ref_2117(Cpu& c){switch(c.pc){
case 0x40845000:{ // FLOAT_SUB:8<-8,8:rc:k=3
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x3ull,8,8));
return 0x40845004;}
default:return 0;}}
uint32_t ref_2118(Cpu& c){switch(c.pc){
case 0x40846000:{ // FLOAT_SUB:8<-8,8:rc:k=7
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x7ull,8,8));
return 0x40846004;}
default:return 0;}}
uint32_t ref_2119(Cpu& c){switch(c.pc){
case 0x40847000:{ // FLOAT_SUB:8<-8,8:rc:k=8
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x8ull,8,8));
return 0x40847004;}
default:return 0;}}
uint32_t ref_2120(Cpu& c){switch(c.pc){
case 0x40848000:{ // FLOAT_SUB:8<-8,8:rc:k=31
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x1full,8,8));
return 0x40848004;}
default:return 0;}}
uint32_t ref_2121(Cpu& c){switch(c.pc){
case 0x40849000:{ // FLOAT_SUB:8<-8,8:rc:k=32
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x20ull,8,8));
return 0x40849004;}
default:return 0;}}
uint32_t ref_2122(Cpu& c){switch(c.pc){
case 0x4084a000:{ // FLOAT_SUB:8<-8,8:rc:k=63
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x3full,8,8));
return 0x4084a004;}
default:return 0;}}
uint32_t ref_2123(Cpu& c){switch(c.pc){
case 0x4084b000:{ // FLOAT_SUB:8<-8,8:rc:k=127
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x7full,8,8));
return 0x4084b004;}
default:return 0;}}
uint32_t ref_2124(Cpu& c){switch(c.pc){
case 0x4084c000:{ // FLOAT_SUB:8<-8,8:rc:k=128
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x80ull,8,8));
return 0x4084c004;}
default:return 0;}}
uint32_t ref_2125(Cpu& c){switch(c.pc){
case 0x4084d000:{ // FLOAT_SUB:8<-8,8:rc:k=255
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0xffull,8,8));
return 0x4084d004;}
default:return 0;}}
uint32_t ref_2126(Cpu& c){switch(c.pc){
case 0x4084e000:{ // FLOAT_SUB:8<-8,8:rc:k=32767
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x7fffull,8,8));
return 0x4084e004;}
default:return 0;}}
uint32_t ref_2127(Cpu& c){switch(c.pc){
case 0x4084f000:{ // FLOAT_SUB:8<-8,8:rc:k=32768
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x8000ull,8,8));
return 0x4084f004;}
default:return 0;}}
uint32_t ref_2128(Cpu& c){switch(c.pc){
case 0x40850000:{ // FLOAT_SUB:8<-8,8:rc:k=65535
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0xffffull,8,8));
return 0x40850004;}
default:return 0;}}
uint32_t ref_2129(Cpu& c){switch(c.pc){
case 0x40851000:{ // FLOAT_SUB:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x7fffffffull,8,8));
return 0x40851004;}
default:return 0;}}
uint32_t ref_2130(Cpu& c){switch(c.pc){
case 0x40852000:{ // FLOAT_SUB:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0x80000000ull,8,8));
return 0x40852004;}
default:return 0;}}
uint32_t ref_2131(Cpu& c){switch(c.pc){
case 0x40853000:{ // FLOAT_SUB:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,float_op("FLOAT_SUB",r<8>(c,0x500),8,0xffffffffull,8,8));
return 0x40853004;}
default:return 0;}}
uint32_t ref_2132(Cpu& c){switch(c.pc){
case 0x40854000:{ // FLOAT_LESSEQUAL:1<-8,8:rr
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,r<8>(c,0x600),8,1));
return 0x40854004;}
default:return 0;}}
uint32_t ref_2133(Cpu& c){switch(c.pc){
case 0x40855000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x0ull,8,1));
return 0x40855004;}
default:return 0;}}
uint32_t ref_2134(Cpu& c){switch(c.pc){
case 0x40856000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x1ull,8,1));
return 0x40856004;}
default:return 0;}}
uint32_t ref_2135(Cpu& c){switch(c.pc){
case 0x40857000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x2ull,8,1));
return 0x40857004;}
default:return 0;}}
uint32_t ref_2136(Cpu& c){switch(c.pc){
case 0x40858000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x3ull,8,1));
return 0x40858004;}
default:return 0;}}
uint32_t ref_2137(Cpu& c){switch(c.pc){
case 0x40859000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x7ull,8,1));
return 0x40859004;}
default:return 0;}}
uint32_t ref_2138(Cpu& c){switch(c.pc){
case 0x4085a000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x8ull,8,1));
return 0x4085a004;}
default:return 0;}}
uint32_t ref_2139(Cpu& c){switch(c.pc){
case 0x4085b000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x1full,8,1));
return 0x4085b004;}
default:return 0;}}
uint32_t ref_2140(Cpu& c){switch(c.pc){
case 0x4085c000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x20ull,8,1));
return 0x4085c004;}
default:return 0;}}
uint32_t ref_2141(Cpu& c){switch(c.pc){
case 0x4085d000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x3full,8,1));
return 0x4085d004;}
default:return 0;}}
uint32_t ref_2142(Cpu& c){switch(c.pc){
case 0x4085e000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x7full,8,1));
return 0x4085e004;}
default:return 0;}}
uint32_t ref_2143(Cpu& c){switch(c.pc){
case 0x4085f000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x80ull,8,1));
return 0x4085f004;}
default:return 0;}}
uint32_t ref_2144(Cpu& c){switch(c.pc){
case 0x40860000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0xffull,8,1));
return 0x40860004;}
default:return 0;}}
uint32_t ref_2145(Cpu& c){switch(c.pc){
case 0x40861000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x7fffull,8,1));
return 0x40861004;}
default:return 0;}}
uint32_t ref_2146(Cpu& c){switch(c.pc){
case 0x40862000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x8000ull,8,1));
return 0x40862004;}
default:return 0;}}
uint32_t ref_2147(Cpu& c){switch(c.pc){
case 0x40863000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0xffffull,8,1));
return 0x40863004;}
default:return 0;}}
uint32_t ref_2148(Cpu& c){switch(c.pc){
case 0x40864000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x7fffffffull,8,1));
return 0x40864004;}
default:return 0;}}
uint32_t ref_2149(Cpu& c){switch(c.pc){
case 0x40865000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0x80000000ull,8,1));
return 0x40865004;}
default:return 0;}}
uint32_t ref_2150(Cpu& c){switch(c.pc){
case 0x40866000:{ // FLOAT_LESSEQUAL:1<-8,8:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_LESSEQUAL",r<8>(c,0x500),8,0xffffffffull,8,1));
return 0x40866004;}
default:return 0;}}
uint32_t ref_2151(Cpu& c){switch(c.pc){
case 0x40867000:{ // FLOAT_ADD:8<-8,8:rr
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,r<8>(c,0x600),8,8));
return 0x40867004;}
default:return 0;}}
uint32_t ref_2152(Cpu& c){switch(c.pc){
case 0x40868000:{ // FLOAT_ADD:8<-8,8:rc:k=0
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x0ull,8,8));
return 0x40868004;}
default:return 0;}}
uint32_t ref_2153(Cpu& c){switch(c.pc){
case 0x40869000:{ // FLOAT_ADD:8<-8,8:rc:k=1
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x1ull,8,8));
return 0x40869004;}
default:return 0;}}
uint32_t ref_2154(Cpu& c){switch(c.pc){
case 0x4086a000:{ // FLOAT_ADD:8<-8,8:rc:k=2
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x2ull,8,8));
return 0x4086a004;}
default:return 0;}}
uint32_t ref_2155(Cpu& c){switch(c.pc){
case 0x4086b000:{ // FLOAT_ADD:8<-8,8:rc:k=3
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x3ull,8,8));
return 0x4086b004;}
default:return 0;}}
uint32_t ref_2156(Cpu& c){switch(c.pc){
case 0x4086c000:{ // FLOAT_ADD:8<-8,8:rc:k=7
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x7ull,8,8));
return 0x4086c004;}
default:return 0;}}
uint32_t ref_2157(Cpu& c){switch(c.pc){
case 0x4086d000:{ // FLOAT_ADD:8<-8,8:rc:k=8
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x8ull,8,8));
return 0x4086d004;}
default:return 0;}}
uint32_t ref_2158(Cpu& c){switch(c.pc){
case 0x4086e000:{ // FLOAT_ADD:8<-8,8:rc:k=31
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x1full,8,8));
return 0x4086e004;}
default:return 0;}}
uint32_t ref_2159(Cpu& c){switch(c.pc){
case 0x4086f000:{ // FLOAT_ADD:8<-8,8:rc:k=32
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x20ull,8,8));
return 0x4086f004;}
default:return 0;}}
uint32_t ref_2160(Cpu& c){switch(c.pc){
case 0x40870000:{ // FLOAT_ADD:8<-8,8:rc:k=63
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x3full,8,8));
return 0x40870004;}
default:return 0;}}
uint32_t ref_2161(Cpu& c){switch(c.pc){
case 0x40871000:{ // FLOAT_ADD:8<-8,8:rc:k=127
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x7full,8,8));
return 0x40871004;}
default:return 0;}}
uint32_t ref_2162(Cpu& c){switch(c.pc){
case 0x40872000:{ // FLOAT_ADD:8<-8,8:rc:k=128
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x80ull,8,8));
return 0x40872004;}
default:return 0;}}
uint32_t ref_2163(Cpu& c){switch(c.pc){
case 0x40873000:{ // FLOAT_ADD:8<-8,8:rc:k=255
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0xffull,8,8));
return 0x40873004;}
default:return 0;}}
uint32_t ref_2164(Cpu& c){switch(c.pc){
case 0x40874000:{ // FLOAT_ADD:8<-8,8:rc:k=32767
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x7fffull,8,8));
return 0x40874004;}
default:return 0;}}
uint32_t ref_2165(Cpu& c){switch(c.pc){
case 0x40875000:{ // FLOAT_ADD:8<-8,8:rc:k=32768
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x8000ull,8,8));
return 0x40875004;}
default:return 0;}}
uint32_t ref_2166(Cpu& c){switch(c.pc){
case 0x40876000:{ // FLOAT_ADD:8<-8,8:rc:k=65535
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0xffffull,8,8));
return 0x40876004;}
default:return 0;}}
uint32_t ref_2167(Cpu& c){switch(c.pc){
case 0x40877000:{ // FLOAT_ADD:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x7fffffffull,8,8));
return 0x40877004;}
default:return 0;}}
uint32_t ref_2168(Cpu& c){switch(c.pc){
case 0x40878000:{ // FLOAT_ADD:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0x80000000ull,8,8));
return 0x40878004;}
default:return 0;}}
uint32_t ref_2169(Cpu& c){switch(c.pc){
case 0x40879000:{ // FLOAT_ADD:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,float_op("FLOAT_ADD",r<8>(c,0x500),8,0xffffffffull,8,8));
return 0x40879004;}
default:return 0;}}
uint32_t ref_2170(Cpu& c){switch(c.pc){
case 0x4087a000:{ // TRUNC:10<-10:r
wr<10>(c,0x400,float_op("TRUNC",r<10>(c,0x500),10,0x0ull,4,10));
return 0x4087a004;}
default:return 0;}}
uint32_t ref_2171(Cpu& c){switch(c.pc){
case 0x4087b000:{ // INT_RIGHT:8<-8,1:rr
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),r<1>(c,0x600)));
return 0x4087b004;}
default:return 0;}}
uint32_t ref_2172(Cpu& c){switch(c.pc){
case 0x4087c000:{ // INT_RIGHT:8<-8,1:rc:k=0
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x0ull));
return 0x4087c004;}
default:return 0;}}
uint32_t ref_2173(Cpu& c){switch(c.pc){
case 0x4087d000:{ // INT_RIGHT:8<-8,1:rc:k=1
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x1ull));
return 0x4087d004;}
default:return 0;}}
uint32_t ref_2174(Cpu& c){switch(c.pc){
case 0x4087e000:{ // INT_RIGHT:8<-8,1:rc:k=2
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x2ull));
return 0x4087e004;}
default:return 0;}}
uint32_t ref_2175(Cpu& c){switch(c.pc){
case 0x4087f000:{ // INT_RIGHT:8<-8,1:rc:k=3
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x3ull));
return 0x4087f004;}
default:return 0;}}
uint32_t ref_2176(Cpu& c){switch(c.pc){
case 0x40880000:{ // INT_RIGHT:8<-8,1:rc:k=7
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x7ull));
return 0x40880004;}
default:return 0;}}
uint32_t ref_2177(Cpu& c){switch(c.pc){
case 0x40881000:{ // INT_RIGHT:8<-8,1:rc:k=8
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x8ull));
return 0x40881004;}
default:return 0;}}
uint32_t ref_2178(Cpu& c){switch(c.pc){
case 0x40882000:{ // INT_RIGHT:8<-8,1:rc:k=31
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x1full));
return 0x40882004;}
default:return 0;}}
uint32_t ref_2179(Cpu& c){switch(c.pc){
case 0x40883000:{ // INT_RIGHT:8<-8,1:rc:k=32
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x20ull));
return 0x40883004;}
default:return 0;}}
uint32_t ref_2180(Cpu& c){switch(c.pc){
case 0x40884000:{ // INT_RIGHT:8<-8,1:rc:k=63
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x3full));
return 0x40884004;}
default:return 0;}}
uint32_t ref_2181(Cpu& c){switch(c.pc){
case 0x40885000:{ // INT_RIGHT:8<-8,1:rc:k=127
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x7full));
return 0x40885004;}
default:return 0;}}
uint32_t ref_2182(Cpu& c){switch(c.pc){
case 0x40886000:{ // INT_RIGHT:8<-8,1:rc:k=128
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x80ull));
return 0x40886004;}
default:return 0;}}
uint32_t ref_2183(Cpu& c){switch(c.pc){
case 0x40887000:{ // INT_RIGHT:8<-8,1:rc:k=255
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x40887004;}
default:return 0;}}
uint32_t ref_2184(Cpu& c){switch(c.pc){
case 0x40888000:{ // INT_RIGHT:8<-8,1:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x40888004;}
default:return 0;}}
uint32_t ref_2185(Cpu& c){switch(c.pc){
case 0x40889000:{ // INT_RIGHT:8<-8,1:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x0ull));
return 0x40889004;}
default:return 0;}}
uint32_t ref_2186(Cpu& c){switch(c.pc){
case 0x4088a000:{ // INT_RIGHT:8<-8,1:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4088a004;}
default:return 0;}}
uint32_t ref_2187(Cpu& c){switch(c.pc){
case 0x4088b000:{ // INT_RIGHT:8<-8,1:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4088b004;}
default:return 0;}}
uint32_t ref_2188(Cpu& c){switch(c.pc){
case 0x4088c000:{ // INT_RIGHT:8<-8,1:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0x0ull));
return 0x4088c004;}
default:return 0;}}
uint32_t ref_2189(Cpu& c){switch(c.pc){
case 0x4088d000:{ // INT_RIGHT:8<-8,1:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4088d004;}
default:return 0;}}
uint32_t ref_2190(Cpu& c){switch(c.pc){
case 0x4088e000:{ // INT_LEFT:8<-8,1:rr
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),r<1>(c,0x600)));
return 0x4088e004;}
default:return 0;}}
uint32_t ref_2191(Cpu& c){switch(c.pc){
case 0x4088f000:{ // INT_LEFT:8<-8,1:rc:k=0
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x0ull));
return 0x4088f004;}
default:return 0;}}
uint32_t ref_2192(Cpu& c){switch(c.pc){
case 0x40890000:{ // INT_LEFT:8<-8,1:rc:k=1
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x1ull));
return 0x40890004;}
default:return 0;}}
uint32_t ref_2193(Cpu& c){switch(c.pc){
case 0x40891000:{ // INT_LEFT:8<-8,1:rc:k=2
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x2ull));
return 0x40891004;}
default:return 0;}}
uint32_t ref_2194(Cpu& c){switch(c.pc){
case 0x40892000:{ // INT_LEFT:8<-8,1:rc:k=3
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x3ull));
return 0x40892004;}
default:return 0;}}
uint32_t ref_2195(Cpu& c){switch(c.pc){
case 0x40893000:{ // INT_LEFT:8<-8,1:rc:k=7
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x7ull));
return 0x40893004;}
default:return 0;}}
uint32_t ref_2196(Cpu& c){switch(c.pc){
case 0x40894000:{ // INT_LEFT:8<-8,1:rc:k=8
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x8ull));
return 0x40894004;}
default:return 0;}}
uint32_t ref_2197(Cpu& c){switch(c.pc){
case 0x40895000:{ // INT_LEFT:8<-8,1:rc:k=31
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x1full));
return 0x40895004;}
default:return 0;}}
uint32_t ref_2198(Cpu& c){switch(c.pc){
case 0x40896000:{ // INT_LEFT:8<-8,1:rc:k=32
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x20ull));
return 0x40896004;}
default:return 0;}}
uint32_t ref_2199(Cpu& c){switch(c.pc){
case 0x40897000:{ // INT_LEFT:8<-8,1:rc:k=63
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x3full));
return 0x40897004;}
default:return 0;}}
uint32_t ref_2200(Cpu& c){switch(c.pc){
case 0x40898000:{ // INT_LEFT:8<-8,1:rc:k=127
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x7full));
return 0x40898004;}
default:return 0;}}
uint32_t ref_2201(Cpu& c){switch(c.pc){
case 0x40899000:{ // INT_LEFT:8<-8,1:rc:k=128
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x80ull));
return 0x40899004;}
default:return 0;}}
uint32_t ref_2202(Cpu& c){switch(c.pc){
case 0x4089a000:{ // INT_LEFT:8<-8,1:rc:k=255
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4089a004;}
default:return 0;}}
uint32_t ref_2203(Cpu& c){switch(c.pc){
case 0x4089b000:{ // INT_LEFT:8<-8,1:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4089b004;}
default:return 0;}}
uint32_t ref_2204(Cpu& c){switch(c.pc){
case 0x4089c000:{ // INT_LEFT:8<-8,1:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x0ull));
return 0x4089c004;}
default:return 0;}}
uint32_t ref_2205(Cpu& c){switch(c.pc){
case 0x4089d000:{ // INT_LEFT:8<-8,1:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4089d004;}
default:return 0;}}
uint32_t ref_2206(Cpu& c){switch(c.pc){
case 0x4089e000:{ // INT_LEFT:8<-8,1:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x4089e004;}
default:return 0;}}
uint32_t ref_2207(Cpu& c){switch(c.pc){
case 0x4089f000:{ // INT_LEFT:8<-8,1:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0x0ull));
return 0x4089f004;}
default:return 0;}}
uint32_t ref_2208(Cpu& c){switch(c.pc){
case 0x408a0000:{ // INT_LEFT:8<-8,1:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(r<8>(c,0x500),0xffull));
return 0x408a0004;}
default:return 0;}}
uint32_t ref_2209(Cpu& c){switch(c.pc){
case 0x408a1000:{ // INT_LEFT:8<-8,1:cr:k=0
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x0ull,r<1>(c,0x600)));
return 0x408a1004;}
default:return 0;}}
uint32_t ref_2210(Cpu& c){switch(c.pc){
case 0x408a2000:{ // INT_LEFT:8<-8,1:cr:k=1
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x1ull,r<1>(c,0x600)));
return 0x408a2004;}
default:return 0;}}
uint32_t ref_2211(Cpu& c){switch(c.pc){
case 0x408a3000:{ // INT_LEFT:8<-8,1:cr:k=2
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x2ull,r<1>(c,0x600)));
return 0x408a3004;}
default:return 0;}}
uint32_t ref_2212(Cpu& c){switch(c.pc){
case 0x408a4000:{ // INT_LEFT:8<-8,1:cr:k=3
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x3ull,r<1>(c,0x600)));
return 0x408a4004;}
default:return 0;}}
uint32_t ref_2213(Cpu& c){switch(c.pc){
case 0x408a5000:{ // INT_LEFT:8<-8,1:cr:k=7
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x7ull,r<1>(c,0x600)));
return 0x408a5004;}
default:return 0;}}
uint32_t ref_2214(Cpu& c){switch(c.pc){
case 0x408a6000:{ // INT_LEFT:8<-8,1:cr:k=8
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x8ull,r<1>(c,0x600)));
return 0x408a6004;}
default:return 0;}}
uint32_t ref_2215(Cpu& c){switch(c.pc){
case 0x408a7000:{ // INT_LEFT:8<-8,1:cr:k=31
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x1full,r<1>(c,0x600)));
return 0x408a7004;}
default:return 0;}}
uint32_t ref_2216(Cpu& c){switch(c.pc){
case 0x408a8000:{ // INT_LEFT:8<-8,1:cr:k=32
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x20ull,r<1>(c,0x600)));
return 0x408a8004;}
default:return 0;}}
uint32_t ref_2217(Cpu& c){switch(c.pc){
case 0x408a9000:{ // INT_LEFT:8<-8,1:cr:k=63
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x3full,r<1>(c,0x600)));
return 0x408a9004;}
default:return 0;}}
uint32_t ref_2218(Cpu& c){switch(c.pc){
case 0x408aa000:{ // INT_LEFT:8<-8,1:cr:k=127
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x7full,r<1>(c,0x600)));
return 0x408aa004;}
default:return 0;}}
uint32_t ref_2219(Cpu& c){switch(c.pc){
case 0x408ab000:{ // INT_LEFT:8<-8,1:cr:k=128
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x80ull,r<1>(c,0x600)));
return 0x408ab004;}
default:return 0;}}
uint32_t ref_2220(Cpu& c){switch(c.pc){
case 0x408ac000:{ // INT_LEFT:8<-8,1:cr:k=255
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0xffull,r<1>(c,0x600)));
return 0x408ac004;}
default:return 0;}}
uint32_t ref_2221(Cpu& c){switch(c.pc){
case 0x408ad000:{ // INT_LEFT:8<-8,1:cr:k=32767
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x7fffull,r<1>(c,0x600)));
return 0x408ad004;}
default:return 0;}}
uint32_t ref_2222(Cpu& c){switch(c.pc){
case 0x408ae000:{ // INT_LEFT:8<-8,1:cr:k=32768
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x8000ull,r<1>(c,0x600)));
return 0x408ae004;}
default:return 0;}}
uint32_t ref_2223(Cpu& c){switch(c.pc){
case 0x408af000:{ // INT_LEFT:8<-8,1:cr:k=65535
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0xffffull,r<1>(c,0x600)));
return 0x408af004;}
default:return 0;}}
uint32_t ref_2224(Cpu& c){switch(c.pc){
case 0x408b0000:{ // INT_LEFT:8<-8,1:cr:k=2147483647
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x7fffffffull,r<1>(c,0x600)));
return 0x408b0004;}
default:return 0;}}
uint32_t ref_2225(Cpu& c){switch(c.pc){
case 0x408b1000:{ // INT_LEFT:8<-8,1:cr:k=2147483648
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0x80000000ull,r<1>(c,0x600)));
return 0x408b1004;}
default:return 0;}}
uint32_t ref_2226(Cpu& c){switch(c.pc){
case 0x408b2000:{ // INT_LEFT:8<-8,1:cr:k=4294967295
wr<8>(c,0x400,eval<Op::INT_LEFT,8,8,1>(0xffffffffull,r<1>(c,0x600)));
return 0x408b2004;}
default:return 0;}}
uint32_t ref_2227(Cpu& c){switch(c.pc){
case 0x408b3000:{ // FLOAT_MULT:8<-8,8:rr
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,r<8>(c,0x600),8,8));
return 0x408b3004;}
default:return 0;}}
uint32_t ref_2228(Cpu& c){switch(c.pc){
case 0x408b4000:{ // FLOAT_MULT:8<-8,8:rc:k=0
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x0ull,8,8));
return 0x408b4004;}
default:return 0;}}
uint32_t ref_2229(Cpu& c){switch(c.pc){
case 0x408b5000:{ // FLOAT_MULT:8<-8,8:rc:k=1
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x1ull,8,8));
return 0x408b5004;}
default:return 0;}}
uint32_t ref_2230(Cpu& c){switch(c.pc){
case 0x408b6000:{ // FLOAT_MULT:8<-8,8:rc:k=2
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x2ull,8,8));
return 0x408b6004;}
default:return 0;}}
uint32_t ref_2231(Cpu& c){switch(c.pc){
case 0x408b7000:{ // FLOAT_MULT:8<-8,8:rc:k=3
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x3ull,8,8));
return 0x408b7004;}
default:return 0;}}
uint32_t ref_2232(Cpu& c){switch(c.pc){
case 0x408b8000:{ // FLOAT_MULT:8<-8,8:rc:k=7
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x7ull,8,8));
return 0x408b8004;}
default:return 0;}}
uint32_t ref_2233(Cpu& c){switch(c.pc){
case 0x408b9000:{ // FLOAT_MULT:8<-8,8:rc:k=8
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x8ull,8,8));
return 0x408b9004;}
default:return 0;}}
uint32_t ref_2234(Cpu& c){switch(c.pc){
case 0x408ba000:{ // FLOAT_MULT:8<-8,8:rc:k=31
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x1full,8,8));
return 0x408ba004;}
default:return 0;}}
uint32_t ref_2235(Cpu& c){switch(c.pc){
case 0x408bb000:{ // FLOAT_MULT:8<-8,8:rc:k=32
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x20ull,8,8));
return 0x408bb004;}
default:return 0;}}
uint32_t ref_2236(Cpu& c){switch(c.pc){
case 0x408bc000:{ // FLOAT_MULT:8<-8,8:rc:k=63
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x3full,8,8));
return 0x408bc004;}
default:return 0;}}
uint32_t ref_2237(Cpu& c){switch(c.pc){
case 0x408bd000:{ // FLOAT_MULT:8<-8,8:rc:k=127
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x7full,8,8));
return 0x408bd004;}
default:return 0;}}
uint32_t ref_2238(Cpu& c){switch(c.pc){
case 0x408be000:{ // FLOAT_MULT:8<-8,8:rc:k=128
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x80ull,8,8));
return 0x408be004;}
default:return 0;}}
uint32_t ref_2239(Cpu& c){switch(c.pc){
case 0x408bf000:{ // FLOAT_MULT:8<-8,8:rc:k=255
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0xffull,8,8));
return 0x408bf004;}
default:return 0;}}
uint32_t ref_2240(Cpu& c){switch(c.pc){
case 0x408c0000:{ // FLOAT_MULT:8<-8,8:rc:k=32767
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x7fffull,8,8));
return 0x408c0004;}
default:return 0;}}
uint32_t ref_2241(Cpu& c){switch(c.pc){
case 0x408c1000:{ // FLOAT_MULT:8<-8,8:rc:k=32768
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x8000ull,8,8));
return 0x408c1004;}
default:return 0;}}
uint32_t ref_2242(Cpu& c){switch(c.pc){
case 0x408c2000:{ // FLOAT_MULT:8<-8,8:rc:k=65535
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0xffffull,8,8));
return 0x408c2004;}
default:return 0;}}
uint32_t ref_2243(Cpu& c){switch(c.pc){
case 0x408c3000:{ // FLOAT_MULT:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x7fffffffull,8,8));
return 0x408c3004;}
default:return 0;}}
uint32_t ref_2244(Cpu& c){switch(c.pc){
case 0x408c4000:{ // FLOAT_MULT:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0x80000000ull,8,8));
return 0x408c4004;}
default:return 0;}}
uint32_t ref_2245(Cpu& c){switch(c.pc){
case 0x408c5000:{ // FLOAT_MULT:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,float_op("FLOAT_MULT",r<8>(c,0x500),8,0xffffffffull,8,8));
return 0x408c5004;}
default:return 0;}}
uint32_t ref_2246(Cpu& c){switch(c.pc){
case 0x408c6000:{ // INT_SUB:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x408c6004;}
default:return 0;}}
uint32_t ref_2247(Cpu& c){switch(c.pc){
case 0x408c7000:{ // INT_SUB:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x408c7004;}
default:return 0;}}
uint32_t ref_2248(Cpu& c){switch(c.pc){
case 0x408c8000:{ // INT_SUB:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x408c8004;}
default:return 0;}}
uint32_t ref_2249(Cpu& c){switch(c.pc){
case 0x408c9000:{ // INT_SUB:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x408c9004;}
default:return 0;}}
uint32_t ref_2250(Cpu& c){switch(c.pc){
case 0x408ca000:{ // INT_SUB:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x408ca004;}
default:return 0;}}
uint32_t ref_2251(Cpu& c){switch(c.pc){
case 0x408cb000:{ // INT_SUB:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x408cb004;}
default:return 0;}}
uint32_t ref_2252(Cpu& c){switch(c.pc){
case 0x408cc000:{ // INT_SUB:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x408cc004;}
default:return 0;}}
uint32_t ref_2253(Cpu& c){switch(c.pc){
case 0x408cd000:{ // INT_SUB:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x1full));
return 0x408cd004;}
default:return 0;}}
uint32_t ref_2254(Cpu& c){switch(c.pc){
case 0x408ce000:{ // INT_SUB:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x408ce004;}
default:return 0;}}
uint32_t ref_2255(Cpu& c){switch(c.pc){
case 0x408cf000:{ // INT_SUB:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x3full));
return 0x408cf004;}
default:return 0;}}
uint32_t ref_2256(Cpu& c){switch(c.pc){
case 0x408d0000:{ // INT_SUB:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x7full));
return 0x408d0004;}
default:return 0;}}
uint32_t ref_2257(Cpu& c){switch(c.pc){
case 0x408d1000:{ // INT_SUB:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x408d1004;}
default:return 0;}}
uint32_t ref_2258(Cpu& c){switch(c.pc){
case 0x408d2000:{ // INT_SUB:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0xffull));
return 0x408d2004;}
default:return 0;}}
uint32_t ref_2259(Cpu& c){switch(c.pc){
case 0x408d3000:{ // INT_SUB:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x408d3004;}
default:return 0;}}
uint32_t ref_2260(Cpu& c){switch(c.pc){
case 0x408d4000:{ // INT_SUB:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x408d4004;}
default:return 0;}}
uint32_t ref_2261(Cpu& c){switch(c.pc){
case 0x408d5000:{ // INT_SUB:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x408d5004;}
default:return 0;}}
uint32_t ref_2262(Cpu& c){switch(c.pc){
case 0x408d6000:{ // INT_SUB:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x408d6004;}
default:return 0;}}
uint32_t ref_2263(Cpu& c){switch(c.pc){
case 0x408d7000:{ // INT_SUB:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x408d7004;}
default:return 0;}}
uint32_t ref_2264(Cpu& c){switch(c.pc){
case 0x408d8000:{ // INT_SUB:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x408d8004;}
default:return 0;}}
uint32_t ref_2265(Cpu& c){switch(c.pc){
case 0x408d9000:{ // INT2FLOAT:8<-4:r
wr<8>(c,0x400,float_op("INT2FLOAT",r<4>(c,0x500),4,0x0ull,4,8));
return 0x408d9004;}
default:return 0;}}
uint32_t ref_2266(Cpu& c){switch(c.pc){
case 0x408da000:{ // INT_ZEXT:8<-2:r
wr<8>(c,0x400,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x500)));
return 0x408da004;}
default:return 0;}}
uint32_t ref_2267(Cpu& c){switch(c.pc){
case 0x408db000:{ // ROUND:8<-8:r
wr<8>(c,0x400,float_op("ROUND",r<8>(c,0x500),8,0x0ull,4,8));
return 0x408db004;}
default:return 0;}}
uint32_t ref_2268(Cpu& c){switch(c.pc){
case 0x408dc000:{ // TRUNC:4<-8:r
wr<4>(c,0x400,float_op("TRUNC",r<8>(c,0x500),8,0x0ull,4,4));
return 0x408dc004;}
default:return 0;}}
uint32_t ref_2269(Cpu& c){switch(c.pc){
case 0x408dd000:{ // FLOAT_DIV:8<-8,8:rr
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,r<8>(c,0x600),8,8));
return 0x408dd004;}
default:return 0;}}
uint32_t ref_2270(Cpu& c){switch(c.pc){
case 0x408de000:{ // FLOAT_DIV:8<-8,8:rc:k=0
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x0ull,8,8));
return 0x408de004;}
default:return 0;}}
uint32_t ref_2271(Cpu& c){switch(c.pc){
case 0x408df000:{ // FLOAT_DIV:8<-8,8:rc:k=1
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x1ull,8,8));
return 0x408df004;}
default:return 0;}}
uint32_t ref_2272(Cpu& c){switch(c.pc){
case 0x408e0000:{ // FLOAT_DIV:8<-8,8:rc:k=2
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x2ull,8,8));
return 0x408e0004;}
default:return 0;}}
uint32_t ref_2273(Cpu& c){switch(c.pc){
case 0x408e1000:{ // FLOAT_DIV:8<-8,8:rc:k=3
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x3ull,8,8));
return 0x408e1004;}
default:return 0;}}
uint32_t ref_2274(Cpu& c){switch(c.pc){
case 0x408e2000:{ // FLOAT_DIV:8<-8,8:rc:k=7
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x7ull,8,8));
return 0x408e2004;}
default:return 0;}}
uint32_t ref_2275(Cpu& c){switch(c.pc){
case 0x408e3000:{ // FLOAT_DIV:8<-8,8:rc:k=8
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x8ull,8,8));
return 0x408e3004;}
default:return 0;}}
uint32_t ref_2276(Cpu& c){switch(c.pc){
case 0x408e4000:{ // FLOAT_DIV:8<-8,8:rc:k=31
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x1full,8,8));
return 0x408e4004;}
default:return 0;}}
uint32_t ref_2277(Cpu& c){switch(c.pc){
case 0x408e5000:{ // FLOAT_DIV:8<-8,8:rc:k=32
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x20ull,8,8));
return 0x408e5004;}
default:return 0;}}
uint32_t ref_2278(Cpu& c){switch(c.pc){
case 0x408e6000:{ // FLOAT_DIV:8<-8,8:rc:k=63
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x3full,8,8));
return 0x408e6004;}
default:return 0;}}
uint32_t ref_2279(Cpu& c){switch(c.pc){
case 0x408e7000:{ // FLOAT_DIV:8<-8,8:rc:k=127
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x7full,8,8));
return 0x408e7004;}
default:return 0;}}
uint32_t ref_2280(Cpu& c){switch(c.pc){
case 0x408e8000:{ // FLOAT_DIV:8<-8,8:rc:k=128
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x80ull,8,8));
return 0x408e8004;}
default:return 0;}}
uint32_t ref_2281(Cpu& c){switch(c.pc){
case 0x408e9000:{ // FLOAT_DIV:8<-8,8:rc:k=255
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0xffull,8,8));
return 0x408e9004;}
default:return 0;}}
uint32_t ref_2282(Cpu& c){switch(c.pc){
case 0x408ea000:{ // FLOAT_DIV:8<-8,8:rc:k=32767
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x7fffull,8,8));
return 0x408ea004;}
default:return 0;}}
uint32_t ref_2283(Cpu& c){switch(c.pc){
case 0x408eb000:{ // FLOAT_DIV:8<-8,8:rc:k=32768
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x8000ull,8,8));
return 0x408eb004;}
default:return 0;}}
uint32_t ref_2284(Cpu& c){switch(c.pc){
case 0x408ec000:{ // FLOAT_DIV:8<-8,8:rc:k=65535
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0xffffull,8,8));
return 0x408ec004;}
default:return 0;}}
uint32_t ref_2285(Cpu& c){switch(c.pc){
case 0x408ed000:{ // FLOAT_DIV:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x7fffffffull,8,8));
return 0x408ed004;}
default:return 0;}}
uint32_t ref_2286(Cpu& c){switch(c.pc){
case 0x408ee000:{ // FLOAT_DIV:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0x80000000ull,8,8));
return 0x408ee004;}
default:return 0;}}
uint32_t ref_2287(Cpu& c){switch(c.pc){
case 0x408ef000:{ // FLOAT_DIV:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,float_op("FLOAT_DIV",r<8>(c,0x500),8,0xffffffffull,8,8));
return 0x408ef004;}
default:return 0;}}
uint32_t ref_2288(Cpu& c){switch(c.pc){
case 0x408f0000:{ // FLOAT_NOTEQUAL:1<-10,10:rr
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,r<10>(c,0x600),10,1));
return 0x408f0004;}
default:return 0;}}
uint32_t ref_2289(Cpu& c){switch(c.pc){
case 0x408f1000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=0
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x0ull,10,1));
return 0x408f1004;}
default:return 0;}}
uint32_t ref_2290(Cpu& c){switch(c.pc){
case 0x408f2000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=1
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x1ull,10,1));
return 0x408f2004;}
default:return 0;}}
uint32_t ref_2291(Cpu& c){switch(c.pc){
case 0x408f3000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=2
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x2ull,10,1));
return 0x408f3004;}
default:return 0;}}
uint32_t ref_2292(Cpu& c){switch(c.pc){
case 0x408f4000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=3
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x3ull,10,1));
return 0x408f4004;}
default:return 0;}}
uint32_t ref_2293(Cpu& c){switch(c.pc){
case 0x408f5000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=7
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x7ull,10,1));
return 0x408f5004;}
default:return 0;}}
uint32_t ref_2294(Cpu& c){switch(c.pc){
case 0x408f6000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=8
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x8ull,10,1));
return 0x408f6004;}
default:return 0;}}
uint32_t ref_2295(Cpu& c){switch(c.pc){
case 0x408f7000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=31
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x1full,10,1));
return 0x408f7004;}
default:return 0;}}
uint32_t ref_2296(Cpu& c){switch(c.pc){
case 0x408f8000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=32
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x20ull,10,1));
return 0x408f8004;}
default:return 0;}}
uint32_t ref_2297(Cpu& c){switch(c.pc){
case 0x408f9000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=63
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x3full,10,1));
return 0x408f9004;}
default:return 0;}}
uint32_t ref_2298(Cpu& c){switch(c.pc){
case 0x408fa000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=127
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x7full,10,1));
return 0x408fa004;}
default:return 0;}}
uint32_t ref_2299(Cpu& c){switch(c.pc){
case 0x408fb000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=128
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x80ull,10,1));
return 0x408fb004;}
default:return 0;}}
uint32_t ref_2300(Cpu& c){switch(c.pc){
case 0x408fc000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=255
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0xffull,10,1));
return 0x408fc004;}
default:return 0;}}
uint32_t ref_2301(Cpu& c){switch(c.pc){
case 0x408fd000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=32767
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x7fffull,10,1));
return 0x408fd004;}
default:return 0;}}
uint32_t ref_2302(Cpu& c){switch(c.pc){
case 0x408fe000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=32768
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x8000ull,10,1));
return 0x408fe004;}
default:return 0;}}
uint32_t ref_2303(Cpu& c){switch(c.pc){
case 0x408ff000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=65535
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0xffffull,10,1));
return 0x408ff004;}
default:return 0;}}
uint32_t ref_2304(Cpu& c){switch(c.pc){
case 0x40900000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=2147483647
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x7fffffffull,10,1));
return 0x40900004;}
default:return 0;}}
uint32_t ref_2305(Cpu& c){switch(c.pc){
case 0x40901000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=2147483648
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0x80000000ull,10,1));
return 0x40901004;}
default:return 0;}}
uint32_t ref_2306(Cpu& c){switch(c.pc){
case 0x40902000:{ // FLOAT_NOTEQUAL:1<-10,10:rc:k=4294967295
wr<1>(c,0x400,float_op("FLOAT_NOTEQUAL",r<10>(c,0x500),10,0xffffffffull,10,1));
return 0x40902004;}
default:return 0;}}
uint32_t ref_2307(Cpu& c){switch(c.pc){
case 0x40903000:{ // INT_SRIGHT:1<-1,4:rr
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),r<4>(c,0x600)));
return 0x40903004;}
default:return 0;}}
uint32_t ref_2308(Cpu& c){switch(c.pc){
case 0x40904000:{ // INT_SRIGHT:1<-1,4:rc:k=0
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x0ull));
return 0x40904004;}
default:return 0;}}
uint32_t ref_2309(Cpu& c){switch(c.pc){
case 0x40905000:{ // INT_SRIGHT:1<-1,4:rc:k=1
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x1ull));
return 0x40905004;}
default:return 0;}}
uint32_t ref_2310(Cpu& c){switch(c.pc){
case 0x40906000:{ // INT_SRIGHT:1<-1,4:rc:k=2
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x2ull));
return 0x40906004;}
default:return 0;}}
uint32_t ref_2311(Cpu& c){switch(c.pc){
case 0x40907000:{ // INT_SRIGHT:1<-1,4:rc:k=3
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x3ull));
return 0x40907004;}
default:return 0;}}
uint32_t ref_2312(Cpu& c){switch(c.pc){
case 0x40908000:{ // INT_SRIGHT:1<-1,4:rc:k=7
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x7ull));
return 0x40908004;}
default:return 0;}}
uint32_t ref_2313(Cpu& c){switch(c.pc){
case 0x40909000:{ // INT_SRIGHT:1<-1,4:rc:k=8
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x8ull));
return 0x40909004;}
default:return 0;}}
uint32_t ref_2314(Cpu& c){switch(c.pc){
case 0x4090a000:{ // INT_SRIGHT:1<-1,4:rc:k=31
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x1full));
return 0x4090a004;}
default:return 0;}}
uint32_t ref_2315(Cpu& c){switch(c.pc){
case 0x4090b000:{ // INT_SRIGHT:1<-1,4:rc:k=32
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x20ull));
return 0x4090b004;}
default:return 0;}}
uint32_t ref_2316(Cpu& c){switch(c.pc){
case 0x4090c000:{ // INT_SRIGHT:1<-1,4:rc:k=63
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x3full));
return 0x4090c004;}
default:return 0;}}
uint32_t ref_2317(Cpu& c){switch(c.pc){
case 0x4090d000:{ // INT_SRIGHT:1<-1,4:rc:k=127
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x7full));
return 0x4090d004;}
default:return 0;}}
uint32_t ref_2318(Cpu& c){switch(c.pc){
case 0x4090e000:{ // INT_SRIGHT:1<-1,4:rc:k=128
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x80ull));
return 0x4090e004;}
default:return 0;}}
uint32_t ref_2319(Cpu& c){switch(c.pc){
case 0x4090f000:{ // INT_SRIGHT:1<-1,4:rc:k=255
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0xffull));
return 0x4090f004;}
default:return 0;}}
uint32_t ref_2320(Cpu& c){switch(c.pc){
case 0x40910000:{ // INT_SRIGHT:1<-1,4:rc:k=32767
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x7fffull));
return 0x40910004;}
default:return 0;}}
uint32_t ref_2321(Cpu& c){switch(c.pc){
case 0x40911000:{ // INT_SRIGHT:1<-1,4:rc:k=32768
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x8000ull));
return 0x40911004;}
default:return 0;}}
uint32_t ref_2322(Cpu& c){switch(c.pc){
case 0x40912000:{ // INT_SRIGHT:1<-1,4:rc:k=65535
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0xffffull));
return 0x40912004;}
default:return 0;}}
uint32_t ref_2323(Cpu& c){switch(c.pc){
case 0x40913000:{ // INT_SRIGHT:1<-1,4:rc:k=2147483647
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x7fffffffull));
return 0x40913004;}
default:return 0;}}
uint32_t ref_2324(Cpu& c){switch(c.pc){
case 0x40914000:{ // INT_SRIGHT:1<-1,4:rc:k=2147483648
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0x80000000ull));
return 0x40914004;}
default:return 0;}}
uint32_t ref_2325(Cpu& c){switch(c.pc){
case 0x40915000:{ // INT_SRIGHT:1<-1,4:rc:k=4294967295
wr<1>(c,0x400,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x500),0xffffffffull));
return 0x40915004;}
default:return 0;}}
uint32_t ref_2326(Cpu& c){switch(c.pc){
case 0x40916000:{ // INT_ADD:8<-8,8:rr
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),r<8>(c,0x600)));
return 0x40916004;}
default:return 0;}}
uint32_t ref_2327(Cpu& c){switch(c.pc){
case 0x40917000:{ // INT_ADD:8<-8,8:rc:k=0
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x0ull));
return 0x40917004;}
default:return 0;}}
uint32_t ref_2328(Cpu& c){switch(c.pc){
case 0x40918000:{ // INT_ADD:8<-8,8:rc:k=1
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x1ull));
return 0x40918004;}
default:return 0;}}
uint32_t ref_2329(Cpu& c){switch(c.pc){
case 0x40919000:{ // INT_ADD:8<-8,8:rc:k=2
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x2ull));
return 0x40919004;}
default:return 0;}}
uint32_t ref_2330(Cpu& c){switch(c.pc){
case 0x4091a000:{ // INT_ADD:8<-8,8:rc:k=3
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x3ull));
return 0x4091a004;}
default:return 0;}}
uint32_t ref_2331(Cpu& c){switch(c.pc){
case 0x4091b000:{ // INT_ADD:8<-8,8:rc:k=7
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x7ull));
return 0x4091b004;}
default:return 0;}}
uint32_t ref_2332(Cpu& c){switch(c.pc){
case 0x4091c000:{ // INT_ADD:8<-8,8:rc:k=8
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x8ull));
return 0x4091c004;}
default:return 0;}}
uint32_t ref_2333(Cpu& c){switch(c.pc){
case 0x4091d000:{ // INT_ADD:8<-8,8:rc:k=31
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x1full));
return 0x4091d004;}
default:return 0;}}
uint32_t ref_2334(Cpu& c){switch(c.pc){
case 0x4091e000:{ // INT_ADD:8<-8,8:rc:k=32
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x20ull));
return 0x4091e004;}
default:return 0;}}
uint32_t ref_2335(Cpu& c){switch(c.pc){
case 0x4091f000:{ // INT_ADD:8<-8,8:rc:k=63
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x3full));
return 0x4091f004;}
default:return 0;}}
uint32_t ref_2336(Cpu& c){switch(c.pc){
case 0x40920000:{ // INT_ADD:8<-8,8:rc:k=127
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x7full));
return 0x40920004;}
default:return 0;}}
uint32_t ref_2337(Cpu& c){switch(c.pc){
case 0x40921000:{ // INT_ADD:8<-8,8:rc:k=128
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x80ull));
return 0x40921004;}
default:return 0;}}
uint32_t ref_2338(Cpu& c){switch(c.pc){
case 0x40922000:{ // INT_ADD:8<-8,8:rc:k=255
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0xffull));
return 0x40922004;}
default:return 0;}}
uint32_t ref_2339(Cpu& c){switch(c.pc){
case 0x40923000:{ // INT_ADD:8<-8,8:rc:k=32767
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x7fffull));
return 0x40923004;}
default:return 0;}}
uint32_t ref_2340(Cpu& c){switch(c.pc){
case 0x40924000:{ // INT_ADD:8<-8,8:rc:k=32768
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x8000ull));
return 0x40924004;}
default:return 0;}}
uint32_t ref_2341(Cpu& c){switch(c.pc){
case 0x40925000:{ // INT_ADD:8<-8,8:rc:k=65535
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0xffffull));
return 0x40925004;}
default:return 0;}}
uint32_t ref_2342(Cpu& c){switch(c.pc){
case 0x40926000:{ // INT_ADD:8<-8,8:rc:k=2147483647
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x7fffffffull));
return 0x40926004;}
default:return 0;}}
uint32_t ref_2343(Cpu& c){switch(c.pc){
case 0x40927000:{ // INT_ADD:8<-8,8:rc:k=2147483648
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0x80000000ull));
return 0x40927004;}
default:return 0;}}
uint32_t ref_2344(Cpu& c){switch(c.pc){
case 0x40928000:{ // INT_ADD:8<-8,8:rc:k=4294967295
wr<8>(c,0x400,eval<Op::INT_ADD,8,8,8>(r<8>(c,0x500),0xffffffffull));
return 0x40928004;}
default:return 0;}}
uint32_t ref_2345(Cpu& c){switch(c.pc){
case 0x40929000:{ // INT_RIGHT:2<-2,1:rr
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),r<1>(c,0x600)));
return 0x40929004;}
default:return 0;}}
uint32_t ref_2346(Cpu& c){switch(c.pc){
case 0x4092a000:{ // INT_RIGHT:2<-2,1:rc:k=0
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x0ull));
return 0x4092a004;}
default:return 0;}}
uint32_t ref_2347(Cpu& c){switch(c.pc){
case 0x4092b000:{ // INT_RIGHT:2<-2,1:rc:k=1
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x1ull));
return 0x4092b004;}
default:return 0;}}
uint32_t ref_2348(Cpu& c){switch(c.pc){
case 0x4092c000:{ // INT_RIGHT:2<-2,1:rc:k=2
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x2ull));
return 0x4092c004;}
default:return 0;}}
uint32_t ref_2349(Cpu& c){switch(c.pc){
case 0x4092d000:{ // INT_RIGHT:2<-2,1:rc:k=3
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x3ull));
return 0x4092d004;}
default:return 0;}}
uint32_t ref_2350(Cpu& c){switch(c.pc){
case 0x4092e000:{ // INT_RIGHT:2<-2,1:rc:k=7
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x7ull));
return 0x4092e004;}
default:return 0;}}
uint32_t ref_2351(Cpu& c){switch(c.pc){
case 0x4092f000:{ // INT_RIGHT:2<-2,1:rc:k=8
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x8ull));
return 0x4092f004;}
default:return 0;}}
uint32_t ref_2352(Cpu& c){switch(c.pc){
case 0x40930000:{ // INT_RIGHT:2<-2,1:rc:k=31
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x1full));
return 0x40930004;}
default:return 0;}}
uint32_t ref_2353(Cpu& c){switch(c.pc){
case 0x40931000:{ // INT_RIGHT:2<-2,1:rc:k=32
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x20ull));
return 0x40931004;}
default:return 0;}}
uint32_t ref_2354(Cpu& c){switch(c.pc){
case 0x40932000:{ // INT_RIGHT:2<-2,1:rc:k=63
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x3full));
return 0x40932004;}
default:return 0;}}
uint32_t ref_2355(Cpu& c){switch(c.pc){
case 0x40933000:{ // INT_RIGHT:2<-2,1:rc:k=127
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x7full));
return 0x40933004;}
default:return 0;}}
uint32_t ref_2356(Cpu& c){switch(c.pc){
case 0x40934000:{ // INT_RIGHT:2<-2,1:rc:k=128
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x80ull));
return 0x40934004;}
default:return 0;}}
uint32_t ref_2357(Cpu& c){switch(c.pc){
case 0x40935000:{ // INT_RIGHT:2<-2,1:rc:k=255
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x40935004;}
default:return 0;}}
uint32_t ref_2358(Cpu& c){switch(c.pc){
case 0x40936000:{ // INT_RIGHT:2<-2,1:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x40936004;}
default:return 0;}}
uint32_t ref_2359(Cpu& c){switch(c.pc){
case 0x40937000:{ // INT_RIGHT:2<-2,1:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x0ull));
return 0x40937004;}
default:return 0;}}
uint32_t ref_2360(Cpu& c){switch(c.pc){
case 0x40938000:{ // INT_RIGHT:2<-2,1:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x40938004;}
default:return 0;}}
uint32_t ref_2361(Cpu& c){switch(c.pc){
case 0x40939000:{ // INT_RIGHT:2<-2,1:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x40939004;}
default:return 0;}}
uint32_t ref_2362(Cpu& c){switch(c.pc){
case 0x4093a000:{ // INT_RIGHT:2<-2,1:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0x0ull));
return 0x4093a004;}
default:return 0;}}
uint32_t ref_2363(Cpu& c){switch(c.pc){
case 0x4093b000:{ // INT_RIGHT:2<-2,1:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_RIGHT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x4093b004;}
default:return 0;}}
uint32_t ref_2364(Cpu& c){switch(c.pc){
case 0x4093c000:{ // INT_LEFT:2<-2,1:rr
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),r<1>(c,0x600)));
return 0x4093c004;}
default:return 0;}}
uint32_t ref_2365(Cpu& c){switch(c.pc){
case 0x4093d000:{ // INT_LEFT:2<-2,1:rc:k=0
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x0ull));
return 0x4093d004;}
default:return 0;}}
uint32_t ref_2366(Cpu& c){switch(c.pc){
case 0x4093e000:{ // INT_LEFT:2<-2,1:rc:k=1
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x1ull));
return 0x4093e004;}
default:return 0;}}
uint32_t ref_2367(Cpu& c){switch(c.pc){
case 0x4093f000:{ // INT_LEFT:2<-2,1:rc:k=2
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x2ull));
return 0x4093f004;}
default:return 0;}}
uint32_t ref_2368(Cpu& c){switch(c.pc){
case 0x40940000:{ // INT_LEFT:2<-2,1:rc:k=3
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x3ull));
return 0x40940004;}
default:return 0;}}
uint32_t ref_2369(Cpu& c){switch(c.pc){
case 0x40941000:{ // INT_LEFT:2<-2,1:rc:k=7
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x7ull));
return 0x40941004;}
default:return 0;}}
uint32_t ref_2370(Cpu& c){switch(c.pc){
case 0x40942000:{ // INT_LEFT:2<-2,1:rc:k=8
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x8ull));
return 0x40942004;}
default:return 0;}}
uint32_t ref_2371(Cpu& c){switch(c.pc){
case 0x40943000:{ // INT_LEFT:2<-2,1:rc:k=31
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x1full));
return 0x40943004;}
default:return 0;}}
uint32_t ref_2372(Cpu& c){switch(c.pc){
case 0x40944000:{ // INT_LEFT:2<-2,1:rc:k=32
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x20ull));
return 0x40944004;}
default:return 0;}}
uint32_t ref_2373(Cpu& c){switch(c.pc){
case 0x40945000:{ // INT_LEFT:2<-2,1:rc:k=63
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x3full));
return 0x40945004;}
default:return 0;}}
uint32_t ref_2374(Cpu& c){switch(c.pc){
case 0x40946000:{ // INT_LEFT:2<-2,1:rc:k=127
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x7full));
return 0x40946004;}
default:return 0;}}
uint32_t ref_2375(Cpu& c){switch(c.pc){
case 0x40947000:{ // INT_LEFT:2<-2,1:rc:k=128
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x80ull));
return 0x40947004;}
default:return 0;}}
uint32_t ref_2376(Cpu& c){switch(c.pc){
case 0x40948000:{ // INT_LEFT:2<-2,1:rc:k=255
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x40948004;}
default:return 0;}}
uint32_t ref_2377(Cpu& c){switch(c.pc){
case 0x40949000:{ // INT_LEFT:2<-2,1:rc:k=32767
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x40949004;}
default:return 0;}}
uint32_t ref_2378(Cpu& c){switch(c.pc){
case 0x4094a000:{ // INT_LEFT:2<-2,1:rc:k=32768
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x0ull));
return 0x4094a004;}
default:return 0;}}
uint32_t ref_2379(Cpu& c){switch(c.pc){
case 0x4094b000:{ // INT_LEFT:2<-2,1:rc:k=65535
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x4094b004;}
default:return 0;}}
uint32_t ref_2380(Cpu& c){switch(c.pc){
case 0x4094c000:{ // INT_LEFT:2<-2,1:rc:k=2147483647
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x4094c004;}
default:return 0;}}
uint32_t ref_2381(Cpu& c){switch(c.pc){
case 0x4094d000:{ // INT_LEFT:2<-2,1:rc:k=2147483648
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0x0ull));
return 0x4094d004;}
default:return 0;}}
uint32_t ref_2382(Cpu& c){switch(c.pc){
case 0x4094e000:{ // INT_LEFT:2<-2,1:rc:k=4294967295
wr<2>(c,0x400,eval<Op::INT_LEFT,2,2,1>(r<2>(c,0x500),0xffull));
return 0x4094e004;}
default:return 0;}}
uint32_t ref_2383(Cpu& c){switch(c.pc){
case 0x4094f000:{ // LOAD:4<-4,4
wr<4>(c,0x400,m<4>(c,r<4>(c,0x500)));
return 0x4094f004;}
default:return 0;}}
uint32_t ref_2384(Cpu& c){switch(c.pc){
case 0x40950000:{ // STORE:8,4,4
wm<4>(c,r<4>(c,0x500),r<4>(c,0x600));
return 0x40950004;}
default:return 0;}}
uint32_t ref_2385(Cpu& c){switch(c.pc){
case 0x40951000:{ // STORE:4,4,4
wm<4>(c,r<4>(c,0x500),r<4>(c,0x600));
return 0x40951004;}
default:return 0;}}
uint32_t ref_2386(Cpu& c){switch(c.pc){
case 0x40952000:{ // LOAD:1<-4,4
wr<1>(c,0x400,m<1>(c,r<4>(c,0x500)));
return 0x40952004;}
default:return 0;}}
uint32_t ref_2387(Cpu& c){switch(c.pc){
case 0x40953000:{ // STORE:4,4,1
wm<1>(c,r<4>(c,0x500),r<1>(c,0x600));
return 0x40953004;}
default:return 0;}}
uint32_t ref_2388(Cpu& c){switch(c.pc){
case 0x40954000:{ // LOAD:4<-8,4
wr<4>(c,0x400,m<4>(c,r<4>(c,0x500)));
return 0x40954004;}
default:return 0;}}
uint32_t ref_2389(Cpu& c){switch(c.pc){
case 0x40955000:{ // LOAD:2<-4,4
wr<2>(c,0x400,m<2>(c,r<4>(c,0x500)));
return 0x40955004;}
default:return 0;}}
uint32_t ref_2390(Cpu& c){switch(c.pc){
case 0x40956000:{ // STORE:4,4,2
wm<2>(c,r<4>(c,0x500),r<2>(c,0x600));
return 0x40956004;}
default:return 0;}}
uint32_t ref_2391(Cpu& c){switch(c.pc){
case 0x40957000:{ // LOAD:8<-4,4
wr<8>(c,0x400,m<8>(c,r<4>(c,0x500)));
return 0x40957004;}
default:return 0;}}
uint32_t ref_2392(Cpu& c){switch(c.pc){
case 0x40958000:{ // STORE:4,4,8
wm<8>(c,r<4>(c,0x500),r<8>(c,0x600));
return 0x40958004;}
default:return 0;}}
uint32_t ref_2393(Cpu& c){switch(c.pc){
case 0x40959000:{ // LOAD:16<-4,4
wr<16>(c,0x400,m<16>(c,r<4>(c,0x500)));
return 0x40959004;}
default:return 0;}}
uint32_t ref_2394(Cpu& c){switch(c.pc){
case 0x4095a000:{ // STORE:4,4,16
wm<16>(c,r<4>(c,0x500),r<16>(c,0x600));
return 0x4095a004;}
default:return 0;}}
uint32_t ref_2395(Cpu& c){switch(c.pc){
case 0x4095b000:{ // STORE:8,4,2
wm<2>(c,r<4>(c,0x500),r<2>(c,0x600));
return 0x4095b004;}
default:return 0;}}
uint32_t ref_2396(Cpu& c){switch(c.pc){
case 0x4095c000:{ // STORE:8,4,10
wm<10>(c,r<4>(c,0x500),r<10>(c,0x600));
return 0x4095c004;}
default:return 0;}}
uint32_t ref_2397(Cpu& c){switch(c.pc){
case 0x4095d000:{ // LOAD:2<-8,4
wr<2>(c,0x400,m<2>(c,r<4>(c,0x500)));
return 0x4095d004;}
default:return 0;}}
uint32_t ref_2398(Cpu& c){switch(c.pc){
case 0x4095e000:{ // LOAD:10<-8,4
wr<10>(c,0x400,m<10>(c,r<4>(c,0x500)));
return 0x4095e004;}
default:return 0;}}
uint32_t ref_2399(Cpu& c){switch(c.pc){
case 0x4095f000:{ // LOAD:1<-8,4
wr<1>(c,0x400,m<1>(c,r<4>(c,0x500)));
return 0x4095f004;}
default:return 0;}}
uint32_t ref_2400(Cpu& c){switch(c.pc){
case 0x40960000:{ // STORE:4,4,10
wm<10>(c,r<4>(c,0x500),r<10>(c,0x600));
return 0x40960004;}
default:return 0;}}
uint32_t ref_2401(Cpu& c){switch(c.pc){
case 0x40961000:{ // LOAD:10<-4,4
wr<10>(c,0x400,m<10>(c,r<4>(c,0x500)));
return 0x40961004;}
default:return 0;}}
uint32_t ref_2402(Cpu& c){switch(c.pc){
case 0x40962000:{ // STORE:8,4,1
wm<1>(c,r<4>(c,0x500),r<1>(c,0x600));
return 0x40962004;}
default:return 0;}}
uint32_t ref_2403(Cpu& c){switch(c.pc){
case 0x40963000:{ // CALLOTHER:fsin:10<-10
wr<10>(c,0x400,user_op(c,655474,{r<10>(c,0x500)}));
return 0x40963004;}
default:return 0;}}
uint32_t ref_2404(Cpu& c){switch(c.pc){
case 0x40964000:{ // CALLOTHER:fcos:10<-10
wr<10>(c,0x400,user_op(c,655468,{r<10>(c,0x500)}));
return 0x40964004;}
default:return 0;}}
uint32_t ref_2405(Cpu& c){switch(c.pc){
case 0x40965000:{ // CALLOTHER:fpatan:10<-10,10
wr<10>(c,0x400,user_op(c,655471,{r<10>(c,0x500),r<10>(c,0x600)}));
return 0x40965004;}
default:return 0;}}
uint32_t ref_2406(Cpu& c){switch(c.pc){
case 0x40966000:{ // CALLOTHER:log2:10<-10
wr<10>(c,0x400,user_op(c,655479,{r<10>(c,0x500)}));
return 0x40966004;}
default:return 0;}}
uint32_t ref_2407(Cpu& c){switch(c.pc){
case 0x40967000:{ // CALLOTHER:fptan:10<-10
wr<10>(c,0x400,user_op(c,655472,{r<10>(c,0x500)}));
return 0x40967004;}
default:return 0;}}
uint32_t ref_2408(Cpu& c){switch(c.pc){
case 0x40968000:{ // CALLOTHER:ffree:2<-10
wr<2>(c,0x10a4,user_op(c,131181,{r<10>(c,0x500)}));
return 0x40968004;}
default:return 0;}}
uint32_t ref_2409(Cpu& c){switch(c.pc){
case 0x40969000:{ // CALLOTHER:rsqrtss:16<-16,16
wr<16>(c,0x400,user_op(c,1048752,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x40969004;}
default:return 0;}}
uint32_t ref_2410(Cpu& c){switch(c.pc){
case 0x4096a000:{ // CALLOTHER:rcpss:16<-16,16
wr<16>(c,0x400,user_op(c,1048750,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x4096a004;}
default:return 0;}}
uint32_t ref_2411(Cpu& c){switch(c.pc){
case 0x4096b000:{ // CALLOTHER:rcpps:16<-16,16
wr<16>(c,0x400,user_op(c,1048749,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x4096b004;}
default:return 0;}}
uint32_t ref_2412(Cpu& c){switch(c.pc){
case 0x4096c000:{ // CALLOTHER:PackedFloatingMUL:8<-8,8
wr<8>(c,0x400,user_op(c,524531,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4096c004;}
default:return 0;}}
uint32_t ref_2413(Cpu& c){switch(c.pc){
case 0x4096d000:{ // CALLOTHER:PackedFloatingADD:8<-8,8
wr<8>(c,0x400,user_op(c,524526,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4096d004;}
default:return 0;}}
uint32_t ref_2414(Cpu& c){switch(c.pc){
case 0x4096e000:{ // CALLOTHER:PackedFloatingSUB:8<-8,8
wr<8>(c,0x400,user_op(c,524527,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4096e004;}
default:return 0;}}
uint32_t ref_2415(Cpu& c){switch(c.pc){
case 0x4096f000:{ // CALLOTHER:PackedFloatingAccumulate:8<-8,8
wr<8>(c,0x400,user_op(c,524525,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4096f004;}
default:return 0;}}
uint32_t ref_2416(Cpu& c){switch(c.pc){
case 0x40970000:{ // CALLOTHER:FastExitMediaState:0<-
user_op(c,251,{});
return 0x40970004;}
default:return 0;}}
uint32_t ref_2417(Cpu& c){switch(c.pc){
case 0x40971000:{ // CALLOTHER:PackedFloatingCompareGT:8<-8,8
wr<8>(c,0x400,user_op(c,524523,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40971004;}
default:return 0;}}
uint32_t ref_2418(Cpu& c){switch(c.pc){
case 0x40972000:{ // CALLOTHER:PackedFloatingSUBR:8<-8,8
wr<8>(c,0x400,user_op(c,524528,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40972004;}
default:return 0;}}
uint32_t ref_2419(Cpu& c){switch(c.pc){
case 0x40973000:{ // CALLOTHER:PackedFloatingCompareGE:8<-8,8
wr<8>(c,0x400,user_op(c,524522,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40973004;}
default:return 0;}}
uint32_t ref_2420(Cpu& c){switch(c.pc){
case 0x40974000:{ // CALLOTHER:packssdw:8<-8,8
wr<8>(c,0x400,user_op(c,524425,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40974004;}
default:return 0;}}
uint32_t ref_2421(Cpu& c){switch(c.pc){
case 0x40975000:{ // CALLOTHER:packsswb:8<-8,8
wr<8>(c,0x400,user_op(c,524424,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40975004;}
default:return 0;}}
uint32_t ref_2422(Cpu& c){switch(c.pc){
case 0x40976000:{ // CALLOTHER:PackedSwapDWords:8<-8,8
wr<8>(c,0x400,user_op(c,524544,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40976004;}
default:return 0;}}
uint32_t ref_2423(Cpu& c){switch(c.pc){
case 0x40977000:{ // CALLOTHER:PackedFloatingPosNegAccumulate:8<-8,8
wr<8>(c,0x400,user_op(c,524543,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40977004;}
default:return 0;}}
uint32_t ref_2424(Cpu& c){switch(c.pc){
case 0x40978000:{ // CALLOTHER:PackedFloatingNegAccumulate:8<-8,8
wr<8>(c,0x400,user_op(c,524542,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40978004;}
default:return 0;}}
uint32_t ref_2425(Cpu& c){switch(c.pc){
case 0x40979000:{ // CALLOTHER:PackedFloatingCompareEQ:8<-8,8
wr<8>(c,0x400,user_op(c,524524,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40979004;}
default:return 0;}}
uint32_t ref_2426(Cpu& c){switch(c.pc){
case 0x4097a000:{ // CALLOTHER:PackedIntToFloatingDwordConv:8<-8,8
wr<8>(c,0x400,user_op(c,524520,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4097a004;}
default:return 0;}}
uint32_t ref_2427(Cpu& c){switch(c.pc){
case 0x4097b000:{ // CALLOTHER:PackedFloatingMAX:8<-8,8
wr<8>(c,0x400,user_op(c,524530,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4097b004;}
default:return 0;}}
uint32_t ref_2428(Cpu& c){switch(c.pc){
case 0x4097c000:{ // CALLOTHER:PackedFloatingMIN:8<-8,8
wr<8>(c,0x400,user_op(c,524529,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4097c004;}
default:return 0;}}
uint32_t ref_2429(Cpu& c){switch(c.pc){
case 0x4097d000:{ // CALLOTHER:PackedFloatingToIntDwordConv:8<-8,8
wr<8>(c,0x400,user_op(c,524521,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4097d004;}
default:return 0;}}
uint32_t ref_2430(Cpu& c){switch(c.pc){
case 0x4097e000:{ // CALLOTHER:paddusb:8<-8,8
wr<8>(c,0x400,user_op(c,524431,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4097e004;}
default:return 0;}}
uint32_t ref_2431(Cpu& c){switch(c.pc){
case 0x4097f000:{ // CALLOTHER:pmaddwd:8<-8,8
wr<8>(c,0x400,user_op(c,524442,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4097f004;}
default:return 0;}}
uint32_t ref_2432(Cpu& c){switch(c.pc){
case 0x40980000:{ // CALLOTHER:psllw:8<-8,8
wr<8>(c,0x400,user_op(c,524454,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40980004;}
default:return 0;}}
uint32_t ref_2433(Cpu& c){switch(c.pc){
case 0x40981000:{ // CALLOTHER:psraw:8<-8,8
wr<8>(c,0x400,user_op(c,524455,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40981004;}
default:return 0;}}
uint32_t ref_2434(Cpu& c){switch(c.pc){
case 0x40982000:{ // CALLOTHER:psubusw:8<-8,8
wr<8>(c,0x400,user_op(c,524459,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40982004;}
default:return 0;}}
uint32_t ref_2435(Cpu& c){switch(c.pc){
case 0x40983000:{ // CALLOTHER:psubsw:8<-8,8
wr<8>(c,0x400,user_op(c,524457,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40983004;}
default:return 0;}}
uint32_t ref_2436(Cpu& c){switch(c.pc){
case 0x40984000:{ // CALLOTHER:psubusb:8<-8,8
wr<8>(c,0x400,user_op(c,524458,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40984004;}
default:return 0;}}
uint32_t ref_2437(Cpu& c){switch(c.pc){
case 0x40985000:{ // CALLOTHER:psubusb:16<-16,16
wr<16>(c,0x400,user_op(c,1048746,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x40985004;}
default:return 0;}}
uint32_t ref_2438(Cpu& c){switch(c.pc){
case 0x40986000:{ // CALLOTHER:paddusb:16<-16,16
wr<16>(c,0x400,user_op(c,1048719,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x40986004;}
default:return 0;}}
uint32_t ref_2439(Cpu& c){switch(c.pc){
case 0x40987000:{ // CALLOTHER:paddsb:8<-8,8
wr<8>(c,0x400,user_op(c,524429,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40987004;}
default:return 0;}}
uint32_t ref_2440(Cpu& c){switch(c.pc){
case 0x40988000:{ // CALLOTHER:psubsb:8<-8,8
wr<8>(c,0x400,user_op(c,524456,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x40988004;}
default:return 0;}}
uint32_t ref_2441(Cpu& c){switch(c.pc){
case 0x40989000:{ // CALLOTHER:psllw:16<-16,8
wr<16>(c,0x400,user_op(c,1048742,{r<16>(c,0x500),r<8>(c,0x600)}));
return 0x40989004;}
default:return 0;}}
uint32_t ref_2442(Cpu& c){switch(c.pc){
case 0x4098a000:{ // CALLOTHER:psraw:16<-16,8
wr<16>(c,0x400,user_op(c,1048743,{r<16>(c,0x500),r<8>(c,0x600)}));
return 0x4098a004;}
default:return 0;}}
uint32_t ref_2443(Cpu& c){switch(c.pc){
case 0x4098b000:{ // CALLOTHER:psubusw:16<-16,16
wr<16>(c,0x400,user_op(c,1048747,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x4098b004;}
default:return 0;}}
uint32_t ref_2444(Cpu& c){switch(c.pc){
case 0x4098c000:{ // CALLOTHER:movdq2q:8<-8,16
wr<8>(c,0x400,user_op(c,524421,{r<8>(c,0x500),r<16>(c,0x600)}));
return 0x4098c004;}
default:return 0;}}
uint32_t ref_2445(Cpu& c){switch(c.pc){
case 0x4098d000:{ // CALLOTHER:psubsw:16<-16,16
wr<16>(c,0x400,user_op(c,1048745,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x4098d004;}
default:return 0;}}
uint32_t ref_2446(Cpu& c){switch(c.pc){
case 0x4098e000:{ // CALLOTHER:pmulhw:8<-8,8
wr<8>(c,0x400,user_op(c,524445,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4098e004;}
default:return 0;}}
uint32_t ref_2447(Cpu& c){switch(c.pc){
case 0x4098f000:{ // CALLOTHER:paddsw:8<-8,8
wr<8>(c,0x400,user_op(c,524430,{r<8>(c,0x500),r<8>(c,0x600)}));
return 0x4098f004;}
default:return 0;}}
uint32_t ref_2448(Cpu& c){switch(c.pc){
case 0x40990000:{ // CALLOTHER:paddsw:16<-16,16
wr<16>(c,0x400,user_op(c,1048718,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x40990004;}
default:return 0;}}
uint32_t ref_2449(Cpu& c){switch(c.pc){
case 0x40991000:{ // CALLOTHER:packsswb:16<-16,16
wr<16>(c,0x400,user_op(c,1048712,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x40991004;}
default:return 0;}}
uint32_t ref_2450(Cpu& c){switch(c.pc){
case 0x40992000:{ // CALLOTHER:pmulhw:16<-16,16
wr<16>(c,0x400,user_op(c,1048733,{r<16>(c,0x500),r<16>(c,0x600)}));
return 0x40992004;}
default:return 0;}}
uint32_t ref_2451(Cpu& c){switch(c.pc){
case 0x40993000:{ // CALLOTHER:f2xm1:10<-10
wr<10>(c,0x400,user_op(c,655465,{r<10>(c,0x500)}));
return 0x40993004;}
default:return 0;}}
uint32_t ref_2452(Cpu& c){switch(c.pc){
case 0x40994000:{ // CALLOTHER:fscale:10<-10,10
wr<10>(c,0x400,user_op(c,655473,{r<10>(c,0x500),r<10>(c,0x600)}));
return 0x40994004;}
default:return 0;}}
uint32_t ref_2453(Cpu& c){switch(c.pc){
case 0x40995000:{ // X87:FLDCW
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(r<2>(c,0x500)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x40995004;}
default:return 0;}}
uint32_t ref_2454(Cpu& c){switch(c.pc){
case 0x40996000:{ // X87:FNSTCW
wr<2>(c,0x10a0,x87_store_control());
wr<2>(c,0x400,eval<Op::COPY,2,2>(r<2>(c,0x10a0)));
return 0x40996004;}
default:return 0;}}
uint32_t ref_2455(Cpu& c){switch(c.pc){
case 0x40997000:{ // CBRANCH:ram
if(r<1>(c,0x500)){return 0x50000000;}
return 0x40997004;}
default:return 0;}}
uint32_t ref_2456(Cpu& c){switch(c.pc){
case 0x40998000:{ // BRANCH:ram
return 0x50000010;
return 0x40998004;}
default:return 0;}}
uint32_t ref_2457(Cpu& c){switch(c.pc){
case 0x40999000:{ // COPY:const4
wr<4>(c,0x400,eval<Op::COPY,4,4>(0x12345678ull));
return 0x40999004;}
default:return 0;}}
}