# Created by: Timothy Beyer <beyert@cs.ucr.edu>
# $FreeBSD: head/japanese/py-tegaki/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	tegaki
PORTVERSION=	0.3.1
CATEGORIES=	japanese python
MASTER_SITES=	http://www.tegaki.org/releases/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-python-${PORTVERSION}

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Open-source Chinese and Japanese handwriting recognition

LICENSE=	GPLv2

LIB_DEPENDS=	libzinnia.so:japanese/zinnia
RUN_DEPENDS=	${PYTHON_SITELIBDIR}/zinnia.py:japanese/py-zinnia

USES=		python
USE_PYTHON=	distutils
PYDISTUTILS_PKGNAME=	${PORTNAME}_python

.include <bsd.port.mk>
