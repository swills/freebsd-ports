# Created by: wenheping@gmail.com
# $FreeBSD: head/science/brian/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	brian
PORTVERSION=	1.4.3
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Clock-driven simulator for spiking neural networks

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}numpy>=1.1.0,1:math/py-numpy@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.6.0:science/py-scipy@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0.90.1:math/py-matplotlib@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2.7 zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
