# $FreeBSD: head/sysutils/sysadm-client/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTNAME=	sysadm-client
PORTVERSION=	1.0
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	SysAdm Qt5 Client

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/../LICENSE

WRKSRC_SUBDIR=	src-qt5
USE_QT5=	core buildtools_build gui network qmake websockets widgets svg concurrent
USES=		pkgconfig tar:xz qmake ssl
USE_GL+=	gl
MAKE_ARGS=	PREFIX=${STAGEDIR}${PREFIX}

USE_GITHUB=	yes
GH_ACCOUNT=	trueos
GH_PROJECT=	sysadm-ui-qt

.include <bsd.port.mk>
