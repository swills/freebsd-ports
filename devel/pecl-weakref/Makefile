# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/pecl-weakref/Makefile 486751 2018-12-06 11:22:12Z rene $

PORTNAME=	weakref
PORTVERSION=	0.2.6
PORTREVISION=	1
CATEGORIES=	devel pear
DISTNAME=	Weakref-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL Weakref extension

DEPRECATED=	Works only with EOL php 5.6
EXPIRATION_DATE=	2018-12-30

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

PORTSCOUT=	limit:^0\.2\.[0-9]*

USES=		php:pecl
IGNORE_WITH_PHP=	71 72 73

CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
