# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/pecl-weakref2/Makefile 489323 2019-01-05 10:38:59Z joneum $

PORTNAME=	weakref
PORTVERSION=	0.3.3
CATEGORIES=	devel pear
DISTNAME=	Weakref-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL Weakref extension

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl
IGNORE_WITH_PHP=	73

CONFLICTS=	pecl-weakref-1*

CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
