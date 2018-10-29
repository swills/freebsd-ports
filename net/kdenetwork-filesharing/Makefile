# $FreeBSD: head/net/kdenetwork-filesharing/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	kdenetwork-filesharing
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Filesharing via Samba

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons doctools ecm i18n jobwidgets kio \
		service widgetsaddons
USE_QT=		core gui network widgets \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
