# Created by: Kris Moore <kmoore@FreeBSD.org>
# $FreeBSD: head/sysutils/pcbsd-utils/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	pcbsd-utils
PORTVERSION=	1440778617
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	PC-BSD Command-Line Utilities

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	sipcalc:net-mgmt/sipcalc \
		eject:sysutils/eject

WRKSRC_SUBDIR=	src-sh/pcbsd-utils
USE_QT=		core network buildtools qmake
USES=		pkgconfig qt:5
MAKE_ARGS=	PREFIX=${STAGEDIR}${PREFIX}

USE_GITHUB=	yes
GH_ACCOUNT=	pcbsd
GH_PROJECT=	pcbsd
GH_TAGNAME=	3c4d2b

.include <bsd.port.mk>
