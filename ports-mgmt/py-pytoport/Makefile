# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/ports-mgmt/py-pytoport/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	pytoport
PORTVERSION=	0.4.1
DISTVERSIONPREFIX=	v
CATEGORIES=	ports-mgmt python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generate FreeBSD ports from Python modules on PyPI

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

GH_ACCOUNT=	freebsd
GH_PROJECT=	pytoport

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}spdx-lookup>=0.3.0:misc/py-spdx-lookup@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}docutils>=0.12:textproc/py-docutils@${PY_FLAVOR}

USES=		python:3.3+
USE_GITHUB=	yes
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
