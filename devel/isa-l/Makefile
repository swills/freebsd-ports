# Created by: Michal Bielicki <m.bielicki@llizardfs.com>
# $FreeBSD: head/devel/isa-l/Makefile 458035 2018-01-04 16:01:50Z swills $

PORTNAME=	isa-l
PORTVERSION=	2.21.0
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
