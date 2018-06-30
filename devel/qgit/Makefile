# Created by: Ion-Mihai "IOnut" Tetcu <itetcu@FreeBSD.org>
# $FreeBSD: head/devel/qgit/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qgit
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	2.8
CATEGORIES=	devel

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Graphical interface to git repositories

LICENSE=	GPLv2

USES=		cmake:outsource qt:5
USE_QT=		core gui widgets \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	tibirna

.include <bsd.port.mk>
