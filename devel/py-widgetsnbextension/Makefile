# $FreeBSD: head/devel/py-widgetsnbextension/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	widgetsnbextension
PORTVERSION=	3.4.2
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	IPython HTML widgets for Jupyter

BUILD_DEPENDS=	npm>=0:www/npm
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}notebook>=0:www/py-notebook@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
