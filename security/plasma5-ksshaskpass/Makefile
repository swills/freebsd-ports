# $FreeBSD: head/security/plasma5-ksshaskpass/Makefile 488757 2018-12-31 06:38:42Z tcberner $

PORTNAME=	ksshaskpass
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	security kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 ssh-add frontend

USES=		cmake compiler:c++11-lib cpe gettext kde:5 qt:5 tar:xz
USE_KDE=	coreaddons doctools ecm i18n wallet widgetsaddons
USE_QT=		core gui widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
