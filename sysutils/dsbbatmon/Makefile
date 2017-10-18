# $FreeBSD: head/sysutils/dsbbatmon/Makefile 451026 2017-10-01 07:43:22Z tcberner $

PORTNAME=	dsbbatmon
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://freeshell.de/~mk/download/

MAINTAINER=	mk@nic-nac-project.org
COMMENT=	Qt battery monitor

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		tar:tgz qmake

USE_GL=		gl
USE_QT5=	buildtools_build core gui linguisttools_build widgets

.include <bsd.port.mk>
