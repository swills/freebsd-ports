# Created by: Alessando Sagratini <ale_sagra@hotmail.com>
# $FreeBSD$

PORTNAME=	facebook_business
PORTVERSION=	4.0.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ale_sagra@hotmail.com
COMMENT=	Python Facebook Business SDK

LICENSE=	FACEBOOK
LICENSE_NAME=	Facebook License
LICENSE_FILE=	${WRKSRC}/LICENSE.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.3.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.7.3:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}curlify>=2.1.0:devel/py-curlify@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
