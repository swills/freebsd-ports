# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/science/py-cdo/Makefile 466482 2018-04-04 18:53:03Z sunpoet $

PORTNAME=	cdo
PORTVERSION=	1.3.6
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python binding to CDO (Climate Data Operators)

LICENSE=	GPLv2

RUN_DEPENDS=	cdo:science/cdo \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six@${FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
