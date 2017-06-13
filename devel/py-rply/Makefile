# Created by: David Kalliecharan <dave@dal.ca>
# $FreeBSD: head/devel/py-rply/Makefile 433761 2017-02-09 18:10:09Z amdmi3 $

PORTNAME=	rply
PORTVERSION=	0.7.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dave@dal.ca
COMMENT=	Pure python parser generator, that also works with RPython

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}appdirs>0:devel/py-appdirs

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
