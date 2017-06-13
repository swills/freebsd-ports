# Created by: Yukihiro Nakai <nakai@FreeBSD.org>
# $FreeBSD: head/print/ttftot42/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	ttftot42
PORTVERSION=	0.3.1
PORTREVISION=	2
CATEGORIES=	print
MASTER_SITES=	http://www.nih.at/ttftot42/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TrueType to Type42 font converter

LIB_DEPENDS=	libttf.so:print/freetype
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/ttftot42

CPPFLAGS+=	-I${LOCALBASE}/include/freetype1/freetype \
		-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
