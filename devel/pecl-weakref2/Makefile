# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/pecl-weakref2/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	weakref
PORTVERSION=	0.3.3
CATEGORIES=	devel pear
PKGNAMESUFFIX=	2
DISTNAME=	Weakref-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PECL Weakref extension

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl
IGNORE_WITH_PHP=	56

CONFLICTS=	pecl-weakref-1*

CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
