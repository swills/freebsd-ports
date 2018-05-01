# Created by: Alan Garfield <alan@fromorbit.com>
# $FreeBSD: head/print/pecl-ps/Makefile 468263 2018-04-25 08:33:50Z amdmi3 $

PORTNAME=	ps
PORTVERSION=	1.3.7
PORTREVISION=	1
CATEGORIES=	print pear

MAINTAINER=	alan@fromorbit.com
COMMENT=	PHP extension for pslib to generate postscript

LICENSE=	PHP202

IGNORE_WITH_PHP=	70 71 72

LIB_DEPENDS=	libps.so:print/pslib

USES=		php:pecl

post-patch:
	@${REINPLACE_CMD} -e 's|-ldl|-lintl|g' ${WRKSRC}/config.m4

do-test:
	${MAKE} -C ${WRKSRC} test < /dev/null

.include <bsd.port.mk>
