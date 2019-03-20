# $FreeBSD: head/sysutils/dsbbatmon/Makefile 496265 2019-03-19 15:09:29Z swills $

PORTNAME=	dsbbatmon
DISTVERSION=	1.0.4
CATEGORIES=	sysutils
MASTER_SITES=	http://freeshell.de/~mk/download/

MAINTAINER=	mk@nic-nac-project.org
COMMENT=	Qt battery monitor

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang gl qmake qt:5 tar:tgz

USE_GL=		gl
USE_QT=		buildtools_build core gui linguisttools_build widgets

.include <bsd.port.mk>
