# Created by: Michael Gmelin <grembo@FreeBSD.org>
# $FreeBSD: head/devel/py-buildbot-waterfall-view/Makefile 474280 2018-07-09 18:50:28Z miwi $

PORTNAME=	buildbot-waterfall-view
PORTVERSION=	0.9.15
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Continuous Integration Framework (Waterfall View)

LICENSE=	GPLv2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}buildbot-pkg>=${PORTVERSION}:devel/py-buildbot-pkg@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}buildbot-pkg>=${PORTVERSION}:devel/py-buildbot-pkg@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
