# Created by: Hye-Shik Chang <perky@FreeBSD.org>
# $FreeBSD: head/devel/py-urwid/Makefile 442045 2017-05-30 01:48:40Z sunpoet $

PORTNAME=	urwid
PORTVERSION=	1.3.1
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Curses-based user interface library for Python

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

OPTIONS_DEFINE=	EXAMPLES

USES?=		python
USE_PYTHON=	autoplist concurrent distutils

PORTEXAMPLES=	*

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/urwid/str_util.so

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	cd ${WRKSRC}/examples/ && ${INSTALL_DATA} * ${STAGEDIR}${EXAMPLESDIR}/

do-test:
	cd ${WRKSRC}/ && ${PYTHON_CMD} -m urwid.tests

.include <bsd.port.mk>
