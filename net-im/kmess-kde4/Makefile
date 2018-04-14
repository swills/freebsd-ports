# Created by: Hye-Shik Chang <perky@python.or.kr>
# $FreeBSD: head/net-im/kmess-kde4/Makefile 467306 2018-04-14 11:09:16Z tcberner $

PORTNAME=	kmess
PORTVERSION=	2.0.6.2
PORTREVISION=	14
CATEGORIES=	net-im kde
MASTER_SITES=	SF/${PORTNAME}/Latest%20versions/${PORTVERSION}/

MAINTAINER=	syncer@gmail.com
COMMENT=	MSN Messenger client for KDE

LIB_DEPENDS=	libqca.so:devel/qca@qt4 \
		libgif.so:graphics/giflib

USES=		cmake gettext kde:4 tar:bzip2
USE_GNOME=	libxml2 libxslt
USE_KDE=	kdelibs libkonq automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
