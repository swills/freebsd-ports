# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-kaptan/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	kaptan
PORTVERSION=	0.5.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	tony@git-pull.com
COMMENT=	Python config parser for json, yaml

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=0:devel/py-yaml@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
