# $FreeBSD: head/sysutils/u-boot-rpi3/Makefile 468630 2018-04-29 14:44:24Z db $

MAINTAINER=	uboot@FreeBSD.org
MASTERDIR=	${.CURDIR}/../u-boot-master
PORTREVISION=	1

MODEL=		rpi3
BOARD_CONFIG=	rpi_3_defconfig
FAMILY=		rpi
UBOOT_ARCH=	aarch64

DEPENDS=	${LOCALBASE}/share/rpi-firmware/bootcode.bin:sysutils/rpi-firmware

EXTRA_PATCHES=	${.CURDIR}/files/

.include "${MASTERDIR}/Makefile"
