# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD$

PORTNAME=	mtpaint
PORTVERSION=	3.50
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ed.arrakis@gmail.com
COMMENT=	Simple painting program

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png \
		libtiff.so:graphics/tiff \
		libgif.so:graphics/giflib \
		libfreetype.so:print/freetype2

USES=		desktop-file-utils gmake gnome iconv jpeg pkgconfig tar:bzip2 xorg
USE_GNOME=	cairo gdkpixbuf2 gtk30
USE_XORG=	x11
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --mandir=${PREFIX}/share/man/man1 \
		--localedir=${PREFIX}/share/locale \
		gtk3 cflags asneeded ft jpeg tiff man GIF

CFLAGS+=	-fcommon
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}

PORTDOCS=	README

OPTIONS_DEFINE=	DOCS LCMS2 OPENJPEG NLS
OPTIONS_DEFAULT=	LCMS2 OPENJPEG
OPTIONS_SUB=	yes

LCMS2_LIB_DEPENDS=	liblcms2.so:graphics/lcms2
LCMS2_CONFIGURE_ON=	lcms2
LCMS2_CONFIGURE_OFF=	nolcms

OPENJPEG_LIB_DEPENDS=	libopenjpeg.so:graphics/openjpeg
OPENJPEG_CONFIGURE_ON=	jp2v2
OPENJPEG_LIB_DEPENDS_OFF=libjasper.so:graphics/jasper
OPENJPEG_CONFIGURE_OFF=	jasper

NLS_USES=		gettext
NLS_CONFIGURE_ON=	intl

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/doc/${PORTNAME}.1 \
		${STAGEDIR}${PREFIX}/share/man/man1
	${INSTALL_DATA} ${WRKSRC}/doc/${PORTNAME}.desktop \
		${STAGEDIR}${DESKTOPDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/${PORTNAME}.png \
		${STAGEDIR}${PREFIX}/share/pixmaps

do-install-NLS-on:
.for lang in cs de es fr gl hu it ja nl pl pt pt_BR ru sk sv tl tr zh_CN zh_TW
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/locale/${lang}/LC_MESSAGES
	${INSTALL_DATA} ${WRKSRC}/po/${lang}.mo \
		${STAGEDIR}${PREFIX}/share/locale/${lang}/LC_MESSAGES/mtpaint.mo
.endfor

.include <bsd.port.mk>
