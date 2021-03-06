
if_les_hd64570.h,9634
typedef struct hd64570_instance hd64570_instance_t;hd64570_instance_t58,2221
typedef struct qsim_regs qsim_regs_t;qsim_regs_t59,2273
typedef struct hd64570_reg hd64570_reg_t;hd64570_reg_t60,2311
typedef struct hd64570_msci_reg hd64570_msci_reg_t;hd64570_msci_reg_t61,2353
typedef struct hd64570_dmac_reg hd64570_dmac_reg_t;hd64570_dmac_reg_t62,2405
typedef struct hd64570_buf_descr hd64570_buf_descr_t;hd64570_buf_descr_t63,2457
typedef struct hd64570_buf_ring hd64570_buf_ring_t;hd64570_buf_ring_t64,2511
typedef void (*appl_periodic_t)appl_periodic_t65,2563
typedef void (*appl_periodic_t)(hwidbtype hwidbtype65,2563
#define HD64570_BUF_SIZE 73,2732
#define HD64570_BUF_2K_ALIGN 74,2809
#define HDX64570_NULL 79,2873
#define HDX64570_DCE_RX_START 80,2913
#define HDX64570_DCE_TX	81,2949
#define HDX64570_DTE_TX_START 82,2984
#define HDX64570_DTE_TX	83,3020
#define HDX64570_DTE_TX_SENDING	84,3055
#define HDX64570_DTE_TX_DMA_DONE	85,3097
#define HDX64570_DTE_TX_TRANSMITING	86,3132
#define HDX64570_DTE_TX_TRANSMIT_DONE	87,3170
#define HDX64570_TRANSMIT_DELAY 97,3518
#define HDX64570_BSC_TRANSMIT_DELAY 98,3562
#define HDX64570_RTS_DROP_DELAY 104,3726
#define HD64570_IDLE_FLAG 117,4174
#define HD64570_IDLE_MARK 118,4209
#define HD64570_BSC_IDLE_PATTERN 119,4244
#define HD64570_LPR_IOSTP	124,4324
#define HD64570_ITCR_VOS	129,4430
#define HD64570_ITCR_IAK0	130,4492
#define HD64570_ITCR_IAK1	131,4548
#define HD64570_ITCR_IPC	132,4604
#define HD64570_ISR0_RXRDY0	137,4710
#define HD64570_ISR0_TXRDY0	138,4773
#define HD64570_ISR0_RXINT0	139,4836
#define HD64570_ISR0_TXINT0	140,4899
#define HD64570_ISR0_RXRDY1	141,4962
#define HD64570_ISR0_TXRDY1	142,5025
#define HD64570_ISR0_RXINT1	143,5088
#define HD64570_ISR0_TXINT1	144,5151
#define HD64570_ISR1_DMIA0	149,5260
#define HD64570_ISR1_DMIB0	150,5323
#define HD64570_ISR1_DMIA1	151,5386
#define HD64570_ISR1_DMIB1	152,5449
#define HD64570_ISR1_DMIA2	153,5512
#define HD64570_ISR1_DMIB2	154,5575
#define HD64570_ISR1_DMIA3	155,5638
#define HD64570_ISR1_DMIB3	156,5701
#define HD64570_ISR2_T0IRQ	161,5810
#define HD64570_ISR2_T1IRQ	162,5873
#define HD64570_ISR2_T2IRQ	163,5936
#define HD64570_ISR2_T3IRQ	164,5999
#define HD64570_IER0_RXRDY0E	169,6108
#define HD64570_IER0_TXRDY0E	170,6179
#define HD64570_IER0_RXINT0E	171,6250
#define HD64570_IER0_TXINT0E	172,6321
#define HD64570_IER0_RXRDY1E	173,6392
#define HD64570_IER0_TXRDY1E	174,6463
#define HD64570_IER0_RXINT1E	175,6534
#define HD64570_IER0_TXINT1E	176,6605
#define HD64570_IER1_DMIA0E	181,6723
#define HD64570_IER1_DMIB0E	182,6794
#define HD64570_IER1_DMIA1E	183,6865
#define HD64570_IER1_DMIB1E	184,6936
#define HD64570_IER1_DMIA2E	185,7007
#define HD64570_IER1_DMIB2E	186,7078
#define HD64570_IER1_DMIA3E	187,7149
#define HD64570_IER1_DMIB3E	188,7220
#define HD64570_IER2_T0IRQE	193,7337
#define HD64570_IER2_T1IRQE	194,7408
#define HD64570_IER2_T2IRQE	195,7479
#define HD64570_IER2_T3IRQE	196,7550
#define HD64570_MD0_CRC0	201,7659
#define HD64570_MD0_CRC1	202,7719
#define HD64570_MD0_CRCCC	203,7772
#define HD64570_MD0_AUTO	204,7822
#define HD64570_MD0_HDLC	205,7876
#define HD64570_MD0_BiSYNC 206,7933
#define HD64570_MD1_SINGLE_1	211,8040
#define HD64570_MD1_SINGLE_2	212,8099
#define HD64570_MD1_DUAL	213,8158
#define HD64570_MD2_ECHO	218,8247
#define HD64570_MD2_LOOP	219,8295
#define HD64570_MD2_ADPLLX16	220,8349
#define HD64570_MD2_ADPLLX32	221,8408
#define HD64570_MD2_NRZI	222,8467
#define HD64570_MD2_NRZFM	223,8510
#define HD64570_CTL_RTS	228,8596
#define HD64570_CTL_GOP	229,8647
#define HD64570_CTL_SYNCLD 230,8710
#define HD64570_CTL_IDLC	231,8789
#define HD64570_CTL_UDRNC	232,8843
#define HD64570_RXS_BAUD_2	237,8959
#define HD64570_RXS_BAUD_4	238,9017
#define HD64570_RXS_BAUD_8	239,9075
#define HD64570_RXS_BAUD_16	240,9133
#define HD64570_RXS_BAUD_32	241,9193
#define HD64570_RXS_BAUD_64	242,9253
#define HD64570_RXS_BAUD_128	243,9313
#define HD64570_RXS_BAUD_256	244,9375
#define HD64570_RXS_BAUD_512	245,9437
#define HD64570_RXS_RXC 246,9499
#define HD64570_RXS_RXC_SUP	247,9560
#define HD64570_RXS_BRG	248,9635
#define HD64570_RXS_ADPLL_BRG	249,9684
#define HD64570_RXS_ADPLL_RXC	250,9752
#define HD64570_TXS_BAUD_2	255,9866
#define HD64570_TXS_BAUD_4	256,9924
#define HD64570_TXS_BAUD_8	257,9982
#define HD64570_TXS_BAUD_16	258,10040
#define HD64570_TXS_BAUD_32	259,10100
#define HD64570_TXS_BAUD_64	260,10160
#define HD64570_TXS_BAUD_128	261,10220
#define HD64570_TXS_BAUD_256	262,10282
#define HD64570_TXS_BAUD_512	263,10344
#define HD64570_TXS_TXC 264,10406
#define HD64570_TXS_BRG	265,10467
#define HD64570_TXS_RX_Clock	266,10516
#define HD64570_CMD_TX_RST	271,10606
#define HD64570_CMD_TX_ENB	272,10655
#define HD64570_CMD_TX_DIS	273,10705
#define HD64570_CMD_TX_CRC_INIT	274,10756
#define HD64570_CMD_TX_CRC_EX	275,10823
#define HD64570_CMD_TX_EOM	276,10895
#define HD64570_CMD_TX_ABORT	277,10953
#define HD64570_CMD_TX_MP	278,11017
#define HD64570_CMD_TX_BUF_CLR	279,11069
#define HD64570_CMD_RX_RST	280,11129
#define HD64570_CMD_RX_ENB	281,11178
#define HD64570_CMD_RX_DIS	282,11228
#define HD64570_CMD_RX_CRC_INIT	283,11279
#define HD64570_CMD_RX_REJ	284,11346
#define HD64570_CMD_RX_MP	285,11404
#define HD64570_CMD_RX_CRC_EX	286,11460
#define HD64570_CMD_RX_CRC_FOR	287,11532
#define HD64570_CMD_CHAN_RST	288,11603
#define HD64570_CMD_SEARCH	289,11659
#define HD64570_ST0_RX_RDY	294,11757
#define HD64570_ST0_TX_RDY	295,11806
#define HD64570_ST0_RX_INT	296,11855
#define HD64570_ST0_TX_INT	297,11908
#define HD64570_ST1_IDLD	302,12001
#define HD64570_ST1_ABORT_GA	303,12059
#define HD64570_ST1_CDCD	304,12126
#define HD64570_ST1_CCTS	305,12176
#define HD64570_ST1_FLGD	306,12226
#define HD64570_ST1_IDL	307,12278
#define HD64570_ST1_UDRN	308,12324
#define HD64570_ST2_CRCE	313,12421
#define HD64570_ST2_OVRN	314,12478
#define HD64570_ST2_RBIT	315,12533
#define HD64570_ST2_ABT	316,12599
#define HD64570_ST2_SHRT	317,12667
#define HD64570_ST2_EOM	318,12726
#define HD64570_ST3_RXENBL	323,12824
#define HD64570_ST3_TXENBL	324,12874
#define HD64570_ST3_DCD	325,12924
#define HD64570_ST3_CTS	326,12977
#define HD64570_ST3_SRCH	327,13030
#define HD64570_ST3_SLOOP	328,13086
#define HD64570_FST_CRCEF	333,13190
#define HD64570_FST_OVRNF	334,13248
#define HD64570_FST_RBITF	335,13304
#define HD64570_FST_ABTF	336,13371
#define HD64570_FST_SHRTF	337,13439
#define HD64570_FST_EOMF	338,13499
#define HD64570_IE0_RXRDYE	343,13607
#define HD64570_IE0_TXRDYE	344,13670
#define HD64570_IE0_RXINTE	345,13733
#define HD64570_IE0_TXINTE	346,13796
#define HD64570_IE1_IDLDE	351,13909
#define HD64570_IE1_ABORT_GAE	352,13970
#define HD64570_IE1_CDCDE	353,14046
#define HD64570_IE1_CCTSE	354,14114
#define HD64570_IE1_FLGDE	355,14182
#define HD64570_IE1_IDLE	356,14252
#define HD64570_IE1_UDRNE	357,14315
#define HD64570_IE2_CRCEE	362,14433
#define HD64570_IE2_OVRNE	363,14499
#define HD64570_IE2_RBITE	364,14563
#define HD64570_IE2_ABTE	365,14632
#define HD64570_IE2_SHRTE	366,14702
#define HD64570_IE2_EOME	367,14770
#define HD64570_FIE_EOMFE	372,14892
#define HD64570_CST0_CDE0	377,15002
#define HD64570_CST0_CRCEC0	378,15053
#define HD64570_CST0_OVRNC0	379,15121
#define HD64570_CST0_RBITC0	380,15187
#define HD64570_CST0_ABTC0	381,15261
#define HD64570_CST0_SHRTC0	382,15331
#define HD64570_CST0_EOMC0	383,15401
#define HD64570_CST1_CDE1	388,15518
#define HD64570_CST1_CRCEC1	389,15569
#define HD64570_CST1_OVRNC1	390,15637
#define HD64570_CST1_RBITC1	391,15703
#define HD64570_CST1_ABTC1	392,15777
#define HD64570_CST1_SHRTC1	393,15847
#define HD64570_CST1_EOMC1	394,15917
#define HD64570_DSR_DWE	399,16022
#define HD64570_DSR_DE	400,16081
#define HD64570_DSR_COF	401,16129
#define HD64570_DSR_BOF	402,16184
#define HD64570_DSR_EOM	403,16238
#define HD64570_DSR_EOT	404,16300
#define HD64570_DMR_CNTE	409,16393
#define HD64570_DMR_NF	410,16442
#define HD64570_DMR_TMOD	411,16496
#define DMR_NF_TMOD 412,16562
#define HD64570_DIR_COFE	417,16675
#define HD64570_DIR_BOFE	418,16747
#define HD64570_DIR_EOME	419,16818
#define HD64570_DIR_EOTE	420,16886
#define DIR_BOFE_EOME_EOTE 421,16954
#define HD64570_DCR_ABORT	426,17079
#define HD64570_DCR_CLR_FCT	427,17133
#define HD64570_PCR_CCC	432,17271
#define HD64570_PCR_BRC	433,17340
#define HD64570_PCR_CH0 434,17407
#define HD64570_PCR_CH1 435,17467
#define HD64570_PCR_RX 436,17527
#define HD64570_PCR_TX 437,17579
#define HD64570_PCR_RR 438,17631
#define HD64570_DMER_DME	443,17759
#define HD64570_RX_BUF_EOM	448,17852
#define HD64570_RX_BUF_SF	449,17905
#define HD64570_RX_BUF_ABORT	450,17954
#define HD64570_RX_BUF_RB	451,18000
#define HD64570_RX_BUF_OR	452,18050
#define HD64570_RX_BUF_CRC	453,18095
#define HD64570_TX_BUF_EOM	458,18182
#define HD64570_TX_BUF_EOT	459,18235
#define HD64570_TCSR_CMF	464,18341
#define HD64570_TCSR_ECMI	465,18398
#define HD64570_TCSR_TME	466,18458
#define HD64570_TIMER_PRE	471,18536
struct hd64570_msci_reg hd64570_msci_reg476,18631
struct hd64570_dmac_reg hd64570_dmac_reg498,19882
struct hd64570_reg hd64570_reg516,20747
struct hd64570_buf_descr hd64570_buf_descr578,24071
struct hd64570_buf_ring hd64570_buf_ring592,24667
typedef struct hd64570_clocktype hd64570_clocktype596,24743
} hd64570_clocktype;hd64570_clocktype600,24830
#define NHD64570_CLOCKS 602,24852
#define HD64570_EVEN_BYTE_ACCESS 607,25025
#define HD64570_ODD_BYTE_ACCESS 608,25066
#define HD64570_EVEN(HD64570_EVEN609,25108
#define NEXT_READ_PACKET(NEXT_READ_PACKET611,25152
