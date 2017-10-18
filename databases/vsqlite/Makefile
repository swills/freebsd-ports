# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: head/databases/vsqlite/Makefile 450560 2017-09-25 00:08:16Z jbeich $

PORTNAME=	vsqlite
PORTVERSION=	0.3.13
PORTREVISION=	7
CATEGORIES=	databases

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Well designed and portable SQLite3 Wrapper for C++

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libboost_random.so:devel/boost-libs

USE_GITHUB=	yes
GH_ACCOUNT=	vinzenz
GH_PROJECT=	vsqlite--

USES=		autoreconf compiler:c++0x libtool sqlite:3
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
