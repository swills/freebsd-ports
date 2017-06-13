# $FreeBSD: head/sysutils/nepomuk-widgets/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	nepomuk-widgets
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The NepomukWidget libraries

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4 soprano nepomuk-core
USE_QT4=	corelib dbus gui moc_build qmake_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
