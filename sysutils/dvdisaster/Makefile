# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD$

PORTNAME=	dvdisaster
PORTVERSION=	0.79.5
CATEGORIES=	sysutils
MASTER_SITES=	http://www.ml1.org.uk/distfiles/ \
		http://www.ancientgeek.org.uk/distfiles/

MAINTAINER=	bob@eager.cx
COMMENT=	Optical disc error correction data and recovery tool

LICENSE=	GPLv2

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig libfreetype.so:print/freetype2

USES=		gmake pkgconfig
USE_GCC=	7+
USE_GNOME=	gdkpixbuf2 gtk20 cairo

MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CONFIGURE_OFF=	-with-nls=no

CFLAGS+=	-Wno-stringop-overflow
MAKEFILE=	GNUmakefile

HAS_CONFIGURE=	yes
CONFIGURE_LOG=	configure.log
CONFIGURE_ARGS=	--docsubdir=dvdisaster \
		--localedir=${PREFIX}/share/locale \
		--buildroot=${STAGEDIR}
SUB_FILES=	pkg-message DEVICES.md DEVICES.html

.include <bsd.port.pre.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dvdisaster ${STAGEDIR}${PREFIX}/bin/dvdisaster
	${SED} -e 's|%docdir%|${DOCSDIR}|' < ${WRKSRC}/documentation/dvdisaster.en.1 \
		> ${WRKSRC}/documentation/dvdisaster.1
	${MKDIR} ${STAGEDIR}${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/documentation/dvdisaster.1 ${STAGEDIR}${PREFIX}/man/man1/dvdisaster.1
	${SED} -e 's|%docdir%|${DOCSDIR}|' < ${WRKSRC}/documentation/dvdisaster.de.1 \
		> ${WRKSRC}/documentation/dvdisaster.1
	${MKDIR} ${STAGEDIR}${PREFIX}/man/de/man1
	${INSTALL_MAN} ${WRKSRC}/documentation/dvdisaster.1 ${STAGEDIR}${PREFIX}/man/de/man1/dvdisaster.1
	${MKDIR} ${STAGEDIR}${PREFIX}/share/pixmaps
	${INSTALL_DATA} ${WRKSRC}/contrib/dvdisaster48.png ${STAGEDIR}${PREFIX}/share/pixmaps/dvdisaster48.png
	${MKDIR} ${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/contrib/dvdisaster.desktop ${STAGEDIR}${PREFIX}/share/applications/dvdisaster.desktop

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/documentation/manual.pdf ${STAGEDIR}${DOCSDIR}/manual.pdf
	${INSTALL_MAN} ${WRKDIR}/DEVICES.md ${STAGEDIR}${DOCSDIR}/DEVICES.md
	${INSTALL_MAN} ${WRKDIR}/DEVICES.html ${STAGEDIR}${DOCSDIR}/DEVICES.html

do-install-NLS-on:
	(cd ${WRKSRC}/locale && \
	for i in ?? ??_??; do \
		${MKDIR} ${STAGEDIR}${PREFIX}/share/locale/$$i/LC_MESSAGES; \
		${INSTALL_DATA} $$i/LC_MESSAGES/dvdisaster.mo ${STAGEDIR}${PREFIX}/share/locale/$$i/LC_MESSAGES; \
	done)

.include <bsd.port.post.mk>
