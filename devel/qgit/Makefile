# Created by: Ion-Mihai "IOnut" Tetcu <itetcu@FreeBSD.org>
# $FreeBSD: head/devel/qgit/Makefile 492114 2019-02-04 11:47:49Z linimon $

PORTNAME=	qgit
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	2.8
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Graphical interface to git repositories

LICENSE=	GPLv2

USES=		cmake compiler:c++11-lang qt:5
USE_QT=		core gui widgets \
		buildtools_build qmake_build

USE_GITHUB=	yes
GH_ACCOUNT=	tibirna

.include <bsd.port.mk>
