# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/databases/py-whisper/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	whisper
PORTVERSION=	1.1.3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Fixed-size database, similar in design to RRD

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
