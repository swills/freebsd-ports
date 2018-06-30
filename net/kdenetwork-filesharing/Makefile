# $FreeBSD: head/net/kdenetwork-filesharing/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdenetwork-filesharing
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Filesharing via Samba

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons doctools ecm i18n jobwidgets kio \
		service widgetsaddons
USE_QT=		core gui network widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
