# Created by: Brendan Molloy <brendan+freebsd@bbqsrc.net>
# $FreeBSD: head/misc/py-spdx-lookup/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	spdx-lookup
PORTVERSION=	0.3.2
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	brendan+freebsd@bbqsrc.net
COMMENT=	SPDX license list query tool

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}spdx>0:misc/py-spdx@${FLAVOR}

USES=		python:3.3+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
