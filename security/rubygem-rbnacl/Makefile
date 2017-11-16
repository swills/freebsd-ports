# $FreeBSD: head/security/rubygem-net-scp/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	rbnacl
PORTVERSION=	4.0.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Networking and Cryptography (NaCl) library

LICENSE=	MIT

LIB_DEPENDS=	libsodium.so:security/libsodium
BUILD_DEPENDS=	rubygem-bundler>=0:sysutils/rubygem-bundler
RUN_DEPENDS=	rubygem-ffi>=0:devel/rubygem-ffi

USES=		gem
NO_ARCH=	yes
USE_RUBY=	yes

.include <bsd.port.mk>
