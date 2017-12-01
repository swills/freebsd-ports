# Created by: Shaun Amott <shaun@FreeBSD.org>
# $FreeBSD: head/www/py-h2/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	h2
PORTVERSION=	3.0.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	shaun@FreeBSD.org
COMMENT=	HTTP/2 State-Machine based protocol implementation

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hyperframe>=5.0.0:www/py-hyperframe@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hpack>=2.3:www/py-hpack@${FLAVOR}

USES?=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
