# $FreeBSD: head/security/rubygem-rbnacl/Makefile 459592 2018-01-21 11:55:33Z sunpoet $

PORTNAME=	rbnacl
PORTVERSION=	5.0.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	idefix@fechner.net
COMMENT=	Networking and Cryptography (NaCl) library

LICENSE=	MIT

LIB_DEPENDS=	libsodium.so:security/libsodium
RUN_DEPENDS=	rubygem-ffi>=0:devel/rubygem-ffi

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
