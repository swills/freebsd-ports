# Created by: Michael Gmelin <grembo@FreeBSD.org>
# $FreeBSD: head/devel/py-buildbot-console-view/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	buildbot-console-view
PORTVERSION=	0.9.11
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Continuous Integration Framework (Console View)

LICENSE=	GPLv2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}buildbot-pkg>=${PORTVERSION}:devel/py-buildbot-pkg@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}buildbot-pkg>=${PORTVERSION}:devel/py-buildbot-pkg@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
