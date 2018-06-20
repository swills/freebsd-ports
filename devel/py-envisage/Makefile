# Created by: Vladimir Chukharev
# $FreeBSD: head/devel/py-envisage/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	envisage
PORTVERSION=	4.6.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Enthought extensible application framework

LICENSE=	BSD3CLAUSE PSFL LGPL20
LICENSE_COMB=	multi
# See image_LICENSE.txt files for per file license information

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}traits>=4.5.0:devel/py-traits@${PY_FLAVOR}

USES=		python:-2.7
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
