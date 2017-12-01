# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/math/py-apgl/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	apgl
PORTVERSION=	0.8.1
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Fast python graph library with some machine learning features

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0.7.0:science/py-scipy@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
