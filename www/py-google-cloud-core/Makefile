# $FreeBSD: head/www/py-google-cloud-core/Makefile 478642 2018-09-01 00:22:39Z dbaio $

PORTNAME=	google-cloud-core
PORTVERSION=	0.28.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	API Client library for Google Cloud: Core Helpers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}google-api-core>=0.1.1:www/py-google-api-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}grpcio>=1.8.2:devel/py-grpcio@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
