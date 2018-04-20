# $FreeBSD: head/security/spass/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	spass
PORTVERSION=	3.0
PORTREVISION=	10
CATEGORIES=	security

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Secure password generator with a true random number generator

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/boost/format.hpp:devel/boost-libs
LIB_DEPENDS=	libboost_program_options.so:devel/boost-libs

BROKEN_sparc64=	cannot link with boost

USE_GITHUB=	yes
GH_ACCOUNT=	guyru
GH_TAGNAME=	cb0de64

USES=		cmake

CMAKE_ARGS=	-DWITH_ALSA:BOOL=off -DWITH_OSS:BOOL=on

PLIST_FILES=	bin/spass

.include <bsd.port.mk>
