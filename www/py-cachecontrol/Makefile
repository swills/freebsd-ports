# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/www/py-cachecontrol/Makefile 460148 2018-01-27 20:06:03Z yuri $

PORTNAME=	CacheControl
DISTVERSION=	0.12.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Caching algorithms in httplib2 for use with requests session object

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lockfile>=0.9:devel/py-lockfile@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msgpack-python>0:devel/py-msgpack-python@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}redis>=2.10.5:databases/py-redis@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
