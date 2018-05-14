# Created by: Vladimir Chukharev
# $FreeBSD: head/graphics/py-traitsui/Makefile 469459 2018-05-09 17:57:12Z antoine $

PORTNAME=	traitsui
PORTVERSION=	6.0.0
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Enthought traits-capable user interfaces

LICENSE=	BSD3CLAUSE LGPL21 EPL
LICENSE_COMB=	multi
LICENSE_FILE_BSD3CLAUSE=	${WRKSRC}/LICENSE.txt
LICENSE_FILE_LGPL21=	${WRKSRC}/image_LICENSE_Nuvola.txt
LICENSE_FILE_EPL=	${WRKSRC}/image_LICENSE_Eclipse.txt
# See ${WRKSRC}/image_LICENSE.txt for per file license information

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}apptools>=4.3.0:devel/py-apptools@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
