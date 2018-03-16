# Created by: Julien Laffaye <jlaffaye@FreeBSD.org>
# $FreeBSD: head/www/py-feedgenerator/Makefile 464432 2018-03-13 21:08:16Z brnrd $

PORTNAME=	feedgenerator
PORTVERSION=	1.9
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jlaffaye@FreeBSD.org
COMMENT=	Standalone version of django.utils.feedgenerator

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>0:devel/py-pytz@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
