# Created by: Khairil Yusof <kaeru@inigo-tech.com>
# $FreeBSD: head/devel/py-pytz/Makefile 465486 2018-03-24 21:12:28Z sunpoet $

PORTNAME=	pytz
PORTVERSION=	2018.3
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	World Timezone Definitions for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|=True|=False|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
