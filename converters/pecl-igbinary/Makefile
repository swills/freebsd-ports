# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/converters/pecl-igbinary/Makefile 492945 2019-02-14 22:41:06Z sunpoet $

PORTNAME=	igbinary
PORTVERSION=	2.0.8
CATEGORIES=	converters

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Replacement for the standard PHP serializer

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		php:pecl

post-patch:
	@${CP} ${WRKSRC}/src/php7/igbinary.h ${WRKSRC}/igbinary.h
	@${CP} ${WRKSRC}/src/php7/php_igbinary.h ${WRKSRC}/php_igbinary.h

.include <bsd.port.mk>
