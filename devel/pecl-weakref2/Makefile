# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/devel/pecl-weakref2/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	weakref
PORTVERSION=	0.3.3
CATEGORIES=	devel pear
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
