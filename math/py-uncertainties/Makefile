# $FreeBSD: head/math/py-uncertainties/Makefile 465073 2018-03-20 08:16:55Z yuri $

PORTNAME=	uncertainties
DISTVERSION=	3.0.2
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Calculations with uncertainties on the quantities involved

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
