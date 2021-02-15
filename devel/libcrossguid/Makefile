# $FreeBSD$

PORTNAME=	libcrossguid
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.2-52
DISTVERSIONSUFFIX=	-gca1bf4b
PORTEPOCH=	1
CATEGORIES=	devel

MAINTAINER=	mickael.maillot@gmail.com
COMMENT=	Minimal and cross platform C++ GUID library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libuuid.so:misc/e2fsprogs-libuuid

USE_GITHUB=	yes
GH_ACCOUNT=	graeme-hill
GH_PROJECT=	crossguid

USES=		cmake compiler:c++11-lang pkgconfig
USE_LDCONFIG=	yes

CMAKE_ON=	BUILD_SHARED_LIBS

.include <bsd.port.mk>
