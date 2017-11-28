# $FreeBSD: head/sysutils/dtc/Makefile 454916 2017-11-26 19:23:07Z manu $

PORTNAME=	dtc
PORTVERSION=	1.4.5
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	imp@FreeBSD.org
COMMENT=	Device Tree Compiler

LICENSE=	GPLv2

USES=		bison gmake shebangfix
USE_LDCONFIG=	yes
SHEBANG_FILES=	dtdiff

USE_GITHUB=	yes
GH_ACCOUNT=	dgibson
GH_PROJECT=	dtc

MAKE_ARGS+=	PREFIX=${PREFIX} NO_PYTHON=yes

.include <bsd.port.mk>
