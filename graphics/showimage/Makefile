# Created by: Rusty Nejdl <rnejdl@ringofsaturn.com>
# $FreeBSD: head/graphics/showimage/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	showimage
PORTVERSION=	1.10
CATEGORIES=	graphics kde
MASTER_SITES=	https://dl.opendesktop.org/api/files/download/id/1482097460/ \
		LOCAL/tcberner/showimage-0.10/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Simple KDE based image viewer

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource kde:5 qt:5 tar:bzip2
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons ecm i18n itemviews jobwidgets kio service solid \
		widgetsaddons xmlgui
USE_QT=		core dbus gui network xml widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
