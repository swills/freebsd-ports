# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/sysutils/py-croniter/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	croniter
PORTVERSION=	0.3.20
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Iteration support for datetime objects with cron like format

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=1.5:devel/py-dateutil@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
