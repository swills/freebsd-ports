# $FreeBSD: head/sysutils/u-boot-rpi/Makefile 475142 2018-07-23 03:04:18Z imp $

MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		rpi
BOARD_CONFIG=	rpi_defconfig
FAMILY=		rpi

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

PATCHFILES+=	937869/mbox/?	\
		939129/mbox/?

CONFIG_FRAGMENT=	${.CURDIR}/files/rpi_fragment
FRAGMENT_NAME=		rpi_fragment

.include "${MASTERDIR}/Makefile"
