/*******************************************************************************
* File Name: cyfitter_cfg.c
* 
* PSoC Creator  3.3 SP1
*
* Description:
* This file contains device initialization code.
* Except for the user defined sections in CyClockStartupError(), this file should not be modified.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2015 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include "cytypes.h"
#include "cydevice_trm.h"
#include "cyfitter.h"
#include "CyLib.h"
#include "cyfitter_cfg.h"

#define CY_NEED_CYCLOCKSTARTUPERROR 1


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
    #define CYPACKED 
    #define CYPACKED_ATTR __attribute__ ((packed))
    #define CYALIGNED __attribute__ ((aligned))
    #define CY_CFG_UNUSED __attribute__ ((unused))
    #ifndef CY_CFG_SECTION
        #define CY_CFG_SECTION __attribute__ ((section(".psocinit")))
    #endif
    
    #if CYDEV_CONFIGURATION_DMA
        #if (defined(__ARMCC_VERSION) || defined(__GNUC__))
            #ifndef DMAINITSEC
                #define DMAINITSEC __attribute__ ((section(".dma_init")))
            #endif
        #elif defined(__ICCARM__)
            #define DMAINITSEC _Pragma("location=\".dma_init\"")
        #endif
    #else
        #define DMAINITSEC
    #endif

    #if defined(__ARMCC_VERSION)
        #define CY_CFG_MEMORY_BARRIER() __memory_changed()
    #else
        #define CY_CFG_MEMORY_BARRIER() __sync_synchronize()
    #endif
    
#elif defined(__ICCARM__)
    #include <intrinsics.h>

    #define CYPACKED __packed
    #define CYPACKED_ATTR 
    #define CYALIGNED _Pragma("data_alignment=4")
    #define CY_CFG_UNUSED _Pragma("diag_suppress=Pe177")
    #define CY_CFG_SECTION _Pragma("location=\".psocinit\"")
    
    #if CYDEV_CONFIGURATION_DMA
        #if (defined(__ARMCC_VERSION) || defined(__GNUC__))
            #ifndef DMAINITSEC
                #define DMAINITSEC __attribute__ ((section(".dma_init")))
            #endif
        #elif defined(__ICCARM__)
            #define DMAINITSEC _Pragma("location=\".dma_init\"")
        #endif
    #else
        #define DMAINITSEC
    #endif

    #define CY_CFG_MEMORY_BARRIER() __DMB()
    
#else
    #error Unsupported toolchain
#endif


CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n);
CY_CFG_UNUSED
static void CYMEMZERO(void *s, size_t n)
{
	(void)memset(s, 0, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPY(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n);
CY_CFG_UNUSED
static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n)
{
	(void)memcpy(dest, src, n);
}



/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0u
#define CYCLOCKSTART_XTAL_ERROR  1u
#define CYCLOCKSTART_32KHZ_ERROR 2u
#define CYCLOCKSTART_PLL_ERROR   3u

#ifdef CY_NEED_CYCLOCKSTARTUPERROR
/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc.), the system will end up here.  Unless reimplemented by
*  the customer, this function will stop in an infinite loop.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode);
CY_CFG_UNUSED
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* `#START CyClockStartupError` */

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc.),  */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

    /* `#END` */

    /* If nothing else, stop here since the clocks have not started         */
    /* correctly.                                                           */
    while(1) {}
}
#endif

/* IDMUX Address: CYREG_IDMUX_DRQ_CTL0 Size (bytes): 6 */
#define BS_IDMUX_VAL ((const uint8 CYFAR *)0x48000000u)

/* IOPORT_8 Address: CYDEV_PRTDSI_PRT15_BASE Size (bytes): 7 */
#define BS_IOPORT_8_VAL ((const uint8 CYFAR *)0x48000008u)

/* UDB_1_2_0_CONFIG Address: CYDEV_UCFG_B0_P3_U1_BASE Size (bytes): 128 */
#define BS_UDB_1_2_0_CONFIG_VAL ((const uint8 CYFAR *)0x48000010u)

/* UDB_1_0_0_CONFIG Address: CYDEV_UCFG_B1_P2_U0_BASE Size (bytes): 128 */
#define BS_UDB_1_0_0_CONFIG_VAL ((const uint8 CYFAR *)0x48000090u)

/* UDB_1_1_1_CONFIG Address: CYDEV_UCFG_B1_P3_U0_BASE Size (bytes): 128 */
#define BS_UDB_1_1_1_CONFIG_VAL ((const uint8 CYFAR *)0x48000110u)

/* UDB_1_1_0_CONFIG Address: CYDEV_UCFG_B1_P3_U1_BASE Size (bytes): 128 */
#define BS_UDB_1_1_0_CONFIG_VAL ((const uint8 CYFAR *)0x48000190u)

/* UWRK_B0_WRK_STATCTL_BITS Address: CYDEV_UWRK_UWRK8_B0_BASE + 0x00000070u Size (bytes): 32 */
#define BS_UWRK_B0_WRK_STATCTL_BITS_VAL ((const uint8 CYFAR *)0x48000210u)

/* UWRK_B1_WRK_STATCTL_BITS Address: CYDEV_UWRK_UWRK8_B1_BASE + 0x00000070u Size (bytes): 32 */
#define BS_UWRK_B1_WRK_STATCTL_BITS_VAL ((const uint8 CYFAR *)0x48000230u)

/* UCFG_BCTL1 Address: CYREG_BCTL1_MDCLK_EN Size (bytes): 16 */
#define BS_UCFG_BCTL1_VAL ((const uint8 CYFAR *)0x48000250u)

/* UDBSWITCH_1_0 Address: CYDEV_UCFG_B1_P2_ROUTE_BASE Size (bytes): 128 */
#define BS_UDBSWITCH_1_0_VAL ((const uint8 CYFAR *)0x48000260u)

/* UDB_2_0_HV_ROUTING Address: CYDEV_UCFG_B1_P2_ROUTE_BASE + 0x00000080u Size (bytes): 128 */
#define BS_UDB_2_0_HV_ROUTING_VAL ((const uint8 CYFAR *)0x480002E0u)

/* UDBSWITCH_1_1 Address: CYDEV_UCFG_B1_P3_ROUTE_BASE Size (bytes): 128 */
#define BS_UDBSWITCH_1_1_VAL ((const uint8 CYFAR *)0x48000360u)

/* UDB_2_1_HV_ROUTING Address: CYDEV_UCFG_B1_P3_ROUTE_BASE + 0x00000080u Size (bytes): 128 */
#define BS_UDB_2_1_HV_ROUTING_VAL ((const uint8 CYFAR *)0x480003E0u)

/* UDBSWITCH_1_2 Address: CYDEV_UCFG_B0_P3_ROUTE_BASE Size (bytes): 128 */
#define BS_UDBSWITCH_1_2_VAL ((const uint8 CYFAR *)0x48000460u)

/* UDB_2_2_HV_ROUTING Address: CYDEV_UCFG_B0_P3_ROUTE_BASE + 0x00000080u Size (bytes): 128 */
#define BS_UDB_2_2_HV_ROUTING_VAL ((const uint8 CYFAR *)0x480004E0u)

/* DSI3_0_HV_ROUTING Address: CYDEV_UCFG_DSI9_BASE + 0x00000080u Size (bytes): 128 */
#define BS_DSI3_0_HV_ROUTING_VAL ((const uint8 CYFAR *)0x48000560u)

/* DSISWITCH_1_1 Address: CYDEV_UCFG_DSI8_BASE Size (bytes): 128 */
#define BS_DSISWITCH_1_1_VAL ((const uint8 CYFAR *)0x480005E0u)

/* DSI3_1_HV_ROUTING Address: CYDEV_UCFG_DSI8_BASE + 0x00000080u Size (bytes): 128 */
#define BS_DSI3_1_HV_ROUTING_VAL ((const uint8 CYFAR *)0x48000660u)

/* DSI3_2_HV_ROUTING Address: CYDEV_UCFG_DSI3_BASE + 0x00000080u Size (bytes): 128 */
#define BS_DSI3_2_HV_ROUTING_VAL ((const uint8 CYFAR *)0x480006E0u)

/* DSISWITCH_1_3 Address: CYDEV_UCFG_DSI2_BASE Size (bytes): 128 */
#define BS_DSISWITCH_1_3_VAL ((const uint8 CYFAR *)0x48000760u)

/* DSI3_3_HV_ROUTING Address: CYDEV_UCFG_DSI2_BASE + 0x00000080u Size (bytes): 128 */
#define BS_DSI3_3_HV_ROUTING_VAL ((const uint8 CYFAR *)0x480007E0u)

/* DSI3_4_HV_ROUTING Address: CYDEV_UCFG_DSI1_BASE + 0x00000080u Size (bytes): 128 */
#define BS_DSI3_4_HV_ROUTING_VAL ((const uint8 CYFAR *)0x48000860u)

/* DSISWITCH_1_5 Address: CYDEV_UCFG_DSI0_BASE Size (bytes): 128 */
#define BS_DSISWITCH_1_5_VAL ((const uint8 CYFAR *)0x480008E0u)

/* DSI3_5_HV_ROUTING Address: CYDEV_UCFG_DSI0_BASE + 0x00000080u Size (bytes): 128 */
#define BS_DSI3_5_HV_ROUTING_VAL ((const uint8 CYFAR *)0x48000960u)

/* IOPINS0_7 Address: CYREG_PRT12_DM0 Size (bytes): 8 */
#define BS_IOPINS0_7_VAL ((const uint8 CYFAR *)0x480009E0u)

/* IOPINS0_8 Address: CYREG_PRT15_DM0 Size (bytes): 8 */
#define BS_IOPINS0_8_VAL ((const uint8 CYFAR *)0x480009E8u)

/* IOPINS0_2 Address: CYREG_PRT2_DM0 Size (bytes): 8 */
#define BS_IOPINS0_2_VAL ((const uint8 CYFAR *)0x480009F0u)


/*******************************************************************************
* Function Name: cfg_dma_init
********************************************************************************
* Summary:
*  This function is used to copy device configuration data from constant values
*  stored in memory into the proper chip configuration registers using DMA.  It
*  pulls data out of the CFG_TD_LISTs to know exactly how/what to configure.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/
static void cfg_dma_init(void);
static void cfg_dma_init(void)
{
	/* TD structure for little-endian systems. Does not require endian swap */
	CYPACKED struct td_t {
		uint16 size;
		uint8 next_td_ptr;
		uint8 flags;
		uint16 src;
		uint16 dest;
	} CYPACKED_ATTR;

	/* PHUB_CH1_CFGMEM_CFG0/1 initialization data */
	DMAINITSEC static const uint8 CYCODE CH1_ADDR_DATA0[] = { 0x01u, 0x00u, 0x00u, 0x00u, 0x00u, 0x20u, 0x00u, 0x40u };

	/* PHUB_CH2_CFGMEM_CFG0/1 initialization data */
	DMAINITSEC static const uint8 CYCODE CH2_ADDR_DATA0[] = { 0x01u, 0x00u, 0x00u, 0x00u, 0x00u, 0x20u, 0x01u, 0x40u };

	/* PHUB_CH5_CFGMEM_CFG0/1 initialization data */
	DMAINITSEC static const uint8 CYCODE CH5_ADDR_DATA0[] = { 0x01u, 0x00u, 0x00u, 0x00u, 0x00u, 0x48u, 0x00u, 0x40u };

	/* PHUB_CH6_CFGMEM_CFG0/1 initialization data */
	DMAINITSEC static const uint8 CYCODE CH6_ADDR_DATA0[] = { 0x01u, 0x00u, 0x00u, 0x00u, 0x00u, 0x48u, 0x01u, 0x40u };

	/* Initialization data for each DMA channel's TD registers */
	DMAINITSEC static const uint8 CYCODE DMA_TD_START_CMD[] = { 0x01u, 0x00u, 0x00u, 0x00u, 0x01u };

	CYALIGNED static uint32 CYXDATA DMA_ZERO_VAL;

	/* This table holds all of the initialization data necessary for the DMA
	   process to transfer data from the source location to the destination. */
	/* Source addresses can be relocated, but only when in 32bit addresses.
	   Because the standard TD table only has 16bit addresses, we generate a
	   separate CFG_TD_ADDR table for the source addresses that supports 32bit
	   addresses. */
	DMAINITSEC static const struct td_t CYCODE CFG_TD_LIST0[] = {
		/* Size, Next, Flags, Source, Destination */
		{ 8u, 0x02u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CFGMEM1_CFG0) },	/* TD 1 */
		{ 8u, 0x03u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CFGMEM2_CFG0) },	/* TD 2 */
		{ 8u, 0x04u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CFGMEM5_CFG0) },	/* TD 3 */
		{ 8u, 0x05u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CFGMEM6_CFG0) },	/* TD 4 */
		{ 5u, 0x06u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CH1_BASIC_CFG) },	/* TD 5 */
		{ 5u, 0x07u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CH2_BASIC_CFG) },	/* TD 6 */
		{ 5u, 0x08u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CH5_BASIC_CFG) },	/* TD 7 */
		{ 5u, 0xFEu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_PHUB_CH6_BASIC_CFG) },	/* TD 8 */
		{ 32u, 0x0Au, 0x22u, (uint16)(uint32)(0u), (uint16)(CYREG_PRT0_DR) },	/* TD 9 */
		{ 64u, 0xFEu, 0x22u, (uint16)(uint32)(0u), (uint16)(CYREG_PRT3_DR) },	/* TD 10 */
		{ 1664u, 0x0Cu, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B0_P0_U0_BASE) },	/* TD 11 */
		{ 2048u, 0x0Du, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B0_P4_U0_BASE) },	/* TD 12 */
		{ 128u, 0x0Eu, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P2_U1_BASE) },	/* TD 13 */
		{ 1024u, 0x0Fu, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P4_U0_BASE) },	/* TD 14 */
		{ 128u, 0x10u, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI1_BASE) },	/* TD 15 */
		{ 128u, 0x11u, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI3_BASE) },	/* TD 16 */
		{ 1024u, 0x12u, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI4_BASE) },	/* TD 17 */
		{ 128u, 0x13u, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI9_BASE) },	/* TD 18 */
		{ 512u, 0x14u, 0x22u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI12_BASE) },	/* TD 19 */
		{ 16u, 0xFEu, 0x22u, (uint16)(uint32)(0u), (uint16)(CYREG_BCTL0_MDCLK_EN) },	/* TD 20 */
		{ 7u, 0x16u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_PRTDSI_PRT15_BASE) },	/* TD 21 */
		{ 32u, 0x17u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UWRK_UWRK8_B0_BASE + 0x00000070u) },	/* TD 22 */
		{ 32u, 0xFEu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UWRK_UWRK8_B1_BASE + 0x00000070u) },	/* TD 23 */
		{ 128u, 0x19u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B0_P3_U1_BASE) },	/* TD 24 */
		{ 128u, 0x1Au, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P2_U0_BASE) },	/* TD 25 */
		{ 128u, 0x1Bu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P3_U0_BASE) },	/* TD 26 */
		{ 128u, 0x1Cu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P3_U1_BASE) },	/* TD 27 */
		{ 16u, 0x1Du, 0x23u, (uint16)(uint32)(0u), (uint16)(CYREG_BCTL1_MDCLK_EN) },	/* TD 28 */
		{ 128u, 0x1Eu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P2_ROUTE_BASE) },	/* TD 29 */
		{ 128u, 0x1Fu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P2_ROUTE_BASE + 0x00000080u) },	/* TD 30 */
		{ 128u, 0x20u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P3_ROUTE_BASE) },	/* TD 31 */
		{ 128u, 0x21u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B1_P3_ROUTE_BASE + 0x00000080u) },	/* TD 32 */
		{ 128u, 0x22u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B0_P3_ROUTE_BASE) },	/* TD 33 */
		{ 128u, 0x23u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_B0_P3_ROUTE_BASE + 0x00000080u) },	/* TD 34 */
		{ 128u, 0x24u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI9_BASE + 0x00000080u) },	/* TD 35 */
		{ 128u, 0x25u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI8_BASE) },	/* TD 36 */
		{ 128u, 0x26u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI8_BASE + 0x00000080u) },	/* TD 37 */
		{ 128u, 0x27u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI3_BASE + 0x00000080u) },	/* TD 38 */
		{ 128u, 0x28u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI2_BASE) },	/* TD 39 */
		{ 128u, 0x29u, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI2_BASE + 0x00000080u) },	/* TD 40 */
		{ 128u, 0x2Au, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI1_BASE + 0x00000080u) },	/* TD 41 */
		{ 128u, 0x2Bu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI0_BASE) },	/* TD 42 */
		{ 128u, 0xFEu, 0x23u, (uint16)(uint32)(0u), (uint16)(CYDEV_UCFG_DSI0_BASE + 0x00000080u) },	/* TD 43 */
	};

	/* Source addresses can be relocated, but only when in 32bit addresses.
	   Because the standard TD table only has 16bit addresses, we generate a
	   separate table for the source addresses that does use 32bit addresses. This
	   table will be re-merged with the corresponding CFG_TD_LIST table during
	   initialization. */
	static const void * const CFG_TD_ADDR0[] = {
		(const void *)(CH1_ADDR_DATA0),	/* TD 1 */
		(const void *)(CH2_ADDR_DATA0),	/* TD 2 */
		(const void *)(CH5_ADDR_DATA0),	/* TD 3 */
		(const void *)(CH6_ADDR_DATA0),	/* TD 4 */
		(const void *)(DMA_TD_START_CMD),	/* TD 5 */
		(const void *)(DMA_TD_START_CMD),	/* TD 6 */
		(const void *)(DMA_TD_START_CMD),	/* TD 7 */
		(const void *)(DMA_TD_START_CMD),	/* TD 8 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 9 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 10 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 11 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 12 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 13 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 14 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 15 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 16 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 17 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 18 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 19 */
		(const void *)(&DMA_ZERO_VAL),	/* TD 20 */
		(const void *)(BS_IOPORT_8_VAL),	/* TD 21 */
		(const void *)(BS_UWRK_B0_WRK_STATCTL_BITS_VAL),	/* TD 22 */
		(const void *)(BS_UWRK_B1_WRK_STATCTL_BITS_VAL),	/* TD 23 */
		(const void *)(BS_UDB_1_2_0_CONFIG_VAL),	/* TD 24 */
		(const void *)(BS_UDB_1_0_0_CONFIG_VAL),	/* TD 25 */
		(const void *)(BS_UDB_1_1_1_CONFIG_VAL),	/* TD 26 */
		(const void *)(BS_UDB_1_1_0_CONFIG_VAL),	/* TD 27 */
		(const void *)(BS_UCFG_BCTL1_VAL),	/* TD 28 */
		(const void *)(BS_UDBSWITCH_1_0_VAL),	/* TD 29 */
		(const void *)(BS_UDB_2_0_HV_ROUTING_VAL),	/* TD 30 */
		(const void *)(BS_UDBSWITCH_1_1_VAL),	/* TD 31 */
		(const void *)(BS_UDB_2_1_HV_ROUTING_VAL),	/* TD 32 */
		(const void *)(BS_UDBSWITCH_1_2_VAL),	/* TD 33 */
		(const void *)(BS_UDB_2_2_HV_ROUTING_VAL),	/* TD 34 */
		(const void *)(BS_DSI3_0_HV_ROUTING_VAL),	/* TD 35 */
		(const void *)(BS_DSISWITCH_1_1_VAL),	/* TD 36 */
		(const void *)(BS_DSI3_1_HV_ROUTING_VAL),	/* TD 37 */
		(const void *)(BS_DSI3_2_HV_ROUTING_VAL),	/* TD 38 */
		(const void *)(BS_DSISWITCH_1_3_VAL),	/* TD 39 */
		(const void *)(BS_DSI3_3_HV_ROUTING_VAL),	/* TD 40 */
		(const void *)(BS_DSI3_4_HV_ROUTING_VAL),	/* TD 41 */
		(const void *)(BS_DSISWITCH_1_5_VAL),	/* TD 42 */
		(const void *)(BS_DSI3_5_HV_ROUTING_VAL),	/* TD 43 */
	};


	uint32 i;

	DMA_ZERO_VAL = 0u;
	CY_SET_REG8((void CYXDATA *)CYREG_PHUB_CFGMEM0_CFG0, 0x10u);	/* set burstcnt */
	CY_SET_REG8((void CYXDATA *)CYREG_PHUB_CH0_BASIC_CFG, 0x01u);	/* enable ch0 */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_CH0_BASIC_STATUS+1u), 0x00u);	/* set first TD to 0 */
	CY_SET_REG16((void CYXDATA *)CYREG_PHUB_TDMEM0_ORIG_TD0, 43u*8u);	/* transfer size */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_TDMEM0_ORIG_TD0+2u), 0x01u);	/* set next TD to 1 */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_TDMEM0_ORIG_TD0+3u), 0x03u);	/* set TD flags */
	CY_SET_REG16((void CYXDATA *)CYREG_PHUB_TDMEM0_ORIG_TD1, (uint16)((uint32)CFG_TD_LIST0 & 0x0000FFFFu));	/* set td0's src addr */
	CY_SET_REG16((void CYXDATA *)(CYREG_PHUB_TDMEM0_ORIG_TD1+2u), CYDEV_PHUB_TDMEM1_BASE);	/* set td0's dst addr */
	CY_SET_REG16((void CYXDATA *)CYREG_PHUB_CFGMEM0_CFG1, (uint16)(CYDEV_FLASH_BASE >> 16));	/* set ch0's src high addr */
	CY_SET_REG16((void CYXDATA *)(CYREG_PHUB_CFGMEM0_CFG1+2u), (uint16)(CYDEV_PHUB_TDMEM1_BASE >> 16));	/* set ch0's dst high addr */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_CH1_BASIC_STATUS+1u), 0x09u);	/* ch1 first TD: 9 */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_CH2_BASIC_STATUS+1u), 0x0Bu);	/* ch2 first TD: 11 */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_CH5_BASIC_STATUS+1u), 0x15u);	/* ch5 first TD: 21 */
	CY_SET_REG8((void CYXDATA *)(CYREG_PHUB_CH6_BASIC_STATUS+1u), 0x18u);	/* ch6 first TD: 24 */

	CY_CFG_MEMORY_BARRIER();
	CY_SET_REG8((void CYXDATA *)CYREG_PHUB_CH0_ACTION, 0x01u); /* cpu_req */
	CY_CFG_MEMORY_BARRIER();

	/* Wait for TDs to be copied into TDMEM */
	while (CY_GET_REG16((void CYXDATA *)CYREG_PHUB_TDMEM0_ORIG_TD0) != 0u) { }

	/* Recombine TD source table (CFG_TD_ADDR0) with full TD table (CFG_TD_LIST0) */
	for (i = 0u; i < 43u; i++)
	{
		CY_SET_REG16((void CYXDATA *)(CYREG_PHUB_TDMEM1_ORIG_TD1 + (sizeof(struct td_t)*i)), (uint16)(uint32)CFG_TD_ADDR0[i]);
	}

	CY_CFG_MEMORY_BARRIER();
	CY_SET_REG8((void CYXDATA *)CYREG_PHUB_CH0_ACTION, 0x01u); /* cpu_req */
	CY_CFG_MEMORY_BARRIER();

	/* Wait for all DMA transfers to complete */
	while(0u != (CY_GET_REG8((void CYXDATA *)CYREG_PHUB_CH0_BASIC_STATUS) & 0x01u)){}
	while(0u != (CY_GET_REG8((void CYXDATA *)CYREG_PHUB_CH1_BASIC_STATUS) & 0x01u)){}
	while(0u != (CY_GET_REG8((void CYXDATA *)CYREG_PHUB_CH2_BASIC_STATUS) & 0x01u)){}
	while(0u != (CY_GET_REG8((void CYXDATA *)CYREG_PHUB_CH5_BASIC_STATUS) & 0x01u)){}
	while(0u != (CY_GET_REG8((void CYXDATA *)CYREG_PHUB_CH6_BASIC_STATUS) & 0x01u)){}


	CYCONFIGCPY((void CYFAR *)(CYREG_IDMUX_DRQ_CTL0), (const void CYFAR *)(BS_IDMUX_VAL), 6u);

}
/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*  Performs the initialization of all of the clocks in the device based on the
*  settings in the Clock tab of the DWR.  This includes enabling the requested
*  clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void ClockSetup(void);
static void ClockSetup(void)
{
	uint32 timeout;
	uint8 pllLock;


	/* Configure Digital Clocks based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_DCFG0_CFG0), 0x000Bu);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_DCFG0_CFG0 + 0x2u), 0x18u);

	/* Configure ILO based on settings from Clock DWR */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_SLOWCLK_ILO_CR0), 0x02u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_CR), 0x08u);

	/* Configure IMO based on settings from Clock DWR */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_FASTCLK_IMO_CR), 0x03u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_IMO_TR1), (CY_GET_XTND_REG8((void CYFAR *)CYREG_FLSHID_CUST_TABLES_IMO_3MHZ)));

	/* Configure PLL based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_P), 0x0008u);
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_FASTCLK_PLL_CFG0), 0x1251u);
	/* Wait up to 250us for the PLL to lock */
	pllLock = 0u;
	for (timeout = 250u / 10u; (timeout > 0u) && (pllLock != 0x03u); timeout--)
	{ 
		pllLock = 0x03u & ((uint8)((uint8)pllLock << 1) | ((CY_GET_XTND_REG8((void CYFAR *)CYREG_FASTCLK_PLL_SR) & 0x01u) >> 0));
		CyDelayCycles(10u * 12u); /* Delay 10us based on 12MHz clock */
	}
	/* If we ran out of time the PLL didn't lock so go to the error function */
	if (timeout == 0u)
	{
		CyClockStartupError(CYCLOCKSTART_PLL_ERROR);
	}

	/* Configure Bus/Master Clock based on settings from Clock DWR */
	CY_SET_XTND_REG16((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x0100u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x07u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_BCFG0), 0x00u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_BCFG2), 0x48u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_MSTR0), 0x00u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CLKDIST_LD), 0x02u);

	CY_SET_XTND_REG8((void CYFAR *)(CYREG_PM_ACT_CFG2), ((CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG2) | 0x01u)));
}


/* Analog API Functions */


/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void AnalogSetDefault(void);
static void AnalogSetDefault(void)
{
	uint8 bg_xover_inl_trim = CY_GET_XTND_REG8((void CYFAR *)(CYREG_FLSHID_MFG_CFG_BG_XOVER_INL_TRIM + 1u));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_BG_DFT0), (bg_xover_inl_trim & 0x07u));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_BG_DFT1), ((bg_xover_inl_trim >> 4) & 0x0Fu));
	CY_SET_XTND_REG8((void CYFAR *)CYREG_PUMP_CR0, 0x44u);
}


/*******************************************************************************
* Function Name: SetAnalogRoutingPumps
********************************************************************************
*
* Summary:
* Enables or disables the analog pumps feeding analog routing switches.
* Intended to be called at startup, based on the Vdda system configuration;
* may be called during operation when the user informs us that the Vdda voltage
* crossed the pump threshold.
*
* Parameters:
*  enabled - 1 to enable the pumps, 0 to disable the pumps
*
* Return:
*  void
*
*******************************************************************************/
void SetAnalogRoutingPumps(uint8 enabled)
{
	uint8 regValue = CY_GET_XTND_REG8((void CYFAR *)CYREG_PUMP_CR0);
	if (enabled != 0u)
	{
		regValue |= 0x00u;
	}
	else
	{
		regValue &= (uint8)~0x00u;
	}
	CY_SET_XTND_REG8((void CYFAR *)CYREG_PUMP_CR0, regValue);
}

#define CY_AMUX_UNUSED CYREG_BOOST_SR


/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/

void cyfitter_cfg(void)
{
#ifdef CYGlobalIntDisable
	/* Disable interrupts by default. Let user enable if/when they want. */
	CYGlobalIntDisable
#endif


	/* Set Flash Cycles based on max possible frequency in case a glitch occurs during ClockSetup(). */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CACHE_CC_CTL), (((CYDEV_INSTRUCT_CACHE_ENABLED) != 0) ? 0x61u : 0x60u));
	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();
	/* Set Flash Cycles based on newly configured 24.00MHz Bus Clock. */
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_CACHE_CC_CTL), (((CYDEV_INSTRUCT_CACHE_ENABLED) != 0) ? 0x81u : 0x80u));
	/* Enable/Disable Debug functionality based on settings from System DWR */
	CY_SET_XTND_REG8((void CYFAR *)CYREG_MLOGIC_DEBUG, (CY_GET_XTND_REG8((void CYFAR *)CYREG_MLOGIC_DEBUG) | 0x04u));

	{
		cfg_dma_init();

		/* Perform normal device configuration. Order is not critical for these items. */
		CYMEMZERO((void CYFAR *)(CYREG_PHUB_CFGMEM0_CFG0), 4u);
		CYMEMZERO((void CYFAR *)(CYREG_PHUB_CFGMEM1_CFG0), 4u);

		/* Enable digital routing */
		CY_SET_XTND_REG8((void CYFAR *)CYREG_BCTL0_BANK_CTL, CY_GET_XTND_REG8((void CYFAR *)CYREG_BCTL0_BANK_CTL) | 0x02u);
		CY_SET_XTND_REG8((void CYFAR *)CYREG_BCTL1_BANK_CTL, CY_GET_XTND_REG8((void CYFAR *)CYREG_BCTL1_BANK_CTL) | 0x02u);

		/* Enable UDB array */
		CY_SET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG0, CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_ACT_CFG0) | 0x40u);
		CY_SET_XTND_REG8((void CYFAR *)CYREG_PM_AVAIL_CR2, CY_GET_XTND_REG8((void CYFAR *)CYREG_PM_AVAIL_CR2) | 0x10u);
	}


	/* Perform second pass device configuration. These items must be configured in specific order after the regular configuration is done. */
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT12_DM0), (const void CYFAR *)(BS_IOPINS0_7_VAL), 8u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT15_DM0), (const void CYFAR *)(BS_IOPINS0_8_VAL), 8u);
	CYCONFIGCPY((void CYFAR *)(CYREG_PRT2_DM0), (const void CYFAR *)(BS_IOPINS0_2_VAL), 8u);
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_B0_P3_U1_CFG27), 0x64u);
	/* Switch Boost to the precision bandgap reference from its internal reference */
	CY_SET_REG8((void CYXDATA *)CYREG_BOOST_CR2, (CY_GET_REG8((void CYXDATA *)CYREG_BOOST_CR2) | 0x08u));
	CY_SET_XTND_REG8((void CYFAR *)(CYREG_PANTHER_WAITPIPE), 0x01u);

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

	/* Configure alternate active mode */
	CYCONFIGCPY((void CYFAR *)CYDEV_PM_STBY_BASE, (const void CYFAR *)CYDEV_PM_ACT_BASE, 14u);
}