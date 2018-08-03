# $FreeBSD: head/sysutils/u-boot-rpi/Makefile 475665 2018-07-29 17:37:00Z imp $

MASTERDIR=	${.CURDIR}/../u-boot-master

PATCHFILES+=	937869/raw	\
		939129/raw

MODEL=		rpi
BOARD_CONFIG=	rpi_defconfig
FAMILY=		rpi

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

CONFIG_FRAGMENT=	${.CURDIR}/files/rpi_fragment
FRAGMENT_NAME=		rpi_fragment

.include "${MASTERDIR}/Makefile"
