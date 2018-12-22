# $FreeBSD: head/science/py-SimpleSpectral/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	SimpleSpectral
DISTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Simplified scipy.signal.spectral module with only pyFFTW support

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYNUMPY}

USES=		python:3.4+
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
