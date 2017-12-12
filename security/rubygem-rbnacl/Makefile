# $FreeBSD: head/security/rubygem-rbnacl/Makefile 455591 2017-12-05 16:44:09Z tz $

PORTNAME=	rbnacl
PORTVERSION=	4.0.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
COMMENT=	Networking and Cryptography (NaCl) library

LICENSE=	MIT

LIB_DEPENDS=	libsodium.so:security/libsodium
BUILD_DEPENDS=	rubygem-bundler>=0:sysutils/rubygem-bundler
RUN_DEPENDS=	rubygem-ffi>=0:devel/rubygem-ffi

USES=		gem
NO_ARCH=	yes
USE_RUBY=	yes

.include <bsd.port.mk>
