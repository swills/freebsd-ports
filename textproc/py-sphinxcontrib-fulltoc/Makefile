# $FreeBSD: head/textproc/py-sphinxcontrib-fulltoc/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	sphinxcontrib-fulltoc
PORTVERSION=	1.2.0
CATEGORIES=	textproc
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Sphinx Fulltoc Extension

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PKGNAMEPREFIX}pbr>=1.8.1:devel/py-pbr@${FLAVOR}
RUN_DEPENDS=	${PKGNAMEPREFIX}sphinx>=1.1.3:textproc/py-sphinx@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
