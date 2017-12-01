# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/sysutils/py-croniter/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	croniter
PORTVERSION=	0.3.5
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Iteration support for datetime objects with cron like format

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=1.5:devel/py-dateutil@${FLAVOR}

USES=		python zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
