# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/misc/py-spdx-lookup/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	spdx-lookup
PORTVERSION=	0.3.2
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	SPDX license list query tool

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}spdx>0:misc/py-spdx@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
