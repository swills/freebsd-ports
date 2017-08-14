# Created by: Khairil Yusof <kaeru@inigo-tech.com>
# $FreeBSD: head/devel/py-pytz/Makefile 447934 2017-08-14 12:56:18Z lwhsu $

PORTNAME=	pytz
PORTVERSION=	2017.2
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	World Timezone Definitions for Python

LICENSE=	MIT

USES?=		python zip
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|=True|=False|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
