# Created by: Rodrigo Osorio <rodrigo@FreeBSD.org>
# $FreeBSD: head/textproc/libmrss-php/Makefile 419514 2016-08-03 12:47:05Z mat $

PORTNAME=	libmrss
PORTVERSION=	0.19.2
PORTREVISION=	3
CATEGORIES=	textproc
MASTER_SITES=	http://www.autistici.org/bakunin/libmrss/
PKGNAMESUFFIX=	-php

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PHP library for parsing, writing, and creating RSS

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/../COPYING

LIB_DEPENDS=	libmrss.so:textproc/libmrss

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

USES=		libtool php:ext
USE_LDCONFIG=	yes

PHP_MODNAME=	mrss
IGNORE_WITH_PHP=	70
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/phpmrss

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/php/${PHP_EXT_DIR}/mrss.so

.include <bsd.port.mk>
