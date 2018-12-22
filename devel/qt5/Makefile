# $FreeBSD: head/devel/qt5/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	qt5
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Cross-platform application and UI framework (metaport)

# * phonon4 is not part of Qt itself.
# * we don't want to pull in wayland just yet.
USE_QT=		${_USE_QT_ALL:Nphonon4:Ndeclarative:Nwayland:S/$/_run/}
USES=		metaport qt:5

.include <bsd.port.mk>
