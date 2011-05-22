/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B495_0DC9_0010_C643()
 *
 * @name f__B495_0DC9_0010_C643
 * @implements B495:0DC9:0010:C643 ()
 * @implements B495:0DD9:0018:EC07
 * @implements B495:0DF1:0018:09EF
 * @implements B495:0E09:002A:0E56
 * @implements B495:0E33:001B:3AB1
 * @implements B495:0E4E:001B:5840
 * @implements B495:0E69:0008:2BE5
 * @implements B495:0E71:0002:CC3A
 * @implements B495:0E73:0018:CB64
 * @implements B495:0E88:0003:1D08
 * @implements B495:0E8B:005C:9A4A
 * @implements B495:0EB4:0033:353B
 * @implements B495:0EC3:0024:C884
 * @implements B495:0EE7:001A:CA6C
 * @implements B495:0EEA:0017:098F
 * @implements B495:0EF3:000E:BE7B
 * @implements B495:0F01:000E:A5AF
 * @implements B495:0F0F:0002:ACBA
 * @implements B495:0F13:0015:AB67
 * @implements B495:0F28:0008:2947
 * @implements B495:0F2B:0005:8BCF
 *
 * Called From: B495:0054:0009:3E41
 * Called From: B495:0073:000A:DBF9
 * Called From: B495:0141:000D:994C
 * Called From: B495:017A:000A:A88E
 * Called From: B495:019B:0008:4D0B
 * Called From: B495:0203:000D:1A5D
 * Called From: B495:0237:000D:9E8C
 * Called From: B495:0258:0008:0E9A
 * Called From: B495:03D9:0009:FC66
 * Called From: B495:07A0:000A:9E64
 * Called From: B495:1195:0008:798E
 * Called From: B495:1228:0008:BA25
 */
void f__B495_0DC9_0010_C643()
{
l__0DC9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) goto l__0DD9;
	goto l__0E73;
l__0DD9:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2FD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0DF1:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0E09); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E09:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ds, 0x00, 0x7F9E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x7F9C) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7FA0) = 0x0;
	emu_get_memory8(emu_ds, 0x00, 0x7FA1) = 0x8;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7FBC);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x18);
	emu_si = emu_ax;
	emu_push(emu_cs); emu_push(0x0E33); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E33:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_ax = 0x68;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x47;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E4E); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E4E:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x17);
	emu_push(emu_ax);
	emu_ax = 0x67;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E69); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E69:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_cs); emu_push(0x0E71); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0E71:
	goto l__0E8B;
l__0E73:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x7F9E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x7F9C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0E8B;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0E8B;
	}
l__0E88:
	goto l__0F2B;
l__0E8B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x7F9E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x7F9C) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x0);
	if ((int8)emu_get_memory8(emu_ds, 0x00, 0x7FA0) >= (int8)0x0) {
		emu_cmpb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), 0x3F);
		if ((int8)emu_get_memory8(emu_ds, 0x00, 0x7FA0) <= (int8)0x3F) goto l__0EC3;
	}
l__0EB4:
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_negb(&emu_al, emu_al);
	emu_get_memory8(emu_ds, 0x00, 0x7FA1) = emu_al;
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA1);
	emu_addb(&emu_get_memory8(emu_ds, 0x00, 0x7FA0), emu_al);
l__0EC3:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C34);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, 0x2FD);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0EE7;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0F0F;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0F01;
	/* Unresolved jump */ emu_ip = 0x0F11; emu_last_cs = 0xB495; emu_last_ip = 0x0EE5; emu_last_length = 0x0024; emu_last_crc = 0xC884; emu_call();
l__0EE7:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0EEA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
l__0EF3:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	goto l__0F13;
l__0F01:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ds, 0x00, 0x7FA0);
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__0EF3;
l__0F0F:
	goto l__0EEA;
l__0F13:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F28); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0F28:
	emu_addw(&emu_sp, 0x8);
l__0F2B:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_0F7A_000B_410C()
 *
 * @name f__B495_0F7A_000B_410C
 * @implements B495:0F7A:000B:410C ()
 * @implements B495:0F85:0024:33C2
 * @implements B495:0FA9:0008:43E5
 * @implements B495:0FB1:0009:C63E
 * @implements B495:0FBA:0012:A9EF
 * @implements B495:0FCC:005C:8468
 * @implements B495:1028:0005:96AE
 * @implements B495:102D:001D:3294
 * @implements B495:104A:0005:91EE
 * @implements B495:104D:0002:D43A
 * @implements B495:104F:0025:696E
 * @implements B495:1074:000C:3159
 * @implements B495:1077:0009:BD71
 * @implements B495:1080:0012:A9EF
 * @implements B495:1092:005C:046A
 * @implements B495:10EE:0005:96AE
 * @implements B495:10F3:001D:B296
 * @implements B495:1110:0005:966E
 * @implements B495:1113:0002:D3BA
 * @implements B495:1115:0024:2AF0
 * @implements B495:1139:0007:98BA
 * @implements B495:113C:0004:893F
 *
 * Called From: B495:118D:0004:03BA
 * Called From: B495:156F:0007:9157
 */
void f__B495_0F7A_000B_410C()
{
l__0F7A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x0F85); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0F85:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FA9); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0FA9:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FB1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__0FB1:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FBA); emu_GUI_FactoryWindow_GetStruct8BEA();
l__0FBA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0FCC;
	goto l__104F;
l__0FCC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__102D;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1028); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1028:
	emu_addw(&emu_sp, 0x14);
	goto l__104D;
l__102D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x104A); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__104A:
	emu_addw(&emu_sp, 0xE);
l__104D:
	goto l__1077;
l__104F:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1074); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1074:
	emu_addw(&emu_sp, 0x10);
l__1077:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1080); emu_GUI_FactoryWindow_GetStruct8BEA();
l__1080:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1092;
	goto l__1115;
l__1092:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x14);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x7));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2A), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x2A) != 0xFF) goto l__10F3;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x7FAA));
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10EE); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__10EE:
	emu_addw(&emu_sp, 0x14);
	goto l__1113;
l__10F3:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x48;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1110); emu_cs = 0x2903; emu_GUI_DrawSprite();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1110:
	emu_addw(&emu_sp, 0xE);
l__1113:
	goto l__113C;
l__1115:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xA8;
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x9;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1139); emu_cs = 0x24D0; emu_GUI_Unknown_24D0_000D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3495) { overlay(0x3495, 1); }
l__1139:
	emu_addw(&emu_sp, 0x10);
l__113C:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B495_1A14_0013_AE3F()
 *
 * @name f__B495_1A14_0013_AE3F
 * @implements B495:1A14:0013:AE3F ()
 * @implements B495:1A27:0002:2597
 *
 * Called From: 3495:0098:0005:0000
 */
void f__B495_1A14_0013_AE3F()
{
l__1A14:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5));
	goto l__1A27;
l__1A27:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
