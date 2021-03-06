
pcm6720_internals.h,9337
#define __CLPD6720_INTERNALS_H__37,1134
#define SOCKET_0_START_INDEX 44,1479
#define SOCKET_0_END_INDEX 45,1518
#define SOCKET_1_START_INDEX 46,1557
#define SOCKET_1_END_INDEX 47,1596
#define DEVICE_0_START_INDEX 48,1635
#define DEVICE_0_END_INDEX 49,1674
#define DEVICE_1_START_INDEX 50,1713
#define DEVICE_1_END_INDEX 51,1752
#define CHIP_REVISION_IDX 58,2103
#define INTERFACE_STATUS_IDX 59,2143
#define POWER_CTRL_IDX 60,2183
#define INTERRUPT_CTRL_IDX 61,2223
#define CARD_STATUS_CHANGE_IDX 62,2263
#define MGMT_INT_CFG_IDX 63,2303
#define MAPPING_ENABLE_IDX 64,2343
#define IO_WINDOW_CTRL_IDX 65,2383
#define MISC_CTRL_1_IDX 66,2423
#define MISC_CTRL_2_IDX 67,2463
#define FIFO_CTRL_IDX 68,2503
#define CHIP_INFO_IDX 69,2543
#define ATA_CTRL_IDX 70,2583
#define IO_MAP_0_START_LO_IDX 72,2624
#define IO_MAP_0_START_HI_IDX 73,2664
#define IO_MAP_0_END_LO_IDX 74,2704
#define IO_MAP_0_END_HI_IDX 75,2744
#define IO_MAP_0_OFFSET_LO_IDX 76,2784
#define IO_MAP_0_OFFSET_HI_IDX 77,2824
#define IO_MAP_1_START_LO_IDX 79,2865
#define IO_MAP_1_START_HI_IDX 80,2905
#define IO_MAP_1_END_LO_IDX 81,2945
#define IO_MAP_1_END_HI_IDX 82,2985
#define IO_MAP_1_OFFSET_LO_IDX 83,3025
#define IO_MAP_1_OFFSET_HI_IDX 84,3065
#define MAP_0_START_LO_IDX 86,3106
#define MAP_0_START_HI_IDX 87,3146
#define MAP_0_END_LO_IDX 88,3186
#define MAP_0_END_HI_IDX 89,3226
#define MAP_0_OFFSET_LO_IDX 90,3266
#define MAP_0_OFFSET_HI_IDX 91,3306
#define MAP_1_START_LO_IDX 93,3347
#define MAP_1_START_HI_IDX 94,3387
#define MAP_1_END_LO_IDX 95,3427
#define MAP_1_END_HI_IDX 96,3467
#define MAP_1_OFFSET_LO_IDX 97,3507
#define MAP_1_OFFSET_HI_IDX 98,3547
#define MAP_2_START_LO_IDX 100,3588
#define MAP_2_START_HI_IDX 101,3628
#define MAP_2_END_LO_IDX 102,3668
#define MAP_2_END_HI_IDX 103,3708
#define MAP_2_OFFSET_LO_IDX 104,3748
#define MAP_2_OFFSET_HI_IDX 105,3788
#define MAP_3_START_LO_IDX 107,3829
#define MAP_3_START_HI_IDX 108,3869
#define MAP_3_END_LO_IDX 109,3909
#define MAP_3_END_HI_IDX 110,3949
#define MAP_3_OFFSET_LO_IDX 111,3989
#define MAP_3_OFFSET_HI_IDX 112,4029
#define MAP_4_START_LO_IDX 114,4070
#define MAP_4_START_HI_IDX 115,4110
#define MAP_4_END_LO_IDX 116,4150
#define MAP_4_END_HI_IDX 117,4190
#define MAP_4_OFFSET_LO_IDX 118,4230
#define MAP_4_OFFSET_HI_IDX 119,4270
#define SETUP_TIMING_0_IDX 121,4311
#define COMMAND_TIMING_0_IDX 122,4351
#define RECOVERY_TIMING_0_IDX 123,4391
#define SETUP_TIMING_1_IDX 125,4432
#define COMMAND_TIMING_1_IDX 126,4472
#define RECOVERY_TIMING_1_IDX 127,4512
#define REVISION_MASK 132,4761
#define INTERFACE_ID_MASK 134,4796
#define INTERFACE_ID_IO 135,4830
#define INTERFACE_ID_MEM 136,4864
#define INTERFACE_ID_MEM_IO 137,4898
#define BVD_MASK 142,5144
#define BVD_BATTERY_OK 143,5178
#define BVD_BATTERY_LOW 144,5212
#define CD_1_MASK 147,5308
#define CD_2_MASK 148,5342
#define CD_MASK 149,5376
#define CD_CARD_PRESENT 150,5429
#define CD_CARD_MISSING 151,5463
#define SOCKET_WRITE_PROTECT_MASK 154,5567
#define READY_MASK 155,5607
#define CARD_POWER_MASK 156,5647
#define VPP_VALID_MASK 157,5687
#define VPP1_POWER_OFF 163,5937
#define VPP1_POWER_VCC 164,5970
#define VPP1_POWER_12V 165,6003
#define VPP1_POWER_MASK 166,6036
#define VCC_POWER_ENABLE 167,6069
#define AUTO_POWER_ENABLE 168,6102
#define CARD_ENABLE 169,6135
#define IRQ_LEVEL_MASK 174,6381
#define MGMT_INT_ON_IRQ 175,6416
#define MGMT_INT_ON_INTR 176,6451
#define CARD_IS_MEM 177,6486
#define CARD_IS_IO 178,6521
#define CARD_RESET 179,6556
#define BVD1_IS_RI 180,6591
#define BVD1_IS_STATUS_CHANGE 181,6626
#define BATTERY_DEAD_CHANGE_MASK 191,7038
#define STATUS_CHANGE_MASK 192,7087
#define BATTERY_WARNING_CHANGE_MASK 194,7137
#define READY_CHANGE_MASK 195,7186
#define CARD_DETECT_CHANGE_MASK 196,7235
#define BATTERY_DEAD_CHANGE_ENABLE 206,7677
#define STATUS_CHANGE_ENABLE 207,7721
#define BATTERY_WARNING_CHANGE_ENABLE 208,7765
#define READY_CHANGE_ENABLE 209,7809
#define CARD_DETECT_CHANGE_ENABLE 210,7853
#define MGMT_IRQ_MASK 211,7897
#define MGMT_IRQ_SHIFT 212,7941
#define IRQ_DISABLE 219,8329
#define IRQ_3 220,8368
#define IRQ_4 221,8407
#define IRQ_5 222,8446
#define IRQ_7 223,8485
#define IRQ_9 224,8524
#define IRQ_10 225,8563
#define IRQ_11 226,8602
#define IRQ_12 227,8641
#define IRQ_14 228,8680
#define IRQ_15 229,8719
#define DISABLE_ALL 234,8968
#define MAP_0_ENABLE 235,9002
#define MAP_1_ENABLE 236,9036
#define MAP_2_ENABLE 237,9070
#define MAP_3_ENABLE 238,9104
#define MAP_4_ENABLE 239,9138
#define IO_MAP_0_ENABLE 240,9172
#define IO_MAP_1_ENABLE 241,9206
#define MAP_0_MASK 243,9241
#define MAP_1_MASK 244,9275
#define MAP_2_MASK 245,9309
#define MAP_3_MASK 246,9343
#define MAP_4_MASK 247,9377
#define IO_MAP_0_MASK 248,9411
#define IO_MAP_1_MASK 249,9445
#define IO_WINDOW_0_SIZE_8_BIT 254,9692
#define IO_WINDOW_0_SIZE_16_BIT 255,9737
#define IO_WINDOW_0_FIXED_SIZE 257,9783
#define IO_WINDOW_0_AUTO_SIZE 258,9828
#define IO_WINDOW_0_TIMING_SELECT_0 260,9874
#define IO_WINDOW_0_TIMING_SELECT_1 261,9919
#define IO_WINDOW_1_SIZE_8_BIT 263,9965
#define IO_WINDOW_1_SIZE_16_BIT 264,10010
#define IO_WINDOW_1_FIXED_SIZE 266,10056
#define IO_WINDOW_1_AUTO_SIZE 267,10101
#define IO_WINDOW_1_TIMING_SELECT_0 269,10147
#define IO_WINDOW_1_TIMING_SELECT_1 270,10192
#define MEM_WINDOW_DATA_SIZE_8_BIT 276,10476
#define MEM_WINDOW_DATA_SIZE_16_BIT 277,10521
#define CARD_TIMER_SELECT_MASK 282,10802
#define CARD_TIMER_SELECT_0 283,10840
#define CARD_TIMER_SELECT_1 284,10878
#define WRITE_ENABLE 289,11155
#define WRITE_PROTECT 290,11192
#define WRITE_PROTECT_MASK 291,11229
#define REG_PIN_INACTIVE 293,11267
#define REG_PIN_ACTIVE 294,11304
#define COMMON_MEM 295,11341
#define ATTRIBUTE_MEM 296,11390
#define POWER_5V_DETECT_MASK 301,11647
#define VCC_5V 303,11687
#define VCC_3V 304,11726
#define MGMT_INT_LEVEL 306,11766
#define MGMT_INT_PULSE 307,11805
#define SYS_IRQ_LEVEL 309,11845
#define SYS_IRQ_PULSE 310,11884
#define SPEAKER_DISABLE 312,11924
#define SPEAKER_ENABLE 313,11963
#define INPACK_IGNORED 315,12003
#define INPACK_ENABLE 316,12042
#define FIFO_STATUS_MASK 322,12341
#define FIFO_NOT_EMPTY 323,12376
#define FIFO_EMPTY 324,12411
#define FIFO_FLUSH 327,12500
#define NORMAL_CLOCK 332,12745
#define BYPASS_FREQ_SYNTH 333,12784
#define RUN_CLOCK_ALWAYS 335,12824
#define STOP_CLOCK_WHEN_POSSIBLE 336,12863
#define LOW_POWER_DYNAMIC_MODE 337,12902
#define SUSPEND_POWER_MODE 339,12962
#define NORMAL_POWER_MODE 340,13001
#define VDD_3V_CORE_MODE 342,13041
#define VDD_5V_CORE_MODE 343,13080
#define IRQ12_NORMAL_MODE 345,13120
#define IRQ12_LED_MODE 346,13159
#define BIT7_NORMAL_MODE 348,13199
#define BIT7_TRISTATE_MODE 349,13238
#define NON_DMA_MODE 351,13278
#define DMA_MODE 352,13317
#define IRQ15_NORMAL_MODE 354,13357
#define IRQ15_RI_MODE 355,13396
#define CHIP_REV_LEVEL_MASK 360,13647
#define CHIP_REV_LEVEL_SHIFT 361,13685
#define DUAL_SLOT_MASK 363,13721
#define CHIP_ID_MASK 365,13760
#define ATA_MODE_ENABLE 370,14005
#define ATA_MODE_DISABLE 371,14040
#define SPEAKER_IS_LED_INPUT 373,14076
#define ATA_ADDR_BITS_MASK 375,14112
#define SOCKET_PULLUP_ENABLE 380,14354
#define SOCKET_PULLUP_DISABLE 381,14393
#define DMA_DISABLE 383,14433
#define DMA_ENABLE_INPACK 384,14472
#define DMA_ENABLE_WP_IOIS16 385,14511
#define DMA_ENABLE_BVD2_SPKR 386,14550
#define PRESCALAR_MASK 393,14876
#define PRESCALAR_1 394,14909
#define PRESCALAR_16 395,14942
#define PRESCALAR_256 396,14975
#define PRESCALAR_4096 397,15008
#define MAX_LOCAL_ADDR 405,15252
#define MAX_PCMCIA_ADDR 406,15292
#define WINDOW_ADDR_MASK 408,15333
#define WINDOW_ADDR_LO_MASK 409,15373
#define WINDOW_ADDR_LO_SHIFT 410,15413
#define WINDOW_ADDR_HI_MASK 411,15453
#define WINDOW_ADDR_HI_SHIFT 412,15493
#define WINDOW_OFFSET_MASK 414,15534
#define WINDOW_OFFSET_LO_MASK 415,15576
#define WINDOW_OFFSET_LO_SHIFT 416,15618
#define WINDOW_OFFSET_HI_MASK 417,15660
#define WINDOW_OFFSET_HI_SHIFT 418,15702
#define FAST_WINDOW_TIMING_SET 420,15745
#define FAST_WINDOW_SETUP_TIME 424,15845
#define FAST_WINDOW_COMMAND_TIME 425,15885
#define FAST_WINDOW_RECOVERY_TIME 426,15925
#define SLOW_WINDOW_TIMING_SET 427,15965
#define SLOW_WINDOW_SETUP_TIME 428,16018
#define SLOW_WINDOW_COMMAND_TIME 429,16058
#define SLOW_WINDOW_RECOVERY_TIME 430,16098
#define CISTPL_NULL	436,16319
#define CISTPL_DEVICE	437,16348
#define CISTPL_JEDEC_C 438,16379
#define CISTPL_END 439,16419
#define CISTPL_DEV_TYPE_MASK	442,16477
#define CISTPL_DEV_TYPE_NULL 444,16515
#define CISTPL_DEV_TYPE_FLASH	445,16553
#define CISTPL_DEV_TYPE_SRAM 446,16591
#define CISTPL_DEV_NO_ATTR 447,16629
#define CISTPL_DEV_SPEED_MASK	449,16668
#define CISTPL_DEV_SPEED_EXT_MASK 450,16706
#define CISTPL_DEV_SIZE_CNT_MASK 452,16747
#define CISTPL_DEV_SIZE_CNT_SHIFT 453,16787
#define CISTPL_DEV_SIZE_UNIT_MASK 454,16827
#define CISTPL_DEV_SIZE_UNIT_512 456,16868
#define CISTPL_DEV_SIZE_UNIT_2K 457,16908
#define CISTPL_DEV_SIZE_UNIT_8K 458,16948
#define CISTPL_DEV_SIZE_UNIT_32K 459,16988
#define CISTPL_DEV_SIZE_UNIT_128K 460,17028
#define CISTPL_DEV_SIZE_UNIT_512K 461,17068
#define CISTPL_DEV_SIZE_UNIT_2M 462,17108
#define CISTPL_DEV_SIZE_UNIT_UNK 463,17148
#define MAX_TUPLES	466,17190
