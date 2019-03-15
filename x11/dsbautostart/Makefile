# $FreeBSD: head/x11/dsbautostart/Makefile 495749 2019-03-15 00:07:06Z linimon $

PORTNAME=	dsbautostart
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	http://freeshell.de/~mk/download/

MAINTAINER=	mk@nic-nac-project.org
COMMENT=	Manage commands to be executed at X session start

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang qmake qt:5 tar:tgz

USE_GL=		gl
USE_QT=		buildtools_build core gui linguisttools_build widgets

.include <bsd.port.mk>
