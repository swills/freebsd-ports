# $FreeBSD: head/net-im/libqmatrixclient/Makefile 493501 2019-02-21 13:44:45Z adridg $

PORTNAME=	libqmatrixclient
DISTVERSIONPREFIX=	v
DISTVERSION=	0.4.2.1
CATEGORIES=	net-im

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Matrix IM support library using Qt technologies

LICENSE=	LGPL21
LICENSE_FILES=	${WRKSRC}/COPYING

USES=	cmake qt:5 tar:xz
USE_QT=	core gui network \
	buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	QMatrixClient

.include <bsd.port.mk>
