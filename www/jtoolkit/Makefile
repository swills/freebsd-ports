# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/www/jtoolkit/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	jToolkit
PORTVERSION=	0.7.8
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Webapp framework with modpython-based and stand-alone modes

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}kid>=0.9.5:devel/py-kid@${PY_FLAVOR}
# Has optional dependencies on database engines
# Can optionally use py-lucene (on i386)

USES=		python:2.7
NO_ARCH=	yes
USE_PYTHON=	distutils
PYSETUP=	${PORTNAME}Setup.py

.include <bsd.port.mk>
