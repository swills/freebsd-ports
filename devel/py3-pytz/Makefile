# Created by: Muhammad Moinur Rahman <bofh@FreeBSD.org>
# $FreeBSD: head/devel/py3-pytz/Makefile 435073 2017-02-28 17:58:52Z bofh $

PORTNAME=	pytz
PORTVERSION=	2016.10
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	World Timezone Definitions for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python:3.3+ tar:bzip2
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|=True|=False|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
