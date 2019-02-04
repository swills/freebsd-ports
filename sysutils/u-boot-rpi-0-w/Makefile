# $FreeBSD: head/sysutils/u-boot-rpi-0-w/Makefile 492147 2019-02-04 18:22:06Z manu $

MASTERDIR=	${.CURDIR}/../u-boot-master

PATCHFILES+=	939129/raw

MODEL=		rpi-0-w
BOARD_CONFIG=	rpi_0_w_defconfig
FAMILY=		rpi

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

CONFIG_FRAGMENT=	${.CURDIR}/files/rpi_0_w_fragment
FRAGMENT_NAME=		rpi_0_w_fragment

.include "${MASTERDIR}/Makefile"
