/*
 * http://infocenter.arm.com/help/topic/com.arm.doc.dui0224i/I1042232.html
 */

/* IRQ STATUS REGISTER -> shows the active interrupt */
#define VIC_BASE_ADDR  ((volatile unsigned int *) 0x10140000)

/* offset = 0x00C Select if interrupt is IRQ(0) or FIQ(1) */
#define VIC_INT_SELECT ((volatile unsigned int *) 0x1014000C)

/* offset = 0x010 Enables the selected interrupt */
#define VIC_ENABLE_INT ((volatile unsigned int *) 0x10140010)

/* offset 0x014 Clear the selected interrupt */
#define VIC_CLEAR_INT  ((volatile unsigned int *) 0x10140014)
