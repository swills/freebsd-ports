# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-rb-inotify/Makefile 443838 2017-06-18 17:32:41Z sunpoet $

PORTNAME=	rb-inotify
PORTVERSION=	0.9.10
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby wrapper for libinotify, using ffi

LICENSE=	MIT

LIB_DEPENDS=	libinotify.so:devel/libinotify
RUN_DEPENDS=	rubygem-ffi>=0.5.0:devel/rubygem-ffi

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
