# $FreeBSD: head/textproc/py-rnc2rng/Makefile 469837 2018-05-13 23:09:45Z yuri $

PORTNAME=	rnc2rng
DISTVERSION=	2.6
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	RELAX NG Compact to regular syntax conversion library

LICENSE=	PD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}rply>0:devel/py-rply@${FLAVOR}

USES=		python
USE_PYTHON=	distutils concurrent autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
