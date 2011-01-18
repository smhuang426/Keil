#include <reg52.h>
sbit ln=P2^7;
sbit ls=P2^5;
sbit rw=P2^6;
unsigned char code cha1[]={0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha2[]={0x00,0x00,0x04,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha3[]={0xC0,0x00,0x04,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha4[]={0xC0,0x00,0x04,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha5[]={0x40,0x00,0x06,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha6[]={0x40,0x00,0x06,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha7[]={0x40,0x00,0x06,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha8[]={0x60,0x00,0x0E,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha9[]={0x20,0x00,0x0B,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha10[]={0x20,0x00,0x09,0x08,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha11[]={0x20,0x00,0x09,0x08,0x31,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha12[]={0x20,0x80,0x09,0x08,0x39,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha13[]={0x20,0x80,0x10,0x08,0x4D,0x00,0xF8,0x03,0x1E,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha14[]={0x20,0x80,0x10,0x08,0xC5,0x00,0x06,0x02,0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha15[]={0x20,0x40,0x10,0x08,0x87,0x00,0x03,0x42,0x21,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha16[]={0x60,0x40,0x10,0x08,0x83,0x00,0x01,0x42,0x21,0x00,0x08,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha17[]={0x40,0x60,0x20,0x08,0x83,0x81,0x01,0x42,0x21,0x00,0xC0,0x00,0x00,0x00,0x3C,0x00};
unsigned char code cha18[]={0x40,0x20,0x20,0x08,0x01,0xF1,0x00,0xC1,0x20,0x00,0xE8,0x81,0x40,0x30,0x26,0x00};
unsigned char code cha19[]={0x40,0x20,0x20,0x08,0x01,0xC1,0xFF,0xC1,0x20,0x00,0x38,0xC3,0x42,0x10,0x22,0x00};
unsigned char code cha20[]={0xC0,0x10,0x20,0x08,0x01,0x81,0x00,0xC0,0x60,0x00,0x10,0x62,0x42,0x10,0x21,0x00};
unsigned char code cha21[]={0x80,0x10,0x40,0x04,0x01,0x81,0x00,0xC0,0x40,0x00,0x08,0x22,0x83,0x10,0x21,0x00};
unsigned char code cha22[]={0x80,0x18,0x40,0x04,0x01,0x81,0x00,0x40,0x40,0x00,0x08,0x22,0x83,0x18,0x3F,0x00};
unsigned char code cha23[]={0x80,0x08,0x40,0x84,0x01,0x83,0x03,0x40,0x40,0x00,0x08,0xA2,0x03,0x89,0x01,0x00};
unsigned char code cha24[]={0x80,0x09,0xC0,0x86,0x01,0x02,0x3C,0x46,0x40,0x00,0x0C,0xA2,0x06,0x89,0x00,0x00};
unsigned char code cha25[]={0x00,0x09,0x80,0x82,0x00,0x02,0xC0,0x43,0xC0,0x00,0x0C,0x62,0x0C,0x8D,0x00,0x00};
unsigned char code cha26[]={0x00,0x0D,0x80,0x83,0x00,0x02,0x00,0x40,0x00,0x00,0x0C,0x06,0x00,0x86,0x00,0x00};
unsigned char code cha27[]={0x00,0x07,0x00,0x81,0x00,0x00,0x00,0x40,0x00,0x00,0x04,0x04,0x00,0x86,0xC3,0x00};
unsigned char code cha28[]={0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x04,0x00,0x00,0x00,0x7C,0x00};
unsigned char code cha29[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha30[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha31[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char code cha32[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
unsigned char i;
void delay(int z)
{
	int i,j;
        for(i=z;i>0;i--)
         for(j=110;j>0;j--);
}
void write_com(unsigned char com)
{
	rw=0;
	delay(1);
	ls=0;
	delay(1);
    P0=com;
    delay(1);
    ln=1;
    delay(1);
    ln=0;
	 delay(1);
	 rw=1;
	 delay(1);
}
void write_data(unsigned char date)
{
	rw=0;
	delay(1);
	ls=1;
	delay(1);
    P0=date;
    delay(1);
    ln=1;
    delay(1);
    ln=0;
	 delay(1);
	 rw=1;
	 delay(1);
}
void init_12232()
{
	 rw=0;
    ln=0;
//    write_com(0x32);
//    write_com(0x02);
//    write_com(0x0f);
//	 write_com(0x01);	
	 write_com(0x36);
	 delay(50);
}
void main()
{
	unsigned char j;
	init_12232();
	for(j=0;j<32;j++)
	{
		write_com(0x40+j);
		for(i=0;i<16;i++)
		{
			write_data(cha13[i]);
		}
	}

}

