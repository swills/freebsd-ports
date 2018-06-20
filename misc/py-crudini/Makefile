# Created by: Alexander Nusov <alexander.nusov@nfvexpress.com>
# $FreeBSD: head/misc/py-crudini/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	crudini
PORTVERSION=	0.9
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	alexander.nusov@nfvexpress.com
COMMENT=	Utility for manipulating ini files

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}iniparse>=0.3.2:devel/py-iniparse@${PY_FLAVOR}

NO_ARCH=	yes

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
