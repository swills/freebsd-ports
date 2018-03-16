# $FreeBSD: head/science/py-pyteomics/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	pyteomics
PORTVERSION=	3.4.2
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python modules for proteomics data analysis

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}matplotlib>=0:math/py-matplotlib@${FLAVOR} \
		${PYNUMPY}

USES=		python:2.7
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
