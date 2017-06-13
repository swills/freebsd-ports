# Created by: Mina R Waheeb <syncer@gmail.com>
# $FreeBSD: head/audio/kstreamripper/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kstreamripper
PORTVERSION=	0.7.100
PORTREVISION=	1
CATEGORIES=	audio kde
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}

MAINTAINER=	syncer@gmail.com
COMMENT=	Program for recording streams for KDE4

RUN_DEPENDS=	${LOCALBASE}/bin/streamripper:audio/streamripper

USES=		cmake gettext-tools kde:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.mk>
