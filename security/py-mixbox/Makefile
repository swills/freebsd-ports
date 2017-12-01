# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/security/py-mixbox/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	mixbox
PORTVERSION=	1.0.2
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Utility library for cybox, maec, and stix

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dateutil>=0:devel/py-dateutil@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ordered-set>=0:devel/py-ordered-set@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3400
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}weakrefmethod>=1.0.3:devel/py-weakrefmethod@${FLAVOR}
.endif

.include <bsd.port.post.mk>
