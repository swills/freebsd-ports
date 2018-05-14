# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/converters/pecl-igbinary/Makefile 469816 2018-05-13 20:10:02Z sunpoet $

PORTNAME=	igbinary
PORTVERSION=	2.0.6
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
