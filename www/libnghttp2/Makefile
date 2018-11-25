# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/libnghttp2/Makefile 485805 2018-11-24 22:28:51Z sunpoet $

PORTNAME=	nghttp2
PORTVERSION=	1.35.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www net
PKGNAMEPREFIX=	lib

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP/2.0 C Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf compiler:c++14-lang libtool pathfix pkgconfig

CONFIGURE_ARGS=	--enable-lib-only
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_CXXSTD=	c++14
USE_LDCONFIG=	yes

USE_GITHUB=	yes

.include <bsd.port.mk>
