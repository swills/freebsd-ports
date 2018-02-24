# Created by: Yi-Jheng Lin <yzlin@cs.nctu.edu.tw>
# $FreeBSD: head/devel/py-py/Makefile 462637 2018-02-22 19:51:25Z sunpoet $

PORTNAME=	py
PORTVERSION=	1.5.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Library with cross-python path, ini-parsing, io, code, log facilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} -m pytest

.include <bsd.port.mk>
