# Created by: Stephen Hurd <shurd@FreeBSD.org>
# $FreeBSD: head/comms/congruity/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	congruity
PORTVERSION=	18
PORTREVISION=	2
CATEGORIES=	comms
MASTER_SITES=	SF

MAINTAINER=	shurd@FreeBSD.org
COMMENT=	GUI Logitech Harmony configuration tool

LICENSE=	GPLv2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}libconcord>=0:comms/py-libconcord@${PY_FLAVOR}

MAKE_ARGS=	MANDIR=${PREFIX}/man
USES=		desktop-file-utils gmake tar:bzip2 python:2.7+
USE_WX=		2.8+
WX_COMPS=	python

.include <bsd.port.mk>
