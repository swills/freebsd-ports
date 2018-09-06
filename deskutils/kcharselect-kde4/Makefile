# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/deskutils/kcharselect-kde4/Makefile 478462 2018-08-30 14:34:04Z adridg $

PORTNAME=	kcharselect
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	deskutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Character selector for KDE

DEPRECATED=	KDE4 is EOL upstream
EXPIRATION_DATE=	2018-12-31

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
