# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/science/massxpert/Makefile 495214 2019-03-09 23:23:33Z yuri $

PORTNAME=	massxpert
DISTVERSION=	3.6.1
CATEGORIES=	science

MAINTAINER=	ports@FreeBSD.org
COMMENT=	massXpert software for (bio)chemists

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/pthread-stubs.pc:devel/libpthread-stubs
LIB_DEPENDS=	libpcre.so:devel/pcre \
		libpng.so:graphics/png \
		libfreetype.so:print/freetype2 \
		libexpat.so:textproc/expat2 \
		libfontconfig.so:x11-fonts/fontconfig

USES=		cmake gettext gnome qt:5 tar:bzip2
USE_GITLAB=	yes
GL_SITE=	https://salsa.debian.org/
GL_ACCOUNT=	debichem-team
GL_COMMIT=	c229f4a1abde3c20b83a90e50f9c5d79104dfa5f
USE_GCC=	any # build breaks in clang
USE_XORG=	ice sm x11 xau xcb xdmcp xext xrender
USE_GNOME=	glib20
USE_QT=		core gui svg xml widgets buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
