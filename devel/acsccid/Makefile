# Created by: mp39590@gmail.com
# $FreeBSD: head/devel/acsccid/Makefile 430669 2017-01-05 22:58:02Z jbeich $

PORTNAME=	acsccid
PORTVERSION=	1.1.4
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	mp39590@gmail.com
COMMENT=	PC/SC driver for CS CCID smart card readers

LICENSE=	GPLv2

LIB_DEPENDS=	libpcsclite.so:devel/pcsc-lite

USES=		perl5 pkgconfig tar:bz2

PLIST_FILES=	lib/pcsc/drivers/ifd-acsccid.bundle/Contents/${OPSYS}/libacsccid.so \
		lib/pcsc/drivers/ifd-acsccid.bundle/Contents/Info.plist

GNU_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pcsc/drivers/ifd-acsccid.bundle/Contents/${OPSYS}/libacsccid.so

.include <bsd.port.mk>
