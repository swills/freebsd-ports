# Created by: mp39590@gmail.com
# $FreeBSD: head/devel/acsccid/Makefile 495917 2019-03-16 17:28:57Z misha $

PORTNAME=	acsccid
PORTVERSION=	1.1.6
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	mp39590@gmail.com
COMMENT=	PC/SC driver for CS CCID smart card readers

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpcsclite.so:devel/pcsc-lite

USES=		perl5 pkgconfig tar:bz2

PLIST_FILES=	lib/pcsc/drivers/ifd-acsccid.bundle/Contents/${OPSYS}/libacsccid.so \
		lib/pcsc/drivers/ifd-acsccid.bundle/Contents/Info.plist

GNU_CONFIGURE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pcsc/drivers/ifd-acsccid.bundle/Contents/${OPSYS}/libacsccid.so

.include <bsd.port.mk>
