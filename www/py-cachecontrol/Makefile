# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/www/py-cachecontrol/Makefile 472742 2018-06-19 01:48:22Z yuri $

PORTNAME=	CacheControl
DISTVERSION=	0.12.5
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Caching algorithms in httplib2 for use with requests session object

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lockfile>=0.9:devel/py-lockfile@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}msgpack>0:devel/py-msgpack@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}redis>=2.10.5:databases/py-redis@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils
NO_ARCH=	yes
REINPLACE_ARGS=	-i ''

post-patch:
	@${REINPLACE_CMD} -e 's|msgpack-python|msgpack|' ${WRKSRC}/setup.py ${WRKSRC}/CacheControl.egg-info/requires.txt

.include <bsd.port.mk>
