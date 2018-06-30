# Created by: Kris Moore <kmoore@FreeBSD.org>
# $FreeBSD: head/sysutils/pcbsd-syscache/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	pcbsd-syscache
PORTVERSION=	1439494375
CATEGORIES=	sysutils

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	PC-BSD SysCache Utility

LICENSE=	BSD3CLAUSE

WRKSRC_SUBDIR=	src-sh/syscache
USE_QT=		core network buildtools qmake
USES=		pkgconfig qt:5
NO_BUILD=	yes
MAKE_ARGS=	PREFIX=${STAGEDIR}${PREFIX}

PLIST_FILES=	bin/syscache \
		bin/syscache-daemon \
		etc/rc.d/syscache

USE_GITHUB=	yes
GH_ACCOUNT=	pcbsd
GH_PROJECT=	pcbsd
GH_TAGNAME=	3c4d2b

.include <bsd.port.mk>
