# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-kaptan/Makefile 463030 2018-02-26 17:00:21Z yuri $

PORTNAME=	kaptan
PORTVERSION=	0.5.8
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python config parser for json, yaml

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=0:devel/py-yaml@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
