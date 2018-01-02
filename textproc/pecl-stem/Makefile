# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/textproc/pecl-stem/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	stem
PORTVERSION=	1.5.1
PORTREVISION=	1
CATEGORIES=	textproc pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL extension which provides word stemming

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		php:pecl
IGNORE_WITH_PHP=	70 71 72

post-configure:
	echo "#define HAVE_XDL_ALLOCATOR_PRIV 1" >>${WRKSRC}/config.h

.include <bsd.port.mk>
