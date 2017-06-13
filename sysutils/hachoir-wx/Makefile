# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/hachoir-wx/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	hachoir-wx
PORTVERSION=	0.3
PORTREVISION=	7
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Hachoir GUI

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_parser/__init__.py:devel/hachoir-parser

USES=		python
USE_PYTHON=	distutils
USE_WX=		3.0+
WX_COMPS=	python

.include <bsd.port.mk>
