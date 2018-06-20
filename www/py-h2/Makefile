# Created by: Shaun Amott <shaun@FreeBSD.org>
# $FreeBSD: head/www/py-h2/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	h2
PORTVERSION=	3.0.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	shaun@FreeBSD.org
COMMENT=	HTTP/2 State-Machine based protocol implementation

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hyperframe>=5.0.0:www/py-hyperframe@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hpack>=2.3:www/py-hpack@${PY_FLAVOR}

USES?=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
