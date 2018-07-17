# Created by: Olivier Duchateau
# $FreeBSD: head/x11/xfce4-whiskermenu-plugin/Makefile 474614 2018-07-14 06:37:52Z madpilot $

PORTNAME=	xfce4-whiskermenu-plugin
PORTVERSION=	2.2.1
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Alternate menu for the Xfce Desktop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

OPTIONS_DEFINE=	NLS

OPTIONS_SUB=	yes
NLS_USES=	gettext-runtime

USES=		cmake:outsource gettext-tools localbase pkgconfig tar:bzip2 xfce:gtk3
USE_GNOME=	gtk30 cairo
USE_XFCE=	panel
INSTALLS_ICONS=	yes

post-patch-NLS-off:
	@${REINPLACE_CMD} '/add_subdirectory(po)/d' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
