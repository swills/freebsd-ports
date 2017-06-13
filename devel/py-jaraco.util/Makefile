# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-jaraco.util/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	jaraco.util
PORTVERSION=	11.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	General utility modules that supply commonly-used functionality

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six \
		${PYTHON_PKGNAMEPREFIX}more-itertools>0:devel/py-more-itertools \
		${PYTHON_PKGNAMEPREFIX}jaraco.timing>0:devel/py-jaraco.timing
BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hgtools>0:devel/py-hgtools

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
