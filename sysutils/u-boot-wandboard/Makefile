# $FreeBSD: head/sysutils/u-boot-wandboard/Makefile 435807 2017-03-09 22:39:52Z ian $

MAINTAINER=	imp@FreeBSD.org
MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		wandboard
BOARD_CONFIG=	wandboard_defconfig
FAMILY=		imx6

IMXFILE=	u-boot.imx
UBOOT_PLIST=	${IMXFILE}

ALL_TARGET=	u-boot-with-spl.imx

pre-install: .PHONY
	@${CP} ${WRKSRC}/u-boot-with-spl.imx ${WRKSRC}/${IMXFILE}

.include "${MASTERDIR}/Makefile"
