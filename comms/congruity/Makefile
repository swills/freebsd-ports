# Created by: Stephen Hurd <shurd@FreeBSD.org>
# $FreeBSD: head/comms/congruity/Makefile 472306 2018-06-13 12:05:32Z amdmi3 $

PORTNAME=	congruity
PORTVERSION=	18
PORTREVISION=	3
CATEGORIES=	comms
MASTER_SITES=	SF

MAINTAINER=	shurd@FreeBSD.org
COMMENT=	GUI Logitech Harmony configuration tool

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libconcord>=0:comms/py-libconcord@${PY_FLAVOR}

USES=		desktop-file-utils gmake tar:bzip2 python:2.7 shebangfix
MAKE_ARGS=	MANDIR=${PREFIX}/man
USE_WX=		2.8+
WX_COMPS=	python
SHEBANG_FILES=	congruity mhgui
NO_ARCH=	yes

.include <bsd.port.mk>
