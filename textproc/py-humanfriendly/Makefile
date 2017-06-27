# $FreeBSD: head/textproc/py-humanfriendly/Makefile 444389 2017-06-26 19:36:09Z sunpoet $

PORTNAME=	humanfriendly
PORTVERSION=	3.4
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Human friendly output for text interfaces using Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

NO_ARCH=	yes
USES?=		python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3300
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}monotonic>0:devel/py-monotonic
.endif

.include <bsd.port.post.mk>
