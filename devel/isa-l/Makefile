# Created by: Michal Bielicki <m.bielicki@llizardfs.com>
# $FreeBSD: head/devel/isa-l/Makefile 443688 2017-06-16 11:51:59Z amdmi3 $

PORTNAME=	isa-l
PORTVERSION=	2.18.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	m.bielicki@lizardfs.com
COMMENT=	Intel(R) Intelligent Storage Acceleration Libray

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	yasm:devel/yasm

USE_GITHUB=	yes
GH_ACCOUNT=	01org

USES=		autoreconf gmake libtool:keepla

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
ONLY_FOR_ARCHS=	amd64

INSTALL_TARGET=	install-strip

BROKEN_aarch64=	fails to compile: invalid conversion between vector type and integer type

.include <bsd.port.mk>
