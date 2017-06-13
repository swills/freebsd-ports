# Created by: Matt Tosto <datahead4@gmail.com>
# $FreeBSD: head/audio/taglib-extras/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	taglib-extras
PORTVERSION=	1.0.1
CATEGORIES=	audio
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Extra taglib features for Amarok 2.2

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		cmake

post-extract:
	${REINPLACE_CMD} -e 's|$${LIB_INSTALL_DIR}/pkgconfig|libdata/pkgconfig|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
