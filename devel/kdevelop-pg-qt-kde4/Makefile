# Created by: Douglas Carmichael <dcarmich@dcarmichael.net>
# $FreeBSD: head/devel/kdevelop-pg-qt-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdevelop-pg-qt
DISTVERSION=	1.0.0
PORTREVISION=	5
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
DIST_SUBDIR=	KDE
PKGNAMESUFFIX=	-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Parser-generator from KDevplatform

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex

USES=		bison cmake:outsource compiler:c++11-lib kde:4 qt:4 tar:bzip2
USE_KDE=	automoc4 kdelibs
USE_QT=		qmake_build moc_build uic_build rcc_build

.include <bsd.port.mk>
