# $FreeBSD: head/net/kdenetwork-filesharing/Makefile 467007 2018-04-10 19:09:05Z tcberner $

PORTNAME=	kdenetwork-filesharing
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Filesharing via Samba

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	completion config coreaddons doctools ecm i18n jobwidgets kio \
		service widgetsaddons
USE_QT5=	core gui network widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
