# Created by: Olivier Duchateau
# $FreeBSD: head/x11/xfce4-whiskermenu-plugin/Makefile 435173 2017-03-01 16:55:25Z olivierd $

PORTNAME=	xfce4-whiskermenu-plugin
PORTVERSION=	1.7.1
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Alternate menu for the Xfce Desktop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limit:^1\.7\.

USES=		cmake:outsource gettext localbase pkgconfig tar:bzip2 xfce
USE_GNOME=	gtk20 cairo
USE_XFCE=	panel
INSTALLS_ICONS=	yes

.include <bsd.port.mk>
