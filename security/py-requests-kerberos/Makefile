# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD: head/security/py-requests-kerberos/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	requests-kerberos
PORTVERSION=	0.11.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Kerberos authentication handler for python-requests

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>1.1.0:www/py-requests@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}kerberos>1.1.1:security/py-kerberos@${FLAVOR}

USES=		python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
