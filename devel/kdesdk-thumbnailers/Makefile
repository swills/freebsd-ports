# $FreeBSD: head/devel/kdesdk-thumbnailers/Makefile 466899 2018-04-09 19:19:41Z tcberner $

PORTNAME=	kdesdk-thumbnailers
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE thumbnail generator for gettext po files

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	config ecm i18n kio
USE_QT5=	core gui widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
