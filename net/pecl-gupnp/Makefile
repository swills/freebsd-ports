# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/pecl-gupnp/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	gupnp
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	net pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	GUPnP wrapper extension

LICENSE=	PHP301

LIB_DEPENDS=	libgupnp-1.0.so:net/gupnp

IGNORE_WITH_PHP=70 71
USES=		php:pecl pkgconfig

post-patch:
	@${REINPLACE_CMD} -e 's| -ldl||g' ${WRKSRC}/config.m4

.include <bsd.port.mk>
