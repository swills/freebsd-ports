# $FreeBSD: head/net-im/libstrophe/Makefile 436247 2017-03-15 14:45:30Z mat $

PORTNAME=	libstrophe
PORTVERSION=	0.9.1
CATEGORIES=	net-im

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Lightweight XMPP library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE.txt

LIB_DEPENDS=	libexpat.so:textproc/expat2

USE_GITHUB=	yes
GH_ACCOUNT=	strophe
USES=		libtool pkgconfig autoreconf ssl
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig
USE_LDCONFIG=	yes

.include <bsd.port.mk>
