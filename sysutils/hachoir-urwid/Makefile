# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/sysutils/hachoir-urwid/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	hachoir-urwid
PORTVERSION=	1.1
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Binary file explorer

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/hachoir_parser/__init__.py:devel/hachoir-parser \
		${PYTHON_SITELIBDIR}/urwid/__init__.py:devel/py-urwid

USES=		python
USE_PYTHON=	distutils

.include <bsd.port.mk>
