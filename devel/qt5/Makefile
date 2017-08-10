# $FreeBSD: head/devel/qt5/Makefile 447127 2017-08-02 17:47:11Z tcberner $

PORTNAME=	qt5
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Cross-platform application and UI framework (metaport)

# * phonon4 is not part of Qt itself.
# * we don't want to pull in wayland just yet.
USE_QT5=	${_USE_QT_ALL:Nphonon4:Ndeclarative:Nwayland:S/$/_run/}
USES=		metaport

.include <bsd.port.mk>
