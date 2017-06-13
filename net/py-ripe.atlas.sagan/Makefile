# Created by: Massimiliano Stucchi <mstucchi@ripe.net>
# $FreeBSD: head/net/py-ripe.atlas.sagan/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	ripe.atlas.sagan
PORTVERSION=	1.1.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mstucchi@ripe.net
COMMENT=	Parsing library for RIPE Atlas measurement results

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil \
		${PYTHON_PKGNAMEPREFIX}pytz>=0:devel/py-pytz \
		${PYTHON_PKGNAMEPREFIX}ipy>=0:net-mgmt/py-ipy

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
