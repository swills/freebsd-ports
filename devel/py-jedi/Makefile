# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/devel/py-jedi/Makefile 477692 2018-08-21 00:13:58Z skreuzer $

PORTNAME=	jedi
PORTVERSION=	0.12.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Autocompletion tool for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}parso>=0.3.0:textproc/py-parso@${PY_FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
