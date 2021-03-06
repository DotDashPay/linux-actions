#ifdef XHCI_SUPPORT_SUPERSPEED       

#ifndef  __USB3_REGS_H__
#define  __USB3_REGS_H__

//--------------USB3_Register-------------------------------------------//
//--------------Register Address---------------------------------------//
#define USB3_ANA00 (0+0xCD00)
#define USB3_ANA01 (0+0xCD04)
#define USB3_ANA02 (0+0xCD08)
#define USB3_ANA03 (0+0xCD0C)
#define USB3_ANA04 (0+0xCD10)

#define USB3_ANA05 (0+0xCD14)
#define USB3_ANA06 (0+0xCD18)
#define USB3_ANA07 (0+0xCD1C)
#define USB3_ANA08 (0+0xCD20)
#define USB3_ANA09 (0+0xCD24)
#define USB3_ANA0A (0+0xCD28)
#define USB3_ANA0B (0+0xCD2C)
#define USB3_ANA0C (0+0xCD30)
#define USB3_ANA0D (0+0xCD34)
#define USB3_ANA0E (0+0xCD38)
#define USB3_ANA0F (0+0xCD3C)
#define USB3_DMR (0+0xCD40)
#define USB3_BACR (0+0xCD44)
#define USB3_IER (0+0xCD48)
#define USB3_BCSR (0+0xCD4C)
#define USB3_BPNR2 (0+0xCD54)
#define USB3_BRNR2 (0+0xCD5C)
#define USB3_BENR (0+0xCD60)
#define USB3_REV0 (0+0xCD64)
#define USB3_REV1 (0+0xCD68)
#define USB3_REV2 (0+0xCD6C)
#define USB3_REV3 (0+0xCD70)
#define USB3_FLD0 (0+0xCD74)
#define USB3_FLD1 (0+0xCD78)
#define USB3_ANA1F (0+0xCD7C)
#define USB3_PAGE1_REG00 (0+0xCD80)
#define USB3_PAGE1_REG01 (0+0xCD84)
#define USB3_PAGE1_REG02 (0+0xCD88)
#define USB3_PAGE1_REG03 (0+0xCD8C)
#define USB3_PAGE1_REG04 (0+0xCD90)
#define USB3_PAGE1_REG05 (0+0xCD94)
#define USB3_PAGE1_REG06 (0+0xCD98)
#define USB3_PAGE1_REG07 (0+0xCD9C)
#define USB3_PAGE1_REG08 (0+0xCDA0)
#define USB3_PAGE1_REG09 (0+0xCDA4)
#define USB3_PAGE1_REG0A (0+0xCDA8)
#define USB3_PAGE1_REG0B (0+0xCDAC)
#define USB3_PAGE1_REG0C (0+0xCDB0)
#define USB3_PAGE1_REG0D (0+0xCDB4)
#define USB3_PAGE1_REG0E (0+0xCDB8)
#define USB3_PAGE1_REG0F (0+0xCDBC)
#define USB3_PAGE1_REG10 (0+0xCDC0)
#define USB2_P0_VDCTRL (0+0xCE00)
#define BACKDOOR (0+0xCE04)
#define USB3_EXT_CONTROL (0+0xCE08)
#define USB2_P1_VDCTRL (0+0xCE10) 

#define     GUSB3PIPECTL                        (0+0xC2C0)
#define     USB3_GCTL                                       (0+0xC110)
#define     GUCTL                                       (0+0xC12C)
#define     GBDGFIFOSPACE                      (0+0xC160)
#define     GDBGLTSSM                             (0+0xC164)
#define     XHCI_PORT2_STATUS 				(0x0430+0)
#define     GUSB2CFG0                       		(0+0xC200)
#define     GSBUSCFG0                       		(0+0xC100)
#define     GSBUSCFG1                    		(0+0xC104)
#define     GTXTHRCFG                       	(0+0xC108)
#define     GRXTHRCFG                    		(0+0xC10C)
#define     USB3_ECS                          			(0+0x0080)


#define USB3_ACTIONS_START        (0xcd00)
#define USB3_ACTIONS_END          (0xcd58)

#endif
#endif
