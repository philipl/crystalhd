/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_i2c.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:07p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:05 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_i2c.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:07p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_I2C_H__
#define BCHP_I2C_H__

/***************************************************************************
 *I2C - I2C related registers
 ***************************************************************************/
#define BCHP_I2C_CHIP_ADDRESS                    0x00501000 /* I2C Chip Address And Read/Write Control */
#define BCHP_I2C_DATA_IN0                        0x00501004 /* I2C Write Data Byte 0 */
#define BCHP_I2C_DATA_IN1                        0x00501008 /* I2C Write Data Byte 1 */
#define BCHP_I2C_DATA_IN2                        0x0050100c /* I2C Write Data Byte 2 */
#define BCHP_I2C_DATA_IN3                        0x00501010 /* I2C Write Data Byte 3 */
#define BCHP_I2C_DATA_IN4                        0x00501014 /* I2C Write Data Byte 4 */
#define BCHP_I2C_DATA_IN5                        0x00501018 /* I2C Write Data Byte 5 */
#define BCHP_I2C_DATA_IN6                        0x0050101c /* I2C Write Data Byte 6 */
#define BCHP_I2C_DATA_IN7                        0x00501020 /* I2C Write Data Byte 7 */
#define BCHP_I2C_CNT_REG                         0x00501024 /* I2C Transfer Count Register */
#define BCHP_I2C_CTL_REG                         0x00501028 /* I2C Control Register */
#define BCHP_I2C_IIC_ENABLE                      0x0050102c /* I2C Read/Write Enable And Interrupt */
#define BCHP_I2C_DATA_OUT0                       0x00501030 /* I2C Read Data Byte 0 */
#define BCHP_I2C_DATA_OUT1                       0x00501034 /* I2C Read Data Byte 1 */
#define BCHP_I2C_DATA_OUT2                       0x00501038 /* I2C Read Data Byte 2 */
#define BCHP_I2C_DATA_OUT3                       0x0050103c /* I2C Read Data Byte 3 */
#define BCHP_I2C_DATA_OUT4                       0x00501040 /* I2C Read Data Byte 4 */
#define BCHP_I2C_DATA_OUT5                       0x00501044 /* I2C Read Data Byte 5 */
#define BCHP_I2C_DATA_OUT6                       0x00501048 /* I2C Read Data Byte 6 */
#define BCHP_I2C_DATA_OUT7                       0x0050104c /* I2C Read Data Byte 7 */
#define BCHP_I2C_CTLHI_REG                       0x00501050 /* I2C Control Register */
#define BCHP_I2C_SCL_PARAM                       0x00501054 /* I2C SCL Parameter Register */

/***************************************************************************
 *CHIP_ADDRESS - I2C Chip Address And Read/Write Control
 ***************************************************************************/
/* I2C :: CHIP_ADDRESS :: reserved0 [31:08] */
#define BCHP_I2C_CHIP_ADDRESS_reserved0_MASK                       0xffffff00
#define BCHP_I2C_CHIP_ADDRESS_reserved0_SHIFT                      8

/* I2C :: CHIP_ADDRESS :: CHIP_ADDRESS [07:01] */
#define BCHP_I2C_CHIP_ADDRESS_CHIP_ADDRESS_MASK                    0x000000fe
#define BCHP_I2C_CHIP_ADDRESS_CHIP_ADDRESS_SHIFT                   1

/* I2C :: CHIP_ADDRESS :: RESERVED [00:00] */
#define BCHP_I2C_CHIP_ADDRESS_RESERVED_MASK                        0x00000001
#define BCHP_I2C_CHIP_ADDRESS_RESERVED_SHIFT                       0

/***************************************************************************
 *DATA_IN0 - I2C Write Data Byte 0
 ***************************************************************************/
/* I2C :: DATA_IN0 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN0_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN0_reserved0_SHIFT                          8

/* I2C :: DATA_IN0 :: DATA_IN0 [07:00] */
#define BCHP_I2C_DATA_IN0_DATA_IN0_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN0_DATA_IN0_SHIFT                           0

/***************************************************************************
 *DATA_IN1 - I2C Write Data Byte 1
 ***************************************************************************/
/* I2C :: DATA_IN1 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN1_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN1_reserved0_SHIFT                          8

/* I2C :: DATA_IN1 :: DATA_IN1 [07:00] */
#define BCHP_I2C_DATA_IN1_DATA_IN1_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN1_DATA_IN1_SHIFT                           0

/***************************************************************************
 *DATA_IN2 - I2C Write Data Byte 2
 ***************************************************************************/
/* I2C :: DATA_IN2 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN2_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN2_reserved0_SHIFT                          8

/* I2C :: DATA_IN2 :: DATA_IN2 [07:00] */
#define BCHP_I2C_DATA_IN2_DATA_IN2_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN2_DATA_IN2_SHIFT                           0

/***************************************************************************
 *DATA_IN3 - I2C Write Data Byte 3
 ***************************************************************************/
/* I2C :: DATA_IN3 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN3_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN3_reserved0_SHIFT                          8

/* I2C :: DATA_IN3 :: DATA_IN3 [07:00] */
#define BCHP_I2C_DATA_IN3_DATA_IN3_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN3_DATA_IN3_SHIFT                           0

/***************************************************************************
 *DATA_IN4 - I2C Write Data Byte 4
 ***************************************************************************/
/* I2C :: DATA_IN4 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN4_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN4_reserved0_SHIFT                          8

/* I2C :: DATA_IN4 :: DATA_IN4 [07:00] */
#define BCHP_I2C_DATA_IN4_DATA_IN4_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN4_DATA_IN4_SHIFT                           0

/***************************************************************************
 *DATA_IN5 - I2C Write Data Byte 5
 ***************************************************************************/
/* I2C :: DATA_IN5 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN5_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN5_reserved0_SHIFT                          8

/* I2C :: DATA_IN5 :: DATA_IN5 [07:00] */
#define BCHP_I2C_DATA_IN5_DATA_IN5_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN5_DATA_IN5_SHIFT                           0

/***************************************************************************
 *DATA_IN6 - I2C Write Data Byte 6
 ***************************************************************************/
/* I2C :: DATA_IN6 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN6_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN6_reserved0_SHIFT                          8

/* I2C :: DATA_IN6 :: DATA_IN6 [07:00] */
#define BCHP_I2C_DATA_IN6_DATA_IN6_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN6_DATA_IN6_SHIFT                           0

/***************************************************************************
 *DATA_IN7 - I2C Write Data Byte 7
 ***************************************************************************/
/* I2C :: DATA_IN7 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_IN7_reserved0_MASK                           0xffffff00
#define BCHP_I2C_DATA_IN7_reserved0_SHIFT                          8

/* I2C :: DATA_IN7 :: DATA_IN7 [07:00] */
#define BCHP_I2C_DATA_IN7_DATA_IN7_MASK                            0x000000ff
#define BCHP_I2C_DATA_IN7_DATA_IN7_SHIFT                           0

/***************************************************************************
 *CNT_REG - I2C Transfer Count Register
 ***************************************************************************/
/* I2C :: CNT_REG :: reserved0 [31:08] */
#define BCHP_I2C_CNT_REG_reserved0_MASK                            0xffffff00
#define BCHP_I2C_CNT_REG_reserved0_SHIFT                           8

/* I2C :: CNT_REG :: CNT_REG2 [07:04] */
#define BCHP_I2C_CNT_REG_CNT_REG2_MASK                             0x000000f0
#define BCHP_I2C_CNT_REG_CNT_REG2_SHIFT                            4

/* I2C :: CNT_REG :: CNT_REG1 [03:00] */
#define BCHP_I2C_CNT_REG_CNT_REG1_MASK                             0x0000000f
#define BCHP_I2C_CNT_REG_CNT_REG1_SHIFT                            0

/***************************************************************************
 *CTL_REG - I2C Control Register
 ***************************************************************************/
/* I2C :: CTL_REG :: reserved0 [31:08] */
#define BCHP_I2C_CTL_REG_reserved0_MASK                            0xffffff00
#define BCHP_I2C_CTL_REG_reserved0_SHIFT                           8

/* I2C :: CTL_REG :: DIV_CLK [07:07] */
#define BCHP_I2C_CTL_REG_DIV_CLK_MASK                              0x00000080
#define BCHP_I2C_CTL_REG_DIV_CLK_SHIFT                             7

/* I2C :: CTL_REG :: INT_EN [06:06] */
#define BCHP_I2C_CTL_REG_INT_EN_MASK                               0x00000040
#define BCHP_I2C_CTL_REG_INT_EN_SHIFT                              6

/* I2C :: CTL_REG :: SCL_SEL [05:04] */
#define BCHP_I2C_CTL_REG_SCL_SEL_MASK                              0x00000030
#define BCHP_I2C_CTL_REG_SCL_SEL_SHIFT                             4

/* I2C :: CTL_REG :: DELAY_DIS [03:03] */
#define BCHP_I2C_CTL_REG_DELAY_DIS_MASK                            0x00000008
#define BCHP_I2C_CTL_REG_DELAY_DIS_SHIFT                           3

/* I2C :: CTL_REG :: DEGLITCH_DIS [02:02] */
#define BCHP_I2C_CTL_REG_DEGLITCH_DIS_MASK                         0x00000004
#define BCHP_I2C_CTL_REG_DEGLITCH_DIS_SHIFT                        2

/* I2C :: CTL_REG :: DTF [01:00] */
#define BCHP_I2C_CTL_REG_DTF_MASK                                  0x00000003
#define BCHP_I2C_CTL_REG_DTF_SHIFT                                 0

/***************************************************************************
 *IIC_ENABLE - I2C Read/Write Enable And Interrupt
 ***************************************************************************/
/* I2C :: IIC_ENABLE :: reserved0 [31:07] */
#define BCHP_I2C_IIC_ENABLE_reserved0_MASK                         0xffffff80
#define BCHP_I2C_IIC_ENABLE_reserved0_SHIFT                        7

/* I2C :: IIC_ENABLE :: RESTART [06:06] */
#define BCHP_I2C_IIC_ENABLE_RESTART_MASK                           0x00000040
#define BCHP_I2C_IIC_ENABLE_RESTART_SHIFT                          6

/* I2C :: IIC_ENABLE :: NO_START [05:05] */
#define BCHP_I2C_IIC_ENABLE_NO_START_MASK                          0x00000020
#define BCHP_I2C_IIC_ENABLE_NO_START_SHIFT                         5

/* I2C :: IIC_ENABLE :: NO_STOP [04:04] */
#define BCHP_I2C_IIC_ENABLE_NO_STOP_MASK                           0x00000010
#define BCHP_I2C_IIC_ENABLE_NO_STOP_SHIFT                          4

/* I2C :: IIC_ENABLE :: reserved1 [03:03] */
#define BCHP_I2C_IIC_ENABLE_reserved1_MASK                         0x00000008
#define BCHP_I2C_IIC_ENABLE_reserved1_SHIFT                        3

/* I2C :: IIC_ENABLE :: NO_ACK [02:02] */
#define BCHP_I2C_IIC_ENABLE_NO_ACK_MASK                            0x00000004
#define BCHP_I2C_IIC_ENABLE_NO_ACK_SHIFT                           2

/* I2C :: IIC_ENABLE :: INTRP [01:01] */
#define BCHP_I2C_IIC_ENABLE_INTRP_MASK                             0x00000002
#define BCHP_I2C_IIC_ENABLE_INTRP_SHIFT                            1

/* I2C :: IIC_ENABLE :: ENABLE [00:00] */
#define BCHP_I2C_IIC_ENABLE_ENABLE_MASK                            0x00000001
#define BCHP_I2C_IIC_ENABLE_ENABLE_SHIFT                           0

/***************************************************************************
 *DATA_OUT0 - I2C Read Data Byte 0
 ***************************************************************************/
/* I2C :: DATA_OUT0 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT0_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT0_reserved0_SHIFT                         8

/* I2C :: DATA_OUT0 :: DATA_OUT0 [07:00] */
#define BCHP_I2C_DATA_OUT0_DATA_OUT0_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT0_DATA_OUT0_SHIFT                         0

/***************************************************************************
 *DATA_OUT1 - I2C Read Data Byte 1
 ***************************************************************************/
/* I2C :: DATA_OUT1 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT1_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT1_reserved0_SHIFT                         8

/* I2C :: DATA_OUT1 :: DATA_OUT1 [07:00] */
#define BCHP_I2C_DATA_OUT1_DATA_OUT1_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT1_DATA_OUT1_SHIFT                         0

/***************************************************************************
 *DATA_OUT2 - I2C Read Data Byte 2
 ***************************************************************************/
/* I2C :: DATA_OUT2 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT2_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT2_reserved0_SHIFT                         8

/* I2C :: DATA_OUT2 :: DATA_OUT2 [07:00] */
#define BCHP_I2C_DATA_OUT2_DATA_OUT2_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT2_DATA_OUT2_SHIFT                         0

/***************************************************************************
 *DATA_OUT3 - I2C Read Data Byte 3
 ***************************************************************************/
/* I2C :: DATA_OUT3 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT3_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT3_reserved0_SHIFT                         8

/* I2C :: DATA_OUT3 :: DATA_OUT3 [07:00] */
#define BCHP_I2C_DATA_OUT3_DATA_OUT3_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT3_DATA_OUT3_SHIFT                         0

/***************************************************************************
 *DATA_OUT4 - I2C Read Data Byte 4
 ***************************************************************************/
/* I2C :: DATA_OUT4 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT4_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT4_reserved0_SHIFT                         8

/* I2C :: DATA_OUT4 :: DATA_OUT4 [07:00] */
#define BCHP_I2C_DATA_OUT4_DATA_OUT4_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT4_DATA_OUT4_SHIFT                         0

/***************************************************************************
 *DATA_OUT5 - I2C Read Data Byte 5
 ***************************************************************************/
/* I2C :: DATA_OUT5 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT5_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT5_reserved0_SHIFT                         8

/* I2C :: DATA_OUT5 :: DATA_OUT5 [07:00] */
#define BCHP_I2C_DATA_OUT5_DATA_OUT5_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT5_DATA_OUT5_SHIFT                         0

/***************************************************************************
 *DATA_OUT6 - I2C Read Data Byte 6
 ***************************************************************************/
/* I2C :: DATA_OUT6 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT6_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT6_reserved0_SHIFT                         8

/* I2C :: DATA_OUT6 :: DATA_OUT6 [07:00] */
#define BCHP_I2C_DATA_OUT6_DATA_OUT6_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT6_DATA_OUT6_SHIFT                         0

/***************************************************************************
 *DATA_OUT7 - I2C Read Data Byte 7
 ***************************************************************************/
/* I2C :: DATA_OUT7 :: reserved0 [31:08] */
#define BCHP_I2C_DATA_OUT7_reserved0_MASK                          0xffffff00
#define BCHP_I2C_DATA_OUT7_reserved0_SHIFT                         8

/* I2C :: DATA_OUT7 :: DATA_OUT7 [07:00] */
#define BCHP_I2C_DATA_OUT7_DATA_OUT7_MASK                          0x000000ff
#define BCHP_I2C_DATA_OUT7_DATA_OUT7_SHIFT                         0

/***************************************************************************
 *CTLHI_REG - I2C Control Register
 ***************************************************************************/
/* I2C :: CTLHI_REG :: reserved0 [31:02] */
#define BCHP_I2C_CTLHI_REG_reserved0_MASK                          0xfffffffc
#define BCHP_I2C_CTLHI_REG_reserved0_SHIFT                         2

/* I2C :: CTLHI_REG :: IGNORE_ACK [01:01] */
#define BCHP_I2C_CTLHI_REG_IGNORE_ACK_MASK                         0x00000002
#define BCHP_I2C_CTLHI_REG_IGNORE_ACK_SHIFT                        1

/* I2C :: CTLHI_REG :: WAIT_DIS [00:00] */
#define BCHP_I2C_CTLHI_REG_WAIT_DIS_MASK                           0x00000001
#define BCHP_I2C_CTLHI_REG_WAIT_DIS_SHIFT                          0

/***************************************************************************
 *SCL_PARAM - I2C SCL Parameter Register
 ***************************************************************************/
/* I2C :: SCL_PARAM :: reserved0 [31:00] */
#define BCHP_I2C_SCL_PARAM_reserved0_MASK                          0xffffffff
#define BCHP_I2C_SCL_PARAM_reserved0_SHIFT                         0

#endif /* #ifndef BCHP_I2C_H__ */

/* End of File */
