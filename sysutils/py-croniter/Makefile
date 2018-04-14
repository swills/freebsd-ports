# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/sysutils/py-croniter/Makefile 467196 2018-04-12 20:17:12Z wg $

PORTNAME=	croniter
PORTVERSION=	0.3.20
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Iteration support for datetime objects with cron like format

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=1.5:devel/py-dateutil@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
