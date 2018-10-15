# Created by: Marie Loise Nolden <loise@kde.org>
# $FreeBSD: head/x11-themes/qt5-style-plugins/Makefile 482048 2018-10-14 16:04:46Z adridg $

PORTNAME=	qt5-style-plugins
PORTVERSION=	5.0.0
PORTREVISION=	2
CATEGORIES=	x11-themes
MASTER_SITES=	QT/community_releases/additional_qt_src_pkgs/
DISTNAME=	qtstyleplugins-src-${PORTVERSION}
DIST_SUBDIR=	KDE/Qt/addons

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Additional Styles for Qt 5 and KDE

LICENSE=	LGPL21

USES=		qmake qt:5
USE_QT=		buildtools_build core gui widgets
USE_GL+=	gl

WRKSRC=		${WRKDIR}/qtstyleplugins-src-${PORTVERSION}

.include <bsd.port.mk>
