# $FreeBSD: head/net-im/ktp-auth-handler-kde4/Makefile 465343 2018-03-23 09:50:04Z adridg $

PORTNAME=	ktp-auth-handler
PORTVERSION=	${KTP_VERSION}
PORTREVISION=	3
CATEGORIES=	net-im kde
MASTER_SITES=	KDE/${KTP_BRANCH}/kde-telepathy/${PORTVERSION}/src
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KWallet integration module for KDE Telepathy

LIB_DEPENDS=	libqjson.so:devel/qjson \
		libqca.so:devel/qca \
		libtelepathy-qt4.so:net-im/telepathy-qt4 \
		libktpcommoninternalsprivate.so:net-im/ktp-common-internals-kde4

USES=		cmake gettext kde:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT4=	corelib dbus gui xml webkit \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
