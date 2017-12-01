# $FreeBSD: head/math/py-luminol/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	luminol
PORTVERSION=	0.3.1
DISTVERSIONPREFIX=	v
CATEGORIES=	math python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	Light weight python library for time series data analysis

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${FLAVOR} \
	${PYTHON_PKGNAMEPREFIX}numpy>=1.6.2,1:math/py-numpy@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
USE_GITHUB=	yes
GH_ACCOUNT=	linkedin

.include <bsd.port.mk>
