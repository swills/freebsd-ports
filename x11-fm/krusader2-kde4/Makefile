# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD: head/x11-fm/krusader2-kde4/Makefile 470105 2018-05-16 07:36:15Z rakuco $

PORTNAME=	krusader
DISTVERSION=	2.4.0-beta3
PORTREVISION=	6
CATEGORIES=	x11-fm kde
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTVERSION}/
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Twin panel file manager for KDE, like midnight or norton commander

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_INSTALL=	krusader2-2.*

USES=		cmake:outsource gettext kde:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
