# Created by: Jonathan Liu <Net147@hotmail.com>
# $FreeBSD$

PORTNAME=	nitrogen
PORTVERSION=	1.6.1
CATEGORIES=	sysutils

MAINTAINER=	corentin@ralite.com
COMMENT=	Background browser and setter for X windows

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash
RUN_DEPENDS=	gnome-icon-theme>0:misc/gnome-icon-theme \
		hicolor-icon-theme>0:misc/hicolor-icon-theme

USE_GITHUB=	yes
GH_ACCOUNT=	l3ib

OPTIONS_DEFINE=	XINERAMA
OPTIONS_DEFAULT=XINERAMA

USES=		compiler:c++11-lang gettext iconv pkgconfig autoreconf

USE_CXXSTD=	c++11
USE_GNOME=	gtkmm24
USE_XORG=	x11
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-inotify
INSTALLS_ICONS=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lX11

DESKTOP_ENTRIES="Nitrogen" "${COMMENT}" "${PORTNAME}" "${PORTNAME}" \
		"Graphics;Viewer;" true

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MXINERAMA}
USE_XORG+=	xinerama
CONFIGURE_ARGS+=--enable-xinerama
.else
CONFIGURE_ARGS+=--disable-xinerama
.endif

pre-build:
	# Create empty .gmo doesn't exist in po/
	@${ECHO} >> ${WRKSRC}/po/bs.gmo
	@${ECHO} >> ${WRKSRC}/po/fi.gmo
	@${ECHO} >> ${WRKSRC}/po/hr.gmo
	@${ECHO} >> ${WRKSRC}/po/pl.gmo
	@${ECHO} >> ${WRKSRC}/po/ru.gmo
	@${ECHO} >> ${WRKSRC}/po/sr.gmo
post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|' \
		${WRKSRC}/data/icon-theme-installer
post-install:
	#Bug: https://github.com/l3ib/nitrogen/issues/122
	# Remove empty .mo files
	${RM} -r ${STAGEDIR}${PREFIX}/share/locale/bs/LC_MESSAGES/nitrogen.mo
	${RM} -r ${STAGEDIR}${PREFIX}/share/locale/fi/LC_MESSAGES/nitrogen.mo
	${RM} -r ${STAGEDIR}${PREFIX}/share/locale/hr/LC_MESSAGES/nitrogen.mo
	${RM} -r ${STAGEDIR}${PREFIX}/share/locale/pl/LC_MESSAGES/nitrogen.mo
	${RM} -r ${STAGEDIR}${PREFIX}/share/locale/ru/LC_MESSAGES/nitrogen.mo
	${RM} -r ${STAGEDIR}${PREFIX}/share/locale/sr/LC_MESSAGES/nitrogen.mo
.include <bsd.port.mk>
