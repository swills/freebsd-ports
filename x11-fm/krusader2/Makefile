# Created by: Heiner <h.eichmann@gmx.de>
# $FreeBSD: head/x11-fm/krusader2/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	krusader
DISTVERSION=	2.4.0-beta3
PORTREVISION=	6
CATEGORIES=	x11-fm kde
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTVERSION}/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Twin panel file manager for KDE, like midnight or norton commander

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource gettext kde:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
