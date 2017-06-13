# $FreeBSD: head/devel/pecl-newt/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	newt
PORTVERSION=	1.2.9
PORTREVISION=	1
CATEGORIES=	devel www

MAINTAINER=	garga@FreeBSD.org
COMMENT=	PHP language extension for RedHat Newt library

LICENSE=	PHP301

LIB_DEPENDS=	libnewt.so:devel/newt

USES=		php:pecl
IGNORE_WITH_PHP=	70 71

post-patch:
	@${REINPLACE_CMD} -e '/SEARCH_PATH/ s,=",="${LOCALBASE} ${PREFIX} ,' \
		${WRKSRC}/config.m4

.include <bsd.port.mk>
