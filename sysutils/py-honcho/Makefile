# Created by: Fukang Chen <loader@FreeBSD.org>
# $FreeBSD: head/sysutils/py-honcho/Makefile 418711 2016-07-18 16:15:01Z jbeich $

PORTNAME=	honcho
PORTVERSION=	0.6.6
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	loader@FreeBSD.org
COMMENT=	Managing Procfile-based applications tool

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Jinja2>=2.7:devel/py-Jinja2

USE_GITHUB=	yes
GH_ACCOUNT=	nickstenning

USES=		python
USE_PYTHON=	autoplist distutils

regression-test:
	@(cd ${TEST_WRKSRC} && ${SETENV} ${TEST_ENV} ${PYTHON_CMD} -m pytest)

.include <bsd.port.mk>
