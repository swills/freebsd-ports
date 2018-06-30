# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: head/x11-themes/kde4-style-nitrogen/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	nitrogen
PORTVERSION=	1.0.5
PORTREVISION=	9
CATEGORIES=	x11-themes kde
MASTER_SITES=	http://www.kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	kde4-style-
DISTNAME=	112652-kde4-kstyle-nitrogen-${PORTVERSION}-Source

MAINTAINER=	swills@FreeBSD.org
COMMENT=	KDE style with animations

LICENSE=	GPLv2

WRKSRC=		${WRKDIR}/kde4-kstyle-nitrogen-${PORTVERSION}-Source

USES=		cmake kde:4 qt:4
USE_KDE=	kdelibs automoc4
USE_QT=		corelib qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
