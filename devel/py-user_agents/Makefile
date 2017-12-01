# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/devel/py-user_agents/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	user_agents
PORTVERSION=	1.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:S/_/-/}-${PORTVERSION}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Python library to identify devices using User-Agent string

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/ua_parser/__init__.py:devel/py-ua_parser@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
