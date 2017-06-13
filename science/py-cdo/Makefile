# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/science/py-cdo/Makefile 434778 2017-02-25 09:55:24Z sunpoet $

PORTNAME=	cdo
PORTVERSION=	1.3.3
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python binding to CDO (Climate Data Operators)

LICENSE=	GPLv2

RUN_DEPENDS=	cdo:science/cdo \
		${PYTHON_PKGNAMEPREFIX}six>=0:devel/py-six

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
