# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/py-git_semver/Makefile 465534 2018-03-25 18:04:32Z sunpoet $

PORTNAME=	git_semver
PORTVERSION=	0.2.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Semantic versions management integrated to git

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}GitPython>=2.1.7:devel/py-gitpython@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}semantic_version>=2.6.0:devel/py-semantic_version@${FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
