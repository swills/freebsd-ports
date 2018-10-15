# Created by: ale
# $FreeBSD: head/security/php-suhosin/Makefile 481545 2018-10-08 15:08:13Z antoine $

PORTNAME=	suhosin
PORTVERSION=	0.9.38
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	http://download.suhosin.org/
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	PHP extension that implements high-level protections

LICENSE=	PHP301

OPTIONS_DEFINE=	EXAMPLES

USES=		php:ext
USE_PHP=	session:build
IGNORE_WITH_PHP=	70 71 72 73

CONFIGURE_ARGS=	--enable-suhosin

PORTEXAMPLES=	suhosin.ini

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/suhosin.ini ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
