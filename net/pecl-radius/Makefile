# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/net/pecl-radius/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	radius
DISTVERSION=	1.4.0b1
CATEGORIES=	net security pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Radius client library for PHP

LICENSE=	BSD3CLAUSE

USES=		php:pecl

CONFIGURE_ARGS=	--enable-radius

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
