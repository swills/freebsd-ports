# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/databases/py-rb/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	rb
PORTVERSION=	1.6
CATEGORIES=	databases python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Rb - the redis blaster

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}redis>=2.6:databases/py-redis@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
USE_GITHUB=	yes
GH_ACCOUNT=	getsentry
GH_PROJECT=	rb

.include <bsd.port.mk>
