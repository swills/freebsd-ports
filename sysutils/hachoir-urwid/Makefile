# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/hachoir-urwid/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	hachoir-urwid
PORTVERSION=	1.1
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Binary file explorer

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_parser/__init__.py:devel/hachoir-parser \
		${PYTHON_SITELIBDIR}/urwid/__init__.py:devel/py-urwid@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils

.include <bsd.port.mk>
