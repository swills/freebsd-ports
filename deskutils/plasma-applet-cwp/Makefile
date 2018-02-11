# Created by: Stas Timokhin <stast@bsdportal.ru>
# $FreeBSD: head/deskutils/plasma-applet-cwp/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	cwp
PORTVERSION=	1.12.1
PORTREVISION=	2
CATEGORIES=	deskutils kde
MASTER_SITES=	http://kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	98925-cwp-${PORTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Weather plasma applet for KDE4

LICENSE=	GPLv3

USES=		cmake gettext kde:4 tar:bzip2
USE_KDE=	automoc4 kdelibs
USE_QT4=	gui dbus network opengl svg phonon webkit xml \
		qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
