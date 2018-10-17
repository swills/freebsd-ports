# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/audio/libmpdclient/Makefile 482241 2018-10-16 20:02:23Z gblach $

PORTNAME=	libmpdclient
PORTVERSION=	2.16
CATEGORIES=	audio
MASTER_SITES=	http://www.musicpd.org/download/libmpdclient/2/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	API library for interfacing MPD

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:xz meson
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS DOXYGEN
OPTIONS_SUB=	yes
DOXYGEN_IMPLIES=	DOCS

DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen

DOXYGEN_MESON_TRUE=	documentation

.include <bsd.port.mk>
