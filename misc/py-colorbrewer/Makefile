# $FreeBSD: head/misc/py-colorbrewer/Makefile 473580 2018-06-29 21:28:57Z yuri $

PORTNAME=	colorbrewer
DISTVERSION=	0.2.0
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Constants from Cynthia Brewer's ColorBrewer

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
