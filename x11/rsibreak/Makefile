# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/x11/rsibreak/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	rsibreak
PORTVERSION=	0.12.8
CATEGORIES=	x11 kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION:R}/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE RSI prevention tool

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash dbusaddons doctools ecm \
		iconthemes i18n idletime notifications notifyconfig \
		sonnet textwidgets xmlgui widgetsaddons windowsystem
USE_QT=		core dbus gui widgets xml buildtools_build qmake_build

.include <bsd.port.mk>
