# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/science/py-cdo/Makefile 480198 2018-09-20 19:27:39Z sunpoet $

PORTNAME=	cdo
PORTVERSION=	1.4.0
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python binding to CDO (Climate Data Operators)

LICENSE=	GPLv2

RUN_DEPENDS=	cdo:science/cdo \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
