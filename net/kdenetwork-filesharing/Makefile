# $FreeBSD: head/net/kdenetwork-filesharing/Makefile 479406 2018-09-10 13:14:50Z mat $

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

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
