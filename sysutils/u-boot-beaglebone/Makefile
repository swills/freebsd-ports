# $FreeBSD: head/sysutils/u-boot-beaglebone/Makefile 476839 2018-08-10 15:49:13Z manu $

MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		beaglebone
BOARD_CONFIG=	am335x_boneblack_defconfig
FAMILY=		omap

CONFIG_FRAGMENT=	${.CURDIR}/files/bbb_fragment
FRAGMENT_NAME=		bbb_fragment

.include "${MASTERDIR}/Makefile"
