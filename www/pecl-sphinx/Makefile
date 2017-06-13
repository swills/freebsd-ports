# Created by: Max Baryshnikov <mephius@gmail.com>
# $FreeBSD: head/www/pecl-sphinx/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	sphinx
DISTVERSION=	1.3.3
PORTREVISION=	1
CATEGORIES=	www

MAINTAINER=	mephius@gmail.com
COMMENT=	Sphinx search engine php client

LICENSE=	PHP301

LIB_DEPENDS=	libsphinxclient.so:textproc/libsphinxclient

USES=		php:pecl
IGNORE_WITH_PHP=	70 71

SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message

CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
