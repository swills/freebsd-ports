# $FreeBSD: head/net-im/libmesode/Makefile 433459 2017-02-05 21:30:33Z arved $

PORTNAME=	libmesode
PORTVERSION=	0.9.1
CATEGORIES=	net-im

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Lightweight XMPP library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE.txt

LIB_DEPENDS=	libexpat.so:textproc/expat2

USE_GITHUB=	yes
GH_ACCOUNT=	boothj5
USES=		libtool pkgconfig autoreconf ssl
GNU_CONFIGURE=	yes
INSTALL_TARGET=install-strip
CONFIGURE_ARGS+=	--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
