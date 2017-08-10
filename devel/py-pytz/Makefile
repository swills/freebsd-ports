# Created by: Khairil Yusof <kaeru@inigo-tech.com>
# $FreeBSD: head/devel/py-pytz/Makefile 447187 2017-08-03 00:52:03Z lwhsu $

PORTNAME=	pytz
PORTVERSION=	2017.2
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	World Timezone Definitions for Python

LICENSE=	MIT

USES=		python zip
USE_PYTHON=	autoplist distutils

post-patch:
	@${REINPLACE_CMD} -e 's|=True|=False|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
