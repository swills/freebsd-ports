# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/net/pecl-yaz/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	yaz
PORTVERSION=	1.2.1
CATEGORIES=	net pear

MAINTAINER=	fw@moov.de
COMMENT=	PECL extension that implements a Z39.50 client

LICENSE=	PHP301

LIB_DEPENDS=	libyaz.so:net/yaz

USES=		php:pecl
USE_GNOME+=	libxslt
IGNORE_WITH_PHP=	70

CONFIGURE_ARGS=	--with-yaz=${LOCALBASE}

.include <bsd.port.mk>
