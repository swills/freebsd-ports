# $FreeBSD: head/sysutils/u-boot-rpi-0-w/Makefile 477233 2018-08-15 15:06:15Z manu $

MASTERDIR=	${.CURDIR}/../u-boot-master

PATCHFILES+=	937869/raw	\
		939129/raw

MODEL=		rpi-0-w
BOARD_CONFIG=	rpi_0_w_defconfig
FAMILY=		rpi

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

CONFIG_FRAGMENT=	${.CURDIR}/files/rpi_0_w_fragment
FRAGMENT_NAME=		rpi_0_w_fragment

.include "${MASTERDIR}/Makefile"
