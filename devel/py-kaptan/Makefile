# Created by: Tony Narlock <tony@git-pull.com>
# $FreeBSD: head/devel/py-kaptan/Makefile 463524 2018-03-03 19:16:01Z sunpoet $

PORTNAME=	kaptan
PORTVERSION=	0.5.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python config parser for json, yaml

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>=3.12:devel/py-yaml@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
