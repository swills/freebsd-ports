# Created by: Vladimir Chukharev
# $FreeBSD: head/devel/py-robotframework-pabot/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	robotframework-pabot
PORTVERSION=	0.43
CATEGORIES=	devel www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	Vladimir.Chukharev@gmail.com
COMMENT=	Parallel executor for Robot Framework test cases

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}robotframework>=2.7.5:devel/py-robotframework@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}robotremoteserver>=1.0.1:devel/py-robotremoteserver@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
