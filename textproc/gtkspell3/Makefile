# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/textproc/gtkspell3/Makefile 480951 2018-09-30 11:58:29Z kwm $

PORTNAME=	gtkspell3
PORTVERSION=	3.0.9
CATEGORIES=	textproc gnome
MASTER_SITES=	SF/gtkspell/${PORTVERSION}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GTK+ 3 spell checking component

BUILD_DEPENDS=	vapigen:lang/vala
LIB_DEPENDS=	libenchant.so:textproc/enchant

USE_GNOME=	cairo gdkpixbuf2 gtk30 intlhack introspection:build
USES=		gettext gmake localbase libtool pathfix pkgconfig tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/ s|docs||' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
