# $FreeBSD: head/sysutils/u-boot-rpi2/Makefile 475665 2018-07-29 17:37:00Z imp $

MASTERDIR=	${.CURDIR}/../u-boot-master

PATCHFILES+=	937869/raw	\
		939129/raw

MODEL=		rpi2
BOARD_CONFIG=	rpi_2_defconfig
FAMILY=		rpi

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

CONFIG_FRAGMENT=	${.CURDIR}/files/rpi2_fragment
FRAGMENT_NAME=	rpi2_fragment

.include "${MASTERDIR}/Makefile"
