# Created by: Tobias C. Berner <tcberner@gmail.com>
# $FreeBSD: head/devel/kdevelop-pg-qt/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdevelop-pg-qt
DISTVERSION=	2.1.0
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}/src
DIST_SUBDIR=	KDE/kdevelop

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Parser-generator from KDevplatform

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex

USES=		bison cmake:outsource compiler:c++11-lib kde:5 qt:5 tar:xz
USE_KDE=	ecm
USE_QT=		core testlib \
		buildtools_build qmake_build

CONFLICTS=	kdevelop-pg-qt-1.0*

.include <bsd.port.mk>
