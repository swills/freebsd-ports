 #$FreeBSD: head/net/libmediawiki/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libmediawiki
DISTVERSION=	5.37.0
CATEGORIES=	net kde
MASTER_SITES=	KDE/stable/${PORTNAME}
DIST_SUBDIR=	KDE/digikam

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for accessing MediaWiki sites

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	coreaddons ecm
USE_QT=		core network testlib \
		buildtools_build qmake_build

.include <bsd.port.mk>
