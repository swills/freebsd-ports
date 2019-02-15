# $FreeBSD: head/deskutils/plasma5-milou/Makefile 492811 2019-02-12 21:40:13Z tcberner $

PORTNAME=	milou
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	deskutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 Plasmoid for search

USES=		cmake compiler:c++11-lib cpe gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config coreaddons i18n kdeclarative package \
		plasma-framework runner service
USE_QT=		core declarative gui network script testlib widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
