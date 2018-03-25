# $FreeBSD: head/devel/py-IBMQuantumExperience/Makefile 464832 2018-03-17 17:01:13Z yuri $

PORTNAME=	IBMQuantumExperience
DISTVERSION=	1.8.29
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python library for the Quantum Experience API

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=0:www/py-requests@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests_ntlm>=0:www/py-requests_ntlm@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
