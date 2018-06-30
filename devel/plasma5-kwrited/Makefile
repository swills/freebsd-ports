# $FreeBSD: head/devel/plasma5-kwrited/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kwrited
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	devel kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 daemon listening for wall and write messages

USES=		cmake:outsource compiler:c++11-lib cpe gettext kde:5 qt:5 tar:xz
USE_KDE=	coreaddons dbusaddons ecm i18n notifications pty
USE_QT=		core dbus gui widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
