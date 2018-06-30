# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/devel/grantlee/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	grantlee
DISTVERSION=	${GRANTLEE_VERSION}
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://downloads.${PORTNAME}.org/ \
		http://www.loegria.net/${PORTNAME}/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	String template engine for Qt 4

LICENSE=	LGPL21

PORTSCOUT=	limit:^0\.

USE_QT=		corelib gui qtestlib_build script \
		qmake_build moc_build rcc_build uic_build
USES=		cmake:outsource grantlee:4,selfbuild qt:4
CMAKE_ARGS+=	-DBUILD_TESTS:BOOL=FALSE
USE_LDCONFIG=	yes

.include <bsd.port.mk>
