# $FreeBSD: head/math/py-PyMetis/Makefile 470811 2018-05-24 21:30:51Z yuri $

PORTNAME=	PyMetis
DISTVERSION=	2016.2
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python wrapper for the Metis graph partititioning software

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		localbase python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
