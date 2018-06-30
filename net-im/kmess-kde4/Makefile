# Created by: Hye-Shik Chang <perky@python.or.kr>
# $FreeBSD: head/net-im/kmess-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kmess
PORTVERSION=	2.0.6.2
PORTREVISION=	14
CATEGORIES=	net-im kde
MASTER_SITES=	SF/${PORTNAME}/Latest%20versions/${PORTVERSION}/

MAINTAINER=	syncer@gmail.com
COMMENT=	MSN Messenger client for KDE

LIB_DEPENDS=	libqca.so:devel/qca@qt4 \
		libgif.so:graphics/giflib

USES=		cmake gettext kde:4 qt:4 tar:bzip2
USE_GNOME=	libxml2 libxslt
USE_KDE=	kdelibs libkonq automoc4
USE_QT=		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
