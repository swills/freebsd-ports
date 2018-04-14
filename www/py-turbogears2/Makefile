# Created by: Wen Heping	<wenheping@gmail.com>
# $FreeBSD: head/www/py-turbogears2/Makefile 467297 2018-04-14 08:27:53Z wen $

PORTNAME=	TurboGears2
PORTVERSION=	2.3.12
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Python-Based Framework for Rapid Web Development

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}crank>=0:devel/py-crank@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}webob>=1.2:www/py-webob@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}MarkupSafe>=0:textproc/py-MarkupSafe@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}repoze.lru>=0:devel/py-repoze.lru@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
