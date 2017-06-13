# Created by: glebius@FreeBSD.org
# $FreeBSD: head/graphics/libecwj2/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	libecwj2
PORTVERSION=	3.3
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	http://glebius.int.ru/tmp/403/
DISTFILES=	ecw_jpeg_2000_sdk_3_3_source.zip

MAINTAINER=	glebius@FreeBSD.org
COMMENT=	Erdas ECW and JPEG2000 support library

RESTRICTED=	Registration required to download sources,\
		but sources no longer available on ERDAS website

USES=		gmake libtool zip
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

post-extract:
	(cd ${WRKDIR} && \
		${EXTRACT_CMD} ImageCompressionSDKSourceCode3.3Setup_20070509.zip)
	${TOUCH} ${WRKSRC}/Source/NCSBuildGnu/NCSGnuConfig.h.in

.include <bsd.port.mk>
