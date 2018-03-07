# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/libnghttp2/Makefile 463238 2018-02-28 15:52:31Z sunpoet $

PORTNAME=	nghttp2
PORTVERSION=	1.31.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www net
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP/2.0 C Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

CONFIGURE_ARGS=	--enable-lib-only
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		autoreconf libtool pathfix pkgconfig

USE_GITHUB=	yes

.include <bsd.port.mk>
