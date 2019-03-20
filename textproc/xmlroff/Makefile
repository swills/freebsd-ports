# Created by: James Earl
# $FreeBSD$

PORTNAME=	xmlroff
PORTVERSION=	0.6.2
DISTVERSIONPREFIX=	v
PORTREVISION=	7
CATEGORIES=	textproc

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	XSL formatter that produces PDF and PostScript

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	libfo>=0.6.2:textproc/libfo
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		autoreconf gmake gnome gettext libtool pkgconfig
USE_GITHUB=	yes
USE_GNOME=	libgnomeprint libartlgpl2 pango glib20 \
		libxslt libxml2 gdkpixbuf2
GH_ACCOUNT=	xmlroff
GH_PROJECT=	xmlroff
WRKSRC_SUBDIR=	${PORTNAME}
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-html-dir=${PREFIX}/share/doc --enable-man
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	GTKDOC

GTKDOC_DESC=		Build API documentation (requires textproc/gtk-doc)
GTKDOC_CONFIGURE_ENABLE=gtk-doc
GTKDOC_BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtk-doc.pc:textproc/gtk-doc

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/docs/Makefile.am

.include <bsd.port.mk>
