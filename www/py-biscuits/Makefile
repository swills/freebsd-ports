# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/py-biscuits/Makefile 484338 2018-11-06 21:10:32Z sunpoet $

PORTNAME=	biscuits
PORTVERSION=	0.2.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast and tasty cookies handling

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3400
BUILD_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}pathlib>=0:devel/py-pathlib@${PY_FLAVOR}
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/biscuits.so

.include <bsd.port.post.mk>
