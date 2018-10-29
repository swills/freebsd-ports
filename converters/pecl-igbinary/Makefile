# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/converters/pecl-igbinary/Makefile 482683 2018-10-21 16:48:58Z sunpoet $

PORTNAME=	igbinary
PORTVERSION=	2.0.8
CATEGORIES=	converters

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Replacement for the standard PHP serializer

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		php:pecl

post-patch:
	@${CP} ${WRKSRC}/src/php${PHP_VER:C|.$||}/igbinary.h ${WRKSRC}/igbinary.h
	@${CP} ${WRKSRC}/src/php${PHP_VER:C|.$||}/php_igbinary.h ${WRKSRC}/php_igbinary.h

.include <bsd.port.mk>
