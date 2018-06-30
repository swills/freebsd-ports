# $FreeBSD: head/net-im/ktp-contact-list-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ktp-contact-list
PORTVERSION=	${KTP_VERSION}
PORTREVISION=	3
CATEGORIES=	net-im kde
MASTER_SITES=	KDE/${KTP_BRANCH}/kde-telepathy/${PORTVERSION}/src
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging contact list application

LIB_DEPENDS=	libtelepathy-qt4.so:net-im/telepathy-qt4 \
		libtelepathy-logger-qt4.so:net-im/telepathy-logger-qt4 \
		libktpcommoninternalsprivate.so:net-im/ktp-common-internals-kde4

USES=		cmake gettext kde:4 qt:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT=		corelib moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
