# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: head/x11-themes/kde4-style-skulpture/Makefile 486999 2018-12-08 23:35:27Z swills $

PORTNAME=	skulpture
PORTVERSION=	0.2.4
PORTREVISION=	2
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde4-style-
DISTFILES=	59031-${PORTNAME}-${PORTVERSION}${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	KDE style featuring 3D artwork and enhanced the visual experience

LICENSE=	GPLv3

DEPRECATED=		Qt4 has been EOL since december 2015
EXPIRATION_DATE=	2018-12-31

USES=		cmake kde:4 qt:4
USE_KDE=	kdelibs automoc4 workspace
USE_QT=		corelib qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
