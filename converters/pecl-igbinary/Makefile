# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/converters/pecl-igbinary/Makefile 473473 2018-06-27 23:34:15Z sunpoet $

PORTNAME=	igbinary
PORTVERSION=	2.0.7
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
