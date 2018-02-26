# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/devel/py-cycler/Makefile 462887 2018-02-25 00:40:37Z yuri $

PORTNAME=	cycler
PORTVERSION=	0.10.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP/source/C/Cycler
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Composable style cycles

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
