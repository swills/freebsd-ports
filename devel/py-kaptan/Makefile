# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-kaptan/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	kaptan
PORTVERSION=	0.5.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tony@git-pull.com
COMMENT=	Python config parser for json, yaml

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=0:devel/py-yaml

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
