# $FreeBSD: head/sysutils/u-boot-rpi/Makefile 454262 2017-11-15 18:50:36Z manu $

MAINTAINER=	manu@FreeBSD.org
MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		rpi
BOARD_CONFIG=	rpi_defconfig
FAMILY=		rpi

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

.include "${MASTERDIR}/Makefile"
